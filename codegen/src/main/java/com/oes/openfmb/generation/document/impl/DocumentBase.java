package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;

import java.util.stream.Stream;

import static com.oes.openfmb.generation.document.Documents.join;

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
        return bracketWithSuffix(join(inner), "");
    }

    @Override
    public Document bracketSemicolon(Document... inner)
    {
        return bracketWithSuffix(join(inner), ";");
    }

    @Override
    public Document bracketWithSuffix(Document inner, String suffix) {
        return then(Documents.line("{").indent(inner).then("}"+suffix));
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
