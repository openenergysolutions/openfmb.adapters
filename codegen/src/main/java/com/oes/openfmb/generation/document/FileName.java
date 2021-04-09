// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document;

import java.util.Collections;
import java.util.List;
import java.util.function.Supplier;

public class FileName {

    public final String baseName;

    public FileName(String baseName) {
        this.baseName = baseName;
    }

    public String getHeaderName() {
        return baseName + ".h";
    }

    public String getImplementationName() {
        return baseName + ".cpp";
    }

    public CppFile getHeader(Supplier<Document> supplier) {
        return new CppFile(getHeaderName(), supplier);
    }

    public CppFile getImplementation(Supplier<Document> supplier) {
        return new CppFile(getImplementationName(), supplier);
    }

    public List<CppFile> createHeaderList(Supplier<Document> supplier) {
        return Collections.singletonList(getHeader(supplier));
    }

    public List<CppFile> createImplementationList(Supplier<Document> supplier) {
        return Collections.singletonList(getImplementation(supplier));
    }
}
