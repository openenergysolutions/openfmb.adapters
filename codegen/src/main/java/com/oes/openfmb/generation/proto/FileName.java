package com.oes.openfmb.generation.proto;

import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.Document;

import java.util.Collections;
import java.util.List;
import java.util.function.Supplier;

class FileName {

    final String baseName;

    FileName(String baseName) {
        this.baseName = baseName;
    }

    String getHeaderName() {
        return baseName + ".h";
    }

    String getImplementationName() {
        return baseName + ".cpp";
    }

    CppFile getHeader(Supplier<Document> supplier) {
        return new CppFile(getHeaderName(), supplier);
    }

    CppFile getImplementation(Supplier<Document> supplier) {
        return new CppFile(getImplementationName(), supplier);
    }

    List<CppFile> createHeaderList(Supplier<Document> supplier) {
        return Collections.singletonList(getHeader(supplier));
    }

    List<CppFile> createImplementationList(Supplier<Document> supplier) {
        return Collections.singletonList(getImplementation(supplier));
    }
}
