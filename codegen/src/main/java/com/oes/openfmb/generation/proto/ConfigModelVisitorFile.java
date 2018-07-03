package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.*;

import static com.oes.openfmb.generation.document.Document.*;

public class ConfigModelVisitorFile extends CppFilePair {

    private final Descriptors.Descriptor descriptor;
    private final SortedMap<String, Descriptors.Descriptor> children;

    private ConfigModelVisitorFile(Descriptors.Descriptor descriptor) {
        this.descriptor = descriptor;
        this.children = Helpers.getChildMessageDescriptors(Collections.singletonList(descriptor));
    }

    public static CppFilePair from(Descriptors.Descriptor descriptor)
    {
        return new ConfigModelVisitorFile(descriptor);
    }

    @Override
    protected String baseFileName() {
        return descriptor.getName()+"ConfigModelVisitor";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                Document.include(Helpers.getIncludeFile(this.descriptor)),
                include("../IConfigModelVisitor.h"),
                Document.space,
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
                include("../AccessorImpl.h"),
                space,
                namespace(
                "adapter",
                        line("template <class V>"),
                        line("using set_t = setter_t<%s, V>;", Helpers.cppMessageName(this.descriptor)),
                        space,
                        line("template <class V>"),
                        line("using get_t = getter_t<%s, V>;", Helpers.cppMessageName(this.descriptor)),
                        space,
                        spaced(
                                line("// ---- forward declare all the child visit method names ----"),
                                spaced(this.children.values().stream().map(d -> getChildVisitSignature(d, true))),
                                line("// ---- the exposed visit function ----"),
                                getVisitImpl(this.descriptor),
                                line("// ---- template definitions for child types ----"),
                                spaced(this.children.values().stream().map(this::getChildVisitImpl))
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
        return String.format("void visit(IConfigModelVisitor<%s>& visitor)", cppMessageName(descriptor));
    }

    private Document getVisitImpl(Descriptors.Descriptor descriptor)
    {
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
                                .then(spaced(descriptor.getFields().stream().map(this::getFieldHandler)))
                );
    }

    static private String getVisitFunctionName(Descriptors.GenericDescriptor descriptor)
    {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    private Document getChildVisitSignature(Descriptors.Descriptor child, boolean isDeclaration)
    {
        return line(
                "void %s(const set_t<%s>& setter, const get_t<%s>& getter, IConfigModelVisitor<%s>& visitor)%s",
                     getVisitFunctionName(child),
                     Helpers.cppMessageName(child),
                     Helpers.cppMessageName(child),
                     Helpers.cppMessageName(this.descriptor),
                     isDeclaration ? ";" : ""
                );
    }

    private Document getChildVisitImpl(Descriptors.Descriptor child)
    {
        return getChildVisitSignature(child, false).bracket(spaced(child.getFields().stream().map(this::getFieldHandler)));
    }

    private Document getFieldHandler(Descriptors.FieldDescriptor field)
    {
        switch(field.getType())
        {
            case MESSAGE:
                return field.isRepeated() ? getRepeatedMessageField(field) :  getMessageField(field);
            case ENUM:
                return getEnumHandler(field);
            default:
                return getPrimitiveHandler(field);
        }
    }
    private Document getMessageField(Descriptors.FieldDescriptor field)
    {
        final Document setter = line("[setter](%s& profile)", Helpers.cppMessageName(this.descriptor)).bracketWithSuffix(
                line("return setter(profile)->mutable_%s();", field.getName().toLowerCase()), ","
        );


        final Document getter =  line("[getter](const %s& profile) -> %s const *", Helpers.cppMessageName(this.descriptor), Helpers.cppMessageName(field.getMessageType())).bracketWithSuffix(
          line("const auto value = getter(profile);")
                .then("if(value)") .bracket(
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

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field)
    {
        final String fieldName = field.getName().toLowerCase();

        final Document setter = line("const auto set = [setter, i, max = count](%s& profile)", Helpers.cppMessageName(this.descriptor))
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

        final Document getter = line("const auto get = [getter, i](const %s& profile) -> %s const*", Helpers.cppMessageName(this.descriptor), Helpers.cppMessageName(field.getMessageType()))
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
                line("visitor.end_message_field();")
        );
    }



    private Document getEnumHandler(Descriptors.FieldDescriptor field)
    {
        final String setter =  String.format(
                "[setter](%s& profile, const int& value) { setter(profile)->set_%s(static_cast<%s>(value)); }",
                Helpers.cppMessageName(this.descriptor),
                field.getName().toLowerCase(),
                Helpers.cppMessageName(field.getEnumType())
        );

        final String getter = String.format(
                "[getter](const %s& profile, const handler_t<int>& handler) { return false; }",
                Helpers.cppMessageName(this.descriptor)
        );

        final Document accessor = line("AccessorBuilder<%s,int>::build(", Helpers.cppMessageName(this.descriptor))
                .indent(setter + ",")
                .indent(getter)
                .then("),");

        return line("visitor.handle(")
                .indent(line("%s,",Helpers.quoted(field.getName())))
                .indent(accessor)
                .indent(line("%s_descriptor()", Helpers.cppMessageName(field.getEnumType())))
                .then(");");
    }

    private Document getPrimitiveHandler(Descriptors.FieldDescriptor field)
    {
        final String setter = String.format(
                "[setter](%s& profile, const %s& value) { setter(profile)->set_%s(value); }",
                Helpers.cppMessageName(this.descriptor),
                Helpers.cppType(field),
                field.getName().toLowerCase()
        );

        final String getter = String.format(
                "[getter](const %s& profile, const handler_t<%s>& handler) { return false; }",
                Helpers.cppMessageName(this.descriptor),
                Helpers.cppType(field)
        );

        final Document accessor = line("AccessorBuilder<%s,%s>::build(", Helpers.cppMessageName(this.descriptor), Helpers.cppType(field))
                .indent(setter + ",")
                .indent(getter)
                .then(")");

        return line("visitor.handle(")
                .indent(line("%s,", Helpers.quoted(field.getName())))
                .indent(accessor)
                .then(");");
    }

}
