package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;
import openfmb.breakermodule.BreakerReadingProfile;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;

public class Conversions
{
    private final static Path path = Paths.get("../plugins/dds/twinoaks/src/twinoaks/generated");

    public final static GeneratedFileSet set = new GeneratedFileSet(
            Arrays.asList(path, path),
            FileGenerator.convert(path, path, cppFilePairs())
    );

    private static List<CppFileCollection> cppFilePairs() {

        // list of profiles to support in DDS bindings
        final List<Descriptors.Descriptor> profiles = Arrays.asList(
                ResourceReadingProfile.getDescriptor(),
                BreakerReadingProfile.getDescriptor()
        );

        return Arrays.asList(
                new ConvertToProto(profiles),
                new ConvertFromProto(profiles)
        );
    }

}
