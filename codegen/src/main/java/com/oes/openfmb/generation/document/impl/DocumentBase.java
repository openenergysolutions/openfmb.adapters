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
        return new ConcatenatedDocument(this, other);
    }

    @Override
    public final Document indent(String line) {
        return this.indent(Documents.line(line));
    }

    @Override
    public final Document indent(Document other) {
        return new IndentedDocument(this, other);
    }


}
