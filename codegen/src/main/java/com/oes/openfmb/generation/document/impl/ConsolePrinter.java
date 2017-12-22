package com.oes.openfmb.generation.document.impl;

import com.oes.openfmb.generation.document.LinePrinter;

public class ConsolePrinter implements LinePrinter {
    @Override
    public void print(int indent, String line) {
        for(int i = 0; i < indent; ++i) {
            System.out.print("    ");
        }
        System.out.println(line);
    }
}
