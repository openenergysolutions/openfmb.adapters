package com.oes.openfmb;

import com.oes.openfmb.generation.Artifact;

import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

    final static Path visitorImplDir = Paths.get("../adapter-api/src/config/generated");
    final static Path visitorIncludeDir = Paths.get("../adapter-api/include/adapter-api/config/generated");
    final static Path conversionsDir = Paths.get("../plugins/dds/twinoaks/src/twinoaks/generated/");

    public static void main(String[] args) {
        deleteFolderContents(visitorImplDir.toFile());
        deleteFolderContents(visitorIncludeDir.toFile());

        Artifacts.Visitors.get(visitorIncludeDir, visitorImplDir).forEach(Main::write);

        //deleteFolderContents(conversionsDir.toFile());
        //Artifacts.Conversions.get(conversionsDir).forEach(Main::write);
    }

    private static boolean write(Artifact artifact)
    {
        System.out.println("Writing: " + artifact.path.toAbsolutePath());
        return artifact.write();
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