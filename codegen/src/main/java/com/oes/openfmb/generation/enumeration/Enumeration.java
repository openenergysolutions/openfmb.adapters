// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.enumeration;

import java.util.List;
import java.util.stream.Collectors;

class Enumeration {

    static class Entry {
        final String label;
        final String comment;

        Entry(String label, String comment) {
            this.label = label;
            this.comment = comment;
        }
    }

    static Entry entry(String name, String comment)
    {
        return new Entry(name, comment);
    }

    public final String name;
    public final String configLabel;
    public final List<Entry> values;

    private static String getName(List<String> names) {
        return String.join("", names);
    }

    private static String getConfigLabel(List<String> names) {
        return names.stream().map(String::toLowerCase).collect(Collectors.joining("-"));
    }

    Enumeration(List<String> names, List<Entry> values) {
        this.name = getName(names);
        this.configLabel = getConfigLabel(names);
        this.values = values;
    }

    public Enumeration rename(List<String> names)
    {
        return new Enumeration(
             names,
             this.values
        );
    }
}
