package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.util.DescriptorUtil;
import openfmb.Uml;

import java.util.*;
import java.util.function.Function;
import java.util.stream.Collectors;

public class Helpers {

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

    public static List<Descriptors.Descriptor> getChildDescriptors(List<Descriptors.Descriptor> profiles)
    {
        final List<Descriptors.Descriptor> list = profiles.stream().map(DescriptorUtil::findUniqueSubMessages).flatMap(List::stream).distinct().collect(Collectors.toList());

        final Function<Descriptors.Descriptor, Boolean> isExcluded = d ->
                primitiveWrappers.contains(d) || profiles.contains(d) || (Helpers.getOptionalEnumWrapper(d) != null);

        return list.stream().filter(d -> !isExcluded.apply(d)).collect(Collectors.toList());
    }

    public static List<Descriptors.EnumDescriptor> getEnumSet(Collection<Descriptors.Descriptor> profiles)
    {
        return profiles.stream().map(DescriptorUtil::findUniqueEnums).flatMap(List::stream).distinct().collect(Collectors.toList());
    }

    public static boolean isRequired(Descriptors.FieldDescriptor descriptor)
    {
        return descriptor.getOptions().getExtension(Uml.optionRequiredField);
    }

    public static boolean isInherited(Descriptors.FieldDescriptor descriptor)
    {
        return descriptor.getOptions().getExtension(Uml.optionParentMessage);
    }

    public static boolean isOptionalPrimitiveWrapper(Descriptors.Descriptor descriptor)
    {
        return primitiveWrappers.contains(descriptor);
    }

    public static Descriptors.EnumDescriptor getOptionalEnumWrapper(Descriptors.Descriptor descriptor)
    {
        if(!descriptor.getName().startsWith("Optional_")) {
            return null;
        }

        final List<Descriptors.FieldDescriptor> fields = descriptor.getFields();
        if(fields.size() != 1) return null;
        final Descriptors.FieldDescriptor field = fields.get(0);
        if(field.getType() != Descriptors.FieldDescriptor.Type.ENUM) return null;

        return field.getName().equals("value") ? field.getEnumType() : null;
    }
}
