package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.LinePrinter;

import java.util.Collections;

public final class BasicDocument extends DocumentBase {

    private final Iterable<String> lines;

    public BasicDocument(String line) {
        this.lines = Collections.singletonList(line);
    }

    public BasicDocument(Iterable<String> lines) {
        this.lines = lines;
    }

    @Override
    public void write(LinePrinter printer) {
        this.lines.forEach(line -> printer.print(0, line));
    }

}
