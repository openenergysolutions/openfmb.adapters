package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;

import java.util.ArrayList;
import java.util.List;

class FieldPath {

    private final Descriptors.Descriptor profile;
    private final List<Descriptors.FieldDescriptor> fields;

    private FieldPath(Descriptors.Descriptor profile, List<Descriptors.FieldDescriptor> fields) {
        this.fields = fields;
        this.profile = profile;
    }

    FieldPath build(Descriptors.FieldDescriptor field) {
        final List<Descriptors.FieldDescriptor> newList = new ArrayList<>(this.fields);
        newList.add(field);
        // build a new field path
        return new FieldPath(
                this.profile,
                newList
        );
    }
}





