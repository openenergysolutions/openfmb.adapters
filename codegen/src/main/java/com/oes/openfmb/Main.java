package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.document.impl.FilePrinter;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

    final static Path protoHelperDir = Paths.get("../adapter-api/src/adapter-api/helpers");

    public static void main(String[] args) throws IOException {

        wipeDir(protoHelperDir);
        ProtoHelpers.artifacts(protoHelperDir).forEach(Main::write);

    }

    private static void write(Artifact artifact)
    {
        System.out.println("Writing: " + artifact.path.toAbsolutePath());
        try(FilePrinter printer = new FilePrinter(artifact.path))
        {
            artifact.document.get().write(printer);
        }
        catch(IOException exception)
        {
            throw new RuntimeException(exception);
        }
    }

    private static void wipeDir(Path path) throws IOException
    {
        if(Files.exists(path)) {
            // clear all files from the directory
            Files.walk(path)
                    .map(Path::toFile)
                    .forEach(File::delete);
        }
        else
        {
            Files.createDirectories(path);
        }
    }
}