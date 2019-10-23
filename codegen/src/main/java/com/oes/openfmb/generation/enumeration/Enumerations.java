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

    private final static Enumeration securityType = new Enumeration(
            Arrays.asList("Security","Type"),
            Arrays.asList(
                    Enumeration.entry("none", "no security - bare TCP"),
                    Enumeration.entry("tls_server_auth", "tls - only authenticate the server"),
                    Enumeration.entry("tls_mutual_auth", "tls - authenticate the server and provide client cert")
            )
    );

    public static final List<GeneratedFileSet> sets = Arrays.asList(API.set, DNP3.set, Modbus.set, Goose.set, Nats.set, MQTT.set);

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

        private static final Path includePath = Paths.get("../adapter-util/include/adapter-util/config/generated");
        private static final Path implPath = Paths.get("../adapter-util/src/config/generated");
        private static final Path implIncludePath = Paths.get("adapter-util/config/generated");

        private static final List<String> namespaces = Arrays.asList("util","adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Arrays.asList(includePath, implPath),
                FileGenerator.convert(includePath, implPath, enums().stream().map(e -> new EnumFiles(e, implIncludePath, namespaces)).collect(Collectors.toList()))
        );
    }

    private static class DNP3 {

        private final static Enumeration sourceType = new Enumeration(
                Arrays.asList("Source", "Type"),
                Arrays.asList(
                        Enumeration.entry("none", "the field is disabled"),
                        Enumeration.entry("binary", "the field value is mapped to a DNP3 binary input"),
                        Enumeration.entry("analog", "the field value is derived to a DNP3 analog input"),
                        Enumeration.entry("counter", "the field value is derived to a DNP3 counter")
                )
        );

        private final static Enumeration destinationType = sourceType.rename(Arrays.asList("Destination","Type"));

        private final static Enumeration profileAction = new Enumeration(
                Arrays.asList("Profile", "Action"),
                Arrays.asList(
                        Enumeration.entry("update", "update the value"),
                        Enumeration.entry("clear_and_update", "clear the profile, then update the value"),
                        Enumeration.entry("update_and_publish", "update the value, publish the profile, then clear the profile")
                )
        );

        private final static Enumeration commandSourceType = new Enumeration(
                Arrays.asList("Command", "Source", "Type"),
                Arrays.asList(
                        Enumeration.entry("none", "not mapped"),
                        Enumeration.entry("crob", "the value is mapped from a Control Relay Output Block (CROB)"),
                        Enumeration.entry("analog_output", "the value is mapped from an Analog Output (AO)")
                )
        );

        private final static Enumeration commandActionType = new Enumeration(
                Arrays.asList("Command", "Action", "Type"),
                Arrays.asList(
                        Enumeration.entry("g12v1", "Control Relay Output Block"),
                        Enumeration.entry("g41v1", "Analog output Variation 1 (Int32)"),
                        Enumeration.entry("g41v2", "Analog output Variation 2 (Int16)"),
                        Enumeration.entry("g41v3", "Analog output Variation 3 (float)"),
                        Enumeration.entry("g41v4", "Analog output Variation 4 (double)")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(sourceType, destinationType, commandSourceType, commandActionType, profileAction);
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
                        Enumeration.entry("uint32_with_modulus", "32-bit unsigned register, formed from two modbus 16-bit registers, custom modulus"),
                        Enumeration.entry("float32", "32-bit IEEE 754 floating point value")
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
                        Enumeration.entry("write_single_register_uint16", "write a value to a single holding register, casted as an unsigned integer"),
                        Enumeration.entry("write_single_register_int16", "write a value to a single holding register, casted as a signed integer"),
                        Enumeration.entry("write_multiple_registers_uint32", "write the low and high words to two (possibly disjoint) registers, casted as an unsigned integer"),
                        Enumeration.entry("write_multiple_registers_int32", "write the low and high words to two (possibly disjoint) registers, casted as a signed integer"),
                        Enumeration.entry("write_multiple_registers_float32", "write the IEEE 754 in two (possibly disjoint) registers"),
                        Enumeration.entry("read_and_modify_register", "read a holding register and write a modified value")
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
            return Arrays.asList(registerMapping, sourceType, enumMappingType, outputType, bitwiseOperation, logLevel);
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

        private final static Enumeration qualityMapping = new Enumeration(
                Arrays.asList("Quality", "Mapping", "Type"),
                Arrays.asList(
                        Enumeration.entry("copy", "copy the value of the OpenFMB proto"),
                        Enumeration.entry("constant", "use a constant quality"),
                        Enumeration.entry("constant_if_absent", "use a constant quality if the OpenFMB proto doesn't have a quality")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(type, qualityMapping);
        }

        private static final Path path = Paths.get("../plugins/goose/src/generated");

        private static final List<String> namespaces = Arrays.asList("goose", "adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }

    private static class Nats {

        private static List<Enumeration> enums() {
            return Collections.singletonList(securityType);
        }

        private static final Path path = Paths.get("../plugins/nats/src/generated");

        private static final List<String> namespaces = Arrays.asList("nats", "adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }

    private static class MQTT {

        private static List<Enumeration> enums() {
            return Collections.singletonList(securityType);
        }

        private static final Path path = Paths.get("../plugins/mqtt-paho/src/generated");

        private static final List<String> namespaces = Arrays.asList("mqtt", "adapter");

        public static final GeneratedFileSet set = new GeneratedFileSet(
                Collections.singletonList(path),
                FileGenerator.convert(path, path, enums().stream().map(e -> new EnumFiles(e, namespaces)).collect(Collectors.toList()))
        );
    }
}
