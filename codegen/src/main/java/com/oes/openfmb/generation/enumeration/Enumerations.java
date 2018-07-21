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

    public static final List<GeneratedFileSet> sets = Arrays.asList(API.set, DNP3.set);

    private static class API {

        private static Enumeration getBasicFieldType(String name)
        {
            return new Enumeration(
                    name+"FieldType",
                    Arrays.asList(
                            Enumeration.entry("const_"+name.toLowerCase(), "the value is always the same, set in configuration"),
                            Enumeration.entry("mapped_"+name.toLowerCase(), "the value is mapped dynamically from the underlying protocol"),
                            Enumeration.entry("ignored_"+name.toLowerCase(), "the value is ignored in the current configuration")
                    )
            );
        }


        private final static Enumeration Int32FieldType = getBasicFieldType("Int32");

        private final static Enumeration boolFieldType = getBasicFieldType("Bool");

        private final static Enumeration stringFieldType = new Enumeration(
                "StringFieldType",
                Arrays.asList(
                        Enumeration.entry("generated_uuid", "the value is randomly generated UUID"),
                        Enumeration.entry("optional_const_uuid", "the value is an optional constant UUID"),
                        Enumeration.entry("primary_uuid", "the value is a required primary UUID (conducting equipment)"),
                        Enumeration.entry("optional_string", "the value is an optional constant string"),
                        Enumeration.entry("ignored_string", "the field is ignored in this configuration")
                )
        );

        private final static Enumeration enumFieldType = new Enumeration(
                "EnumFieldType",
                Arrays.asList(
                        Enumeration.entry("optional_const_enum", "an optional enum that is the same value in every message"),
                        Enumeration.entry("mapped_enum", "an enum that is mapped from values in the underlying protocol")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(Int32FieldType, boolFieldType, stringFieldType, enumFieldType);
        }

        private static final Path includePath = Paths.get("../adapter-api/include/adapter-api/config/generated");
        private static final Path implPath = Paths.get("../adapter-api/src/config/generated");
        private static final Path implIncludePath = Paths.get("adapter-api/config/generated");

        private static final List<String> namespaces = Collections.singletonList("adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Arrays.asList(includePath, implPath),
                FileGenerator.convert(includePath, implPath, enums().stream().map(e -> new EnumFiles(e, implIncludePath, namespaces)).collect(Collectors.toList()))
        );
    }

    private static class DNP3 {

        private final static Enumeration source = new Enumeration(
                "SourceType",
                Arrays.asList(
                        Enumeration.entry("none", "the field is disabled"),
                        Enumeration.entry("binary", "the field value is derived from a DNP3 binary"),
                        Enumeration.entry("analog", "the field value is derived from a DNP3 analog"),
                        Enumeration.entry("counter", "the field value is derived from a DNP3 counter")
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
