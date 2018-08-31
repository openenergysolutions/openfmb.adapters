package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.util.DescriptorUtil;

import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

class Helpers {

    private Helpers() {}

    static String getProtoName(Descriptors.Descriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    static String getDDSName(Descriptors.Descriptor d)
    {
        return "twinoaks::" + getProtoName(d);
    }

    static Set<Descriptors.Descriptor> getAllChildDescriptors(List<Descriptors.Descriptor> profiles)
    {
        return profiles.stream().map(DescriptorUtil::findUniqueSubMessages).flatMap(Set::stream).collect(Collectors.toSet());
    }

    static Set<Descriptors.EnumDescriptor> getEnumSet(List<Descriptors.Descriptor> profiles)
    {
        return profiles.stream().map(DescriptorUtil::findUniqueEnums).flatMap(Set::stream).collect(Collectors.toSet());
    }
}
