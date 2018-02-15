package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.dds.ConversionsFile;
import com.oes.openfmb.generation.document.CppFilePair;

import java.nio.file.Path;
import java.util.Arrays;

public class Conversions {

    private static CppFilePair conversions = new ConversionsFile();

    public static Iterable<Artifact> artifacts(Path directory) {
        return Arrays.asList(
                Artifact.create(directory.resolve(conversions.headerFileName()), conversions::header),
                Artifact.create(directory.resolve(conversions.implementationFileName()), conversions::implementation)
        );
    }

}