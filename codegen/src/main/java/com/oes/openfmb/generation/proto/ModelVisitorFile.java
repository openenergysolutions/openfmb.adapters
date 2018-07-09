package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Collections;
import java.util.List;
import java.util.SortedMap;

import static com.oes.openfmb.generation.document.Document.*;

public class ModelVisitorFile extends CppFilePair {

    private final List<Descriptors.Descriptor> descriptors;
    private final SortedMap<String, Descriptors.Descriptor> children;

    private ModelVisitorFile(List<Descriptors.Descriptor> descriptors) {
        this.descriptors = descriptors;
        this.children = Helpers.getChildMessageDescriptors(descriptors);
    }

    public static CppFilePair from(List<Descriptors.Descriptor> descriptors)
    {
        return new ModelVisitorFile(descriptors);
    }

    @Override
    protected String baseFileName() {
        return "ModelVisitors";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                space,
                include("../IModelVisitor.h"),
                Document.space,
                namespace(
                        "adapter",
                        lines(
                                "// specializations for each profile type in the implementation file",
                                "template <class T>",
                                "void visit(IModelVisitor& visitor);"
                        )
                )
        );
    }

    @Override
    public Document implementation() {

        return join(
                include("adapter-api/config/generated/" + headerFileName()),
                space,
                join(Helpers.getIncludeFiles(this.descriptors).stream().map(Document::include)),
                space,
                namespace(
                "adapter",
                        spaced(
                                line("// ---- forward declare all the child visit method names ----"),
                                spaced(this.children.values().stream().map(d -> getChildVisitSignature(d, true))),
                                line("// ---- specializations for profile types ----"),
                                spaced(this.descriptors.stream().map(this::getVisitImpl)),
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
        return "void visit(IModelVisitor& visitor)";
    }

    private Document getVisitImpl(Descriptors.Descriptor descriptor)
    {
        return lines(
                "template <>",
                String.format("void visit<%s>(IModelVisitor& visitor)", Helpers.cppMessageName(descriptor))
        )
                .bracket(
                        spaced(descriptor.getFields().stream().map(this::getFieldHandler))
                );
    }

    static private String getVisitFunctionName(Descriptors.GenericDescriptor descriptor)
    {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    private Document getChildVisitSignature(Descriptors.Descriptor child, boolean isDeclaration)
    {
        return line(
                "void %s(IModelVisitor& visitor)%s",
                     getVisitFunctionName(child),
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
        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getMessageType()))
                        .bracket(
                                line("%s(visitor);", getVisitFunctionName(field.getMessageType()))
                                .then("visitor.end_message_field();")
                        );
    }

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field)
    {
        final String fieldName = field.getName().toLowerCase();

        final Document loop = line("for(int i = 0; i < count; ++i)").bracket(
                line("visitor.start_iteration(i);")
                .then(String.format("%s(visitor);", getVisitFunctionName(field.getMessageType())))
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
        return line("visitor.handle_enum(%s, %s_descriptor());", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getEnumType()));
    }

    private Document getPrimitiveHandler(Descriptors.FieldDescriptor field)
    {
        return line("visitor.handle_%s(%s);", getPrimitiveHandlerSuffix(field), Helpers.quoted(field.getName()));
    }

    static String getPrimitiveHandlerSuffix(Descriptors.FieldDescriptor fieldDescriptor)
    {
        switch(fieldDescriptor.getType())
        {
            case DOUBLE:
                return "double";
            case FLOAT:
                return "float";
            case INT64:
                return "int64";
            case UINT64:
                return "uint64";
            case INT32:
                return "int32";
            case BOOL:
                return "bool";
            case STRING:
                return "string";
            case UINT32:
                return "uint32";
            case SINT32:
                return "int32";
            case SINT64:
                return "int64";
            default:
                throw new RuntimeException("Unsupported type: " + fieldDescriptor.getType());
        }
    }

}
