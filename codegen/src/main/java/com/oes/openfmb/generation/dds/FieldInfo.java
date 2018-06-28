package com.oes.openfmb.generation.dds;


import com.google.protobuf.Descriptors;
import openfmb.commonmodule.Quality;
import openfmb.Uml;

/**
 * Additional type info to account for inheritance/optional differences between protos and UML
 */
class FieldInfo {


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
        return descriptor.equals(Quality.getDescriptor());
    }

}
