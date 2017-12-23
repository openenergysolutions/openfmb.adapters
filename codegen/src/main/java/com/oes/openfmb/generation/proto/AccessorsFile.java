package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.FieldPath;
import com.oes.openfmb.generation.document.CppClassFile;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.DescriptorUtil;

import java.util.List;
import java.util.stream.Stream;

import static com.oes.openfmb.generation.document.Documents.*;

public class AccessorsFile implements CppClassFile {

    private final Descriptors.Descriptor descriptor;

    public AccessorsFile(Descriptors.Descriptor descriptor) {
        this.descriptor = descriptor;
    }

    @Override
    public Document header() {
        return Documents.line("test");
    }

    @Override
    public Document implementation() {

        return FileHeader.lines.append(
                Documents.namespace(
                    "openfmb",
                               definitions()
                )
        );

    }

    private Document definitions()
    {
        final List<FieldPath> analogs = DescriptorUtil.find(
                this.descriptor,
                DescriptorUtil.isMessageWithName("AnalogueValue")
        );

        final List<FieldPath> bcrs = DescriptorUtil.find(
                this.descriptor,
                DescriptorUtil.isMessageWithName("BCR")
        );

        return Documents.spaced(
                Stream.concat(
                        analogs.stream(),
                        bcrs.stream()
                ).map(f -> getter(f))
        );
    }

    private static List<FieldPath> analogs(Descriptors.Descriptor descriptor) {
        return DescriptorUtil.find(
                descriptor,
                DescriptorUtil.isMessageWithName("AnalogueValue")
        );
    }

    private static Document getter(FieldPath path) {

        final Document signature = line(
                String.format("[](%s& message) -> %s* {", path.getRoot().getName(), path.getInfo().field.getMessageType().getName())
        );

        return signature.indent(
                    String.format("return %s;", accessor(path))
                 ).append("}");
    }

    private static String accessor(FieldPath path) {
        final StringBuilder builder = new StringBuilder("message");
        path.visit(info ->
            builder.append(info.depth == 0 ? ".mutable_" : "->mutable_").append(info.field.getName().toLowerCase()).append("()")
        );
        return builder.toString();
    }

}
