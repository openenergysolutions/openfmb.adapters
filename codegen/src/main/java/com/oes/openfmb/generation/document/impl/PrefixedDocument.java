package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;

public final class PrefixedDocument extends DocumentBase {

    private final Document document;
    private final String prefix;

    public PrefixedDocument(Document document, String prefix) {
        this.document = document;
        this.prefix = prefix;
    }

    @Override
    public boolean isEmpty() {
        return document.isEmpty();
    }

    @Override
    public void write(LinePrinter printer) {
        document.write((indent, line) -> printer.print(indent, prefix + line));
    }

}
