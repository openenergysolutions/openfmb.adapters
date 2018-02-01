package com.oes.openfmb.util;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.proto.FieldPath;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
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


    /**
     * Recursively find all the fields in the message that match a predicate
     *
     * @param message
     * @param predicate
     * @return
     */
    public static List<FieldPath> find(Descriptors.Descriptor message, Function<Descriptors.FieldDescriptor, Boolean> predicate)
    {
        final List<FieldPath> paths = new ArrayList<>();

        if(message != null) {

            final Consumer<FieldPath> consumer = path -> {
                if(predicate.apply(path.getInfo().field)) paths.add(path);
            };

            message.getFields().forEach(f -> visit(FieldPathImpl.create(message, f), consumer));
        }

        return paths;
    }

    public static Function<Descriptors.FieldDescriptor, Boolean> matches(Descriptors.Descriptor descriptor) {
        return field -> field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE && field.getMessageType().equals(descriptor);
    }

    private static void visit(FieldPath path, Consumer<FieldPath> consumer)
    {
        consumer.accept(path);
        switch(path.getInfo().field.getType())
        {
            case MESSAGE:
                path.getInfo().field.getMessageType().getFields().forEach(f ->
                        visit(
                                path.build(f),
                                consumer
                        )
                );
                break;
            default:
                // we've reached a leaf node, i.e. a basic type
                break;
        }

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
