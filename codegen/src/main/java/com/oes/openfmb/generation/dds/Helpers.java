package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.util.DescriptorUtil;
import openfmb.Uml;
import openfmb.commonmodule.Quality;

import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

class Helpers {

    private Helpers() {}

    // registry of wrapper types - they correspond to optional DDS primitive types
    private static final Set<Descriptors.Descriptor> primitiveWrappers = new HashSet<>(
            Arrays.asList(
                    com.google.protobuf.BoolValue.getDescriptor(),
                    com.google.protobuf.FloatValue.getDescriptor(),
                    com.google.protobuf.Int32Value.getDescriptor(),
                    com.google.protobuf.Int64Value.getDescriptor(),
                    com.google.protobuf.StringValue.getDescriptor()
            )
    );

    static String getProtoName(Descriptors.GenericDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    static String getDDSName(Descriptors.GenericDescriptor d)
    {
        return "twinoaks::" + getProtoName(d);
    }

    static Set<Descriptors.Descriptor> getChildDescriptors(List<Descriptors.Descriptor> profiles)
    {
        final Set<Descriptors.Descriptor> set = profiles.stream().map(DescriptorUtil::findUniqueSubMessages).flatMap(Set::stream).collect(Collectors.toSet());
        // don't include the primitive wrappers
        set.removeAll(primitiveWrappers);
        // don't include the profiles themselves
        set.removeAll(profiles);
        return set;
    }

    static Set<Descriptors.EnumDescriptor> getEnumSet(List<Descriptors.Descriptor> profiles)
    {
        return profiles.stream().map(DescriptorUtil::findUniqueEnums).flatMap(Set::stream).collect(Collectors.toSet());
    }

    static boolean isRequired(Descriptors.FieldDescriptor descriptor)
    {
        return descriptor.getOptions().getExtension(Uml.optionRequiredField);
    }

    static boolean isInherited(Descriptors.FieldDescriptor descriptor)
    {
        return descriptor.getOptions().getExtension(Uml.optionParentMessage);
    }

    static boolean omitConversion(Descriptors.Descriptor descriptor)
    {
        return false;//descriptor.equals(Quality.getDescriptor());
    }

    static boolean isPrimitiveWrapper(Descriptors.Descriptor descriptor)
    {
        return primitiveWrappers.contains(descriptor);
    }
}
