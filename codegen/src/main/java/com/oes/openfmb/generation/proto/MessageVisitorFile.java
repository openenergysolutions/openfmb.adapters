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

import static com.oes.openfmb.generation.document.Documents.*;

public class MessageVisitorFile extends CppFilePair {

    private final Descriptors.Descriptor descriptor;
    private final String profileIncludeFile;

    public MessageVisitorFile(Descriptors.Descriptor descriptor, String profileIncludeFile) {
        this.descriptor = descriptor;
        this.profileIncludeFile = profileIncludeFile;
    }

    public String baseFileName() {
        return descriptor.getName() + "Visitor";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                include(this.profileIncludeFile),
                include("../IProtoVisitor.h"),
                Documents.space,
                namespace(
                        "adapter",
                        line(getVisitSignature() + ";")
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
                        visitImpl()
                )
        );
    }

    private String cppMessageName()
    {
        return this.descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature()
    {
        return String.format("void visit(IProtoVisitor<%s>& visitor)", this.cppMessageName());
    }

    private Document visitImpl()
    {
        return line(getVisitSignature())
                .append("{")
                .indent(start(this.descriptor)) // recursively build up the implementation
                .append("}");

    }

    private Document start(Descriptors.Descriptor descriptor)
    {
        return join(descriptor.getFields().stream().map(f -> this.build(FieldPathImpl.create(descriptor, f))));
    }

    private Document start(FieldPath path, Descriptors.Descriptor descriptor)
    {
        final Document inner = join(descriptor.getFields().stream().map(f -> this.build(path.build(f))));

        return inner.isEmpty() ? inner :
            line(String.format("visitor.start_message_field(\"%s\");", path.getInfo().field.getName()))
            .indent(inner)
            .append(line("visitor.end_message_field();"));
    }

    private Document build(FieldPath path)
    {
        switch (path.getInfo().field.getType())
        {
            case MESSAGE:
                return build(path, path.getInfo().field.getMessageType());
            default:
                return empty;
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
        else
        {
            return start(path, message);
        }
    }

    private Document handler(FieldPath path, String type)
    {
        return line(
                String.format(
                    "visitor.handle(\"%s\", [](%s& profile) -> commonmodule::%s* {",
                    path.getInfo().field.getName(),
                        this.cppMessageName(),
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
