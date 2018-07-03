package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;

abstract class DocumentBase implements Document {

    @Override
    public final Document then(String... lines) {
        return this.then(Document.lines(lines));
    }

    @Override
    public final Document then(Document other) {
        return new ConcatenatedDocuments(this, other);
    }

    @Override
    public Document bracket(Document... inner)
    {
        return bracketWithSuffix(Document.join(inner), "");
    }

    @Override
    public Document bracketSemicolon(Document... inner)
    {
        return bracketWithSuffix(Document.join(inner), ";");
    }

    @Override
    public Document bracketWithSuffix(Document inner, String suffix) {
        return then(Document.line("{").indent(inner).then("}"+suffix));
    }

    @Override
    public Document indent(String line) {
        return this.indent(Document.line(line));
    }

    @Override
    public Document indent(Document other) {
        return this.then(new IndentedDocument(other));
    }

    @Override
    public Document prefix(String prefix) {
        return Document.prefixed(this, prefix);
    }

    @Override
    public Document space() {
        return this.then(Document.space);
    }
}
