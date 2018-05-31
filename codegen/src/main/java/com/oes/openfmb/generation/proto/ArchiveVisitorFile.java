package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.FieldPathImpl;
import openfmb.commonmodule.*;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Documents.*;

public class ArchiveVisitorFile extends CppFilePair {

    private final static Set<Descriptors.Descriptor> measurementTypes = new HashSet<>(
            Arrays.asList(
                CMV.getDescriptor(),
                MV.getDescriptor(),
                BCR.getDescriptor(),
                StatusDPS.getDescriptor()
            )
    );

    private final Iterable<Descriptors.Descriptor> descriptors;
    private final Iterable<String> includes;

    public ArchiveVisitorFile(Iterable<Descriptors.Descriptor> descriptors, Iterable<String> includes) {
        this.descriptors = descriptors;
        this.includes = includes;
    }

    @Override
    protected String baseFileName() {
        return "ArchiveVisitors";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                join(StreamSupport.stream(includes.spliterator(), false).map(Documents::include)),
                include("../IArchiveVisitor.h"),
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
                        spaced(
                                getDescriptorStream().map(this::visitImpl)
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
        return String.format("void visit(const %s& message, IArchiveVisitor& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        return line(getVisitSignature(descriptor))
                .append("{")
                .indent("const auto& level0 = message;")
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
            line(String.format("if(level%d.has_%s())", path.getInfo().depth, path.getInfo().field.getName().toLowerCase()))
            .append("{")
            .indent(String.format("const auto& level%d = level%d.%s();", path.getInfo().depth + 1, path.getInfo().depth, path.getInfo().field.getName().toLowerCase()))
            .indent(String.format("visitor.start_message_field(\"%s\");", path.getInfo().field.getName()))
            .indent(inner)
            .indent(line("visitor.end_message_field();"))
            .append("}");
    }

    private Document startRepeatedMessageField(FieldPath path, Descriptors.Descriptor descriptor)
    {
        line(String.format("for(decltype(%s.count())", path.getInfo().field.getName())

        //throw new RuntimeException("not implemented");
        return Documents.line("throw Exception(\"help!\");");
    }

    private Document build(FieldPath path)
    {
        if(path.getInfo().field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) {
            if(path.getInfo().field.isRepeated())
            {
                return startRepeatedMessageField(path, path.getInfo().field.getMessageType());
            }
            else
            {
                return build(path, path.getInfo().field.getMessageType());
            }
        }
        else
        {
            return Documents.empty;
        }
    }

    private Document build(FieldPath path, Descriptors.Descriptor message)
    {
        if(measurementTypes.contains(message))
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
        return line(String.format("if(level%d.has_%s())", path.getInfo().depth, path.getInfo().field.getName().toLowerCase()))
                .append("{")
                .indent(
                        String.format(
                                "visitor.handle(%s, level%d.%s());",
                                quoted(path.getInfo().field.getName()),
                                path.getInfo().depth,
                                path.getInfo().field.getName().toLowerCase()
                                )
                )
                .append("}");
    }

    private static String quoted(String input)
    {
        return "\"" + input + "\"";
    }


}
