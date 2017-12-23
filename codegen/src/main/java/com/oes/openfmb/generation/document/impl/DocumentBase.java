package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;

abstract class DocumentBase implements Document {

    @Override
    public final Document append(String line) {
        return this.append(Documents.line(line));
    }

    @Override
    public final Document append(Document other) {
        return new ConcatenatedDocuments(this, other);
    }

    @Override
    public Document prepend(String line) {
        return this.prepend(Documents.line(line));
    }

    @Override
    public Document prepend(Document other) {
        return new ConcatenatedDocuments(other, this);
    }

    @Override
    public Document indent(String line) {
        return this.indent(Documents.line(line));
    }

    @Override
    public Document indent(Document other) {
        return this.append(Documents.indent(other));
    }

    @Override
    public Document prefix(String prefix) {
        return Documents.prefixed(this, prefix);
    }
}
