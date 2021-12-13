// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.proto;

import com.google.protobuf.*;
import openfmb.commonmodule.*;
import openfmb.commonmodule.Timestamp;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

class Helpers {

    static final Set<Descriptors.Descriptor> terminalMessages = new HashSet<>(
            Arrays.asList(
                    Quality.getDescriptor(),
                    Timestamp.getDescriptor(),
                    ControlTimestamp.getDescriptor(),
                    ClearingTime.getDescriptor()
            )
    );

    // certain types are only found as subtypes of terminal messages
    private static final Set<Descriptors.Descriptor> terminalMessageSubtypes = new HashSet<>(
            Arrays.asList(
                    DetailQual.getDescriptor(),
                    TimeQuality.getDescriptor(),
                    ENG_ScheduleParameter.getDescriptor(),
                    ClearingTime.getDescriptor()
            )
    );

    private static final Set<Descriptors.Descriptor> wrapperTypes = new HashSet<>(
            Arrays.asList(
                    StringValue.getDescriptor(),
                    BoolValue.getDescriptor(),
                    FloatValue.getDescriptor(),
                    DoubleValue.getDescriptor(),
                    Int32Value.getDescriptor(),
                    Int64Value.getDescriptor(),
                    UInt32Value.getDescriptor(),
                    UInt32Value.getDescriptor()
            )
    );

    static boolean isWrapperType(Descriptors.Descriptor descriptor)
    {
        return wrapperTypes.contains(descriptor);
    }


    static SortedMap<String, Descriptors.Descriptor> getFilteredChildMessageDescriptors(Iterable<Descriptors.Descriptor> descriptors, boolean includeWrapperTypes)
    {
        final SortedMap<String, Descriptors.Descriptor> map = getChildMessageDescriptors(descriptors);
        terminalMessages.forEach(d -> map.remove(d.getFullName()));
        terminalMessageSubtypes.forEach(d -> map.remove(d.getFullName()));
        if(!includeWrapperTypes) {
            wrapperTypes.forEach(d -> map.remove(d.getFullName()));
        }
        return map;
    }


    static SortedMap<String, Descriptors.Descriptor> getChildMessageDescriptors(Iterable<Descriptors.Descriptor> descriptors)
    {
        final List<Descriptors.Descriptor> list = getChildMessageDescriptors(StreamSupport.stream(descriptors.spliterator(), false));
        SortedMap<String, Descriptors.Descriptor> map = new TreeMap<>();
        list.forEach(d -> map.put(d.getFullName(), d));
        return map;
    }

    static String cppMessageName(Descriptors.GenericDescriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    static String quoted(String input)
    {
        return "\"" + input + "\"";
    }

    static Set<String> getIncludeFiles(Iterable<Descriptors.Descriptor> descriptors)
    {
        return StreamSupport.stream(descriptors.spliterator(), false).map(Helpers::getIncludeFile).collect(Collectors.toSet());
    }

    private static String getIncludeFile(Descriptors.Descriptor descriptor)
    {
        final String[] names = descriptor.getFullName().split("\\.");
        if(names.length != 2) throw new RuntimeException("Descriptor name does not follow <module>.<name> syntax: " + descriptor.getFullName());
        final String module = names[0];
        return String.format("%s/%s.pb.h", module, module);
    }

    static String cppType(Descriptors.FieldDescriptor fieldDescriptor)
    {
        switch(fieldDescriptor.getType())
        {
            case DOUBLE:
                return "double";
            case FLOAT:
                return "float";
            case INT64:
                return "int64_t";
            case UINT64:
                return "uint64_t";
            case INT32:
                return "int32_t";
            case BOOL:
                return "bool";
            case STRING:
                return "std::string";
            case UINT32:
                return "uint32_t";
            case SINT32:
                return "int32_t";
            case SINT64:
                return "int64_t";
            default:
                throw new RuntimeException("Unsupported type: " + fieldDescriptor.getType());
        }
    }

    /// ----  private methods --- /

    private static List<Descriptors.Descriptor> getChildMessageDescriptors(Stream<Descriptors.Descriptor> descriptors)
    {
        return descriptors.map(Helpers::getChildMessageDescriptorsForProfile).flatMap(List::stream).distinct().collect(Collectors.toList());
    }

    private static List<Descriptors.Descriptor> getChildMessageDescriptorsForProfile(Descriptors.Descriptor descriptor)
    {
        return descriptor.getFields().stream().map(Helpers::getChildMessageDescriptors).flatMap(List::stream).distinct().collect(Collectors.toList());
    }

    private static List<Descriptors.Descriptor> getChildMessageDescriptors(Descriptors.Descriptor descriptor)
    {
        final Set<Descriptors.Descriptor> set = descriptor.getFields().stream().map(Helpers::getChildMessageDescriptors).flatMap(List::stream).collect(Collectors.toCollection(LinkedHashSet::new));
        set.add(descriptor);
        return new ArrayList<>(set);
    }

    private static List<Descriptors.Descriptor> getChildMessageDescriptors(Descriptors.FieldDescriptor field)
    {
        if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE)
        {
            return getChildMessageDescriptors(field.getMessageType());
        }
        else
        {
            return Collections.emptyList();
        }
    }
}
