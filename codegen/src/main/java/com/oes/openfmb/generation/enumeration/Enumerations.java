package com.oes.openfmb.generation.enumeration;

import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class Enumerations {

    public static final List<GeneratedFileSet> sets = Collections.singletonList(DNP3.set);

    private static class DNP3 {

        private final static Enumeration source = new Enumeration(
                "SourceType",
                Arrays.asList(
                        "none",
                        "binary",
                        "analog",
                        "counter"
                )
        );

        private static List<Enumeration> enums() {
            return Collections.singletonList(source);
        }

        private static final Path path = Paths.get("../plugins/dnp3/src/dnp3/generated");

        private static final List<String> namespaces = Arrays.asList("adapter", "dnp3");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }

}
