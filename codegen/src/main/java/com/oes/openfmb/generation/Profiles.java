package com.oes.openfmb.generation;

import com.google.protobuf.Descriptors;
import openfmb.essmodule.ESSControlProfile;
import openfmb.essmodule.ESSReadingProfile;
import openfmb.essmodule.ESSStatusProfile;
import openfmb.loadmodule.LoadControlProfile;
import openfmb.loadmodule.LoadReadingProfile;
import openfmb.loadmodule.LoadStatusProfile;
import openfmb.resourcemodule.ResourceReadingProfile;
import openfmb.solarmodule.SolarControlProfile;
import openfmb.solarmodule.SolarReadingProfile;
import openfmb.solarmodule.SolarStatusProfile;
import openfmb.switchmodule.SwitchControlProfile;
import openfmb.switchmodule.SwitchReadingProfile;
import openfmb.switchmodule.SwitchStatusProfile;

import java.util.Arrays;
import java.util.List;

public class Profiles {

    private Profiles() {}

    public final static List<Descriptors.Descriptor> descriptors = Arrays.asList(
            ResourceReadingProfile.getDescriptor(),
            // switch
            SwitchReadingProfile.getDescriptor(),
            SwitchStatusProfile.getDescriptor(),
            SwitchControlProfile.getDescriptor(),
            // ess
            ESSReadingProfile.getDescriptor(),
            ESSStatusProfile.getDescriptor(),
            ESSControlProfile.getDescriptor(),
            //solar
            SolarReadingProfile.getDescriptor(),
            SolarStatusProfile.getDescriptor(),
            SolarControlProfile.getDescriptor(),
            // load
            LoadReadingProfile.getDescriptor(),
            LoadStatusProfile.getDescriptor(),
            LoadControlProfile.getDescriptor()
    );
}
