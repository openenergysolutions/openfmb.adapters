package com.oes.openfmb.generation;

import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.LinePrinter;
import com.oes.openfmb.generation.document.impl.FilePrinter;

import java.io.IOException;
import java.nio.file.Path;
import java.util.function.Supplier;

public class Artifact {

    public final Path path;
    private final Supplier<Document> document;

    public static Artifact create(Path path, Supplier<Document> document)
    {
        return new Artifact(path, document);
    }

    private Artifact(Path path, Supplier<Document> document) {
        this.path = path;
        this.document = document;
    }

    public boolean write()
    {
        final Document doc = document.get();
        if(doc == null) return false;
        else
        {
            try(FilePrinter printer = new FilePrinter(this.path))
            {
                doc.write(printer);
                return true;
            }
            catch(IOException exception)
            {
                throw new RuntimeException(exception);
            }
        }
    }
}
