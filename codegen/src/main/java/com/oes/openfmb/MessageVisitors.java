package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.proto.MessageVisitorFile;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.nio.file.Path;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class MessageVisitors {


    private static Stream<CppFilePair> files() {
        return Stream.of(
                new MessageVisitorFile(
                        ResourceReadingProfile.getDescriptor(),
                        "resourcemodule/resourcemodule.pb.h"
                )
        );
    }

    public static Iterable<Artifact> artifacts(Path directory) {

        return files().flatMap(cpp ->
                Stream.of(
                        Artifact.create(directory.resolve(cpp.headerFileName()), cpp::header),
                        Artifact.create(directory.resolve(cpp.implementationFileName()), cpp::implementation)
                )
        ).collect(Collectors.toList());
    }

}
