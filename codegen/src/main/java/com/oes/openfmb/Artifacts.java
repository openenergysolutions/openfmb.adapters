package com.oes.openfmb;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.dds.ConvertFromProto;
import com.oes.openfmb.generation.dds.ConvertToProto;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.proto.MessageVisitorFile;
import com.oes.openfmb.generation.proto.MutableModelVisitorFile;
import com.oes.openfmb.generation.proto.MutableModelVisitorTemplatesFile;
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
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

import static com.oes.openfmb.generation.proto.OldModelVisitorFile.from;

public class Artifacts {

    private static Iterable<Artifact> convert(Path includeDirectory, Path implDirectory, List<CppFilePair> files)
    {
        return files.stream().flatMap(pair ->
                Stream.of(
                        Artifact.create(includeDirectory.resolve(pair.headerFileName()), pair::header),
                        Artifact.create(implDirectory.resolve(pair.implementationFileName()), pair::implementation)
                )
        ).collect(Collectors.toList());
    }

    public static class Conversions
    {

        private static CppFilePair fromProto = new ConvertFromProto();
        private static CppFilePair toProto = new ConvertToProto();

        public static Iterable<Artifact> get(Path directory) {
            return convert(directory, directory, Arrays.asList(fromProto, toProto));
        }
    }

    public static class Visitors
    {
        private static List<Descriptors.Descriptor> descriptors = Arrays.asList(
                ResourceReadingProfile.getDescriptor(),
                // switch
                SwitchReadingProfile.getDescriptor(),
                SwitchStatusProfile.getDescriptor(),
                SwitchControlProfile.getDescriptor(),
                // ess
                ESSReadingProfile.getDescriptor(),
                ESSStatusProfile.getDescriptor(),
                ESSControlProfile.getDescriptor(),
                //solar
                SolarReadingProfile.getDescriptor(),
                SolarStatusProfile.getDescriptor(),
                SolarControlProfile.getDescriptor(),
                // load
                LoadReadingProfile.getDescriptor(),
                LoadStatusProfile.getDescriptor(),
                LoadControlProfile.getDescriptor()
        );

        private static class Include
        {
            static String module(String name){
                return String.format("%smodule/%smodule.pb.h", name, name);
            }

            static final String resourceModule = module("resource");
            static final String switchModule = module("switch");
            static final String essModule = module("ess");
            static final String solarModule = module("solar");
            static final String loadModule = module("load");
        }

        private static List<String> includes = Arrays.asList(
                Include.resourceModule,
                Include.switchModule,
                Include.essModule,
                Include.solarModule,
                Include.loadModule
        );

        private static List<CppFilePair> cppFilePairs() {
            return Arrays.asList(

                    new MessageVisitorFile(descriptors, includes),
                    new MutableModelVisitorTemplatesFile(descriptors, includes),

                    MutableModelVisitorFile.from(ResourceReadingProfile.getDescriptor(), Include.resourceModule),

                    from(ResourceReadingProfile.getDescriptor(), Include.resourceModule),

                    from(SwitchReadingProfile.getDescriptor(), Include.switchModule),
                    from(SwitchStatusProfile.getDescriptor(), Include.switchModule),
                    from(SwitchControlProfile.getDescriptor(), Include.switchModule),

                    from(ESSReadingProfile.getDescriptor(), Include.essModule),
                    from(ESSStatusProfile.getDescriptor(), Include.essModule),
                    from(ESSControlProfile.getDescriptor(), Include.essModule),

                    from(SolarReadingProfile.getDescriptor(), Include.solarModule),
                    from(SolarStatusProfile.getDescriptor(), Include.solarModule),
                    from(SolarControlProfile.getDescriptor(), Include.solarModule),

                    from(LoadReadingProfile.getDescriptor(), Include.loadModule),
                    from(LoadStatusProfile.getDescriptor(), Include.loadModule),
                    from(LoadControlProfile.getDescriptor(), Include.loadModule)
            );
        }

        public static Iterable<Artifact> get(Path includeDirectory, Path implDirectory)
        {
            return convert(includeDirectory, implDirectory, cppFilePairs());
        }
    }


}
