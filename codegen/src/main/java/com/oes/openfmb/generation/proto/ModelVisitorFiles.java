package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.*;

import java.util.Arrays;
import java.util.List;
import java.util.SortedMap;

import static com.oes.openfmb.generation.document.Document.*;

public class ModelVisitorFiles implements CppFileCollection {

    private final List<Descriptors.Descriptor> descriptors;
    private final SortedMap<String, Descriptors.Descriptor> children;
    private final FileName name;

    private ModelVisitorFiles(List<Descriptors.Descriptor> descriptors) {
        this.descriptors = descriptors;
        this.children = Helpers.getFilteredChildMessageDescriptors(descriptors);
        this.name = new FileName("ModelVisitors");
    }

    public static CppFileCollection from(List<Descriptors.Descriptor> descriptors) {
        return new ModelVisitorFiles(descriptors);
    }

    @Override
    public List<CppFile> headers() {

        return this.name.createHeaderList(
                () -> join(
                        FileHeader.lines,
                        guards(
                                this.name.baseName,
                                space,
                                include("../IModelVisitor.h"),
                                Document.space,
                                namespaces(
                                        Arrays.asList("adapter", "util"),
                                        lines(
                                                "// specializations for each profile type in the implementation file",
                                                "template <class T>",
                                                "void visit(IModelVisitor& visitor);"
                                        )
                                )
                        )
                )
        );
    }

    @Override
    public List<CppFile> implementations() {
        return this.name.createImplementationList(

                () -> join(
                        include("adapter-util/config/generated/" + name.getHeaderName()),
                        space,
                        join(Helpers.getIncludeFiles(this.descriptors).stream().map(Document::include)),
                        space,
                        namespaces(
                                Arrays.asList("adapter", "util"),
                                spaced(
                                        line("// ---- forward declare all the child visit method names ----"),
                                        spaced(this.children.values().stream().map(d -> getChildVisitSignature(d, true))),
                                        line("// ---- specializations for profile types ----"),
                                        spaced(this.descriptors.stream().map(this::getVisitImpl)),
                                        line("// ---- template definitions for child types ----"),
                                        spaced(this.children.values().stream().map(this::getChildVisitImpl))
                                )
                        )
                )
        );
    }

    private Document getVisitImpl(Descriptors.Descriptor descriptor) {
        return lines(
                "template <>",
                String.format("void visit<%s>(IModelVisitor& visitor)", Helpers.cppMessageName(descriptor))
        )
                .bracket(
                        spaced(descriptor.getFields().stream().map(this::getFieldHandler))
                );
    }

    static private String getVisitFunctionName(Descriptors.GenericDescriptor descriptor) {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    private Document getChildVisitSignature(Descriptors.Descriptor child, boolean isDeclaration) {
        return line(
                "void %s(IModelVisitor& visitor)%s",
                getVisitFunctionName(child),
                isDeclaration ? ";" : ""
        );
    }

    private Document getChildVisitImpl(Descriptors.Descriptor child) {
        return getChildVisitSignature(child, false).bracket(spaced(child.getFields().stream().map(this::getFieldHandler)));
    }

    private Document getFieldHandler(Descriptors.FieldDescriptor field) {
        switch (field.getType()) {
            case MESSAGE:
                if(Helpers.terminalMessages.contains(field.getMessageType()))
                {
                    if(field.isRepeated()) {
                        throw new RuntimeException(String.format("Terminal repeated messages not supported: %s", field.getMessageType().getName()));
                    }
                    return getTerminalMessageHandler(field);
                }
                else
                {
                    if (field.isRepeated())
                    {
                        // lookup the type of the repeated field
                        final RepeatedType type  = RepeatedType.getType(field.getMessageType());
                        switch (type)
                        {
                            case READING:
                            case SCHEDULE:
                                return getRepeatedMessageField(field);
                            case SCHEDULE_PARAMETER:
                                return getRepeatedScheduleParameterField(field);
                            default:
                                throw new RuntimeException("Unsupported repeated field type: " + type.toString());
                        }
                    }
                    else
                    {
                        return getMessageField(field);
                    }
                }
            case ENUM:
                return getEnumHandler(field);
            default:
                return getPrimitiveHandler(field);
        }
    }

    private Document getMessageField(Descriptors.FieldDescriptor field) {
        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getMessageType()))
                .bracket(
                        line("%s(visitor);", getVisitFunctionName(field.getMessageType()))
                                .then("visitor.end_message_field();")
                );
    }

    private Document getRepeatedScheduleParameterField(Descriptors.FieldDescriptor field) {
        return line("// repeated schedule parameter")
                .then(line("visitor.handle_repeated_schedule_parameter(%s);", Helpers.quoted(field.getName())));
    }

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field) {
        final String fieldName = field.getName().toLowerCase();

        final Document loop = line("for(int i = 0; i < count; ++i)").bracket(
                line("visitor.start_iteration(i);")
                        .then(String.format("%s(visitor);", getVisitFunctionName(field.getMessageType())))
                        .then("visitor.end_iteration();")
        );


        return Document.empty.bracket(
                line("const auto count = visitor.start_repeated_message_field(%s, %s::descriptor());", Helpers.quoted(fieldName), Helpers.cppMessageName(field.getMessageType())),
                loop,
                line("visitor.end_repeated_message_field();")
        );
    }

    private Document getEnumHandler(Descriptors.FieldDescriptor field) {
        return line("visitor.handle_enum(%s, %s_descriptor());", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getEnumType()));
    }

    private Document getPrimitiveHandler(Descriptors.FieldDescriptor field) {
        return line("visitor.handle_%s(%s);", getPrimitiveHandlerSuffix(field), Helpers.quoted(field.getName()));
    }

    private Document getTerminalMessageHandler(Descriptors.FieldDescriptor field) {
        return line(
                "visitor.handle_%s(%s);",
                Helpers.cppMessageName(field.getMessageType()).replace("::", "_"),
                Helpers.quoted(field.getName())

        );
    }

    static String getPrimitiveHandlerSuffix(Descriptors.FieldDescriptor fieldDescriptor) {
        switch (fieldDescriptor.getType()) {
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
