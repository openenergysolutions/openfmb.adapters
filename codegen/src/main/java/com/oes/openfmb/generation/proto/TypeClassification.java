package com.oes.openfmb.generation.proto;

import com.google.protobuf.*;
import openfmb.commonmodule.*;
import openfmb.commonmodule.Timestamp;
import openfmb.generationmodule.ReactivePowerControlKind;
import openfmb.generationmodule.RealPowerControlKind;

import java.util.*;

public class TypeClassification {

    static public class FieldPath {
        public final List<Descriptors.FieldDescriptor> path;

        private FieldPath(List<Descriptors.FieldDescriptor> path) {
            this.path = path;
        }

        private FieldPath(Descriptors.FieldDescriptor descriptor) {
            this(Collections.singletonList(descriptor));
        }

        public static FieldPath create(Descriptors.FieldDescriptor descriptor) {
            return new FieldPath(descriptor);
        }

        @Override
        public String toString() {
            final StringBuilder builder = new StringBuilder();
            for(Descriptors.FieldDescriptor field : path) {
                final String type = field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE ? field.getMessageType().getFullName() : field.getType().toString();
                builder.append(String.format("%s:%s (%s), ", field.getContainingType().getFullName(), field.getName(), type));
            }
            return builder.toString();
        }

        public FieldPath build(Descriptors.FieldDescriptor field) {
            final List<Descriptors.FieldDescriptor> fields = new ArrayList<>(this.path);
            fields.add(field);
            return new FieldPath(fields);
        }

        public boolean hasName(String ... names) {
            for(String name : names) {
                if(this.last().getName().equals(name)) {
                    return true;
                }
            }
            return false;
        }

        public boolean hasParents(Descriptors.Descriptor ... parents)
        {
            if(parents.length > this.path.size()) {
                return false;
            }

            for(int i = 0; i < parents.length; ++i) {
                int path_index = this.path.size() - i - 1;
                if(parents[i] != this.path.get(path_index).getContainingType()) {
                    return false;
                }
            }

            return true;
        }

        public boolean matches(String name, Descriptors.Descriptor ... parents)
        {
            if(!this.hasName(name)) {
                return false;
            }

            return this.hasParents(parents);
        }

        public Descriptors.FieldDescriptor last() {
            return path.get(path.size() - 1);
        }
    }

    public static class NoClassificationException extends RuntimeException {

        NoClassificationException(FieldPath path) {
            super(getMessage(path));
        }

        private static String getMessage(FieldPath path) {
            return String.format("Path %s lacks a classification", path);
        }

        private static Descriptors.Descriptor findRoot(Descriptors.Descriptor descriptor) {
            final Descriptors.Descriptor parent = descriptor.getContainingType();
            return (parent == null) ? descriptor : findRoot(parent);
        }
    }

    static class BasicType {
        final String mapped;
        final String constant;
        final String ignored;

        BasicType(String typeName) {
            this.mapped = String.format("%s::Value::mapped", typeName);
            this.constant = String.format("%s::Value::constant", typeName);
            this.ignored = String.format("%s::Value::ignored", typeName);
        }
    }

    public static class StringType extends BasicType {
        final String generatedUUID;
        final String constantUUID;
        final String primaryUUID;

        StringType() {
            super("StringFieldType");
            this.generatedUUID = "StringFieldType::Value::generated_uuid";
            this.constantUUID = "StringFieldType::Value::constant_uuid";
            this.primaryUUID = "StringFieldType::Value::primary_uuid";
        }
    }

    private static class Types {
        static BasicType bool = new BasicType("BoolFieldType");
        static BasicType int32 = new BasicType("Int32FieldType");
        static BasicType int64 = new BasicType("Int64FieldType");
        static BasicType enumeration = new BasicType("EnumFieldType");
        static BasicType float32 = new BasicType("FloatFieldType");
        static StringType string = new StringType();
        static BasicType quality = new BasicType("QualityFieldType");
        static BasicType timestamp = new BasicType("TimestampFieldType");
        static BasicType controlTimestamp = new BasicType("ControlTimestampFieldType");
    }

    static String getName(Descriptors.FieldDescriptor field)
    {
        return getName(FieldPath.create(field));
    }

    static String getName(FieldPath path)
    {
        switch(path.last().getType())
        {
            case BOOL:
                return getBool(path);
            case INT32:
                return getInt32(path);
            case INT64:
                return getInt64(path);
            case STRING:
                return getString(path);
            case ENUM:
                return getEnum(path);
            case FLOAT:
                return getFloat(path);
            case MESSAGE:
            {
                if(path.last().getMessageType() == Quality.getDescriptor()) {
                    return Types.quality.ignored;
                }

                if(path.last().getMessageType() == Timestamp.getDescriptor()) {
                    if(path.matches("messageTimeStamp", MessageInfo.getDescriptor())) {
                        return "TimestampFieldType::Value::message";
                    }


                    return Types.timestamp.ignored;
                }

                if(path.last().getMessageType() == ControlTimestamp.getDescriptor()) {
                    // just ignore for now
                    return Types.controlTimestamp.ignored;
                }

                if(path.last().getMessageType() == BoolValue.getDescriptor()) {
                    return getBoolWrapper(path);
                }

                if(path.last().getMessageType() == Int32Value.getDescriptor()) {
                    return getInt32Wrapper(path);
                }

                if(path.last().getMessageType() == FloatValue.getDescriptor()) {
                    return getFloatWrapper(path);
                }

                if(path.last().getMessageType() == StringValue.getDescriptor()) {
                    return getStringWrapper(path);
                }
            }
            default:
                throw new NoClassificationException(path);
        }
    }

