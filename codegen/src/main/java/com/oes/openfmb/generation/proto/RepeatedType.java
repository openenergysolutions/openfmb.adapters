// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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
     * list of schedule parameters used in control profiles
     */
    SCHEDULE_PARAMETER,
    /**
     * a repetition of readings (e.g. repeated SwitchReading)
     */
    READING;

    private static final Map<Descriptors.Descriptor, RepeatedType> lookupMap;

    static {
        final Map<Descriptors.Descriptor, RepeatedType> temp = new HashMap<>();

        // the only reading repetition
        temp.put(openfmb.switchmodule.SwitchReading.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.breakermodule.BreakerReading.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.reclosermodule.RecloserReading.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.regulatormodule.RegulatorReading.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.commonmodule.AnalogEventAndStatusGGIO.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.commonmodule.BooleanEventAndStatusGGIO.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.commonmodule.IntegerEventAndStatusGGIO.getDescriptor(), RepeatedType.READING);
        temp.put(openfmb.commonmodule.StringEventAndStatusGGIO.getDescriptor(), RepeatedType.READING);
        // things related to schedules
        temp.put(openfmb.commonmodule.ControlScheduleFSCH.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.SchedulePoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.SwitchPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.capbankmodule.CapBankPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.essmodule.ESSPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.essmodule.ESSCurvePoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.solarmodule.SolarPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.solarmodule.SolarCurvePoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.loadmodule.LoadPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.generationmodule.GenerationPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.regulatormodule.RegulatorPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.resourcemodule.AnalogControlGGIO.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.resourcemodule.BooleanControlGGIO.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.resourcemodule.IntegerControlGGIO.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.resourcemodule.StringControlGGIO.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.interconnectionmodule.InterconnectionPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.interconnectionmodule.InterconnectionControlScheduleFSCH.getDescriptor(), RepeatedType.SCHEDULE);
        // list of schedule parameters
        temp.put(openfmb.commonmodule.ENG_ScheduleParameter.getDescriptor(), RepeatedType.SCHEDULE_PARAMETER);

        // new
        temp.put(openfmb.commonmodule.TmHzPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.TmVoltPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.VoltVarPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.VoltWPoint.getDescriptor(), RepeatedType.SCHEDULE);
        temp.put(openfmb.commonmodule.WVarPoint.getDescriptor(), RepeatedType.SCHEDULE);

        lookupMap = Collections.unmodifiableMap(temp);
    }

    public static RepeatedType getType(Descriptors.Descriptor descriptor)
    {
        final RepeatedType type = lookupMap.get(descriptor);
        if(type == null) throw new RuntimeException("No repeated type defined for descriptor: " + descriptor.getFullName());
        return type;
    }
}



