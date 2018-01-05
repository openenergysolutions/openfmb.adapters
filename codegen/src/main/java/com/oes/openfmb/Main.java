package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;
import com.oes.openfmb.generation.document.impl.ConsolePrinter;
import com.oes.openfmb.generation.document.impl.FilePrinter;
import com.oes.openfmb.util.DescriptorUtil;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

    final static Path protoHelperDir = Paths.get("../adapter-api/src/adapter-api/helpers/generated");
    final static Path conversionsDir = Paths.get("../adapters/dds/twinoaks/src/twinoaks/generated/");

    public static void main(String[] args) {

        deleteFolderContents(protoHelperDir.toFile());
        deleteFolderContents(conversionsDir.toFile());
        ProtoHelpers.artifacts(protoHelperDir).forEach(Main::write);
        Conversions.artifacts(conversionsDir).forEach(Main::write);
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