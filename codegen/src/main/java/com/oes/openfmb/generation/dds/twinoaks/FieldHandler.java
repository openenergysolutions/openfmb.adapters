package com.oes.openfmb.generation.dds.twinoaks;

import com.google.protobuf.Descriptors;
import com.google.protobuf.StringValue;
import com.oes.openfmb.generation.document.Document;

public interface FieldHandler {

    // --- getters for the different variations of messages ---
    Document repeatedMessage();
    Document inheritedMessage();
    Document requiredMessage();
    Document optionalMessage();

    // --- getters for the different variations of enums ---
    Document requiredEnum();
    Document optionalEnum(Descriptors.EnumDescriptor ed);

    // --- getters for the different variations of strings ---
    Document requiredString();
    Document optionalString();

    // --- getters for the different variations of primitives ---
    Document requiredPrimitive();
    Document optionalPrimitive();

    /**
     * Determine the type of field and get its implementation by calling the corresponding handler
     */
    static Document get(FieldHandler handler, Descriptors.FieldDescriptor field)
    {
        switch(field.getType())
        {
            case MESSAGE:
            {
                final Descriptors.Descriptor descriptor = field.getMessageType();

                if(field.isRepeated())
                {
                    return handler.repeatedMessage();
                }

                if(Helpers.isInherited(field))
                {
                    return handler.inheritedMessage();
                }

                {
                    final Descriptors.EnumDescriptor ed = Helpers.getOptionalEnumWrapper(descriptor);

                    if (ed != null) {
                        return handler.optionalEnum(ed);
                    }
                }

                if(Helpers.isOptionalPrimitiveWrapper(descriptor))
                {
                    return descriptor.equals(StringValue.getDescriptor()) ? handler.optionalString() : handler.optionalPrimitive();
                }

                return Helpers.isRequired(field) ? handler.requiredMessage() : handler.optionalMessage();
            }
            case ENUM:
                return handler.requiredEnum();
            case STRING:
                return handler.requiredString();
            default:
                return handler.requiredPrimitive();
        }
    }
}
