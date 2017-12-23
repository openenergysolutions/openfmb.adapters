package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.LinePrinter;

public class ConsolePrinter implements LinePrinter {

    private ConsolePrinter() {}

    public static ConsolePrinter instance = new ConsolePrinter();

    @Override
    public void print(int indent, String line) {

        if(!line.isEmpty()) {
            for (int i = 0; i < indent; ++i) {
                System.out.print("    ");
            }
        }
        System.out.println(line);
    }
}
