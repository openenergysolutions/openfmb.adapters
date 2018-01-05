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

    public static final Document empty = BasicDocument.empty();

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

    public static Document join(Document... documents) {
        return join(Arrays.stream(documents));
    }

    public static Document join(Stream<Document> documents) {
        return documents.reduce(Document::append).get();
    }

    public static Document spaced(Document... documents) {
        return Arrays.asList(documents).stream().reduce((lhs, rhs) -> lhs.append(space).append(rhs)).orElseGet(()->Documents.space);
    }

    public static Document spaced(Stream<Document> documents) {
        return documents.reduce((lhs, rhs) -> lhs.append(space).append(rhs)).orElseGet(()->Documents.space);
    }

    public static Document indent(Document document) {
        return new IndentedDocument(document);
    }

    public static Document indent(String line) {
        return indent(line(line));
    }

    public static Document guards(String className, Document...inner)
    {
        return lines(
                    String.format("#ifndef OPENFMB_%s_H", className.toUpperCase()),
                    String.format("#define OPENFMB_%s_H", className.toUpperCase())
                )
                .space()
                .append(Documents.join(inner))
                .space()
                .append("#endif")
                .space();
    }

    public static Document namespace(String namespace, Document... inner)
    {
        return line("namespace " + namespace + " {")
                .append(space)
                .append(Documents.join(inner))
                .append(space)
                .append(String.format("} // end namespace %s", namespace));
    }

    public static Document clazz(String name, Document inner)
    {
        return line("class " + name + " {").indent(inner).append("};");
    }

    public static Document include(String filename)
    {
        return line(String.format("#include \"%s\"", filename));
    }

    public static Document include(Standard value)
    {
        return line(String.format("#include <%s>", value.toString()));
    }
}
