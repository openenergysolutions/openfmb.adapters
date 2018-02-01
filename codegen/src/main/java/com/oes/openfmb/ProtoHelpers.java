package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.proto.AccessorsFile;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.nio.file.Path;
import java.util.Arrays;
import java.util.stream.Stream;

public class ProtoHelpers {


    private static Stream<CppFilePair> files() {
        return Stream.of(
                new AccessorsFile(
                        ResourceReadingProfile.getDescriptor(),
                        "resourcemodule/resourcemodule.pb.h"
                )
        );
    }

    public static Stream<Artifact> artifacts(Path directory) {

        return files().flatMap(cpp ->
                Stream.of(
                        Artifact.create(directory.resolve(cpp.headerFileName()), cpp::header),
                        Artifact.create(directory.resolve(cpp.implementationFileName()), cpp::implementation)
                )
        );
    }

}
