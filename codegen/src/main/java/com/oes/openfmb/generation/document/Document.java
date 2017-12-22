package com.oes.openfmb.generation.document;

public interface Document {

    void write(LinePrinter printer);

    // Append a single line to this document w/o indenting
    Document append(String line);

    // Append a document to this document w/o indenting
    Document append(Document other);

    // Append a single indented line to this document
    Document indent(String line);

    // Append a document to this document, and indent all of the lines by one level
    Document indent(Document other);

}
