// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.enumeration;

import com.oes.openfmb.generation.Profiles;
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

    private final static Enumeration authenticateType = new Enumeration(
            Arrays.asList("Authentication","Type"),
            Arrays.asList(
                    Enumeration.entry("none", "no authenticate mechanism"),
                    Enumeration.entry("password", "basic password authentication"),
                    Enumeration.entry("certificate", "tls certificate authentication")
            )
    );

    public static final List<GeneratedFileSet> sets = Arrays.asList(API.set, DNP3.set, Modbus.set, Goose.set, ICCP.set, Nats.set, MQTT.set);

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
                Arrays.asList(
                        Enumeration.entry("ignored", "the timestamp field is ignored in this configuration"),
                        Enumeration.entry("message", "the main timestamp of the message is used")
                )
        );

        private final static Enumeration profile = new Enumeration(
            Collections.singletonList("Profile"),
            Profiles.list.stream().map((descriptor) -> {
                return Enumeration.entry(descriptor.getName(), descriptor.getFullName());
            }).collect(Collectors.toList())
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(
                    getBasicFieldType("Int32"),
                    getBasicFieldType("Int64"),
                    getBasicFieldType("Float"),
                    getBasicFieldType("Double"),
                    getBasicFieldType("Bool"),
                    stringFieldType,
                    enumFieldType,
                    timestampFieldType,
                    qualityFieldType,
                    controlTimestampFieldType,
                    profile
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

        // Master stuff

        private final static Enumeration sourceType = new Enumeration(
                Arrays.asList("Source","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("coil", "field is mapped out of a coil"),
                        Enumeration.entry("discrete_input", "field is mapped out of a discrete input"),
                        Enumeration.entry("holding_register", "field is mapped out of a holding register"),
                        Enumeration.entry("input_register", "field is mapped out of an input register")
                )
        );

        private final static Enumeration enumMappingType = new Enumeration(
                Arrays.asList("Enum","Mapping","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("single_bit", "enum is mapped from a single bit"),
                        Enumeration.entry("single_register", "enum is mapped from a single register"),
                        Enumeration.entry("multiple_register", "enum is mapped from bits in multiple registers")
                )
        );

        private final static Enumeration outputType = new Enumeration(
                Arrays.asList("Output","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "output is not mapped"),
                        Enumeration.entry("write_single_coil", "write a single coil"),
                        Enumeration.entry("flip_single_coil", "flip a single coil"),
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

        // Outstation stuff

        private final static Enumeration destinationType = new Enumeration(
                Arrays.asList("Destination","Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("coil", "field is mapped out to a coil"),
                        Enumeration.entry("discrete_input", "field is mapped out to a discrete input"),
                        Enumeration.entry("holding_register", "field is mapped out to a holding register"),
                        Enumeration.entry("input_register", "field is mapped out to an input register")
                )
        );

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
                        Enumeration.entry("coil", "the value is mapped from a coil write"),
                        Enumeration.entry("holding_register", "the value is mapped from a register write")
                )
        );

        // Shared stuff

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

        private final static Enumeration registerMapping = new Enumeration(
                Arrays.asList("Register", "Mapping"),
                Arrays.asList(
                        Enumeration.entry("sint16", "single signed register"),
                        Enumeration.entry("uint16", "single unsigned register"),
                        Enumeration.entry("sint32", "32-bit signed register, formed from two modbus 16-bit registers"),
                        Enumeration.entry("uint32", "32-bit unsigned register, formed from two modbus 16-bit registers"),
                        Enumeration.entry("sint32_with_modulus", "32-bit signed register, formed from two modbus 16-bit registers, custom modulus"),
                        Enumeration.entry("uint32_with_modulus", "32-bit unsigned register, formed from two modbus 16-bit registers, custom modulus"),
                        Enumeration.entry("float32", "32-bit IEEE 754 floating point value"),
                        Enumeration.entry("float64", "64-bit IEEE 754 double-precision floating point value")
                )
        );

        private static List<Enumeration> enums() {
            return Arrays.asList(sourceType, enumMappingType, outputType, bitwiseOperation, destinationType, profileAction, commandSourceType, logLevel, registerMapping);
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

    private static class ICCP {
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

        private final static Enumeration commandPointType = new Enumeration(
                Arrays.asList("Command", "Point", "Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("command", "Command type"),
                        Enumeration.entry("command_sbo", "Command type (SBO)"),
                        Enumeration.entry("set_point_real", "Real SetPoint type"),
                        Enumeration.entry("set_point_real_sbo", "Real SetPoint type (SBO)"),
                        Enumeration.entry("set_point_discrete", "Discrete SetPoint type"),
                        Enumeration.entry("set_point_discrete_sbo", "Discrete SetPoint type (SBO)")
                )
        );

        private final static Enumeration indicationPointType = new Enumeration(
                Arrays.asList("Indication", "Point", "Type"),
                Arrays.asList(
                        Enumeration.entry("none", "field is not mapped"),
                        Enumeration.entry("discrete", "Discrete indication point type"),
                        Enumeration.entry("discrete_q", "DiscreteQ indication point type"),
                        Enumeration.entry("discrete_q_t", "DiscreteQTimeTag indication point type"),
                        Enumeration.entry("discrete_q_t_ext", "DiscreteQTimeTagExtended indication point type"),
                        Enumeration.entry("discrete_ext", "DiscreteExtended indication point type"),

                        Enumeration.entry("real", "Real indication point type"),
                        Enumeration.entry("real_q", "RealQ indication point type"),
                        Enumeration.entry("real_q_t", "RealQTimeTag indication point type"),
                        Enumeration.entry("real_q_t_ext", "RealQTimeTagExtended indication point type"),
                        Enumeration.entry("real_ext", "RealExtended indication point type"),

                        Enumeration.entry("state", "State indication point type"),
                        Enumeration.entry("state_q", "StateQ indication point type"),
                        Enumeration.entry("state_q_t", "StateQTimeTag indication point type"),
                        Enumeration.entry("state_q_t_ext", "StateQTimeTagExtended indication point type"),
                        Enumeration.entry("state_ext", "StateExtended indication point type")
                )
        );

        private final static Enumeration setPointType = new Enumeration(
                Arrays.asList("Set", "Point", "Type"),
                Arrays.asList(
                        Enumeration.entry("real", "Real setpoint type"),
                        Enumeration.entry("discrete", "Discrete setpoint type")
                )
        );

        private final static Enumeration deviceClass = new Enumeration(
                Arrays.asList("Device", "Class"),
                Arrays.asList(
                        Enumeration.entry("sbo", "SBO device class"),
                        Enumeration.entry("non_sbo", "Non-SBO device class")
                )
        );

        private final static Enumeration sboState = new Enumeration(
                Arrays.asList("SBO", "State"),
                Arrays.asList(
                        Enumeration.entry("selected", "Selected state"),
                        Enumeration.entry("not_selected", "Not selected state")
                )
        );

        private final static Enumeration tagClass = new Enumeration(
                Arrays.asList("Tag", "Class"),
                Arrays.asList(
                        Enumeration.entry("taggable", "Taggable tag class"),
                        Enumeration.entry("non_taggable", "Non-Taggable tag class")
                )
        );

        private final static Enumeration tag = new Enumeration(
                Arrays.asList("Tag"),
                Arrays.asList(
                        Enumeration.entry("no_tag", "No tag"),
                        Enumeration.entry("open_and_close_inhibit", "Open-And-Close-Inhibit"),
                        Enumeration.entry("close_only_inhibit", "Close-Only-Inhibit")
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
            return Arrays.asList(type, commandPointType, indicationPointType, setPointType, deviceClass, sboState, tagClass, tag, qualityMapping, authenticateType);
        }

        private static final Path path = Paths.get("../plugins/iccp/src/iccp/generated");

        private static final List<String> namespaces = Arrays.asList("iccp", "adapter");

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
