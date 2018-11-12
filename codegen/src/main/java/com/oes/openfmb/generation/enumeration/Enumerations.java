package com.oes.openfmb.generation.enumeration;

import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class Enumerations {

    public static final List<GeneratedFileSet> sets = Arrays.asList(API.set, DNP3.set, Modbus.set, Goose.set);

    private static class API {

        private static List<String> getFieldName(String... names)
        {
            final List<String> ret = new ArrayList<>();
            Collections.addAll(ret, names);
            ret.add("Field");
            ret.add("Type");
            return ret;
        }

        private static Enumeration getBasicFieldType(String name)
        {
            return new Enumeration(
                    getFieldName(name),
                    Arrays.asList(
                            Enumeration.entry("constant", "the value is always the same, set in configuration"),
                            Enumeration.entry("mapped", "the value is mapped dynamically from the underlying protocol"),
                            Enumeration.entry("ignored", "the value is ignored in the current configuration")
                    )
            );
        }

        private final static Enumeration stringFieldType = new Enumeration(
                getFieldName("String"),
                Arrays.asList(
                        Enumeration.entry("generated_uuid", "the value is randomly generated UUID"),
                        Enumeration.entry("constant_uuid", "the value is an optional constant UUID"),
                        Enumeration.entry("primary_uuid", "the value is a required primary UUID (conducting equipment)"),
                        Enumeration.entry("constant", "the value is an optional constant string"),
                        Enumeration.entry("mapped", "the value is mapped dynamically from the underlying protocol"),
                        Enumeration.entry("ignored", "the field is ignored in this configuration")
                )
        );

        private final static Enumeration enumFieldType = getBasicFieldType("Enum");

        private final static Enumeration timestampFieldType = new Enumeration(
                getFieldName("Timestamp"),
                Arrays.asList(
                        Enumeration.entry("message", "the main timestamp for the message"),
                        Enumeration.entry("mapped", "the value is mapped dynamically from the underlying protocol"),
                        Enumeration.entry("ignored", "the timestamp is ignored in this configuration")
                )
        );

        private final static Enumeration qualityFieldType = new Enumeration(
                getFieldName("Quality"),
                Arrays.asList(
                        Enumeration.entry("ignored", "the quality field is ignored in this configuration"),
                        Enumeration.entry("mapped", "the value is mapped dynamically from the underlying protocol")
                )
        );

        private final static Enumeration controlTimestampFieldType = new Enumeration(
                getFieldName("Control","Timestamp"),
                Collections.singletonList(
                        Enumeration.entry("ignored", "the timestamp field is ignored in this configuration")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(
                    getBasicFieldType("Int32"),
                    getBasicFieldType("Int64"),
                    getBasicFieldType("Float"),
                    getBasicFieldType("Bool"),
                    stringFieldType,
                    enumFieldType,
                    timestampFieldType,
                    qualityFieldType,
                    controlTimestampFieldType
            );
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
                Arrays.asList("Source", "Type"),
                Arrays.asList(
                        Enumeration.entry("none", "the field is disabled"),
                        Enumeration.entry("binary", "the field value is derived from a DNP3 binary"),
                        Enumeration.entry("analog", "the field value is derived from a DNP3 analog"),
                        Enumeration.entry("counter", "the field value is derived from a DNP3 counter")
                )
        );

        private final static Enumeration commandType = new Enumeration(
                Arrays.asList("Command", "Type"),
                Arrays.asList(
                        Enumeration.entry("crob", "the command is a ControlRelayOutputBlock"),
                        Enumeration.entry("analog_output", "the command is an AnalogOutout")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(source, commandType);
        }

        private static final Path path = Paths.get("../plugins/dnp3/src/dnp3/generated");

        private static final List<String> namespaces = Arrays.asList("dnp3", "adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }

    private static class Modbus {

        private final static Enumeration registerMapping = new Enumeration(
                Arrays.asList("Register", "Mapping"),
                Arrays.asList(
                        Enumeration.entry("sint16", "single signed register"),
                        Enumeration.entry("uint16", "single unsigned register"),
                        Enumeration.entry("sint32", "32-bit signed register, formed from two modbus 16-bit registers"),
                        Enumeration.entry("uint32", "32-bit unsigned register, formed from two modbus 16-bit registers"),
                        Enumeration.entry("sint32_with_modulus", "32-bit signed register, formed from two modbus 16-bit registers, custom modulus"),
                        Enumeration.entry("uint32_with_modulus", "32-bit unsigned register, formed from two modbus 16-bit registers, custom modulus")
                )
        );

        private final static Enumeration sourceType = new Enumeration(
                Arrays.asList("Source","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("holding_register", "field is mapped out of a holding register")
                )
        );

        private final static Enumeration enumMappingType = new Enumeration(
                Arrays.asList("Enum","Mapping","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("holding_register", "enum is mapped from a single holding register"),
                        Enumeration.entry("multiple_holding_register", "enum is mapped from bits in multiple holding registers")
                )
        );

        private final static Enumeration outputType = new Enumeration(
                Arrays.asList("Output","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "output is not mapped"),
                        Enumeration.entry("write_register", "write a value to a single holding register"),
                        Enumeration.entry("write_two_registers", "write the low and high words to two (possibly disjoint) registers"),
                        Enumeration.entry("read_and_modify_register", "read a holding register and write a modified value")
                )
        );

        private final static Enumeration commandType = new Enumeration(
                Arrays.asList("Command","Type"),
                Arrays.asList(
                        Enumeration.entry("write_single_register", "write a single holding register value"),
                        Enumeration.entry("write_multiple_register", "write multiple holding register values starting a particular index")
                )
        );

        private final static Enumeration bitwiseOperation = new Enumeration(
                Arrays.asList("Bitwise","Operation"),
                Arrays.asList(
                        Enumeration.entry("set_bit", "set a single bit"),
                        Enumeration.entry("clear_bit", "clear a single bit"),
                        Enumeration.entry("clear_masked_bits", "clear the bits in the mask"),
                        Enumeration.entry("set_masked_bits", "set the bits in the mask")
                )
        );

        private final static Enumeration logLevel = new Enumeration(
                Arrays.asList("Log", "Level"),
                Arrays.asList(
                        Enumeration.entry("Trace", "Trace"),
                        Enumeration.entry("Debug", "Debug"),
                        Enumeration.entry("Info", "Info"),
                        Enumeration.entry("Warn", "Warn"),
                        Enumeration.entry("Error", "Error"),
                        Enumeration.entry("Critical", "Critical")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(registerMapping, sourceType, enumMappingType, outputType, bitwiseOperation, commandType, logLevel);
        }

        private static final Path path = Paths.get("../plugins/modbus/src/modbus/generated");

        private static final List<String> namespaces = Arrays.asList("modbus", "adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }

    private static class Goose {

        private final static Enumeration type = new Enumeration(
                Arrays.asList("Type"),
                Arrays.asList(
                        Enumeration.entry("ignored", "ignored"),
                        Enumeration.entry("structure", "structure"),
                        Enumeration.entry("array", "array"),
                        Enumeration.entry("boolean", "boolean"),
                        Enumeration.entry("integer", "integer"),
                        Enumeration.entry("floating", "floating"),
                        Enumeration.entry("visible_string", "visible_string"),
                        Enumeration.entry("mms_string", "mms_string"),
                        Enumeration.entry("bitstring", "bitstring"),
                        Enumeration.entry("generalized_time", "generalized_time"),
                        Enumeration.entry("binary_time", "binary_time"),
                        Enumeration.entry("utc_time", "utc_time")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(type);
        }

        private static final Path path = Paths.get("../plugins/goose/src/generated");

        private static final List<String> namespaces = Arrays.asList("goose", "adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }
}
