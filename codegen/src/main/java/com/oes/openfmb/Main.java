package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.document.impl.ConsolePrinter;
import com.oes.openfmb.generation.document.impl.FilePrinter;

import java.io.File;
import java.io.IOException;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

    final static Path visitorDir = Paths.get("../adapter-api/src/adapter-api/config/generated");
    final static Path conversionsDir = Paths.get("../plugins/dds/twinoaks/src/twinoaks/generated/");

    public static void main(String[] args) {
        deleteFolderContents(visitorDir.toFile());
        //deleteFolderContents(conversionsDir.toFile());
        Artifacts.Visitors.get(visitorDir).forEach(Main::write);
        //Artifacts.Conversions.get(conversionsDir).forEach(Main::write);
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

    private static void print(Artifact artifact)
    {
        artifact.document.get().write(ConsolePrinter.instance);
    }

    private static void deleteFolderContents(File folder) {
        final File[] files = folder.listFiles();
        if(files!=null) {
            for(File f: files) {
                if(f.isDirectory()) {
                    deleteFolderContents(f);
                } else {
                    f.delete();
                }
            }
        }
    }
}