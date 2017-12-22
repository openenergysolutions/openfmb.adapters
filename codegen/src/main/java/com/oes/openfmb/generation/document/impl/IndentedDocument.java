package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;

public final class IndentedDocument extends DocumentBase {

    private final Document first;
    private final Document second;

    IndentedDocument(Document first, Document second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public void write(LinePrinter printer) {
        first.write(printer);
        second.write((indent, line) -> printer.print(indent + 1, line));
    }

}
