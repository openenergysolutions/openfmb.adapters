package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.dds.ConvertFromProto;
import com.oes.openfmb.generation.dds.ConvertToProto;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.proto.ArchiveVisitorFile;
import com.oes.openfmb.generation.proto.MessageVisitorFile;
import openfmb.resourcemodule.ResourceReadingProfile;
import openfmb.switchmodule.SwitchReadingProfile;
import openfmb.switchmodule.SwitchStatusProfile;

import java.nio.file.Path;
import java.util.Arrays;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Artifacts {

    private static Iterable<Artifact> convert(Path includeDirectory, Path implDirectory, CppFilePair... files)
    {
        return Arrays.stream(files).flatMap(pair ->
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
            return convert(directory, directory, fromProto, toProto);
        }
    }

    public static class Visitors
    {
        private static final CppFilePair modelVisitors =
                new MessageVisitorFile(
                        Arrays.asList(
                                ResourceReadingProfile.getDescriptor(),
                                SwitchReadingProfile.getDescriptor(),
                                SwitchStatusProfile.getDescriptor()
                        ),
                        Arrays.asList(
                                "resourcemodule/resourcemodule.pb.h",
                                "switchmodule/switchmodule.pb.h"
                        )
                );

        private static final CppFilePair archiveVisitors =
                new ArchiveVisitorFile(
                        Arrays.asList(
                                ResourceReadingProfile.getDescriptor(),
                                SwitchReadingProfile.getDescriptor(),
                                SwitchStatusProfile.getDescriptor()
                        ),
                        Arrays.asList(
                                "resourcemodule/resourcemodule.pb.h",
                                "switchmodule/switchmodule.pb.h"
                        )
                );

        public static Iterable<Artifact> get(Path includeDirectory, Path implDirectory) {
            return convert(includeDirectory, implDirectory, modelVisitors, archiveVisitors);
        }
    }


}
