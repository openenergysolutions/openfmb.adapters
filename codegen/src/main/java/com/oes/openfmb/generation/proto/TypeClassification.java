package com.oes.openfmb.generation.proto;

import com.google.protobuf.*;
import openfmb.commonmodule.*;
import openfmb.commonmodule.Timestamp;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

class TypeClassification {

    public static class NoClassificationException extends RuntimeException
    {
        private final Descriptors.FieldDescriptor field;

        NoClassificationException(Descriptors.FieldDescriptor field) {
            super(getMessage(field));
            this.field = field;
        }

        private static String getMessage(Descriptors.FieldDescriptor field)
        {
            if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE)
            {
                return String.format("In message type %s, Field '%s' of type '%s' lacks a classification", findRoot(field.getContainingType()).getFullName(), field.getName(), field.getMessageType().getFullName());
            }
            else
            {
                return String.format("In message type %s, Field '%s' of type '%s' lacks a classification", findRoot(field.getContainingType()).getFullName(), field.getName(), field.getType());
            }
        }

        private static Descriptors.Descriptor findRoot(Descriptors.Descriptor descriptor)
        {
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

    static String getName(Descriptors.FieldDescriptor descriptor)
    {
        switch(descriptor.getType())
        {
            case BOOL:
                return getBool(descriptor);
            case INT32:
                return getInt32(descriptor);
            case INT64:
                return getInt64(descriptor);
            case STRING:
                return getString(descriptor);
            case ENUM:
                return getEnum(descriptor);
            case FLOAT:
                return getFloat(descriptor);
            case MESSAGE:
            {
                if(descriptor.getMessageType() == Quality.getDescriptor()) {
                    // just ignore for now
                    return Types.quality.ignored;
                }

                if(descriptor.getMessageType() == Timestamp.getDescriptor()) {
                    // just ignore for now
                    return Types.timestamp.ignored;
                }

                if(descriptor.getMessageType() == ControlTimestamp.getDescriptor()) {
                    // just ignore for now
                    return Types.controlTimestamp.ignored;
                }

                if(descriptor.getMessageType() == BoolValue.getDescriptor()) {
                    return getBoolWrapper(descriptor);
                }

                if(descriptor.getMessageType() == Int32Value.getDescriptor()) {
                    return getInt32Wrapper(descriptor);
                }

                if(descriptor.getMessageType() == FloatValue.getDescriptor()) {
                    return getFloatWrapper(descriptor);
                }

                if(descriptor.getMessageType() == StringValue.getDescriptor()) {
                    return getStringWrapper(descriptor);
                }
            }
            default:
                throw new NoClassificationException(descriptor);
        }
    }

    private static String getBool(Descriptors.FieldDescriptor descriptor)
    {
        final String name = descriptor.getName();

        if(name.equals("ctlVal") || name.equals("stVal") || name.equals("value")) {
            return Types.bool.mapped;
        }

        throw new NoClassificationException(descriptor);
    }

    private static String getInt32(Descriptors.FieldDescriptor descriptor)
    {
        final String name = descriptor.getName();

        if(name.equals("setVal")) {
            return Types.int64.mapped;
        }

        if(name.equals("ctlVal")) {
            return Types.int32.mapped;
        }

        if(name.equals("stVal")) {
            return Types.int32.mapped;
        }

        if(name.equals("value")) {
            return Types.int32.mapped;
        }

        throw new NoClassificationException(descriptor);
    }

    private static String getInt64(Descriptors.FieldDescriptor descriptor)
    {
        final String name = descriptor.getName();

        if(name.equals("actVal")) {
            return Types.int64.mapped;
        }

        throw new NoClassificationException(descriptor);
    }


    private static String getFloat(Descriptors.FieldDescriptor descriptor)
    {
        final String name = descriptor.getName();

        if(name.equals("value")) {
            return Types.float32.mapped;
        }

        throw new NoClassificationException(descriptor);
    }

    private static String getBoolWrapper(Descriptors.FieldDescriptor descriptor) {

        final String name = descriptor.getName();

        if(name.equals("connected") && descriptor.getContainingType() == ACDCTerminal.getDescriptor())
        {
            return Types.bool.ignored;
        }

        if(name.equals("modBlk") && descriptor.getContainingType() == ControlValue.getDescriptor())
        {
            return Types.bool.ignored;
        }

       return Types.bool.mapped;
    }

    private static String getInt32Wrapper(Descriptors.FieldDescriptor descriptor) {

        final String name = descriptor.getName();

        if(name.equals("sequenceNumber") && descriptor.getContainingType() == ACDCTerminal.getDescriptor())
        {
            return Types.int32.ignored;
        }

        if(name.equals("i"))
        {
            if(descriptor.getContainingType() == AnalogueValue.getDescriptor())
            {
                return Types.int32.ignored;
            }

            if(descriptor.getContainingType() == AnalogueValueCtl.getDescriptor())
            {
                return Types.int32.ignored;
            }
        }

        return Types.int32.mapped;
    }

    private static String getFloatWrapper(Descriptors.FieldDescriptor descriptor)
    {
        return Types.float32.mapped;
    }

    private static String getStringWrapper(Descriptors.FieldDescriptor descriptor) {

        final String name = descriptor.getName();

        if(name.equals("setValExtension") && descriptor.getContainingType() == ENG_GridConnectModeKind.getDescriptor())
        {
            return Types.string.ignored;
        }

        if(name.equals("d") && descriptor.getContainingType() == ENS_HealthKind.getDescriptor())
        {
            return Types.string.ignored;
        }

        if(name.equals("operatingLimit") && descriptor.getContainingType() == EnergyConsumer.getDescriptor())
        {
            return Types.string.ignored;
        }

        if(name.equals("description") && descriptor.getContainingType() == IdentifiedObject.getDescriptor())
        {
            return Types.string.constant;
        }

        if(name.equals("mRID") && descriptor.getContainingType() == IdentifiedObject.getDescriptor())
        {
            return Types.string.primaryUUID;
        }

        if(name.equals("name") && descriptor.getContainingType() == IdentifiedObject.getDescriptor())
        {
            return Types.string.constant;
        }

        if(name.equals("description") && descriptor.getContainingType() == NamedObject.getDescriptor())
        {
            return Types.string.constant;
        }

        if(name.equals("name") && descriptor.getContainingType() == NamedObject.getDescriptor())
        {
            return Types.string.constant;
        }

        throw new NoClassificationException(descriptor);
    }

    private static String getString(Descriptors.FieldDescriptor descriptor)
    {
        final String name = descriptor.getName();

        if(name.equals("stVal")) {
            return Types.string.mapped;
        }

        if(name.equals("mRID")) {
            if(descriptor.getContainingType() == ConductingEquipment.getDescriptor())
            {
               return Types.string.primaryUUID;
            }

            throw new NoClassificationException(descriptor);
        }

        throw new NoClassificationException(descriptor);
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

        // mapped types
        temp.put(GridConnectModeKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(DynamicTestKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(DbPosKind.getDescriptor(), Types.enumeration.mapped);
        temp.put(StateKind.getDescriptor(), Types.enumeration.mapped);

        enumMap = Collections.unmodifiableMap(temp);
    }

    private static String getEnum(Descriptors.FieldDescriptor descriptor)
    {
        final String result = enumMap.get(descriptor.getEnumType());
        if(result == null) {
            throw new NoClassificationException(descriptor);
        }
        return result;
    }
}
