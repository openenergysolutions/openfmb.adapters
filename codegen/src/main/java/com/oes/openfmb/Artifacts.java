package com.oes.openfmb;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.dds.ConvertFromProto;
import com.oes.openfmb.generation.dds.ConvertToProto;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.proto.MessageVisitorFile;
import com.oes.openfmb.generation.proto.ConfigModelVisitorFile;
import com.oes.openfmb.generation.proto.OldModelVisitorFile;
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
        private static List<Descriptors.Descriptor> descriptors()
        {
            return Arrays.asList(
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
        }

        private static List<CppFilePair> cppFilePairs() {

            return Stream.concat(
                   Stream.of(MessageVisitorFile.from(descriptors())),
                   Stream.concat(
                           descriptors().stream().map(ConfigModelVisitorFile::from),
                           descriptors().stream().map(OldModelVisitorFile::from)
                   )
            ).collect(Collectors.toList());
        }

        public static Iterable<Artifact> get(Path includeDirectory, Path implDirectory)
        {
            return convert(includeDirectory, implDirectory, cppFilePairs());
        }
    }


}
