package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.google.protobuf.FloatValue;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.FieldPathImpl;
import openfmb.commonmodule.*;
import openfmb.essmodule.ENG_ESSFunctionKind;
import openfmb.essmodule.ENG_ESSFunctionParameter;
import openfmb.essmodule.ESSPoint;
import openfmb.loadmodule.LoadPoint;
import openfmb.solarmodule.SolarPoint;
import openfmb.switchmodule.SwitchCSG;

import java.util.*;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Documents.*;

public class OldModelVisitorFile extends CppFilePair {

    private final static Set<Descriptors.GenericDescriptor> handledTypes = new HashSet<>(
            Arrays.asList(
                // measurement values that appear in reading/status profiles
                CMV.getDescriptor(),
                MV.getDescriptor(),
                BCR.getDescriptor(),
                StatusDPS.getDescriptor(),
                StatusSPS.getDescriptor(),
                ControlDPC.getDescriptor(),
                FloatValue.getDescriptor(),
                StateKind.getDescriptor(),
                DynamicTestKind.getDescriptor(),
                GridConnectModeKind.getDescriptor(),

                // generic meta-data stuff that appears in all profiles
                MessageInfo.getDescriptor(),
                IdentifiedObject.getDescriptor(),
                ConductingEquipment.getDescriptor(),

                // stuff that appears in control profiles
                CheckConditions.getDescriptor(),
                SwitchCSG.getDescriptor(),
                ScheduleCSG.getDescriptor()
            )
    );

    @FunctionalInterface
    private interface Ignore
    {
        boolean apply(Descriptors.FieldDescriptor descriptor);

        Ignore always = d -> true;
        Ignore never = d -> false;

        static Ignore whenParentIs(Descriptors.Descriptor descriptor)
        {
            return field -> {
                final Descriptors.Descriptor parent = field.getContainingType();
                return (parent != null) && parent.equals(descriptor);
            };
        }

        static Ignore or(Ignore ... items)
        {
            return field -> Stream.of(items).map(x -> x.apply(field)).reduce(false, (x,y) -> x || y);
        }
    }

    private final static Map<Descriptors.Descriptor, Ignore> ignoredTypes = getIgnoredTypes();

    private static Map<Descriptors.Descriptor, Ignore> getIgnoredTypes()
    {
        final Map<Descriptors.Descriptor, Ignore> map = new HashMap<>();

        // This contains mdBlk - ignore it for now
        map.put(ControlValue.getDescriptor(), Ignore.always);
        map.put(ConductingEquipmentTerminalReading.getDescriptor(), Ignore.always);
        map.put(ENG_CalcMethodKind.getDescriptor(), Ignore.always);
        map.put(ENG_PFSignKind.getDescriptor(), Ignore.always);
        map.put(ENS_BehaviourModeKind.getDescriptor(), Ignore.always);
        map.put(ENG_ESSFunctionParameter.getDescriptor(), Ignore.always);

        map.put(ENS_HealthKind.getDescriptor(), Ignore.always);
        map.put(Quality.getDescriptor(), Ignore.always);

        map.put(ENG_ESSFunctionKind.getDescriptor(), Ignore.always);
        map.put(ENG_ESSFunctionParameter.getDescriptor(), Ignore.always);

        // conditional ignores
        map.put(Timestamp.getDescriptor(),
                Ignore.or(
                    Ignore.whenParentIs(ENS_DynamicTestKind.getDescriptor())
                )
        );

        map.put(ControlTimestamp.getDescriptor(),
                Ignore.or(
                        Ignore.whenParentIs(ESSPoint.getDescriptor()),
                        Ignore.whenParentIs(SolarPoint.getDescriptor()),
                        Ignore.whenParentIs(LoadPoint.getDescriptor())
                )
        );

        return Collections.unmodifiableMap(map);
    }

    private final Descriptors.Descriptor descriptor;
    private final Iterable<String> includes;

    private OldModelVisitorFile(Descriptors.Descriptor descriptor, Iterable<String> includes) {
        this.descriptor = descriptor;
        this.includes = includes;
    }

    public static CppFilePair from(Descriptors.Descriptor descriptor, String includes)
    {
        return new OldModelVisitorFile(descriptor, Collections.singletonList(includes));
    }

