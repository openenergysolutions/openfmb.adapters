package com.oes.openfmb.generation;

import com.oes.openfmb.generation.document.Document;

import java.nio.file.Path;
import java.util.function.Supplier;

public class Artifact {

    public final Path path;
    public final Supplier<Document> document;

    public static Artifact create(Path path, Supplier<Document> document)
    {
        return new Artifact(path, document);
    }

    private Artifact(Path path, Supplier<Document> document) {
        this.path = path;
        this.document = document;
    }
}
