package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.*;

import static com.oes.openfmb.generation.document.Documents.*;

public class MutableModelVisitorFile extends CppFilePair {

    private final Descriptors.Descriptor descriptor;
    private final Set<Descriptors.Descriptor> children;

    private MutableModelVisitorFile(Descriptors.Descriptor descriptor) {
        this.descriptor = descriptor;
        this.children = Helpers.getChildMessageDescriptors(Collections.singletonList(descriptor));
    }

    public static CppFilePair from(Descriptors.Descriptor descriptor)
    {
        return new MutableModelVisitorFile(descriptor);
    }

    @Override
    protected String baseFileName() {
        return descriptor.getName()+"MutableModelVisitor";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                Documents.include(Helpers.getIncludeFile(this.descriptor)),
                include("../IMutableModelVisitor.h"),
                Documents.space,
                namespace(
                        "adapter",
                        spaced(
                                line(getChildVisitSignature(descriptor)+";")
                        )
                )
        );
    }

    @Override
    public Document implementation() {

        return join(
                include("adapter-api/config/generated/" + headerFileName()),
                include("../DescriptorPathImpl.h"),
                space,
                namespace(
                "adapter",
                        spaced(
                                line("// ---- forward declare all the template method for child types ----"),
                                spaced(this.children.stream().map(d -> getChildVisitSignature(d, true))),
                                line("// ---- the exposed visit function ----"),
                                visitImpl(this.descriptor),
                                line("// ---- template definitions for child types ----"),
                                spaced(this.children.stream().map(this::getChildVisitImpl))
                        )
                )
        );
    }

    static private String cppMessageName(Descriptors.GenericDescriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getChildVisitSignature(Descriptors.Descriptor descriptor)
    {
        return String.format("void visit(IMutableModelVisitor<%s>& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        return line(getChildVisitSignature(descriptor))
                .append("{")
                .indent(line("DescriptorPathImpl path;"))
                .space()
                .indent(spaced(descriptor.getFields().stream().map(this::getFieldLines)))
                .append("}");

    }

    static private String getVisitFunctionName(Descriptors.GenericDescriptor descriptor)
    {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    private String getContext(Descriptors.FieldDescriptor field)
    {
        return String.format("[](%s& profile) { return profile.mutable_%s(); }", Helpers.cppMessageName(this.descriptor), field.getName().toLowerCase());
    }

    private Document getFieldLines(Descriptors.FieldDescriptor field)
    {
        return line(String.format("path.push(%s::descriptor());", Helpers.cppMessageName(field.getMessageType())))
                        .append(String.format("if(visitor.start_message_field(%s, path))", Helpers.quoted(field.getName())))
                        .append("{")
                        .indent(
                                line(String.format("%s(", getVisitFunctionName(field.getMessageType())))
                                .indent(getContext(field)+",")
                                .indent("path, visitor")
                                .append(");")
                        )
                        .append("}")
                        .append("visitor.end_message_field();")
                        .append("path.pop();");
    }

    private Document getChildVisitSignature(Descriptors.Descriptor child, boolean isDeclaration)
    {
        return line("template <class C>")
                .append(
                        String.format("void %s(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<%s>& visitor)%s",
                                getVisitFunctionName(child),
                                Helpers.cppMessageName(this.descriptor),
                                isDeclaration ? ";" : ""
                        )
                );
    }

    private Document getChildVisitImpl(Descriptors.Descriptor child)
    {
        final Document inner = spaced(child.getFields().stream().map(this::getFieldHandler));

        return getChildVisitSignature(child, false)
                .append("{")
                .indent(inner)
                .append("}");

    }

    private Document getMessageField(Descriptors.FieldDescriptor field)
    {
        return
                line(String.format("path.push(%s::descriptor());", Helpers.cppMessageName(field.getMessageType())))
                        .append(String.format("if(visitor.start_message_field(%s, path))", Helpers.quoted(field.getName())))
                        .append("{")
                        .indent(
                                String.format("%s(%s, path, visitor);", getVisitFunctionName(field.getMessageType()), getNewContext(field))
                        )
                        .append("}")
                        .append("visitor.end_message_field();")
                        .append("path.pop();");

    }

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field)
    {
        final String fieldName = field.getName().toLowerCase();

        final Document loop = line("for(decltype(count) i = 0; i < count; ++i)")
                .append("{")
                .indent("visitor.start_iteration(i);")
                .indent(String.format("%s(", getVisitFunctionName(field.getMessageType())))
                .indent(
                        indent(getRepeatedContext(field).append("path, visitor"))
                )
                .indent(");")
                .indent("visitor.end_iteration();")
                .append("}");

        return line("{")
                .indent(String.format("path.push(%s::descriptor());", Helpers.cppMessageName(field.getMessageType())))
                .indent(String.format("const auto count = visitor.start_repeated_message_field(%s, path);", Helpers.quoted(fieldName)))
                .indent(loop)
                .indent("visitor.end_message_field();")
                .indent("path.pop();")
                .append("}");

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

    private String getNewContext(Descriptors.FieldDescriptor field)
    {
        return String.format(
                "[context](%s& profile) { return context(profile)->mutable_%s(); }",
                Helpers.cppMessageName(this.descriptor),
                field.getName().toLowerCase()
        );
    }

    static private Document getRepeatedContext(Descriptors.FieldDescriptor field)
    {
        final Document inner = line("repeated->Reserve(max);")
                .append("// add items until we're at max requested capacity")
                .append("for(auto j = repeated->size(); j < max; ++j) {")
                .indent("repeated->Add();")
                .append("}");

        return line("[context, i, max = count](P& profile) {")
                .indent(String.format("const auto repeated = context(profile)->mutable_%s();", field.getName().toLowerCase()))
                .indent("if(repeated->size() < max) {")
                .indent(indent(inner))
                .indent("}")
                .indent("return repeated->Mutable(i);")
                .append("},");
    }

    private Document getEnumHandler(Descriptors.FieldDescriptor field)
    {
        final Document inner = line(
                String.format(
                        "const setter_t<%s, int> setter = [context](%s& profile, const int& value) { context(profile)->set_%s(static_cast<%s>(value)); };",
                        Helpers.cppMessageName(this.descriptor),
                        Helpers.cppMessageName(this.descriptor),
                        field.getName().toLowerCase(),
                        Helpers.cppMessageName(field.getEnumType())
                )
        ).append(
                String.format(
                        "visitor.handle(%s, setter, %s_descriptor());",
                        Helpers.quoted(field.getName()),
                        Helpers.cppMessageName(field.getEnumType())
                )
        );


        return line("{")
                .indent(inner)
                .append("}");
    }

    private Document getPrimitiveHandler(Descriptors.FieldDescriptor field)
    {
        final Document inner = line(
                String.format(
                        "const setter_t<%s, %s> setter = [context](%s& profile, const %s& value) { context(profile)->set_%s(value); };",
                        Helpers.cppMessageName(this.descriptor),
                        Helpers.cppType(field),
                        Helpers.cppMessageName(this.descriptor),
                        Helpers.cppType(field),
                        field.getName().toLowerCase()
                )
        ).append(
                String.format("visitor.handle(%s, setter);", Helpers.quoted(field.getName()))
        );


        return line("{")
                .indent(inner)
                .append("}");
    }

}
