package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.*;

import java.util.Arrays;
import java.util.List;
import java.util.SortedMap;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Document.*;

public class MessageVisitorFiles implements CppFileCollection {

    private final Iterable<Descriptors.Descriptor> descriptors;
    private final SortedMap<String, Descriptors.Descriptor> childDescriptors;
    private final FileName name;

    private MessageVisitorFiles(Iterable<Descriptors.Descriptor> descriptors) {
        this.descriptors = descriptors;
        this.childDescriptors = Helpers.getChildMessageDescriptors(descriptors);
        this.name = new FileName("MessageVisitors");
    }

    public static CppFileCollection from(Iterable<Descriptors.Descriptor> descriptors) {
        return new MessageVisitorFiles(descriptors);
    }

    @Override
    public List<CppFile> headers() {

        return this.name.createHeaderList(
                () -> join(
                        FileHeader.lines,
                        guards(
                                this.name.baseName,
                                join(Helpers.getIncludeFiles(this.descriptors).stream().map(Document::include)),
                                include("../IMessageVisitor.h"),
                                Document.space,
                                namespaces(
                                        Arrays.asList("adapter", "util"),
                                        spaced(
                                                getDescriptorStream().map(d -> line(getVisitSignature(d) + ";"))
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
                        include("adapter-util/config/generated/MessageVisitors.h"),
                        space,
                        namespaces(
                                Arrays.asList("adapter", "util"),
                                join(
                                        spaced(
                                                this.childDescriptors.values().stream().map(d -> line(getVisitSignature(d) + ";"))
                                        ),
                                        space,
                                        spaced(
                                                this.childDescriptors.values().stream().map(this::visitImpl)
                                        ),
                                        spaced(
                                                this.getDescriptorStream().map(this::visitImpl)
                                        )
                                )
                        )
                )
        );

    }

    private Stream<Descriptors.Descriptor> getDescriptorStream() {
        return StreamSupport.stream(descriptors.spliterator(), false);
    }

    static private String cppMessageName(Descriptors.GenericDescriptor descriptor) {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature(Descriptors.Descriptor descriptor) {
        return String.format("void visit(const %s& message, IMessageVisitor& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor) {
        final Document inner = join(descriptor.getFields().stream().map(this::getFieldHandler));

        return line(getVisitSignature(descriptor))
                .then("{")
                .indent(inner) // recursively build up the implementation
                .then("}");

    }

    private Document getMessageField(Descriptors.FieldDescriptor field) {
        return
                line(String.format("if(message.has_%s())", field.getName().toLowerCase()))
                        .then("{")
                        .indent(String.format("visitor.start_message_field(\"%s\");", field.getName()))
                        .indent(String.format("visit(message.%s(), visitor);", field.getName().toLowerCase()))
                        .indent("visitor.end_message_field();")
                        .then("}");

    }

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field) {
        final String fieldName = field.getName().toLowerCase();

        return line(String.format("visitor.start_message_field(\"%s\");", fieldName))
                .then(String.format("for(decltype(message.%s_size()) i = 0; i < message.%s_size(); ++i)", fieldName, fieldName))
                .then("{")
                .indent("visitor.start_iteration(i);")
                .indent(String.format("visit(message.%s(i), visitor);", fieldName))
                .indent("visitor.end_iteration();")
                .then("}")
                .then("visitor.end_message_field();");
    }

    private Document getFieldHandler(Descriptors.FieldDescriptor field) {
        switch (field.getType()) {
            case MESSAGE:
                return field.isRepeated() ? getRepeatedMessageField(field) : getMessageField(field);
            case ENUM:
                return getEnumHandler(field);
            default:
                return getPrimitiveHandler(field);
        }
    }

    private static Document getEnumHandler(Descriptors.FieldDescriptor field) {
        return line(
                String.format(
                        "visitor.handle(%s, static_cast<int>(message.%s()), *%s);",
                        quoted(field.getName()),
                        field.getName().toLowerCase(),
                        cppMessageName(field.getEnumType()) + "_descriptor()"
                )
        );
    }

    private static Document getPrimitiveHandler(Descriptors.FieldDescriptor field) {
        return line(
                String.format(
                        "visitor.handle(%s, message.%s());",
                        quoted(field.getName()),
                        field.getName().toLowerCase()
                )
        );
    }

    private static String quoted(String input) {
        return "\"" + input + "\"";
    }


}