    @Override
    protected String baseFileName() {
        return descriptor.getName()+"ModelVisitor";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                join(StreamSupport.stream(includes.spliterator(), false).map(Documents::include)),
                include("../IModelVisitor.h"),
                Documents.space,
                namespace(
                        "adapter",
                        spaced(
                                line(getVisitSignature(descriptor)+";")
                        )
                )
        );
    }

    @Override
    public Document implementation() {

        return join(
                include("adapter-api/config/generated/" + headerFileName()),
                include("adapter-api/util/Exception.h"),
                include("../AccessorImpl.h"),
                space,
                namespace(
                "adapter",
                        spaced(
                                visitImpl(this.descriptor)
                        )
                )
        );
    }

    static private String cppMessageName(Descriptors.GenericDescriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature(Descriptors.Descriptor descriptor)
    {
        return String.format("void visit(IModelVisitor<%s>& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        return line(getVisitSignature(descriptor))
                .append("{")
                .indent(
                        lines(
                                String.format("const auto mutable_context0 = [](%s& profile) { return &profile; };", cppMessageName(descriptor)),
                                String.format("const auto const_context0 = [](const %s& profile) { return &profile; };", cppMessageName(descriptor))
                        )
                )
                .indent(start(descriptor)) // recursively build up the implementation
                .append("}");

    }

    private Document start(Descriptors.Descriptor descriptor)
    {
        return join(descriptor.getFields().stream().map(f -> this.build(FieldPathImpl.create(descriptor, f))));
    }

    private Document startMessageField(FieldPath path, Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(f -> this.build(path.build(f))));

        return inner.isEmpty() ? inner :
            line(String.format("visitor.start_message_field(\"%s\");", path.getInfo().field.getName()))
            .append("{")
            .indent(
                    getMutableContextDefinition(path)
                    .append(getConstContextDefinition(path))
                    .append(inner)
            )
            .append("}")
            .append(line("visitor.end_message_field();"));
    }

    private Document startRepeatedMessageField(FieldPath path, Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(f -> this.build(path.build(f))));

        return inner.isEmpty() ? inner :
                         line(
                                 String.format(
                                         "const auto max_count%d = visitor.start_repeated_message_field(\"%s\");",
                                         path.getInfo().depth,
                                         path.getInfo().field.getName()
                                 )
                         )
                        .append(
                                line(String.format(
                                        "for(auto count%d = 0; count%d < max_count%d; ++count%d)",
                                        path.getInfo().depth,
                                        path.getInfo().depth,
                                        path.getInfo().depth,
                                        path.getInfo().depth
                                ))
                        )
                        .append("{")
                        .indent(String.format("visitor.start_iteration(count%d);", path.getInfo().depth))
                        .indent(getRepeatedMutableContextDefinition(path))
                        .indent(getRepeatedConstContextDefinition(path))
                        .indent(inner)
                        .indent("visitor.end_iteration();")
                        .append("}")
                        .append(line("visitor.end_repeated_message_field();"));
    }

    private Document build(FieldPath path)
    {
        switch (path.getInfo().field.getType())
        {
            case MESSAGE:
                if(path.getInfo().field.isRepeated())
                {
                    if(ignoredTypes.getOrDefault(path.getInfo().field.getMessageType(), Ignore.never).apply(path.getInfo().field))
                    {
                        return Documents.empty;
                    }
                    else
                    {
                        return startRepeatedMessageField(path, path.getInfo().field.getMessageType());
                    }
                }
                else
                {
                    return build(path, path.getInfo().field.getMessageType());
                }
            case ENUM:
                return build(path, path.getInfo().field.getEnumType());
            case STRING:
                return Documents.empty;

            default:
                throw new RuntimeException("Unknown leaf node: " + path);
        }
    }

    private Document build(FieldPath path, Descriptors.EnumDescriptor descriptor)
    {
        if(handledTypes.contains(descriptor))
        {
            return getPrimitiveHandler(path, descriptor.getName());
        }

        if(ignoredTypes.getOrDefault(descriptor, Ignore.never).apply(path.getInfo().field))
        {
            return Documents.empty;
        }

        throw new RuntimeException("Unhandled enum type: " + path);
    }

    private Document build(FieldPath path, Descriptors.Descriptor descriptor)
    {
        if(handledTypes.contains(descriptor))
        {
            return getMessageHandler(path, descriptor.getName());
        }

        if(ignoredTypes.getOrDefault(descriptor, Ignore.never).apply(path.getInfo().field))
        {
            return Documents.empty;
        }


        // otherwise, continue the recursion
        return startMessageField(path, descriptor);

    }

    private static Document getMessageHandler(FieldPath path, String type)
    {
        return line("visitor.handle(")
                .indent(
                    line(quoted(path.getInfo().field.getName()) + ",")
                    .append(getMessageAccessor(path))
                )
                .append(");");
    }

    private static Document getPrimitiveHandler(FieldPath path, String type)
    {
        return line("visitor.handle(")
                .indent(
                        line(quoted(path.getInfo().field.getName()) + ",")
                                .append(getPrimitiveAccessor(path))
                )
                .append(");");
    }

    private static String quoted(String input)
    {
        return "\"" + input + "\"";
    }

    private static Document getRepeatedMutableContextDefinition(FieldPath path)
    {
        final int d = path.getInfo().depth;

        return line(
                    String.format(
                    "const auto mutable_context%d = [context = mutable_context%d, i = count%d, max = max_count%d](%s& profile) {",
                       d + 1,
                        d,
                        d,
                        d,
                        cppMessageName(path.getRoot())
                    )
                )
                .indent(
                        line(
                            String.format("const auto repeated = context(profile)->mutable_%s();", path.getInfo().field.getName().toLowerCase())
                        )
                        .append("if(repeated->size() < max) {")
                        .indent(
                                lines(
                                        "repeated->Reserve(max);",
                                        "// add items until we're at max requested capacity",
                                        "for(auto j = repeated->size(); j < max; ++j) {"
                                )
                                .indent(
                                        "repeated->Add();"
                                )
                                .append("}")

                        )
                        .append(
                                lines(
                                  "}",
                                  "return repeated->Mutable(i);"
                                )
                        )
                )
                .append("};");
    }

    private static Document getRepeatedConstContextDefinition(FieldPath path)
    {
        final int d = path.getInfo().depth;
        final String fieldName = path.getInfo().field.getName().toLowerCase();

        return line(
                String.format(
                        "const auto const_context%d = [context = const_context%d, i = count%d, max = max_count%d](const %s& profile) -> %s const *{",
                        d + 1,
                        d,
                        d,
                        d,
                        cppMessageName(path.getRoot()),
                        cppMessageName(path.getInfo().field.getMessageType())
                )
        )
                .indent(
                        lines(
                                "const auto temp = context(profile);",
                                "if(!temp) return nullptr;",
                                String.format("return i < temp->%s_size() ? &temp->%s(i) : nullptr;", fieldName, fieldName)
                        )
                )
                .append("};");
    }

    private static String getMutableContextLambda(FieldPath path)
    {
        return String.format(
                "[context = mutable_context%d](%s& profile) { return context(profile)->mutable_%s(); }",
                path.getInfo().depth,
                cppMessageName(path.getRoot()),
                path.getInfo().field.getName().toLowerCase()
        );
    }

    private static String getPrimitiveSetterLambda(FieldPath path)
    {
        return String.format(
                "[context = mutable_context%d](%s& profile, %s value) { return context(profile)->set_%s(value); }",
                path.getInfo().depth,
                cppMessageName(path.getRoot()),
                cppMessageName(path.getInfo().getGenericDescriptor()),
                path.getInfo().field.getName().toLowerCase()
        );
    }

    private static String getPrimitiveGetterLambda(FieldPath path)
    {
        return String.format(
                "[context = const_context%d](const %s& profile) { const auto temp = context(profile); return temp ? temp->%s() : throw Exception(\"Primitive value parent(s) not present: %s \"); }",
                path.getInfo().depth,
                cppMessageName(path.getRoot()),
                path.getInfo().field.getName().toLowerCase(),
                path.toString(),
                path
        );
    }

    private static String getPrimitivePresentLambda(FieldPath path)
    {
        return String.format(
                "[context = const_context%d](const %s& profile) -> bool { return context(profile) != nullptr; }",
                path.getInfo().depth,
                cppMessageName(path.getRoot())
        );
    }

    private static Document getMutableContextDefinition(FieldPath path)
    {
        return line(String.format(
                "const auto mutable_context%d = %s;",
                path.getInfo().depth + 1,
                getMutableContextLambda(path)
        ));
    }

    private static String getConstContextLambda(FieldPath path)
    {
        return String.format(
                "[context = const_context%d](const %s& profile) { const auto temp = context(profile); return (temp && temp->has_%s()) ? &temp->%s() : nullptr; }",
                path.getInfo().depth,
                cppMessageName(path.getRoot()),
                path.getInfo().field.getName().toLowerCase(),
                path.getInfo().field.getName().toLowerCase()
        );
    }

    private static Document getConstContextDefinition(FieldPath path)
    {
        return line(String.format(
                "const auto const_context%d = %s;",
                path.getInfo().depth + 1,
                getConstContextLambda(path)
        ));
    }

    private static Document getMessageAccessor(FieldPath path)
    {
        return line(
                    String.format(
                            "AccessorBuilder<%s, %s>::build(",
                            cppMessageName(path.getInfo().getGenericDescriptor()),
                            cppMessageName(path.getRoot())
                    )
                )
                .indent(getMutableContextLambda(path) + ",")
                .indent(getConstContextLambda(path))
                .append(")");
    }

    private static Document getPrimitiveAccessor(FieldPath path)
    {
        return line(
                String.format(
                        "PrimitiveAccessorBuilder<%s, %s>::build(",
                        cppMessageName(path.getInfo().getGenericDescriptor()),
                        cppMessageName(path.getRoot())
                )
        )
                .indent(getPrimitiveSetterLambda(path) + ",")
                .indent(getPrimitiveGetterLambda(path) + ",")
                .indent(getPrimitivePresentLambda(path))
                .append(")");
    }
}
