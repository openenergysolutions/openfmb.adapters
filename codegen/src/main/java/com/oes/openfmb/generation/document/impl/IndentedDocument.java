package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;

public final class IndentedDocument extends DocumentBase {

    private final Document document;

    public IndentedDocument(Document document) {
        this.document = document;
    }

    @Override
    public void write(LinePrinter printer) {
        document.write((indent, line) -> printer.print(indent + 1, line));
    }

}