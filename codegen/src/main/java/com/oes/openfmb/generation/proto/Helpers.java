package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import openfmb.commonmodule.ControlTimestamp;
import openfmb.commonmodule.Quality;
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
                    ControlTimestamp.getDescriptor()
            )
    );

    static SortedMap<String, Descriptors.Descriptor> getFilteredChildMessageDescriptors(Iterable<Descriptors.Descriptor> descriptors)
    {
        final SortedMap<String, Descriptors.Descriptor> map = getChildMessageDescriptors(descriptors);
        terminalMessages.forEach(d -> map.remove(d.getFullName()));
        return map;
    }

    static SortedMap<String, Descriptors.Descriptor> getChildMessageDescriptors(Iterable<Descriptors.Descriptor> descriptors)
    {
        final Set<Descriptors.Descriptor> set = getChildMessageDescriptors(StreamSupport.stream(descriptors.spliterator(), false));
        SortedMap<String, Descriptors.Descriptor> map = new TreeMap<>();
        set.forEach(d -> map.put(d.getFullName(), d));
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

    static String getIncludeFile(Descriptors.Descriptor descriptor)
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

    private static Set<Descriptors.Descriptor> getChildMessageDescriptors(Stream<Descriptors.Descriptor> descriptors)
    {
        return descriptors.map(Helpers::getChildMessageDescriptorsForProfile).flatMap(Set::stream).collect(Collectors.toSet());
    }

    private static Set<Descriptors.Descriptor> getChildMessageDescriptorsForProfile(Descriptors.Descriptor descriptor)
    {
        return descriptor.getFields().stream().map(Helpers::getChildMessageDescriptors).flatMap(Set::stream).collect(Collectors.toSet());
    }

    private static Set<Descriptors.Descriptor> getChildMessageDescriptors(Descriptors.Descriptor descriptor)
    {
        final Set<Descriptors.Descriptor> set = descriptor.getFields().stream().map(Helpers::getChildMessageDescriptors).flatMap(Set::stream).collect(Collectors.toSet());
        set.add(descriptor);
        return set;
    }

    private static Set<Descriptors.Descriptor> getChildMessageDescriptors(Descriptors.FieldDescriptor field)
    {
        if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE)
        {
            return getChildMessageDescriptors(field.getMessageType());
        }
        else
        {
            return Collections.emptySet();
        }
    }
}