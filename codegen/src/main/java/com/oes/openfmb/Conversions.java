package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.dds.ConversionsFile;

import java.nio.file.Path;
import java.util.Arrays;

public class Conversions {


    private static ConversionsFile conversions = new ConversionsFile("Conversions");

    public static Iterable<Artifact> artifacts(Path directory) {
        return Arrays.asList(
                Artifact.create(directory.resolve("Conversions.h"), () -> conversions.header()),
                Artifact.create(directory.resolve("Conversions.cpp"), () -> conversions.implementation())
        );
    }

}