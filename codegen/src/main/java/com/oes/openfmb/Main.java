package com.oes.openfmb;

import com.oes.openfmb.generation.document.GeneratedFileSet;
import com.oes.openfmb.generation.proto.Visitors;

import java.util.Collections;
import java.util.List;

public class Main {

    public static void main(String[] args) {

        final List<GeneratedFileSet> sets = Collections.singletonList(
                Visitors.set
        );

        sets.forEach(GeneratedFileSet::generate);
    }

}