// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.LinePrinter;

import java.io.*;
import java.nio.file.Path;

public class FilePrinter implements LinePrinter, Closeable{

    private final PrintWriter writer;

    public FilePrinter(Path file) throws FileNotFoundException {
        writer = new PrintWriter(new FileOutputStream(file.toFile()));
    }

    @Override
    public void print(int indent, String line) {
        if(!line.isEmpty()) {
            for(int i = 0; i < indent; ++i) {
                writer.print("    ");
            }
        }
        writer.println(line);
    }

    @Override
    public void close() throws IOException {
        this.writer.close();
    }
}
