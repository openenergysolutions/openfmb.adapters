package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.util.FieldPathImpl;

import java.util.function.Consumer;

public interface FieldPath {

    class Info {

        public final int depth;
        public final Descriptors.FieldDescriptor field;

        public Info(int depth, Descriptors.FieldDescriptor field) {
            this.depth = depth;
            this.field = field;
        }
    }

    FieldPath build(Descriptors.FieldDescriptor field);

    Descriptors.Descriptor getRoot();

    Info getInfo();

    String getPathString(String delimiter);

    void visit(Consumer<Info> consumer);

}
