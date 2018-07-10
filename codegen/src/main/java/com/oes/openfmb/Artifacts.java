package com.oes.openfmb;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.dds.ConvertFromProto;
import com.oes.openfmb.generation.dds.ConvertToProto;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.proto.MessageVisitorFiles;
import com.oes.openfmb.generation.proto.ModelVisitorFiles;
import com.oes.openfmb.generation.proto.TypedModelVisitorFiles;
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

    private static Iterable<Artifact> convert(Path includeDirectory, Path implDirectory, List<CppFileCollection> collections)
    {
        return collections.stream().flatMap(collection ->
                Stream.concat(
                        collection.headers().stream().map(f -> Artifact.create(includeDirectory.resolve(f.getFileName()), f.getSupplier())),
                        collection.implementations().stream().map(f -> Artifact.create(implDirectory.resolve(f.getFileName()), f.getSupplier()))
                )
        ).collect(Collectors.toList());
    }

    public static class Conversions
    {

        private static CppFileCollection fromProto = new ConvertFromProto();
        private static CppFileCollection toProto = new ConvertToProto();

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

        private static List<CppFileCollection> cppFilePairs() {

            return Arrays.asList(
                    MessageVisitorFiles.from(descriptors()),
                    ModelVisitorFiles.from(descriptors()),
                    TypedModelVisitorFiles.from(descriptors())
            );
        }

        public static Iterable<Artifact> get(Path includeDirectory, Path implDirectory)
        {
            return convert(includeDirectory, implDirectory, cppFilePairs());
        }
    }


}
