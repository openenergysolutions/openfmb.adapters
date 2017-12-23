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

#include "ResourceReadingProfileHelper.h"

namespace openfmb {

ResourceReadingProfileHelper::ResourceReadingProfileHelper()
{

// initialize the analog map
this->analogs["resourceReadingValue.readingMMXU.a.net.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.a.net.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.a.neut.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.a.neut.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.a.phsA.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.a.phsA.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.a.phsB.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.a.phsB.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.a.phsC.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.a.phsC.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_a()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.hz.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_hz()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.phV.net.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.phV.net.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.phV.neut.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.phV.neut.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.phV.phsA.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.phV.phsA.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.phV.phsB.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.phV.phsB.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.phV.phsC.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.phV.phsC.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_phv()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.pPV.phsAB.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.pPV.phsAB.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.pPV.phsBC.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.pPV.phsBC.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.pPV.phsCA.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.pPV.phsCA.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vA.net.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vA.net.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vA.neut.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vA.neut.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vA.phsA.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vA.phsA.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vA.phsB.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vA.phsB.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vA.phsC.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vA.phsC.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_va()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.net.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.net.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.neut.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.neut.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.phsA.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.phsA.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.phsB.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.phsB.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.phsC.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.vAr.phsC.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_var()->mutable_phsc()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.v.net.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_net()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.v.net.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_net()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.v.neut.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_neut()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.v.neut.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_neut()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.v.phsA.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_phsa()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.v.phsA.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_phsa()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.v.phsB.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_phsb()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.v.phsB.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_phsb()->mutable_cval()->mutable_mag();
};

this->analogs["resourceReadingValue.readingMMXU.v.phsC.cVal.ang"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_phsc()->mutable_cval()->mutable_ang();
};

this->analogs["resourceReadingValue.readingMMXU.v.phsC.cVal.mag"] = [](ResourceReadingProfile& message) -> AnalogueValue* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmxu()->mutable_v()->mutable_phsc()->mutable_cval()->mutable_mag();
};

// initialize the bcr map

this->bcrs["resourceReadingValue.readingMMTR.dmdVArh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_dmdvarh();
};

this->bcrs["resourceReadingValue.readingMMTR.dmdWh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_dmdwh();
};

this->bcrs["resourceReadingValue.readingMMTR.supVArh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_supvarh();
};

this->bcrs["resourceReadingValue.readingMMTR.supWh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_supwh();
};

this->bcrs["resourceReadingValue.readingMMTR.totVAh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_totvah();
};

this->bcrs["resourceReadingValue.readingMMTR.totVArh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_totvarh();
};

this->bcrs["resourceReadingValue.readingMMTR.totWh"] = [](ResourceReadingProfile& message) -> BCR* {
    return message.mutable_resourcereadingvalue()->mutable_readingmmtr()->mutable_totwh();
};

} // end constructor

} // end namespace openfmb
