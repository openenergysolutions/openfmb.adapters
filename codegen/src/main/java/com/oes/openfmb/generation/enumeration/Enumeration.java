package com.oes.openfmb.generation.enumeration;

import java.util.List;

class Enumeration {

    static class Entry {
        final String label;
        final String comment;

        Entry(String label, String comment) {
            this.label = label;
            this.comment = comment;
        }
    }

    public static Entry entry(String label, String comment)
    {
        return new Entry(label, comment);
    }

    public final String name;
    public final List<Entry> values;

    Enumeration(String name, List<Entry> values) {
        this.name = name;
        this.values = values;
    }
}
