package com.oes.openfmb.generation.dds;


import com.google.protobuf.Descriptors;
import openfmb.commonmodule.*;
import openfmb.commonmodule.Vector;
import openfmb.resourcemodule.ResourceReading;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.util.*;
import java.util.stream.Collectors;

/**
 * Additional type info to account for inheritance differences between protos and UML
 */
public class TypeInfo {

    // key inherits from value
    private static Map<Descriptors.Descriptor, Descriptors.Descriptor> inheritance = new HashMap<>();

    private static Map<Descriptors.Descriptor, Set<String>> requiredFields = new HashMap<>();

    private static Set<Descriptors.Descriptor> omitImpl = new HashSet<>();

    private static void required(Descriptors.Descriptor descriptor, String... names)
    {
        requiredFields.put(descriptor, Arrays.asList(names).stream().collect(Collectors.toSet()));
    }

    static {
        // map of inherited types
        inheritance.put(LogicalNode.getDescriptor(), IdentifiedObject.getDescriptor());
        inheritance.put(ReadingMMXU.getDescriptor(), LogicalNode.getDescriptor());
        inheritance.put(ReadingMMTR.getDescriptor(), LogicalNode.getDescriptor());
        inheritance.put(ReadingMMTN.getDescriptor(), LogicalNode.getDescriptor());
        inheritance.put(ResourceReadingProfile.getDescriptor(), ReadingMessageInfo.getDescriptor());
        inheritance.put(ResourceReading.getDescriptor(), ConductingEquipmentTerminalReading.getDescriptor());
        inheritance.put(ReadingMessageInfo.getDescriptor(),IdentifiedObject.getDescriptor());
        inheritance.put(Terminal.getDescriptor(), ACDCTerminal.getDescriptor());
        inheritance.put(ACDCTerminal.getDescriptor(), IdentifiedObject.getDescriptor());
        inheritance.put(IED.getDescriptor(), IdentifiedObject.getDescriptor());
        inheritance.put(Meter.getDescriptor(), ConductingEquipment.getDescriptor());
        inheritance.put(ConductingEquipment.getDescriptor(), IdentifiedObject.getDescriptor());

        // map of required fields
        required(Vector.getDescriptor(), "mag");
        required(ResourceReadingProfile.getDescriptor(), "ied", "meter", "resourceReading");
        required(ConductingEquipmentTerminalReading.getDescriptor(), "terminal");
        required(BCR.getDescriptor(), "q", "t");
        required(CMV.getDescriptor(), "cVal", "q", "t");
        required(MV.getDescriptor(), "mag", "q", "t");
        required(ReadingMessageInfo.getDescriptor(), "messageTimeStamp");

        omitImpl.add(Quality.getDescriptor());
    }

    public static class Tests {
        private final Descriptors.Descriptor self;

        public Tests(Descriptors.Descriptor self) {
            this.self = self;
        }

        boolean inheritedFrom(Descriptors.Descriptor other)
        {
            final Descriptors.Descriptor value = TypeInfo.inheritance.get(self);
            return (value != null) && value.equals(other);
        }

    }

    public static Tests is(Descriptors.Descriptor descriptor)
    {
        return new Tests(descriptor);
    }

    public static boolean required(Descriptors.FieldDescriptor field)
    {
        final Set<String> fields = requiredFields.get(field.getContainingType());
        return (fields != null) && fields.contains(field.getName());
    }

    public static boolean omit(Descriptors.Descriptor descriptor)
    {
        return omitImpl.contains(descriptor);
    }
}
