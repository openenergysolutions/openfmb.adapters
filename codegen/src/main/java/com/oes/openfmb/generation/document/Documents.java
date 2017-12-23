package com.oes.openfmb.generation.document;

import com.oes.openfmb.generation.document.impl.IndentedDocument;
import com.oes.openfmb.generation.document.impl.BasicDocument;
import com.oes.openfmb.generation.document.impl.PrefixedDocument;

import java.util.Arrays;
import java.util.stream.Stream;

/**
 * Collection of static helper methods which can be imported to create a document DSL
 */
public class Documents {

    private Documents() {}

    public static final Document space = new BasicDocument("");

    public static Document prefixed(Document document, String prefix)
    {
        return new PrefixedDocument(document, prefix);
    }

    public static Document line(String line) {
        return new BasicDocument(line);
    }

    public static Document lines(String... lines) {
        return new BasicDocument(Arrays.asList(lines));
    }

    public static Document spaced(Stream<Document> documents) {
        return documents.reduce((lhs, rhs) -> lhs.append(space).append(rhs)).get();
    }

    public static Document indent(Document document) {
        return new IndentedDocument(document);
    }

    public static Document indent(String line) {
        return indent(line(line));
    }

    public static Document namespace(String namespace, Document inner)
    {
        return line("namespace " + namespace + " {").append(space).indent(inner).append("}");
    }
}
