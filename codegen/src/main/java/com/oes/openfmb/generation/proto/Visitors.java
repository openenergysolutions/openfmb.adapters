package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Profiles;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;
import openfmb.essmodule.ESSControlProfile;
import openfmb.essmodule.ESSReadingProfile;
import openfmb.essmodule.ESSStatusProfile;
import openfmb.loadmodule.LoadControlProfile;
import openfmb.loadmodule.LoadReadingProfile;
import openfmb.loadmodule.LoadStatusProfile;
import openfmb.resourcemodule.ResourceReadingProfile;
import openfmb.solarmodule.SolarControlProfile;
import openfmb.solarmodule.SolarReadingProfile;
import openfmb.solarmodule.SolarStatusProfile;
import openfmb.switchmodule.SwitchControlProfile;
import openfmb.switchmodule.SwitchReadingProfile;
import openfmb.switchmodule.SwitchStatusProfile;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;

public class Visitors
{
    private final static Path implDir = Paths.get("../adapter-api/src/config/generated");
    private final static Path includeDir = Paths.get("../adapter-api/include/adapter-api/config/generated");

    public final static GeneratedFileSet set = new GeneratedFileSet(
            Arrays.asList(implDir, includeDir),
            FileGenerator.convert(includeDir, implDir, cppFilePairs())
    );

    private static List<CppFileCollection> cppFilePairs() {

        return Arrays.asList(
                MessageVisitorFiles.from(Profiles.descriptors),
                ModelVisitorFiles.from(Profiles.descriptors),
                TypedModelVisitorFiles.from(Profiles.descriptors)
        );
    }

}
