package com.oes.openfmb;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.proto.ResourceReadingProfileOuterClass.ResourceReadingProfile;

/**
 * Hello world!
 *
 */
public class Main
{
    public static void main( String[] args )
    {
        describe(ResourceReadingProfile.getDescriptor());
    }

    static void describe(com.google.protobuf.Descriptors.Descriptor descriptor)
    {
        describe(0, descriptor);
    }

    static void describe(int indent, com.google.protobuf.Descriptors.Descriptor descriptor)
    {
        print(indent, descriptor.getName());
        descriptor.getFields().forEach(field -> describe(indent + 1, field));
    }

    static void print(int indent, String text)
    {
        for(int i=0; i<indent; ++i) {
            System.out.print("  ");
        }
        System.out.println(text);
    }

    static void describe(int indent, com.google.protobuf.Descriptors.FieldDescriptor descriptor)
    {
        switch(descriptor.getType()) {

            case MESSAGE:
                describe(indent + 1, descriptor.getMessageType());
                break;
            default:
                print(indent, descriptor.getName() + " (" + descriptor.getType() + ")");
                break;
        }
    }
}
