// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.util;

import com.google.protobuf.Descriptors;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.function.Consumer;
import java.util.function.Function;

public class DescriptorUtil {

    public static List<Descriptors.Descriptor> findUniqueSubMessages(Descriptors.Descriptor descriptor)
    {
        List<Descriptors.Descriptor> list = new ArrayList<>();
        addUniqueSubMessages(list, descriptor);
        return list;
    }

    public static List<Descriptors.EnumDescriptor> findUniqueEnums(Descriptors.Descriptor descriptor)
    {
        List<Descriptors.EnumDescriptor> list = new ArrayList<>();
        addUniqueEnums(list, descriptor);
        return list;
    }

    public static Function<Descriptors.FieldDescriptor, Boolean> matches(Descriptors.Descriptor descriptor) {
        return field -> field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE && field.getMessageType().equals(descriptor);
    }

    private static void addUniqueSubMessages(List<Descriptors.Descriptor> list, Descriptors.Descriptor descriptor)
    {
        list.add(descriptor);
        descriptor.getFields().forEach(f -> {
            if(f.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) {
                addUniqueSubMessages(list, f.getMessageType());
            }
        });
    }

    private static void addUniqueEnums(List<Descriptors.EnumDescriptor> list, Descriptors.Descriptor descriptor)
    {
        descriptor.getFields().forEach(f -> {
            switch(f.getType())
            {
                case ENUM:
                    list.add(f.getEnumType());
                    break;
                case MESSAGE:
                    addUniqueEnums(list, f.getMessageType());
                    break;
                default:
                    break;
            }
        });
    }
}
