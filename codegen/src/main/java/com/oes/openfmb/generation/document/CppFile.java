// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document;

import java.util.function.Supplier;

public class CppFile {

    private final String fileName;
    private final Supplier<Document> supplier;

    public CppFile(String fileName, Supplier<Document> supplier) {
        this.fileName = fileName;
        this.supplier = supplier;
    }

    public String getFileName()
    {
        return this.fileName;
    }

    public Supplier<Document> getSupplier()
    {
        return supplier;
    }
}
