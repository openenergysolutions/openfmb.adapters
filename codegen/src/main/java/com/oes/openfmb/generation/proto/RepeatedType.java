package com.oes.openfmb.generation.proto;


import com.google.protobuf.Descriptors;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;


public enum RepeatedType {
    /**
     * a time-based schedule used in control profiles
     */
    SCHEDULE,
    /**
     * list of function parameters used in control profiles
     */
    FUNCTION_PARAMETER,
    /**
     * a repetition of readings (e.g. repeated SwitchReading)
     */
    READING;

    private static final Map<Descriptors.Descriptor, RepeatedType> lookupMap;

    static {
        final Map<Descriptors.Descriptor, RepeatedType> temp = new HashMap<>();

        // the on;y reading repetition
        temp.put(openfmb.switchmodule.SwitchReading.getDescriptor(), RepeatedType.READING);
        // things related to schedules
        temp.put(openfmb.switchmodule.SwitchPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.ControlScheduleFSCH.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.SchedulePoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.essmodule.ESSPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.solarmodule.SolarPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.loadmodule.LoadPoint.getDescriptor(), RepeatedType.SCHEDULE);
        // list of function parameters
        temp.put(openfmb.essmodule.ENG_ESSFunctionParameter.getDescriptor(), RepeatedType.FUNCTION_PARAMETER);


        lookupMap = Collections.unmodifiableMap(temp);
    }

    public static RepeatedType getType(Descriptors.Descriptor descriptor)
    {
        final RepeatedType type = lookupMap.get(descriptor);
        if(type == null) throw new RuntimeException("No repeated type defined for descriptor: " + descriptor.getFullName());
        return type;
    }
}



