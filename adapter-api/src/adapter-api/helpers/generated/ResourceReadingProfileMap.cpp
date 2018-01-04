// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 

#include "ResourceReadingProfileMap.h"

namespace openfmb {

ResourceReadingProfileMap::ResourceReadingProfileMap()
{

// initialize the analog map
this->analogs["resourceReading.readingMMXU.A.net.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.A.net.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.A.neut.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.A.neut.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.A.phsA.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.A.phsA.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.A.phsB.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.A.phsB.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.A.phsC.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.A.phsC.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.Hz.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_hz()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PhV.net.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PhV.net.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PhV.neut.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PhV.neut.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PhV.phsA.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PhV.phsA.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PhV.phsB.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PhV.phsB.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PhV.phsC.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PhV.phsC.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PPV.phsAB.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PPV.phsAB.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PPV.phsBC.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PPV.phsBC.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.PPV.phsCA.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.PPV.phsCA.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VA.net.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VA.net.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VA.neut.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VA.neut.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VA.phsA.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VA.phsA.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VA.phsB.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VA.phsB.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VA.phsC.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VA.phsC.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VAr.net.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VAr.net.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VAr.neut.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VAr.neut.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VAr.phsA.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VAr.phsA.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VAr.phsB.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VAr.phsB.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.VAr.phsC.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.VAr.phsC.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.W.net.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.W.net.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.W.neut.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.W.neut.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.W.phsA.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.W.phsA.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.W.phsB.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.W.phsB.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReading.readingMMXU.W.phsC.cVal.ang"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReading.readingMMXU.W.phsC.cVal.mag"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::AnalogValue* {
    return message.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsc()->mutable_cval()->mutable_mag();
};

// initialize the bcr map

this->bcrs["resourceReading.phaseMMTN.phsA.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_dmdvah();
};

this->bcrs["resourceReading.phaseMMTN.phsA.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_dmdvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsA.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_dmdwh();
};

this->bcrs["resourceReading.phaseMMTN.phsA.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_supvah();
};

this->bcrs["resourceReading.phaseMMTN.phsA.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_supvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsA.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_supwh();
};

this->bcrs["resourceReading.phaseMMTN.phsA.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_totvah();
};

this->bcrs["resourceReading.phaseMMTN.phsA.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_totvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsA.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_totwh();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_dmdvah();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_dmdvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_dmdwh();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_supvah();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_supvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_supwh();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_totvah();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_totvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsAB.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_totwh();
};

this->bcrs["resourceReading.phaseMMTN.phsB.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_dmdvah();
};

this->bcrs["resourceReading.phaseMMTN.phsB.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_dmdvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsB.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_dmdwh();
};

this->bcrs["resourceReading.phaseMMTN.phsB.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_supvah();
};

this->bcrs["resourceReading.phaseMMTN.phsB.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_supvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsB.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_supwh();
};

this->bcrs["resourceReading.phaseMMTN.phsB.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_totvah();
};

this->bcrs["resourceReading.phaseMMTN.phsB.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_totvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsB.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_totwh();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_dmdvah();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_dmdvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_dmdwh();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_supvah();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_supvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_supwh();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_totvah();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_totvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsBC.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_totwh();
};

this->bcrs["resourceReading.phaseMMTN.phsC.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_dmdvah();
};

this->bcrs["resourceReading.phaseMMTN.phsC.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_dmdvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsC.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_dmdwh();
};

this->bcrs["resourceReading.phaseMMTN.phsC.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_supvah();
};

this->bcrs["resourceReading.phaseMMTN.phsC.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_supvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsC.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_supwh();
};

this->bcrs["resourceReading.phaseMMTN.phsC.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_totvah();
};

this->bcrs["resourceReading.phaseMMTN.phsC.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_totvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsC.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_totwh();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_dmdvah();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_dmdvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_dmdwh();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_supvah();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_supvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_supwh();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_totvah();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_totvarh();
};

this->bcrs["resourceReading.phaseMMTN.phsCA.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_totwh();
};

this->bcrs["resourceReading.readingMMTR.DmdVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_dmdvah();
};

this->bcrs["resourceReading.readingMMTR.DmdVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_dmdvarh();
};

this->bcrs["resourceReading.readingMMTR.DmdWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_dmdwh();
};

this->bcrs["resourceReading.readingMMTR.SupVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_supvah();
};

this->bcrs["resourceReading.readingMMTR.SupVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_supvarh();
};

this->bcrs["resourceReading.readingMMTR.SupWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_supwh();
};

this->bcrs["resourceReading.readingMMTR.TotVAh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_totvah();
};

this->bcrs["resourceReading.readingMMTR.TotVArh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_totvarh();
};

this->bcrs["resourceReading.readingMMTR.TotWh"] = [](resourcemodule::ResourceReadingProfile& message) -> commonmodule::BCR* {
    return message.mutable_resourcereading()->mutable_readingmmtr()->mutable_totwh();
};

} // end constructor

} // end namespace openfmb
