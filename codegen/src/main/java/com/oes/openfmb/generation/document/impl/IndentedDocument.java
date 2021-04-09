// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;

public final class IndentedDocument extends DocumentBase {

    private final Document document;

    public IndentedDocument(Document document) {
        this.document = document;
    }


    @Override
    public boolean isEmpty() {
        return document.isEmpty();
    }

    @Override
    public void write(LinePrinter printer) {
        document.write((indent, line) -> printer.print(indent + 1, line));
    }

}
