package com.oes.openfmb.util;

import com.google.protobuf.Descriptors;

import java.util.HashSet;
import java.util.Set;
import java.util.function.Consumer;
import java.util.function.Function;

public class DescriptorUtil {

    public static Set<Descriptors.Descriptor> findUniqueSubMessages(Descriptors.Descriptor descriptor)
    {
        Set<Descriptors.Descriptor> set = new HashSet<>();
        addUniqueSubMessages(set, descriptor);
        return set;
    }

    public static Set<Descriptors.EnumDescriptor> findUniqueEnums(Descriptors.Descriptor descriptor)
    {
        Set<Descriptors.EnumDescriptor> set = new HashSet<>();
        addUniqueEnums(set, descriptor);
        return set;
    }

    public static Function<Descriptors.FieldDescriptor, Boolean> matches(Descriptors.Descriptor descriptor) {
        return field -> field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE && field.getMessageType().equals(descriptor);
    }

    private static void addUniqueSubMessages(Set<Descriptors.Descriptor> set, Descriptors.Descriptor descriptor)
    {
        set.add(descriptor);
        descriptor.getFields().forEach(f -> {
            if(f.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) {
                addUniqueSubMessages(set, f.getMessageType());
            }
        });
    }

    private static void addUniqueEnums(Set<Descriptors.EnumDescriptor> set, Descriptors.Descriptor descriptor)
    {
        descriptor.getFields().forEach(f -> {
            switch(f.getType())
            {
                case ENUM:
                    set.add(f.getEnumType());
                    break;
                case MESSAGE:
                    addUniqueEnums(set, f.getMessageType());
                    break;
                default:
                    break;
            }
        });
    }
}
