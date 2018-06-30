package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;

import java.util.stream.Stream;

abstract class DocumentBase implements Document {

    @Override
    public final Document then(String... lines) {
        return this.then(Documents.lines(lines));
    }

    @Override
    public final Document then(Document other) {
        return new ConcatenatedDocuments(this, other);
    }

    @Override
    public Document bracket(Document... inner)
    {
        return then(Documents.line("{").indent(Documents.join(inner)).then("}"));
    }

    @Override
    public Document bracket(String... lines)
    {
        return bracket(Documents.join(Stream.of(lines).map(Documents::line)));
    }

    @Override
    public Document indent(String line) {
        return this.indent(Documents.line(line));
    }

    @Override
    public Document indent(Document other) {
        return this.then(Documents.indent(other));
    }

    @Override
    public Document prefix(String prefix) {
        return Documents.prefixed(this, prefix);
    }

    @Override
    public Document space() {
        return this.then(Documents.space);
    }
}
