package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;

public final class ConcatenatedDocument extends DocumentBase {

    private final Document first;
    private final Document second;

    ConcatenatedDocument(Document first, Document second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public void write(LinePrinter printer) {
        first.write(printer);
        second.write(printer);
    }

}
