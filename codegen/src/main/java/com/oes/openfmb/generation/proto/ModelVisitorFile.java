package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.FieldPathImpl;
import openfmb.commonmodule.*;
import openfmb.switchmodule.SwitchCSG;
import openfmb.switchmodule.SwitchControl;

import java.util.Arrays;
import java.util.HashSet;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.Set;

import static com.oes.openfmb.generation.document.Documents.*;

public class ModelVisitorFile extends CppFilePair {

    private final static Set<Descriptors.Descriptor> terminalMessages = new HashSet<>(
            Arrays.asList(
                // measurement values that appear in reading/status profiles
                CMV.getDescriptor(),
                MV.getDescriptor(),
                BCR.getDescriptor(),
                StatusDPS.getDescriptor(),

                // generic meta-data stuff that appears in all profiles
                MessageInfo.getDescriptor(),
                IdentifiedObject.getDescriptor(),
                ConductingEquipment.getDescriptor(),

                // stuff that appears in control profiles
                ControlValue.getDescriptor(),
                CheckConditions.getDescriptor(),
                SwitchCSG.getDescriptor(),

                // various static attributes not currently being handled
                ConductingEquipmentTerminalReading.getDescriptor(),
                ENG_CalcMethodKind.getDescriptor(),
                ENG_PFSignKind.getDescriptor(),
                ENS_BehaviourModeKind.getDescriptor(),
                ENS_DynamicTestKind.getDescriptor(),
                ENS_HealthKind.getDescriptor()
            )
    );

    private final Iterable<Descriptors.Descriptor> descriptors;
    private final Iterable<String> includes;

    public ModelVisitorFile(Iterable<Descriptors.Descriptor> descriptors, Iterable<String> includes) {
        this.descriptors = descriptors;
        this.includes = includes;
    }

    @Override
    protected String baseFileName() {
        return "ModelVisitors";
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
                                getDescriptorStream().map(d -> line(getVisitSignature(d)+";"))
                        )
                )
        );
    }

    @Override
    public Document implementation() {

        return join(
                include("adapter-api/config/generated/" + headerFileName()),
                include("../AccessorImpl.h"),
                space,
                namespace(
                "adapter",
                        spaced(
                                getDescriptorStream().map(this::visitImpl)
                        )
                )
        );
    }

    private Stream<Descriptors.Descriptor> getDescriptorStream()
    {
        return StreamSupport.stream(descriptors.spliterator(), false);
    }

    static private String cppMessageName(Descriptors.Descriptor descriptor)
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
                    return startRepeatedMessageField(path, path.getInfo().field.getMessageType());
                }
                else
                {
                    return build(path, path.getInfo().field.getMessageType());
                }
            case STRING:
                if(path.getInfo().field.getName().equals("description"))
                {
                    return Documents.empty;
                }
                else
                {
                    throw new RuntimeException("Unknown string field: " + path);
                }

            default:
                throw new RuntimeException("Unknown leaf node: " + path);
        }
    }

    private Document build(FieldPath path, Descriptors.Descriptor message)
    {
        if(terminalMessages.contains(message))
        {
            return handler(path, message.getName());
        }
        else
        {
            return startMessageField(path, message);
        }
    }

    private static Document handler(FieldPath path, String type)
    {
        return line("visitor.handle(")
                .indent(
                    line(quoted(path.getInfo().field.getName()) + ",")
                    .append(accessor(path))
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
                                String.format("const auto size = temp->%s_size();", path.getInfo().field.getMessageType().getName().toLowerCase()),
                                String.format("return i < size ? &temp->%s(i) : nullptr;", path.getInfo().field.getMessageType().getName().toLowerCase())
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

    private static Document accessor(FieldPath path)
    {
        return line(
                    String.format(
                            "AccessorBuilder<%s, %s>::build(",
                            cppMessageName(path.getInfo().field.getMessageType()),
                            cppMessageName(path.getRoot())
                    )
                )
                .indent(getMutableContextLambda(path) + ",")
                .indent(getConstContextLambda(path))
                .append(")");
    }
}
