package com.oes.openfmb.generation;

import com.google.protobuf.Descriptors;

import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;

public class Includes {

    private Includes() {}

    public static Set<String> getIncludeFiles(Iterable<Descriptors.Descriptor> descriptors)
    {
        return StreamSupport.stream(descriptors.spliterator(), false).map(Includes::getIncludeFile).collect(Collectors.toSet());
    }

    private static String getIncludeFile(Descriptors.Descriptor descriptor)
    {
        final String[] names = descriptor.getFullName().split("\\.");
        if(names.length != 2) throw new RuntimeException("Descriptor name does not follow <module>.<name> syntax: " + descriptor.getFullName());
        final String module = names[0];
        return String.format("%s/%s.pb.h", module, module);
    }
}