    private static String getBool(FieldPath path)
    {
        if(path.hasName("ctlVal", "stVal", "value", "general")) {
            return Types.bool.mapped;
        }

        throw new NoClassificationException(path);
    }

    private static String getInt32(FieldPath path)
    {
        if(path.hasName("setVal", "ctlVal", "stVal", "value")) {
            return Types.int32.mapped;
        }

        throw new NoClassificationException(path);
    }

    private static String getInt64(FieldPath path)
    {
        if(path.hasName("actVal")) {
            return Types.int64.mapped;
        }

        throw new NoClassificationException(path);
    }


    private static String getFloat(FieldPath path)
    {
        if(path.hasName("value")) {
            return Types.float32.mapped;
        }

        if(path.hasName("point")) {
            return Types.float32.mapped;
        }

        throw new NoClassificationException(path);
    }

    private static String getBoolWrapper(FieldPath path)
    {
        if(path.matches("connected", ACDCTerminal.getDescriptor()))
        {
            return Types.bool.ignored;
        }

        if(path.matches("modBlk", ControlValue.getDescriptor()))
        {
            return Types.bool.ignored;
        }

       return Types.bool.mapped;
    }

    private static String getInt32Wrapper(FieldPath path)
    {

        if(path.matches("sequenceNumber", ACDCTerminal.getDescriptor()))
        {
            return Types.int32.ignored;
        }

        if(path.hasName("i"))
        {
            if(path.hasParents(AnalogueValue.getDescriptor()))
            {
                return Types.int32.ignored;
            }

            if(path.hasParents(AnalogueValueCtl.getDescriptor()))
            {
                return Types.int32.ignored;
            }
        }

        return Types.int32.mapped;
    }

    private static String getFloatWrapper(FieldPath path)
    {
        return Types.float32.mapped;
    }

    private static String getStringWrapper(FieldPath path)
    {
        // --- generated uuid, unique per message ---
        if(path.matches("mRID", IdentifiedObject.getDescriptor(), MessageInfo.getDescriptor()))
        {
            return Types.string.generatedUUID;
        }

        // --- unconstrained constants ----

        if(path.hasName("description", "name")) {
            return Types.string.constant;
        }

        // --- all other mRID are constant uuid ----

        if(path.matches("mRID"))
        {
            return Types.string.constantUUID;
        }

        // --- ignored fields ---

        if(path.matches("operatingLimit", EnergyConsumer.getDescriptor())) {
            return Types.string.ignored;
        }

        if(path.matches("setValExtension", ENG_GridConnectModeKind.getDescriptor())) {
            return Types.string.ignored;
        }

        if(path.matches("d", ENS_HealthKind.getDescriptor())) {
            return Types.string.ignored;
        }

        throw new NoClassificationException(path);
    }

    private static String getString(FieldPath path)
    {
        if(path.hasName("stVal")) {
            return Types.string.mapped;
        }

        if(path.hasName("ctlVal")) {
            return Types.string.mapped;
        }

        if(path.matches("mRID", ConductingEquipment.getDescriptor())) {
            return Types.string.primaryUUID;
        }

        throw new NoClassificationException(path);
    }

    private static Map<Descriptors.EnumDescriptor, String> enumMap;

    static {
        Map<Descriptors.EnumDescriptor, String> temp = new HashMap<>();

        // constant types
        temp.put(CalcMethodKind.getDescriptor(), Types.enumeration.constant);
        temp.put(PFSignKind.getDescriptor(), Types.enumeration.constant);
        temp.put(BehaviourModeKind.getDescriptor(), Types.enumeration.constant);
        temp.put(DynamicTestKind.getDescriptor(), Types.enumeration.constant);
        temp.put(HealthKind.getDescriptor(), Types.enumeration.constant);
        temp.put(ValidityKind.getDescriptor(), Types.enumeration.constant);
        temp.put(TimeAccuracyKind.getDescriptor(), Types.enumeration.constant);
        temp.put(PhaseCodeKind.getDescriptor(), Types.enumeration.constant);
        temp.put(SourceKind.getDescriptor(), Types.enumeration.constant);
        temp.put(CalcMethodKind.getDescriptor(), Types.enumeration.constant);
        temp.put(UnitMultiplierKind.getDescriptor(), Types.enumeration.constant);
        temp.put(UnitSymbolKind.getDescriptor(), Types.enumeration.constant);
        temp.put(SwitchingCapabilityKind.getDescriptor(), Types.enumeration.constant);
        temp.put(ReactivePowerControlKind.getDescriptor(), Types.enumeration.constant);
        temp.put(RealPowerControlKind.getDescriptor(), Types.enumeration.constant);
        temp.put(FaultDirectionKind.getDescriptor(), Types.enumeration.constant);
        temp.put(PhaseFaultDirectionKind.getDescriptor(), Types.enumeration.constant);

        // mapped types
        temp.put(GridConnectModeKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(DynamicTestKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(DbPosKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(StateKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(RecloseActionKind.getDescriptor(), Types.enumeration.mapped);

        enumMap = Collections.unmodifiableMap(temp);
    }

    private static String getEnum(FieldPath path)
    {
        final String result = enumMap.get(path.last().getEnumType());
        if(result == null) {
            throw new NoClassificationException(path);
        }
        return result;
    }
}
