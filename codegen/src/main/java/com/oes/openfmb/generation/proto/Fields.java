package com.oes.openfmb.generation.proto;

import com.oes.openfmb.FieldPath;
import com.oes.openfmb.generation.document.Document;
import static com.oes.openfmb.generation.document.Documents.*;

public class Fields {

    public static Document getter(FieldPath path) {

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
