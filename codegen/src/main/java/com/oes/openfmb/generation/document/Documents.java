package com.oes.openfmb.generation.document;

import com.oes.openfmb.generation.document.impl.SimpleDocument;

import java.util.Collections;

public class Documents {

    public static Document line(String line) {
        return new SimpleDocument(Collections.singletonList(line));
    }

}
