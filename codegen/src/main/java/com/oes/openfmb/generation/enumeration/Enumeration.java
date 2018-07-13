package com.oes.openfmb.generation.enumeration;

import java.util.List;

public class Enumeration {

    public final String name;
    public final List<String> values;

    public Enumeration(String name, List<String> values) {
        this.name = name;
        this.values = values;
    }
}
