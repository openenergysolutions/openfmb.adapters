package com.oes.openfmb.generation.proto;

import com.google.protobuf.*;
import com.oes.openfmb.generation.document.*;
import openfmb.commonmodule.IdentifiedObject;
import openfmb.commonmodule.MessageInfo;

import java.util.*;

import static com.oes.openfmb.generation.document.Document.*;

public class ModelVisitorFiles implements CppFileCollection {

    private final Set<Descriptors.Descriptor> descriptors;
    private final SortedMap<String, Descriptors.Descriptor> children;
    private final FileName name;

    // certain types contain fields that we cannot classify without knowing the parent
    // type. For instance, MessageInfo contains IdentifiedObject w/ an mRID, which who's
    // meaning is dependent on the whether MessageInfo is the parent 2 levels up
    private static final Set<Descriptors.Descriptor> inlinedTypes = new HashSet<>(
            Collections.singletonList(
                    IdentifiedObject.getDescriptor()
            )
    );

    private ModelVisitorFiles(Set<Descriptors.Descriptor> descriptors) {
        this.descriptors = descriptors;
        this.children = Helpers.getFilteredChildMessageDescriptors(descriptors, false);
        // don't generate handlers for the inlined types, we'll inline them
        inlinedTypes.forEach(d -> this.children.remove(d.getFullName()));
        this.name = new FileName("ModelVisitors");
    }

    public static CppFileCollection from(Set<Descriptors.Descriptor> descriptors) {
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
                        spaced(descriptor.getFields().stream().map(f -> this.getFieldHandler(TypeClassification.FieldPath.create(f), false)))
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
        return getChildVisitSignature(child, false).bracket(spaced(child.getFields().stream().map(f -> this.getFieldHandler(TypeClassification.FieldPath.create(f), false))));
    }

    private Document getFieldHandler(TypeClassification.FieldPath path, boolean inlined) {
        switch (path.last().getType()) {
            case MESSAGE:
                if(Helpers.terminalMessages.contains(path.last().getMessageType()))
                {
                    if(path.last().isRepeated()) {
                        throw new RuntimeException(String.format("Terminal repeated messages not supported: %s", path.last().getMessageType().getName()));
                    }
                    return getTerminalMessageHandler(path.last());
                }

                if (path.last().isRepeated())
                {
                    // lookup the type of the repeated field
                    final RepeatedType type  = RepeatedType.getType(path.last().getMessageType());
                    switch (type)
                    {
                        case READING:
                        case SCHEDULE:
                            return getRepeatedMessageField(path);
                        case SCHEDULE_PARAMETER:
                            return getRepeatedScheduleParameterField(path);
                        default:
                            throw new RuntimeException("Unsupported repeated field type: " + type.toString());
                    }
                }

                if(Helpers.isWrapperType(path.last().getMessageType()))
                {
                    return getWrapperHandler(path);
                }

                if(inlinedTypes.contains(path.last().getMessageType())) {
                    return getMessageField(path, true);
                }

                return getMessageField(path, inlined);

            case ENUM:
                return getEnumHandler(path);
            default:
                return getPrimitiveHandler(path);
        }
    }

    private Document getMessageField(TypeClassification.FieldPath path, boolean inlined) {

        if(inlined) {

            final Document inner = Document.join(path.last().getMessageType().getFields().stream().map(f -> this.getFieldHandler(path.build(f), true)));

            return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(path.last().getName()), Helpers.cppMessageName(path.last().getMessageType()))
                    .bracket(inner)
                    .then("visitor.end_message_field();");

        }

        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(path.last().getName()), Helpers.cppMessageName(path.last().getMessageType()))
                .bracket(
                        line("%s(visitor);", getVisitFunctionName(path.last().getMessageType()))
                                .then("visitor.end_message_field();")
                );
    }

    private Document getRepeatedScheduleParameterField(TypeClassification.FieldPath path) {
        return line("// repeated schedule parameter")
                .then(line("visitor.handle_repeated_schedule_parameter(%s);", Helpers.quoted(path.last().getName())));
    }

    private Document getRepeatedMessageField(TypeClassification.FieldPath path) {
        final String fieldName = path.last().getName().toLowerCase();

        final Document loop = line("for(int i = 0; i < count; ++i)").bracket(
                line("visitor.start_iteration(i);")
                        .then(String.format("%s(visitor);", getVisitFunctionName(path.last().getMessageType())))
                        .then("visitor.end_iteration();")
        );


        return Document.empty.bracket(
                line("const auto count = visitor.start_repeated_message_field(%s, %s::descriptor());", Helpers.quoted(fieldName), Helpers.cppMessageName(path.last().getMessageType())),
                loop,
                line("visitor.end_repeated_message_field();")
        );
    }

    private Document getEnumHandler(TypeClassification.FieldPath path) {
        return line("visitor.handle(%s, %s_descriptor(), %s);", Helpers.quoted(path.last().getName()), Helpers.cppMessageName(path.last().getEnumType()), TypeClassification.getName(path));
    }

    private Document getPrimitiveHandler(TypeClassification.FieldPath path) {
        return line("visitor.handle(%s, %s);", Helpers.quoted(path.last().getName()), TypeClassification.getName(path));
    }

    private Document getWrapperHandler(TypeClassification.FieldPath path) {

        final List<Descriptors.FieldDescriptor> fields = path.last().getMessageType().getFields();
        if(fields.size() != 1) {
            throw new RuntimeException(String.format("Wrapper types may only contain a single field, but %s contains %s", path.last().getMessageType().getFullName(), fields.size()));
        }

        final Descriptors.FieldDescriptor primitiveField = fields.get(0);

        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(path.last().getName()), Helpers.cppMessageName(path.last().getMessageType()))
                .bracket(
                        line("visitor.handle(%s, %s);", Helpers.quoted(primitiveField.getName()), TypeClassification.getName(path))
                                .then("visitor.end_message_field();")
                );
    }

    private Document getInlinedMessageHandler(Descriptors.FieldDescriptor field) {


        final Document inner = line("static_assert(false, \"%s\");", field.getMessageType().getFullName());

        return line("if(visitor.start_message_field(%s, %s::descriptor()))", Helpers.quoted(field.getName()), Helpers.cppMessageName(field.getMessageType()))
                .bracket(inner)
                .then("visitor.end_message_field();");
    }

    private Document getTerminalMessageHandler(Descriptors.FieldDescriptor field) {
        return line(
                "visitor.handle(%s, %s);",
                Helpers.quoted(field.getName()),
                TypeClassification.getName(field)

        );
    }

    private static String getPrimitiveHandlerSuffix(Descriptors.FieldDescriptor fieldDescriptor) {
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
