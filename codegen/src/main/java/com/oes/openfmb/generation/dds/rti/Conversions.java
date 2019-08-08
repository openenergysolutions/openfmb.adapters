package com.oes.openfmb.generation.dds.rti;

import com.oes.openfmb.generation.Profiles;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;

public class Conversions
{
    private final static Path path = Paths.get("../plugins/dds/rti/src/generated");

    public final static GeneratedFileSet set = new GeneratedFileSet(
            Arrays.asList(path, path),
            FileGenerator.convert(path, path, cppFilePairs())
    );

    private static List<CppFileCollection> cppFilePairs() {

        return Arrays.asList(
                new ConvertToProto(Profiles.set),
                new ConvertFromProto(Profiles.set),
                new SubscriberFactory(Profiles.set),
                new PublisherFactory(Profiles.set)
        );
    }

}
