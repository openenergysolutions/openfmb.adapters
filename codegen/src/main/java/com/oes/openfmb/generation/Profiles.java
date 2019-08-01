package com.oes.openfmb.generation;

import com.google.protobuf.Descriptors;
import openfmb.breakermodule.BreakerEventProfile;
import openfmb.breakermodule.BreakerReadingProfile;
import openfmb.breakermodule.BreakerStatusProfile;
import openfmb.breakermodule.BreakerDiscreteControlProfile;
import openfmb.essmodule.ESSControlProfile;
import openfmb.essmodule.ESSEventProfile;
import openfmb.essmodule.ESSReadingProfile;
import openfmb.essmodule.ESSStatusProfile;
import openfmb.generationmodule.GenerationControlProfile;
import openfmb.generationmodule.GenerationEventProfile;
import openfmb.generationmodule.GenerationReadingProfile;
import openfmb.generationmodule.GenerationStatusProfile;
import openfmb.loadmodule.LoadControlProfile;
import openfmb.loadmodule.LoadEventProfile;
import openfmb.loadmodule.LoadReadingProfile;
import openfmb.loadmodule.LoadStatusProfile;
import openfmb.metermodule.MeterReadingProfile;
import openfmb.reclosermodule.*;
import openfmb.regulatormodule.RegulatorControlProfile;
import openfmb.regulatormodule.RegulatorEventProfile;
import openfmb.regulatormodule.RegulatorReadingProfile;
import openfmb.regulatormodule.RegulatorStatusProfile;
import openfmb.resourcemodule.ResourceReadingProfile;
import openfmb.resourcemodule.ResourceStatusProfile;
import openfmb.solarmodule.SolarControlProfile;
import openfmb.solarmodule.SolarEventProfile;
import openfmb.solarmodule.SolarReadingProfile;
import openfmb.solarmodule.SolarStatusProfile;
import openfmb.switchmodule.*;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

public class Profiles {

    private Profiles() {}

    public static Set<Descriptors.Descriptor> set = Collections.unmodifiableSet(get());

    private static Set<Descriptors.Descriptor> get()
    {
        return new HashSet<>(
                Arrays.asList(
                        // Breaker
                        BreakerDiscreteControlProfile.getDescriptor(),
                        BreakerEventProfile.getDescriptor(),
                        BreakerReadingProfile.getDescriptor(),
                        BreakerStatusProfile.getDescriptor(),
                        // ESS
                        ESSControlProfile.getDescriptor(),
                        ESSEventProfile.getDescriptor(),
                        ESSReadingProfile.getDescriptor(),
                        ESSStatusProfile.getDescriptor(),
                        // Generation
                        GenerationControlProfile.getDescriptor(),
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
                        RecloserControlProfile.getDescriptor(),
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
                        ResourceReadingProfile.getDescriptor(),
                        ResourceStatusProfile.getDescriptor(),
                        // Solar
                        SolarControlProfile.getDescriptor(),
                        SolarEventProfile.getDescriptor(),
                        SolarReadingProfile.getDescriptor(),
                        SolarReadingProfile.getDescriptor(),
                        SolarStatusProfile.getDescriptor(),
                        // Switch
                        SwitchControlProfile.getDescriptor(),
                        SwitchDiscreteControlProfile.getDescriptor(),
                        SwitchEventProfile.getDescriptor(),
                        SwitchReadingProfile.getDescriptor(),
                        SwitchStatusProfile.getDescriptor()
                )
        );
    }
}
