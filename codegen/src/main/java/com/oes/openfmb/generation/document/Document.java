package com.oes.openfmb.generation.document;

public interface Document {

    void write(LinePrinter printer);

    // Append a single line to this document
    Document append(String... lines);

    // Append a document to this document
    Document append(Document other);

    // Prepend a single line to this document
    Document prepend(String line);

    // Prepend a document to this document
    Document prepend(Document other);

    Document indent(String line);

    Document indent(Document other);

    Document prefix(String prefix);

    Document space();

}
