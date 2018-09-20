package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.*;

import java.util.Collections;
import java.util.List;
import java.util.Set;
import java.util.SortedMap;
import java.util.stream.Collectors;

import static com.oes.openfmb.generation.document.Document.*;

public class TypedModelVisitorFiles implements CppFileCollection {

    private final Set<Descriptors.Descriptor> descriptors;

    private TypedModelVisitorFiles(Set<Descriptors.Descriptor> descriptors) {
        this.descriptors = descriptors;
    }

    public static CppFileCollection from(Set<Descriptors.Descriptor> descriptors) {
        return new TypedModelVisitorFiles(descriptors);
    }


    @Override
    public List<CppFile> headers() {
        final FileName header = new FileName("TypedModelVisitors");
        return header.createHeaderList(
                () -> join(
                        FileHeader.lines,
                        guards(
                                header.baseName,
                                join(Helpers.getIncludeFiles(this.descriptors).stream().map(Document::include)),
                                space,
                                include("../ITypedModelVisitor.h"),
                                Document.space,
                                namespace(
                                        "adapter",
                                        spaced(
                                                this.descriptors.stream().map(d -> line(getVisitSignature(d) + ";"))
                                        )
                                )
                        )

                )
        );
    }

    @Override
    public List<CppFile> implementations() {
        return this.descriptors.stream().map(descriptor -> {

            final SortedMap<String, Descriptors.Descriptor> children = Helpers.getFilteredChildMessageDescriptors(Collections.singletonList(descriptor));

            final FileName name = new FileName(descriptor.getName() + "TypedModelVisitor");

            return new CppFile(
                    name.getImplementationName(),
                    () -> join(
                            FileHeader.lines,
                            include("adapter-api/config/generated/TypedModelVisitors.h"),
                            include("../AccessorImpl.h"),
                            space,
                            namespace(
                                    "adapter",
                                    line("template <class V>"),
                                    line("using set_t = setter_t<%s, V>;", Helpers.cppMessageName(descriptor)),
                                    space,
                                    line("template <class V>"),
                                    line("using get_t = getter_t<%s, V>;", Helpers.cppMessageName(descriptor)),
                                    space,
                                    spaced(
                                            line("// ---- forward declare all the child visit method names ----"),
                                            spaced(children.values().stream().map(child -> getChildVisitSignature(descriptor, child, true))),
                                            line("// ---- the exposed visit function ----"),
                                            getVisitImpl(descriptor),
                                            line("// ---- template definitions for child types ----"),
                                            spaced(children.values().stream().map(child -> getChildVisitImpl(descriptor, child)))
                                    )
                            )


                    )
            );
        }).collect(Collectors.toList());
    }

    private static String cppMessageName(Descriptors.GenericDescriptor descriptor) {
        return descriptor.getFullName().replace(".", "::");
    }

    private static String getVisitSignature(Descriptors.Descriptor descriptor) {
        return String.format("void visit(ITypedModelVisitor<%s>& visitor)", cppMessageName(descriptor));
    }

    private static Document getVisitImpl(Descriptors.Descriptor descriptor) {
        return line(getVisitSignature(descriptor))
                .bracket(
                        line("// this is so that we can reuse the same generators for child visitors")
                                .then(
                                        String.format("const auto setter = [](%s& profile) { return &profile; };", Helpers.cppMessageName(descriptor))
                                )
                                .then(
                                        String.format("const auto getter = [](const %s& profile) { return &profile; };", Helpers.cppMessageName(descriptor))
                                )
                                .space()
                                .then(spaced(descriptor.getFields().stream().map(field -> getFieldHandler(descriptor, field))))
                );
    }

