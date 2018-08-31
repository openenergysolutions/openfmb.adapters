package com.oes.openfmb.generation.dds;

import com.oes.openfmb.util.DescriptorUtil;
import openfmb.breakermodule.BreakerReadingProfile;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.util.Arrays;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Profiles {

    private static final List<com.google.protobuf.Descriptors.Descriptor> profiles = Arrays.asList(
            ResourceReadingProfile.getDescriptor(),
            BreakerReadingProfile.getDescriptor()
    );

    static Stream<com.google.protobuf.Descriptors.EnumDescriptor> getEnums()
    {
        return enums.stream();
    }

    public static Stream<com.google.protobuf.Descriptors.Descriptor> getDescriptors()
    {
        return descriptors.stream();
    }

    public static Stream<com.google.protobuf.Descriptors.Descriptor> getProfiles()
    {
        return profiles.stream();
    }

    private static final Set<com.google.protobuf.Descriptors.Descriptor> descriptors = buildDescriptorSet(profiles);
    private static final Set<com.google.protobuf.Descriptors.EnumDescriptor> enums = buildEnumSet(profiles);

    private static Set<com.google.protobuf.Descriptors.Descriptor> buildDescriptorSet(List<com.google.protobuf.Descriptors.Descriptor> descriptors)
    {
        return descriptors.stream().map(DescriptorUtil::findUniqueSubMessages).flatMap(Set::stream).collect(Collectors.toSet());
    }

    private static Set<com.google.protobuf.Descriptors.EnumDescriptor> buildEnumSet(List<com.google.protobuf.Descriptors.Descriptor> descriptors)
    {
        return descriptors.stream().map(DescriptorUtil::findUniqueEnums).flatMap(Set::stream).collect(Collectors.toSet());
    }
}
