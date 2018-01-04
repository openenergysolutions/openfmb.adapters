package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.proto.AccessorsFile;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.nio.file.Path;
import java.util.Arrays;

public class ProtoHelpers {


    private static AccessorsFile resourceReadingProfileHelpers = new AccessorsFile(
            "resourcemodule/resourcemodule.pb.h",
            ResourceReadingProfile.getDescriptor()
    );

    public static Iterable<Artifact> artifacts(Path directory) {
        return Arrays.asList(
            Artifact.create(directory.resolve("ResourceReadingProfileMap.h"), () -> resourceReadingProfileHelpers.header()),
            Artifact.create(directory.resolve("ResourceReadingProfileMap.cpp"), () -> resourceReadingProfileHelpers.implementation())
        );
    }

}
