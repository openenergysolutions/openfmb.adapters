package com.oes.openfmb.generation;

import com.google.protobuf.Descriptors;
import openfmb.breakermodule.*;
import openfmb.capbankmodule.*;
import openfmb.essmodule.*;
import openfmb.generationmodule.*;
import openfmb.loadmodule.*;
import openfmb.metermodule.*;
import openfmb.reclosermodule.*;
import openfmb.regulatormodule.*;
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
                        // ESS
                        ESSControlProfile.getDescriptor(),
                        ESSEventProfile.getDescriptor(),
                        ESSReadingProfile.getDescriptor(),
                        ESSStatusProfile.getDescriptor(),
                        // Generation
                        GenerationControlProfile.getDescriptor(),
                        GenerationDiscreteControlProfile.getDescriptor(),
                        GenerationEventProfile.getDescriptor(),
                        GenerationReadingProfile.getDescriptor(),
                        GenerationStatusProfile.getDescriptor(),
                        // Load
                        LoadControlProfile.getDescriptor(),
                        LoadEventProfile.getDescriptor(),
                        LoadReadingProfile.getDescriptor(),
                        LoadStatusProfile.getDescriptor(),
                        // Meter
                        MeterReadingProfile.getDescriptor(),
                        // Recloser
                        //RecloserControlProfile.getDescriptor(),
                        RecloserDiscreteControlProfile.getDescriptor(),
                        RecloserEventProfile.getDescriptor(),
                        RecloserReadingProfile.getDescriptor(),
                        RecloserStatusProfile.getDescriptor(),
                        // Regulator
                        RegulatorControlProfile.getDescriptor(),
                        RegulatorEventProfile.getDescriptor(),
                        RegulatorReadingProfile.getDescriptor(),
                        RegulatorStatusProfile.getDescriptor(),
                        // Resource
                        ResourceDiscreteControlProfile.getDescriptor(),
                        ResourceEventProfile.getDescriptor(),
                        ResourceReadingProfile.getDescriptor(),
                        ResourceStatusProfile.getDescriptor(),
                        // Solar
                        SolarControlProfile.getDescriptor(),
                        SolarEventProfile.getDescriptor(),
                        SolarReadingProfile.getDescriptor(),
                        SolarStatusProfile.getDescriptor(),
                        // Switch
                        //SwitchControlProfile.getDescriptor(),
                        SwitchDiscreteControlProfile.getDescriptor(),
                        SwitchEventProfile.getDescriptor(),
                        SwitchReadingProfile.getDescriptor(),
                        SwitchStatusProfile.getDescriptor()
        );
    }
}
