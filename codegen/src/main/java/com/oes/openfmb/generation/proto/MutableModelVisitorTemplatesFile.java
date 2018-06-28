package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Set;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Documents.*;

public class MutableModelVisitorTemplatesFile extends CppFilePair {

    private final Iterable<String> includes;
    private final Set<Descriptors.Descriptor> childDescriptors;

    public MutableModelVisitorTemplatesFile(Iterable<Descriptors.Descriptor> descriptors, Iterable<String> includes) {
        this.includes = includes;
        this.childDescriptors = Helpers.getChildMessageDescriptors(descriptors);
    }

    @Override
    protected String baseFileName() {
        return "MutableModelVisitorTemplates";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                join(StreamSupport.stream(includes.spliterator(), false).map(Documents::include)),
                space,
                include("../IMutableModelVisitor.h"),
                include("../DescriptorPathImpl.h"),
                Documents.space,
                namespace(
                        "adapter",
                        spaced(
                                spaced(
                                        childDescriptors.stream().map(d -> getVisitSignature(d, true))
                                ),
                                spaced(
                                        childDescriptors.stream().map(this::getVisitImpl)
                                )
                        )
                )
        );
    }

    @Override
    public Document implementation() {

        return null;
    }

    static private String getVisitFunctionName(Descriptors.GenericDescriptor descriptor)
    {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    static Document getVisitSignature(Descriptors.Descriptor descriptor, boolean isDeclaration)
    {
        return line("template <class P, class C>")
                .append(
                        String.format("void %s(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<P>& visitor)%s",
                                getVisitFunctionName(descriptor),
                                isDeclaration ? ";" : ""
                        )
                );
    }

    private Document getVisitImpl(Descriptors.Descriptor descriptor)
    {
        final Document inner = spaced(descriptor.getFields().stream().map(this::getFieldHandler));

        return getVisitSignature(descriptor, false)
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
                    String.format("%s<P>(%s, path, visitor);", getVisitFunctionName(field.getMessageType()), getNewContext(field))
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

    static private String getNewContext(Descriptors.FieldDescriptor field)
    {
        return String.format("[context](P& profile) { return context(profile)->mutable_%s(); }", field.getName().toLowerCase());
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

    private static Document getEnumHandler(Descriptors.FieldDescriptor field)
    {
        final Document inner = line(
                String.format(
                        "const setter_t<P, int> setter = [context](P& profile, const int& value) { context(profile)->set_%s(static_cast<%s>(value)); };",
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

    private static Document getPrimitiveHandler(Descriptors.FieldDescriptor field)
    {
        final Document inner = line(
                String.format(
                        "const setter_t<P, %s> setter = [context](P& profile, const %s& value) { context(profile)->set_%s(value); };",
                        Helpers.cppType(field),
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
