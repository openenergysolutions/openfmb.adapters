package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.*;

import static com.oes.openfmb.generation.document.Documents.*;

public class ConfigModelVisitorFile extends CppFilePair {

    private final Descriptors.Descriptor descriptor;
    private final Set<Descriptors.Descriptor> children;

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
                Documents.include(Helpers.getIncludeFile(this.descriptor)),
                include("../IConfigModelVisitor.h"),
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
                space,
                namespace(
                "adapter",
                        spaced(
                                line("// ---- forward declare all the template method for child types ----"),
                                spaced(this.children.stream().map(d -> getChildVisitSignature(d, true))),
                                line("// ---- the exposed visit function ----"),
                                getVisitImpl(this.descriptor),
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
                                        String.format("const auto context = [](%s& profile) { return &profile; };", Helpers.cppMessageName(descriptor))
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
        return line("template <class C>")
                .then(
                        String.format("void %s(const C& context, IConfigModelVisitor<%s>& visitor)%s",
                                getVisitFunctionName(child),
                                Helpers.cppMessageName(this.descriptor),
                                isDeclaration ? ";" : ""
                        )
                );
    }

    private Document getChildVisitImpl(Descriptors.Descriptor child)
    {
        return getChildVisitSignature(child, false).bracket(spaced(child.getFields().stream().map(this::getFieldHandler)));
    }

    private Document getMessageField(Descriptors.FieldDescriptor field)
    {
        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getMessageType()))
                        .bracket(
                                line("%s(%s, visitor);", getVisitFunctionName(field.getMessageType()), getNewContext(field))
                        ).then("visitor.end_message_field();");
    }

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field)
    {
        final String fieldName = field.getName().toLowerCase();

        final Document loop = line("for(int i = 0; i < count; ++i)").bracket(
                line("visitor.start_iteration(i);")
                .then(String.format("%s(", getVisitFunctionName(field.getMessageType())))
                .then(
                        indent(getRepeatedContext(field).then(", visitor"))
                )
                .then(");")
                .then("visitor.end_iteration();")
        );


        return Document.start().bracket(
                line("const auto count = visitor.start_repeated_message_field(%s, %s::descriptor());", Helpers.quoted(fieldName), Helpers.cppMessageName(field.getMessageType())),
                loop,
                line("visitor.end_message_field();")
        );
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

    private Document getRepeatedContext(Descriptors.FieldDescriptor field)
    {
        return line("[context, i, max = count](%s& profile)", Helpers.cppMessageName(this.descriptor))
                .bracket(
                        line("const auto repeated = context(profile)->mutable_%s();", field.getName().toLowerCase())
                        .then("if(repeated->size() < max)")
                        .bracket(
                                line("repeated->Reserve(max);")
                                        .then("// add items until we're at max requested capacity")
                                        .then("for(auto j = repeated->size(); j < max; ++j)")
                                        .bracket(
                                                "repeated->Add();"
                                        )
                        )
                        .then("return repeated->Mutable(i);")
                );
    }

    private Document getEnumHandler(Descriptors.FieldDescriptor field)
    {
        return Document.start().bracket(
                String.format(
                        "const setter_t<%s, int> setter = [context](%s& profile, const int& value) { context(profile)->set_%s(static_cast<%s>(value)); };",
                        Helpers.cppMessageName(this.descriptor),
                        Helpers.cppMessageName(this.descriptor),
                        field.getName().toLowerCase(),
                        Helpers.cppMessageName(field.getEnumType())
                ),
                String.format(
                        "visitor.handle(%s, setter, %s_descriptor());",
                        Helpers.quoted(field.getName()),
                        Helpers.cppMessageName(field.getEnumType())
                )
        );
    }

    private Document getPrimitiveHandler(Descriptors.FieldDescriptor field)
    {
        return Document.start().bracket(
                String.format(
                        "const setter_t<%s, %s> setter = [context](%s& profile, const %s& value) { context(profile)->set_%s(value); };",
                        Helpers.cppMessageName(this.descriptor),
                        Helpers.cppType(field),
                        Helpers.cppMessageName(this.descriptor),
                        Helpers.cppType(field),
                        field.getName().toLowerCase()
                ),
                String.format("visitor.handle(%s, setter);", Helpers.quoted(field.getName()))
        );
    }

}
