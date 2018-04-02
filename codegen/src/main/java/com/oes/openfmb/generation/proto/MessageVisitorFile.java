package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.FieldPathImpl;
import openfmb.commonmodule.*;

import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Documents.*;

public class MessageVisitorFile extends CppFilePair {

    private final Iterable<Descriptors.Descriptor> descriptors;
    private final Iterable<String> includes;

    public MessageVisitorFile(Iterable<Descriptors.Descriptor> descriptors, Iterable<String> includes) {
        this.descriptors = descriptors;
        this.includes = includes;
    }

    @Override
    protected String baseFileName() {
        return "MessageVisitors";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                join(StreamSupport.stream(includes.spliterator(), false).map(Documents::include)),
                include("../IProtoVisitor.h"),
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
                include(headerFileName()),
                space,
                namespace(
                "adapter",
                        spaced(
                                getDescriptorStream().map(d -> visitImpl(d))
                        )
                )
        );
    }

    private Stream<Descriptors.Descriptor> getDescriptorStream()
    {
        return StreamSupport.stream(descriptors.spliterator(), false);
    }

    static private String cppMessageName(Descriptors.Descriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature(Descriptors.Descriptor descriptor)
    {
        return String.format("void visit(IProtoVisitor<%s>& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        return line(getVisitSignature(descriptor))
                .append("{")
                .indent(
                        line(
                                String.format("const auto context0 = [](%s& profile) { return &profile; };", cppMessageName(descriptor))
                        )
                )
                .indent(start(descriptor)) // recursively build up the implementation
                .append("}");

    }

    private Document start(Descriptors.Descriptor descriptor)
    {
        return join(descriptor.getFields().stream().map(f -> this.build(FieldPathImpl.create(descriptor, f))));
    }

    private Document startMessageField(FieldPath path, Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(f -> this.build(path.build(f))));

        return inner.isEmpty() ? inner :
            line(String.format("visitor.start_message_field(\"%s\");", path.getInfo().field.getName()))
            .append("{")
            .indent(
                    line(getContextDefinition(path))
                    .append(inner)
            )
            .append("}")
            .append(line("visitor.end_message_field();"));
    }

    private Document startRepeatedMessageField(FieldPath path, Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(f -> this.build(path.build(f))));

        return inner.isEmpty() ? inner :
                         line(
                                 String.format(
                                         "const auto max_count%d = visitor.start_repeated_message_field(\"%s\");",
                                         path.getInfo().depth,
                                         path.getInfo().field.getName()
                                 )
                         )
                        .append(
                                line(String.format(
                                        "for(auto count%d = 0; count%d < max_count%d; ++count%d)",
                                        path.getInfo().depth,
                                        path.getInfo().depth,
                                        path.getInfo().depth,
                                        path.getInfo().depth
                                ))
                        )
                        .append("{")
                        .indent(String.format("visitor.start_iteration(count%d);", path.getInfo().depth))
                        .indent(getRepeatedContextDefinition(path))
                        .indent(inner)
                        .indent("visitor.end_iteration();")
                        .append("}")
                        .append(line("visitor.end_repeated_message_field();"));
    }

    private Document build(FieldPath path)
    {
        switch (path.getInfo().field.getType())
        {
            case MESSAGE:
                if(path.getInfo().field.isRepeated())
                {
                    return startRepeatedMessageField(path, path.getInfo().field.getMessageType());
                }
                else
                {
                    return build(path, path.getInfo().field.getMessageType());
                }
            case STRING:
                if(path.getInfo().field.getName().equals("description"))
                {
                    return Documents.empty;
                }
                else
                {
                    throw new RuntimeException("Unknown string field: " + path);
                }

            default:
                throw new RuntimeException("Unknown leaf node: " + path);
        }
    }

    private Document build(FieldPath path, Descriptors.Descriptor message)
    {
        if(message.equals(CMV.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(MV.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(BCR.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(ReadingMessageInfo.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(ConductingEquipmentTerminalReading.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(ENG_CalcMethodKind.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(IdentifiedObject.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else if(message.equals(ENG_PFSignKind.getDescriptor()))
        {
            return handler(path, message.getName());
        }
        else
        {
            return startMessageField(path, message);
        }
    }

    private static Document handler(FieldPath path, String type)
    {
        return line("visitor.handle(")
                .indent(
                    lines(
                        quoted(path.getInfo().field.getName()) + ",",
                        getContextLambda(path)
                    )
                )
                .append(");");
    }

    private static String quoted(String input)
    {
        return "\"" + input + "\"";
    }

    private static Document getRepeatedContextDefinition(FieldPath path)
    {
        final int d = path.getInfo().depth;

        return line(
                    String.format(
                    "const auto context%d = [context = context%d, i = count%d, max = max_count%d](%s& profile) {",
                       d + 1,
                        d,
                        d,
                        d,
                        cppMessageName(path.getRoot())
                    )
                )
                .indent(
                        line(
                            String.format("const auto repeated = context(profile)->mutable_%s();", path.getInfo().field.getName().toLowerCase())
                        )
                        .append("if(repeated->size() < max) {")
                        .indent(
                                lines(
                                        "repeated->Reserve(max);",
                                        "// add items until we're at max requested capacity",
                                        "for(auto j = repeated->size(); j < max; ++j) {"
                                )
                                .indent(
                                        "repeated->Add();"
                                )
                                .append("}")

                        )
                        .append(
                                lines(
                                  "}",
                                  "return repeated->Mutable(i);"
                                )
                        )
                )
                .append("};");
    }

    private static String getContextLambda(FieldPath path)
    {
        return String.format(
                "[context = context%d](%s& profile) { return %s; }",
                path.getInfo().depth,
                cppMessageName(path.getRoot()),
                accessor(path)
        );
    }

    private static String getContextDefinition(FieldPath path)
    {
        return String.format(
                "const auto context%d = %s;",
                path.getInfo().depth + 1,
                getContextLambda(path)
        );
    }

    private static String accessor(FieldPath path) {

        return String.format(
                "context(profile)->mutable_%s()",
                path.getInfo().field.getName().toLowerCase()
        );
    }


}
