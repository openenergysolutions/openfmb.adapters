package com.oes.openfmb.generation.dds;


import com.google.protobuf.Descriptors;
import openfmb.commonmodule.Quality;
import uml.Uml;

/**
 * Additional type info to account for inheritance/optional differences between protos and UML
 */
public class FieldInfo {


    public static boolean isRequired(Descriptors.FieldDescriptor descriptor)
    {
        return descriptor.getOptions().getExtension(Uml.optionRequiredField);
    }

    public static boolean isInherited(Descriptors.FieldDescriptor descriptor)
    {
        return descriptor.getOptions().getExtension(Uml.optionParentMessage);
    }

    public static boolean omitConversion(Descriptors.Descriptor descriptor)
    {
        return descriptor.equals(Quality.getDescriptor());
    }

}