    private static String getVisitFunctionName(Descriptors.GenericDescriptor descriptor) {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    private static Document getChildVisitSignature(Descriptors.Descriptor parent, Descriptors.Descriptor child, boolean isDeclaration) {
        return line(
                "void %s(const set_t<%s>& setter, const get_t<%s>& getter, ITypedModelVisitor<%s>& visitor)%s",
                getVisitFunctionName(child),
                Helpers.cppMessageName(child),
                Helpers.cppMessageName(child),
                Helpers.cppMessageName(parent),
                isDeclaration ? ";" : ""
        );
    }

    private static Document getChildVisitImpl(Descriptors.Descriptor parent, Descriptors.Descriptor child) {
        return getChildVisitSignature(parent, child, false).bracket(spaced(child.getFields().stream().map(field -> getFieldHandler(parent, field))));
    }

    private static Document getFieldHandler(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field) {
        switch (field.getType()) {
            case MESSAGE:
                if(Helpers.terminalMessages.contains(field.getMessageType()))
                {
                    if(field.isRepeated()) {
                        throw new RuntimeException("Terminal repeated fields not supported: " + field.getMessageType().getName());
                    }

                    return getTerminalMessageHandler(parent, field);
                }
                else
                {
                    if(field.isRepeated())
                    {
                        // lookup the type of the repeated field
                        final RepeatedType type  = RepeatedType.getType(field.getMessageType());
                        switch (type)
                        {
                            case READING:
                            case SCHEDULE:
                                return getRepeatedMessageField(parent, field);
                            case FUNCTION_PARAMETER:
                                return getRepeatedFunctionParameterField(parent, field);
                            case SCHEDULE_PARAMETER:
                                return getRepeatedScheduleParameterField(parent, field);                                 
                            default:
                                throw new RuntimeException("Unsupported repeated field type: " + type.toString());
                        }
                    }
                    else
                    {
                        return getMessageField(parent, field);
                    }
                }
            case ENUM:
                return getEnumHandler(parent, field);
            default:
                return getPrimitiveHandler(parent, field);
        }
    }

    private static Document getMessageField(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field) {
        final Document setter = line("[setter](%s& profile)", Helpers.cppMessageName(parent)).bracketWithSuffix(
                line("return setter(profile)->mutable_%s();", field.getName().toLowerCase()), ","
        );


        final Document getter = line("[getter](const %s& profile) -> %s const *", Helpers.cppMessageName(parent), Helpers.cppMessageName(field.getMessageType())).bracketWithSuffix(
                line("const auto value = getter(profile);")
                        .then("if(value)").bracket(
                        line("return value->has_%s() ? &value->%s() : nullptr;", field.getName().toLowerCase(), field.getName().toLowerCase())
                )
                        .then("else").bracket(
                        line("return nullptr;")
                ),
                ","
        );

        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getMessageType()))
                .bracket(
                        line("%s(", getVisitFunctionName(field.getMessageType()))
                                .indent(setter)
                                .indent(getter)
                                .indent("visitor")
                                .then(");")
                                .then("visitor.end_message_field();")
                );
    }

    private static Document getRepeatedFunctionParameterField(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field)
    {
        return line("// repeated function parameter")
                .then("visitor.handle(")
                .indent(
                     line(Helpers.quoted(field.getName())+",")
                     .then(String.format("[getter](const %s& profile) -> const google::protobuf::RepeatedPtrField<%s>*", cppMessageName(parent), cppMessageName(field.getMessageType()))).bracket(
                             line("const auto value = getter(profile);")
                             .then("if(value)").bracket(
                                     line("return &value->functionparameter();")
                             )
                             .then("else").bracket(
                                     line("return nullptr;")
                             )
                     )

                ).then(");");


    }

    private static Document getRepeatedScheduleParameterField(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field)
    {
        return line("// repeated schedule parameter")
                .then("// TODO");

    }

    private static Document getRepeatedMessageField(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field) {
        final String fieldName = field.getName().toLowerCase();

        final Document setter = line("const auto set = [setter, i, max = count](%s& profile)", Helpers.cppMessageName(parent))
                .bracketSemicolon(
                        line("const auto repeated = setter(profile)->mutable_%s();", field.getName().toLowerCase())
                                .then("if(repeated->size() < max)")
                                .bracket(
                                        line("repeated->Reserve(max);")
                                                .then("// add items until we're at max requested capacity")
                                                .then("for(auto j = repeated->size(); j < max; ++j)")
                                                .bracket(
                                                        line("repeated->Add();")
                                                )
                                )
                                .then("return repeated->Mutable(i);")
                );

        final Document getter = line("const auto get = [getter, i](const %s& profile) -> %s const*", Helpers.cppMessageName(parent), Helpers.cppMessageName(field.getMessageType()))
                .bracketSemicolon(
                        line("const auto value = getter(profile);")
                                .then("if(value)")
                                .bracket(
                                        line("return (i < value->%s_size()) ? &value->%s(i) : nullptr;", field.getName().toLowerCase(), field.getName().toLowerCase())
                                )
                                .then("else").bracket(line("return nullptr;"))
                );

        final Document loop = line("for(int i = 0; i < count; ++i)").bracket(
                line("visitor.start_iteration(i);")
                        .then(setter)
                        .then(getter)
                        .then(String.format("%s(set, get, visitor);", getVisitFunctionName(field.getMessageType())))
                        .then("visitor.end_iteration();")
        );


        return Document.empty.bracket(
                line("const auto count = visitor.start_repeated_message_field(%s, %s::descriptor());", Helpers.quoted(fieldName), Helpers.cppMessageName(field.getMessageType())),
                loop,
                line("visitor.end_repeated_message_field();")
        );
    }


    private static Document getEnumHandler(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field) {
        final String setter = String.format(
                "[setter](%s& profile, const int& value) { setter(profile)->set_%s(static_cast<%s>(value)); }",
                Helpers.cppMessageName(parent),
                field.getName().toLowerCase(),
                Helpers.cppMessageName(field.getEnumType())
        );

        final Document getter = line(
                "[getter](const %s& profile, const handler_t<int>& handler)",
                Helpers.cppMessageName(parent)
        ).bracket(
            line("const auto parent = getter(profile);")
                    .then("if(!parent) return false;")
                    .then(line("handler(parent->%s());", field.getName().toLowerCase()))
                    .then("return true;")
        );

        final Document accessor = line("AccessorBuilder<%s,int>::build(", Helpers.cppMessageName(parent))
                .indent(setter + ",")
                .indent(getter)
                .then("),");

        return line("visitor.handle(")
                .indent(line("%s,", Helpers.quoted(field.getName())))
                .indent(accessor)
                .indent(line("%s_descriptor()", Helpers.cppMessageName(field.getEnumType())))
                .then(");");
    }

    private static Document getPrimitiveHandler(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field) {
        final String setter = String.format(
                "[setter](%s& profile, const %s& value) { setter(profile)->set_%s(value); }",
                Helpers.cppMessageName(parent),
                Helpers.cppType(field),
                field.getName().toLowerCase()
        );

        final Document getter = line(
                "[getter](const %s& profile, const handler_t<%s>& handler)",
                Helpers.cppMessageName(parent),
                Helpers.cppType(field)
        ).bracket(
                line("const auto parent = getter(profile);")
                .then("if(!parent) return false;")
                .then(line("handler(parent->%s());", field.getName().toLowerCase()))
                .then("return true;")
        );

        final Document accessor = line("AccessorBuilder<%s,%s>::build(", Helpers.cppMessageName(parent), Helpers.cppType(field))
                .indent(setter + ",")
                .indent(getter)
                .then(")");

        return line("visitor.handle(")
                .indent(line("%s,", Helpers.quoted(field.getName())))
                .indent(accessor)
                .then(");");
    }

    private static Document getTerminalMessageHandler(Descriptors.Descriptor parent, Descriptors.FieldDescriptor field) {
        final Descriptors.Descriptor child = field.getMessageType();

        final String setter = String.format(
                "[setter](%s& profile) { return setter(profile)->mutable_%s(); }",
                Helpers.cppMessageName(parent),
                field.getName().toLowerCase()
        );

        final Document getter = line(
                "[getter](const %s& profile, const handler_t<%s>& handler)",
                Helpers.cppMessageName(parent),
                Helpers.cppMessageName(child)
        ).bracket(
                line("const auto parent = getter(profile);")
                .then(line("if(!parent || !parent->has_%s()) return false;", field.getName().toLowerCase()))
                .then(line("handler(parent->%s());", field.getName().toLowerCase()))
                .then("return true;")
        );

        final Document accessor = line("MessageAccessorBuilder<%s,%s>::build(", Helpers.cppMessageName(parent), Helpers.cppMessageName(child))
                .indent(setter + ",")
                .indent(getter)
                .then(")");

        return line("visitor.handle(")
                .indent(line("%s,", Helpers.quoted(field.getName())))
                .indent(accessor)
                .then(");");
    }
}
