package com.oes.openfmb.util;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.proto.FieldPath;

import java.util.ArrayList;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Function;

public class DescriptorUtil {



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

            final Consumer<FieldPathImpl> consumer = path -> {
                if(predicate.apply(path.getInfo().field)) paths.add(path);
            };

            message.getFields().forEach(f -> visit(FieldPathImpl.create(message, f), consumer));
        }

        return paths;
    }

    public static Function<Descriptors.FieldDescriptor, Boolean> isMessageWithName(String name) {
        return field -> field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE && field.getMessageType().getName().equals(name);
    }

    private static void visit(FieldPathImpl path, Consumer<FieldPathImpl> consumer)
    {
        consumer.accept(path);
        switch(path.getInfo().field.getType())
        {
            case MESSAGE:
                path.getInfo().field.getMessageType().getFields().forEach(f ->
                        visit(
                                path.push(f),
                                consumer
                        )
                );
                break;
            default:
                // we've reached a leaf node, i.e. a basic type
                break;
        }

    }
}
