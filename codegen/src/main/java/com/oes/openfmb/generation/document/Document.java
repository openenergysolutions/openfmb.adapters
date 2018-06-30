package com.oes.openfmb.generation.document;

public interface Document {

    boolean isEmpty();

    void write(LinePrinter printer);

    // Append a single line to this document
    Document then(String... lines);

    // Append a document to this document
    Document then(Document other);

    Document bracket(Document... inner);

    Document bracket(String... lines);

    Document indent(String line);

    Document indent(Document other);

    Document prefix(String prefix);

    Document space();

    static Document start() { return Documents.empty; }

}
