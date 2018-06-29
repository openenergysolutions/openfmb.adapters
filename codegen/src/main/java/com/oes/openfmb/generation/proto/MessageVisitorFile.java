package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Collections;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Documents.*;

public class MessageVisitorFile extends CppFilePair {

    private final Iterable<Descriptors.Descriptor> descriptors;
    private final Set<Descriptors.Descriptor> childDescriptors;

    private MessageVisitorFile(Iterable<Descriptors.Descriptor> descriptors) {
        this.descriptors = descriptors;
        this.childDescriptors = Helpers.getChildMessageDescriptors(descriptors);
    }

    public static CppFilePair from(Iterable<Descriptors.Descriptor> descriptors)
    {
        return new MessageVisitorFile(descriptors);
    }

    @Override
    protected String baseFileName() {
        return "MessageVisitors";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                join(Helpers.getIncludeFiles(this.descriptors).stream().map(Documents::include)),
                include("../IMessageVisitor.h"),
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
                space,
                namespace(
                "adapter",
                        join(
                            spaced(
                                    this.childDescriptors.stream().map(d -> line(getVisitSignature(d) + ";"))
                            ),
                            space,
                            spaced(
                                this.childDescriptors.stream().map(this::visitImpl)
                            ),
                            spaced(
                                this.getDescriptorStream().map(this::visitImpl)
                            )
                        )
                )
        );
    }

    private Stream<Descriptors.Descriptor> getDescriptorStream()
    {
        return StreamSupport.stream(descriptors.spliterator(), false);
    }

    static private String cppMessageName(Descriptors.GenericDescriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature(Descriptors.Descriptor descriptor)
    {
        return String.format("void visit(const %s& message, IMessageVisitor& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(this::getFieldHandler));

        return line(getVisitSignature(descriptor))
                .append("{")
                .indent(inner) // recursively build up the implementation
                .append("}");

    }

    private Document getMessageField(Descriptors.FieldDescriptor field)
    {
        return
            line(String.format("if(message.has_%s())", field.getName().toLowerCase()))
            .append("{")
            .indent(String.format("visitor.start_message_field(\"%s\");", field.getName()))
            .indent(String.format("visit(message.%s(), visitor);", field.getName().toLowerCase()))
            .indent("visitor.end_message_field();")
            .append("}");

    }

    private Document getRepeatedMessageField(Descriptors.FieldDescriptor field)
    {
        final String fieldName = field.getName().toLowerCase();

        return line(String.format("visitor.start_message_field(\"%s\");", fieldName))
                        .append(String.format("for(decltype(message.%s_size()) i = 0; i < message.%s_size(); ++i)", fieldName, fieldName))
                        .append("{")
                        .indent("visitor.start_iteration(i);")
                        .indent(String.format("visit(message.%s(i), visitor);", fieldName))
                        .indent("visitor.end_iteration();")
                        .append("}")
                        .append("visitor.end_message_field();");
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

    private static Document getEnumHandler(Descriptors.FieldDescriptor field)
    {
        return line(
                String.format(
                        "visitor.handle(%s, static_cast<int>(message.%s()), *%s);",
                        quoted(field.getName()),
                        field.getName().toLowerCase(),
                        cppMessageName(field.getEnumType()) + "_descriptor()"
                )
        );
    }

    private static Document getPrimitiveHandler(Descriptors.FieldDescriptor field)
    {
        return line(
                        String.format(
                                "visitor.handle(%s, message.%s());",
                                quoted(field.getName()),
                                field.getName().toLowerCase()
                        )
                );
    }

    private static String quoted(String input)
    {
        return "\"" + input + "\"";
    }


}
