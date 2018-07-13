package com.oes.openfmb.generation.enumeration;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Defintions {

    public static class DNP3 {

        public List<Enumeration> all() {
            return Collections.singletonList(source);
        }

        private final static Enumeration source = new Enumeration(
                "Source",
                Arrays.asList(
                        "none",
                        "binary",
                        "analog",
                        "counter"
                )
        );
    }

}
