package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;

import static com.oes.openfmb.generation.document.Documents.*;

public class MessageVisitorFile extends CppFilePair {

    private final Descriptors.Descriptor descriptor;

    public MessageVisitorFile(Descriptors.Descriptor descriptor) {
        this.descriptor = descriptor;
    }

    public String baseFileName() {
        return descriptor.getName() + "Visitor";
    }

    @Override
    public Document header() {
        return namespace(
                "openfmb",
                 namespace(descriptor.getName().toLowerCase(),
                     Documents.empty
                 )
        );
    }

    @Override
    public Document implementation() {

        return namespace(
                "openfmb",
                namespace(descriptor.getName().toLowerCase(),
                        Documents.empty
                )
        );
    }


}
