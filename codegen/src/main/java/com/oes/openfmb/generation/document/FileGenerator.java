// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document;

import com.oes.openfmb.generation.document.impl.FilePrinter;

import java.io.IOException;
import java.nio.file.Path;
import java.util.List;
import java.util.function.Supplier;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class FileGenerator {

    public static Iterable<FileGenerator> convert(Path includeDirectory, Path implDirectory, List<CppFileCollection> collections)
    {
        return collections.stream().flatMap(collection ->
                Stream.concat(
                        collection.headers().stream().map(f -> FileGenerator.create(includeDirectory.resolve(f.getFileName()), f.getSupplier())),
                        collection.implementations().stream().map(f -> FileGenerator.create(implDirectory.resolve(f.getFileName()), f.getSupplier()))
                )
        ).collect(Collectors.toList());
    }

    private final Path path;
    private final Supplier<Document> document;

    static FileGenerator create(Path path, Supplier<Document> document)
    {
        return new FileGenerator(path, document);
    }

    private FileGenerator(Path path, Supplier<Document> document) {
        this.path = path;
        this.document = document;
    }

    boolean write()
    {
        final Document doc = document.get();
        if(doc == null) return false;
        else
        {
            System.out.println("Writing: " + this.path.toAbsolutePath());
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
