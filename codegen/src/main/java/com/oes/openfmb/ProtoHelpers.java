package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.proto.AccessorsFile;
import com.oes.openfmb.proto.ResourceReadingProfileOuterClass;

import java.nio.file.Path;
import java.util.Arrays;

public class ProtoHelpers {


    private static AccessorsFile resourceReadingProfileHelpers = new AccessorsFile(ResourceReadingProfileOuterClass.ResourceReadingProfile.getDescriptor());

    public static Iterable<Artifact> artifacts(Path directory) {
        return Arrays.asList(
            Artifact.create(directory.resolve("ResourceReadingProfileHelpers.h"), () -> resourceReadingProfileHelpers.header()),
            Artifact.create(directory.resolve("ResourceReadingProfileHelpers.cpp"), () -> resourceReadingProfileHelpers.implementation())
        );
    }

}
