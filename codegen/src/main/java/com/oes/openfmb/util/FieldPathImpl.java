package com.oes.openfmb.util;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.proto.FieldPath;

import java.util.ArrayList;
import java.util.List;
import java.util.function.Consumer;

public class FieldPathImpl implements FieldPath {

    //  the chain of all the fields to artifacts from the root message to this field
    private final Descriptors.Descriptor root;
    private final Info info;
    private final FieldPathImpl parent;

    @Override
    public Descriptors.Descriptor getRoot() {
        return this.root;
    }

    @Override
    public Info getInfo() {
        return info;
    }

    @Override
    public void visit(Consumer<Info> consumer)
    {
        if(parent != null) parent.visit(consumer);
        consumer.accept(info);
    }

    @Override
    public String getPathString(String delimiter)
    {
        final List<String> names = new ArrayList<>();
        this.visit(info -> names.add(info.field.getName()));
        return String.join(delimiter, names);
    }

    FieldPathImpl push(Descriptors.FieldDescriptor field) {
        return new FieldPathImpl(root, new Info(this.info.depth + 1, field), this);
    }

    static FieldPathImpl create(Descriptors.Descriptor root, Descriptors.FieldDescriptor field)
    {
        return new FieldPathImpl(root, new Info(0, field), null);
    }


    private FieldPathImpl(Descriptors.Descriptor root, Info info, FieldPathImpl parent) {
        this.root = root;
        this.info = info;
        this.parent = parent;
    }
}
