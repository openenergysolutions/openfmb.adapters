package com.oes.openfmb;

import com.oes.openfmb.generation.document.GeneratedFileSet;
import com.oes.openfmb.generation.enumeration.Enumerations;
import com.oes.openfmb.generation.proto.Visitors;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Main {

    public static void main(String[] args) {


        final List<GeneratedFileSet> sets = Stream.of(
                // vistors methods used included with API library
                Stream.of(Visitors.set),
                // enumerations used by multiple modules
                Enumerations.sets.stream(),
                // Twinoaks DDS <=> proto conversion routines
                Stream.of(com.oes.openfmb.generation.dds.twinoaks.Conversions.set),
                // RTI DDS <=> proto conversion routines
                Stream.of(com.oes.openfmb.generation.dds.rti.Conversions.set)
        ).reduce(Stream::concat).orElseGet(Stream::empty).collect(Collectors.toList());



        sets.forEach(GeneratedFileSet::deleteFolders);
        sets.forEach(GeneratedFileSet::generate);
    }

}