package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.LinePrinter;

public final class SimpleDocument extends DocumentBase {

    private final Iterable<String> lines;

    public SimpleDocument(Iterable<String> lines) {
        this.lines = lines;
    }

    @Override
    public void write(LinePrinter printer) {
        lines.forEach(l -> printer.print(0, l));
    }

}
