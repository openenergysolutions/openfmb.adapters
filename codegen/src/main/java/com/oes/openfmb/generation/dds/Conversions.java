package com.oes.openfmb.generation.dds;

import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;

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

        return Arrays.asList(
                new ConvertToProto(),
                new ConvertFromProto()
        );
    }

}
