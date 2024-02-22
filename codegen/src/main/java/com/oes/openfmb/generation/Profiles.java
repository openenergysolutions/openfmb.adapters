// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation;

import com.google.protobuf.Descriptors;
import openfmb.breakermodule.*;
import openfmb.capbankmodule.*;
import openfmb.circuitsegmentservicemodule.*;
import openfmb.interconnectionmodule.*;
import openfmb.essmodule.*;
import openfmb.generationmodule.*;
import openfmb.loadmodule.*;
import openfmb.metermodule.*;
import openfmb.reclosermodule.*;
import openfmb.regulatormodule.*;
import openfmb.reservemodule.*;
import openfmb.resourcemodule.*;
import openfmb.solarmodule.*;
import openfmb.switchmodule.*;

import java.util.*;

public class Profiles {

    private Profiles() {}

    public static List<Descriptors.Descriptor> list = Collections.unmodifiableList(get());

    private static List<Descriptors.Descriptor> get()
    {
        return Arrays.asList(
                        // Breaker
                        BreakerDiscreteControlProfile.getDescriptor(),
                        BreakerEventProfile.getDescriptor(),
                        BreakerReadingProfile.getDescriptor(),
                        BreakerStatusProfile.getDescriptor(),
                        // CapBank
                        CapBankControlProfile.getDescriptor(),
                        CapBankDiscreteControlProfile.getDescriptor(),
                        CapBankEventProfile.getDescriptor(),
                        CapBankReadingProfile.getDescriptor(),
                        CapBankStatusProfile.getDescriptor(),
                        // Circuit Segment Service
                        CircuitSegmentControlProfile.getDescriptor(),
                        CircuitSegmentEventProfile.getDescriptor(),
                        CircuitSegmentStatusProfile.getDescriptor(),
                        // ESS
                        ESSCapabilityOverrideProfile.getDescriptor(),
                        ESSCapabilityProfile.getDescriptor(),
                        ESSControlProfile.getDescriptor(),
                        ESSDiscreteControlProfile.getDescriptor(),
                        ESSEventProfile.getDescriptor(),
                        ESSReadingProfile.getDescriptor(),
                        ESSStatusProfile.getDescriptor(),
                        // Generation
                        GenerationCapabilityOverrideProfile.getDescriptor(),
                        GenerationCapabilityProfile.getDescriptor(),
                        GenerationControlProfile.getDescriptor(),
                        GenerationDiscreteControlProfile.getDescriptor(),
                        GenerationEventProfile.getDescriptor(),
                        GenerationReadingProfile.getDescriptor(),
                        GenerationStatusProfile.getDescriptor(),
                        // Interconnection
                        InterconnectionPlannedScheduleProfile.getDescriptor(),
                        InterconnectionRequestedScheduleProfile.getDescriptor(),
                        // Load
                        LoadControlProfile.getDescriptor(),
                        LoadEventProfile.getDescriptor(),
                        LoadReadingProfile.getDescriptor(),
                        LoadStatusProfile.getDescriptor(),
                        // Meter
                        MeterReadingProfile.getDescriptor(),
                        // Recloser
                        RecloserDiscreteControlProfile.getDescriptor(),
                        RecloserEventProfile.getDescriptor(),
                        RecloserReadingProfile.getDescriptor(),
                        RecloserStatusProfile.getDescriptor(),
                        // Regulator
                        RegulatorDiscreteControlProfile.getDescriptor(),
                        RegulatorControlProfile.getDescriptor(),
                        RegulatorEventProfile.getDescriptor(),
                        RegulatorReadingProfile.getDescriptor(),
                        RegulatorStatusProfile.getDescriptor(),
                        // Reserve
                        ReserveAvailabilityProfile.getDescriptor(),
                        ReserveRequestProfile.getDescriptor(),
                        // Resource
                        ResourceDiscreteControlProfile.getDescriptor(),
                        ResourceEventProfile.getDescriptor(),
                        ResourceReadingProfile.getDescriptor(),
                        ResourceStatusProfile.getDescriptor(),
                        // Solar
                        SolarCapabilityOverrideProfile.getDescriptor(),
                        SolarCapabilityProfile.getDescriptor(),
                        SolarControlProfile.getDescriptor(),
                        SolarDiscreteControlProfile.getDescriptor(),
                        SolarEventProfile.getDescriptor(),
                        SolarReadingProfile.getDescriptor(),
                        SolarStatusProfile.getDescriptor(),
                        // Switch
                        SwitchDiscreteControlProfile.getDescriptor(),
                        SwitchEventProfile.getDescriptor(),
                        SwitchReadingProfile.getDescriptor(),
                        SwitchStatusProfile.getDescriptor()
        );
    }
}
