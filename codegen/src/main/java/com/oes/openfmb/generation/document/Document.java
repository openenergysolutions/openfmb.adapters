package com.oes.openfmb.generation.document;

import com.oes.openfmb.generation.document.impl.BasicDocument;
import com.oes.openfmb.generation.document.impl.PrefixedDocument;

import java.util.Arrays;
import java.util.stream.Stream;

public interface Document {

    Document space = new BasicDocument("");

    Document empty = BasicDocument.empty();

    boolean isEmpty();

    void write(LinePrinter printer);

    // Append a single line to this document
    Document then(String... lines);

    // Append a document to this document
    Document then(Document other);

    Document bracket(Document... inner);

    Document bracketSemicolon(Document... inner);

    Document bracketWithSuffix(Document document, String suffix);

    Document indent(String line);

    Document indent(Document other);

    Document prefix(String prefix);

    Document space();

    static Document prefixed(Document document, String prefix)
    {
        return new PrefixedDocument(document, prefix);
    }

    static Document line(String line) {
        return new BasicDocument(line);
    }

    static Document line(String line, Object... args) {
        return new BasicDocument(String.format(line, args));
    }

    static Document lines(String... lines) {
        return new BasicDocument(Arrays.asList(lines));
    }

    static Document join(Document... documents) {
        return join(Arrays.stream(documents));
    }

    static Document join(Stream<Document> documents) {
        return documents.reduce(Document::then).orElse(Document.empty);
    }

    static Document spaced(Document... documents) {
        return Arrays.stream(documents).reduce((lhs, rhs) -> lhs.then(space).then(rhs)).orElse(Document.empty);
    }

    static Document spaced(Stream<Document> documents) {
        return documents.reduce((lhs, rhs) -> lhs.then(space).then(rhs)).orElse(Document.empty);
    }

/*
    static Document indent(Document document) {
        return new IndentedDocument(document);
    }

    static Document indent(String line) {
        return indent(line(line));
    }
*/

    static Document guards(String className, Document...inner)
    {
        return lines(
                String.format("#ifndef OPENFMB_%s_H", className.toUpperCase()),
                String.format("#define OPENFMB_%s_H", className.toUpperCase())
        )
                .space()
                .then(Document.join(inner))
                .space()
                .then("#endif")
                .space();
    }

    static Document namespace(String namespace, Document... inner)
    {
        return line("namespace " + namespace + " {")
                .then(space)
                .then(Document.join(inner))
                .then(space)
                .then(String.format("} // end namespace %s", namespace));
    }

    static Document include(String filename)
    {
        return line(String.format("#include \"%s\"", filename));
    }

}
