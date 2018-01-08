package com.oes.openfmb.generation.dds;


import com.google.protobuf.Descriptors;
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

}
