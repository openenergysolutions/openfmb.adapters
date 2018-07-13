package com.oes.openfmb;

import com.oes.openfmb.generation.document.GeneratedFileSet;
import com.oes.openfmb.generation.enumeration.Enumerations;
import com.oes.openfmb.generation.proto.Visitors;

import java.util.stream.Stream;

public class Main {

    public static void main(String[] args) {

        final Stream<GeneratedFileSet> sets = Stream.concat(
                Stream.of(Visitors.set),
                Enumerations.sets.stream()
        );

        sets.forEach(GeneratedFileSet::generate);
    }

}