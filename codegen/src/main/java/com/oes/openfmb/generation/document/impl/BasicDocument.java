package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;

import java.util.Collections;
import java.util.List;

public final class BasicDocument extends DocumentBase {

    private final List<String> lines;

    public BasicDocument(String line) {
        this.lines = Collections.singletonList(line);
    }

    public BasicDocument(List<String> lines) {
        this.lines = lines;
    }

    public static Document empty()
    {
        return new BasicDocument(Collections.emptyList());
    }

    @Override
    public boolean isEmpty() {
        return lines.isEmpty();
    }

    @Override
    public void write(LinePrinter printer) {
        this.lines.forEach(line -> printer.print(0, line));
    }

}
