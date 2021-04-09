// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document;

import java.io.File;
import java.nio.file.Path;

public class GeneratedFileSet {

    private final Iterable<Path> directories;
    private final Iterable<FileGenerator> generators;

    public GeneratedFileSet(Iterable<Path> directories, Iterable<FileGenerator> generators) {
        this.directories = directories;
        this.generators = generators;
    }

    public void deleteFolders()
    {
        directories.forEach(d -> deleteFolderContents(d.toFile()));
    }

    public void generate()
    {
        generators.forEach(FileGenerator::write);
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
