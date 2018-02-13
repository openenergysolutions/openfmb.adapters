package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.FieldPathImpl;
import openfmb.commonmodule.BCR;
import openfmb.commonmodule.CMV;
import openfmb.commonmodule.MV;

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

    private String cppMessageName(Descriptors.Descriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature(Descriptors.Descriptor descriptor)
    {
        return String.format("void visit(IProtoVisitor<%s>& visitor)", this.cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        return line(getVisitSignature(descriptor))
                .append("{")
                .indent(start(descriptor)) // recursively build up the implementation
                .append("}");

    }

    private Document start(Descriptors.Descriptor descriptor)
    {
        return join(descriptor.getFields().stream().map(f -> this.build(descriptor, FieldPathImpl.create(descriptor, f))));
    }

    private Document start(Descriptors.Descriptor root, FieldPath path, Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(f -> this.build(root, path.build(f))));

        return inner.isEmpty() ? inner :
            line(String.format("visitor.start_message_field(\"%s\");", path.getInfo().field.getName()))
            .indent(inner)
            .append(line("visitor.end_message_field();"));
    }

    private Document build(Descriptors.Descriptor root, FieldPath path)
    {
        switch (path.getInfo().field.getType())
        {
            case MESSAGE:
                return build(root, path, path.getInfo().field.getMessageType());
            default:
                return empty;
        }
    }

    private Document build(Descriptors.Descriptor root, FieldPath path, Descriptors.Descriptor message)
    {
        if(message.equals(CMV.getDescriptor()))
        {
            return handler(root, path, message.getName());
        }
        else if(message.equals(MV.getDescriptor()))
        {
            return handler(root, path, message.getName());
        }
        else if(message.equals(BCR.getDescriptor()))
        {
            return handler(root, path, message.getName());
        }
        else
        {
            return start(root, path, message);
        }
    }

    private Document handler(Descriptors.Descriptor root, FieldPath path, String type)
    {
        return line(
                String.format(
                    "visitor.handle(\"%s\", [](%s& profile) -> commonmodule::%s* {",
                    path.getInfo().field.getName(),
                        this.cppMessageName(root),
                        type
                )
        ).indent(
                line(String.format("return %s;", accessor(path)))
        ).append("});");
    }

    private static String accessor(FieldPath path) {
        final StringBuilder builder = new StringBuilder("profile");
        path.visit(info ->
                builder.append(info.depth == 0 ? ".mutable_" : "->mutable_").append(info.field.getName().toLowerCase()).append("()")
        );
        return builder.toString();
    }


}
