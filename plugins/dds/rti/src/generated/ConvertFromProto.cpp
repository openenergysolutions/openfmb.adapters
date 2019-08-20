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

#include "generated/ConvertFromProto.h"

namespace adapter {

namespace dds {

namespace rti {

// ---- forward declare the conversion routines for the child types ---

void convert_from_proto(const commonmodule::ControlDPC& in, openfmb::commonmodule::ControlDPC& out);

void convert_from_proto(const commonmodule::NamedObject& in, openfmb::commonmodule::NamedObject& out);

void convert_from_proto(const commonmodule::CheckConditions& in, openfmb::commonmodule::CheckConditions& out);

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, openfmb::commonmodule::LogicalNodeForControl& out);

void convert_from_proto(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out);

void convert_from_proto(const breakermodule::BreakerDiscreteControlXCBR& in, openfmb::breakermodule::BreakerDiscreteControlXCBR& out);

void convert_from_proto(const commonmodule::IED& in, openfmb::commonmodule::IED& out);

void convert_from_proto(const commonmodule::TimeQuality& in, openfmb::commonmodule::TimeQuality& out);

void convert_from_proto(const breakermodule::Breaker& in, openfmb::breakermodule::Breaker& out);

void convert_from_proto(const commonmodule::MessageInfo& in, openfmb::commonmodule::MessageInfo& out);

void convert_from_proto(const breakermodule::BreakerDiscreteControl& in, openfmb::breakermodule::BreakerDiscreteControl& out);

void convert_from_proto(const commonmodule::ControlValue& in, openfmb::commonmodule::ControlValue& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out);

void convert_from_proto(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, openfmb::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::ControlMessageInfo& in, openfmb::commonmodule::ControlMessageInfo& out);

void convert_from_proto(const commonmodule::ENS_HealthKind& in, openfmb::commonmodule::ENS_HealthKind& out);

void convert_from_proto(const commonmodule::StatusAndEventXCBR& in, openfmb::commonmodule::StatusAndEventXCBR& out);

void convert_from_proto(const commonmodule::EventMessageInfo& in, openfmb::commonmodule::EventMessageInfo& out);

void convert_from_proto(const commonmodule::EventValue& in, openfmb::commonmodule::EventValue& out);

void convert_from_proto(const commonmodule::DetailQual& in, openfmb::commonmodule::DetailQual& out);

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, openfmb::commonmodule::ENS_DynamicTestKind& out);

void convert_from_proto(const commonmodule::LogicalNodeForEventAndStatus& in, openfmb::commonmodule::LogicalNodeForEventAndStatus& out);

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, openfmb::commonmodule::ENS_BehaviourModeKind& out);

void convert_from_proto(const commonmodule::StatusDPS& in, openfmb::commonmodule::StatusDPS& out);

void convert_from_proto(const breakermodule::BreakerEvent& in, openfmb::breakermodule::BreakerEvent& out);

void convert_from_proto(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out);

void convert_from_proto(const commonmodule::AnalogueValue& in, openfmb::commonmodule::AnalogueValue& out);

void convert_from_proto(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out);

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out);

void convert_from_proto(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, openfmb::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, openfmb::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, openfmb::commonmodule::PhaseMMTN& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, openfmb::commonmodule::ACDCTerminal& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, openfmb::commonmodule::ReadingMMTN& out);

void convert_from_proto(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out);

void convert_from_proto(const breakermodule::BreakerReading& in, openfmb::breakermodule::BreakerReading& out);

void convert_from_proto(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out);

void convert_from_proto(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out);

void convert_from_proto(const breakermodule::BreakerStatus& in, openfmb::breakermodule::BreakerStatus& out);

void convert_from_proto(const commonmodule::StatusMessageInfo& in, openfmb::commonmodule::StatusMessageInfo& out);

void convert_from_proto(const commonmodule::StatusValue& in, openfmb::commonmodule::StatusValue& out);

void convert_from_proto(const commonmodule::ENG_ScheduleParameter& in, openfmb::commonmodule::ENG_ScheduleParameter& out);

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, openfmb::commonmodule::ENG_GridConnectModeKind& out);

void convert_from_proto(const essmodule::FrequencyRegulation& in, openfmb::essmodule::FrequencyRegulation& out);

void convert_from_proto(const essmodule::SocLimit& in, openfmb::essmodule::SocLimit& out);

void convert_from_proto(const commonmodule::ESS& in, openfmb::commonmodule::ESS& out);

void convert_from_proto(const essmodule::VoltagePI& in, openfmb::essmodule::VoltagePI& out);

void convert_from_proto(const essmodule::ESSFunction& in, openfmb::essmodule::ESSFunction& out);

void convert_from_proto(const essmodule::VoltageDroop& in, openfmb::essmodule::VoltageDroop& out);

void convert_from_proto(const essmodule::VoltageRegulation& in, openfmb::essmodule::VoltageRegulation& out);

void convert_from_proto(const essmodule::CapacityFirming& in, openfmb::essmodule::CapacityFirming& out);

void convert_from_proto(const commonmodule::SchedulePoint& in, openfmb::commonmodule::SchedulePoint& out);

void convert_from_proto(const commonmodule::ScheduleCSG& in, openfmb::commonmodule::ScheduleCSG& out);

void convert_from_proto(const commonmodule::ControlFSCC& in, openfmb::commonmodule::ControlFSCC& out);

void convert_from_proto(const essmodule::ESSPoint& in, openfmb::essmodule::ESSPoint& out);

void convert_from_proto(const essmodule::EssControlFSCC& in, openfmb::essmodule::EssControlFSCC& out);

void convert_from_proto(const commonmodule::ControlTimestamp& in, openfmb::commonmodule::ControlTimestamp& out);

void convert_from_proto(const essmodule::ESSCSG& in, openfmb::essmodule::ESSCSG& out);

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, openfmb::commonmodule::ControlScheduleFSCH& out);

void convert_from_proto(const essmodule::ESSControl& in, openfmb::essmodule::ESSControl& out);

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, openfmb::essmodule::ESSControlScheduleFSCH& out);

void convert_from_proto(const essmodule::SOCManagement& in, openfmb::essmodule::SOCManagement& out);

void convert_from_proto(const essmodule::PeakShaving& in, openfmb::essmodule::PeakShaving& out);

void convert_from_proto(const commonmodule::RampRate& in, openfmb::commonmodule::RampRate& out);

void convert_from_proto(const essmodule::ESSEventZGEN& in, openfmb::essmodule::ESSEventZGEN& out);

void convert_from_proto(const commonmodule::StatusSPS& in, openfmb::commonmodule::StatusSPS& out);

void convert_from_proto(const essmodule::ESSEvent& in, openfmb::essmodule::ESSEvent& out);

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, openfmb::essmodule::ESSEventAndStatusZGEN& out);

void convert_from_proto(const essmodule::EssEventZBAT& in, openfmb::essmodule::EssEventZBAT& out);

void convert_from_proto(const essmodule::ESSPointStatus& in, openfmb::essmodule::ESSPointStatus& out);

void convert_from_proto(const essmodule::ESSReading& in, openfmb::essmodule::ESSReading& out);

void convert_from_proto(const essmodule::ESSStatusZGEN& in, openfmb::essmodule::ESSStatusZGEN& out);

void convert_from_proto(const essmodule::EssStatusZBAT& in, openfmb::essmodule::EssStatusZBAT& out);

void convert_from_proto(const essmodule::ESSStatus& in, openfmb::essmodule::ESSStatus& out);

void convert_from_proto(const generationmodule::GenerationControlFSCC& in, openfmb::generationmodule::GenerationControlFSCC& out);

void convert_from_proto(const commonmodule::ActivePower& in, openfmb::commonmodule::ActivePower& out);

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, openfmb::generationmodule::GenerationControlScheduleFSCH& out);

void convert_from_proto(const generationmodule::GenerationControl& in, openfmb::generationmodule::GenerationControl& out);

void convert_from_proto(const generationmodule::GeneratingUnit& in, openfmb::generationmodule::GeneratingUnit& out);

void convert_from_proto(const generationmodule::GenerationCSG& in, openfmb::generationmodule::GenerationCSG& out);

void convert_from_proto(const generationmodule::GenerationPoint& in, openfmb::generationmodule::GenerationPoint& out);

void convert_from_proto(const generationmodule::GenerationEvent& in, openfmb::generationmodule::GenerationEvent& out);

void convert_from_proto(const generationmodule::GenerationEventZGEN& in, openfmb::generationmodule::GenerationEventZGEN& out);

void convert_from_proto(const generationmodule::GenerationEventAndStatusZGEN& in, openfmb::generationmodule::GenerationEventAndStatusZGEN& out);

void convert_from_proto(const generationmodule::GenerationPointStatus& in, openfmb::generationmodule::GenerationPointStatus& out);

void convert_from_proto(const generationmodule::GenerationReading& in, openfmb::generationmodule::GenerationReading& out);

void convert_from_proto(const generationmodule::GenerationStatus& in, openfmb::generationmodule::GenerationStatus& out);

void convert_from_proto(const generationmodule::GenerationStatusZGEN& in, openfmb::generationmodule::GenerationStatusZGEN& out);

void convert_from_proto(const loadmodule::LoadPoint& in, openfmb::loadmodule::LoadPoint& out);

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, openfmb::loadmodule::LoadControlScheduleFSCH& out);

void convert_from_proto(const commonmodule::EnergyConsumer& in, openfmb::commonmodule::EnergyConsumer& out);

void convert_from_proto(const loadmodule::LoadControl& in, openfmb::loadmodule::LoadControl& out);

void convert_from_proto(const loadmodule::LoadControlFSCC& in, openfmb::loadmodule::LoadControlFSCC& out);

void convert_from_proto(const loadmodule::LoadCSG& in, openfmb::loadmodule::LoadCSG& out);

void convert_from_proto(const loadmodule::LoadEventZGLD& in, openfmb::loadmodule::LoadEventZGLD& out);

void convert_from_proto(const loadmodule::LoadEventAndStatusZGLD& in, openfmb::loadmodule::LoadEventAndStatusZGLD& out);

void convert_from_proto(const loadmodule::LoadPointStatus& in, openfmb::loadmodule::LoadPointStatus& out);

void convert_from_proto(const loadmodule::LoadEvent& in, openfmb::loadmodule::LoadEvent& out);

void convert_from_proto(const loadmodule::LoadReading& in, openfmb::loadmodule::LoadReading& out);

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, openfmb::loadmodule::LoadStatusZGLD& out);

void convert_from_proto(const loadmodule::LoadStatus& in, openfmb::loadmodule::LoadStatus& out);

void convert_from_proto(const commonmodule::Meter& in, openfmb::commonmodule::Meter& out);

void convert_from_proto(const metermodule::MeterReading& in, openfmb::metermodule::MeterReading& out);

void convert_from_proto(const commonmodule::SwitchPoint& in, openfmb::commonmodule::SwitchPoint& out);

void convert_from_proto(const commonmodule::SwitchCSG& in, openfmb::commonmodule::SwitchCSG& out);

void convert_from_proto(const reclosermodule::Recloser& in, openfmb::reclosermodule::Recloser& out);

void convert_from_proto(const commonmodule::SwitchControlScheduleFSCH& in, openfmb::commonmodule::SwitchControlScheduleFSCH& out);

void convert_from_proto(const reclosermodule::RecloserControlFSCC& in, openfmb::reclosermodule::RecloserControlFSCC& out);

void convert_from_proto(const reclosermodule::RecloserControl& in, openfmb::reclosermodule::RecloserControl& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControl& in, openfmb::reclosermodule::RecloserDiscreteControl& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControlXCBR& in, openfmb::reclosermodule::RecloserDiscreteControlXCBR& out);

void convert_from_proto(const reclosermodule::RecloserEvent& in, openfmb::reclosermodule::RecloserEvent& out);

void convert_from_proto(const reclosermodule::RecloserReading& in, openfmb::reclosermodule::RecloserReading& out);

void convert_from_proto(const reclosermodule::RecloserStatus& in, openfmb::reclosermodule::RecloserStatus& out);

void convert_from_proto(const regulatormodule::RegulatorPoint& in, openfmb::regulatormodule::RegulatorPoint& out);

void convert_from_proto(const regulatormodule::RegulatorCSG& in, openfmb::regulatormodule::RegulatorCSG& out);

void convert_from_proto(const regulatormodule::RegulatorControlScheduleFSCH& in, openfmb::regulatormodule::RegulatorControlScheduleFSCH& out);

void convert_from_proto(const regulatormodule::RegulatorControl& in, openfmb::regulatormodule::RegulatorControl& out);

void convert_from_proto(const regulatormodule::RegulatorSystem& in, openfmb::regulatormodule::RegulatorSystem& out);

void convert_from_proto(const commonmodule::ControlISC& in, openfmb::commonmodule::ControlISC& out);

void convert_from_proto(const commonmodule::ControlING& in, openfmb::commonmodule::ControlING& out);

void convert_from_proto(const commonmodule::ControlSPC& in, openfmb::commonmodule::ControlSPC& out);

void convert_from_proto(const regulatormodule::RegulatorControlATCC& in, openfmb::regulatormodule::RegulatorControlATCC& out);

void convert_from_proto(const regulatormodule::RegulatorControlFSCC& in, openfmb::regulatormodule::RegulatorControlFSCC& out);

void convert_from_proto(const commonmodule::AnalogueValueCtl& in, openfmb::commonmodule::AnalogueValueCtl& out);

void convert_from_proto(const commonmodule::ASG& in, openfmb::commonmodule::ASG& out);

void convert_from_proto(const regulatormodule::RegulatorEvent& in, openfmb::regulatormodule::RegulatorEvent& out);

void convert_from_proto(const commonmodule::StatusSPC& in, openfmb::commonmodule::StatusSPC& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusPoint& in, openfmb::regulatormodule::RegulatorEventAndStatusPoint& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusANCR& in, openfmb::regulatormodule::RegulatorEventAndStatusANCR& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusATCC& in, openfmb::regulatormodule::RegulatorEventAndStatusATCC& out);

void convert_from_proto(const commonmodule::StatusISC& in, openfmb::commonmodule::StatusISC& out);

void convert_from_proto(const regulatormodule::RegulatorReading& in, openfmb::regulatormodule::RegulatorReading& out);

void convert_from_proto(const regulatormodule::RegulatorStatus& in, openfmb::regulatormodule::RegulatorStatus& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out);

void convert_from_proto(const commonmodule::AnalogStatusGGIO& in, openfmb::commonmodule::AnalogStatusGGIO& out);

void convert_from_proto(const commonmodule::VSS& in, openfmb::commonmodule::VSS& out);

void convert_from_proto(const commonmodule::IntegerStatusGGIO& in, openfmb::commonmodule::IntegerStatusGGIO& out);

void convert_from_proto(const commonmodule::BooleanStatusGGIO& in, openfmb::commonmodule::BooleanStatusGGIO& out);

void convert_from_proto(const commonmodule::StatusINS& in, openfmb::commonmodule::StatusINS& out);

void convert_from_proto(const commonmodule::StringStatusGGIO& in, openfmb::commonmodule::StringStatusGGIO& out);

void convert_from_proto(const resourcemodule::ResourceStatus& in, openfmb::resourcemodule::ResourceStatus& out);

void convert_from_proto(const solarmodule::SolarControlFSCC& in, openfmb::solarmodule::SolarControlFSCC& out);

void convert_from_proto(const solarmodule::SolarControl& in, openfmb::solarmodule::SolarControl& out);

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, openfmb::solarmodule::SolarControlScheduleFSCH& out);

void convert_from_proto(const solarmodule::SolarPoint& in, openfmb::solarmodule::SolarPoint& out);

void convert_from_proto(const solarmodule::SolarInverter& in, openfmb::solarmodule::SolarInverter& out);

void convert_from_proto(const solarmodule::SolarCSG& in, openfmb::solarmodule::SolarCSG& out);

void convert_from_proto(const solarmodule::SolarEventAndStatusZGEN& in, openfmb::solarmodule::SolarEventAndStatusZGEN& out);

void convert_from_proto(const solarmodule::SolarPointStatus& in, openfmb::solarmodule::SolarPointStatus& out);

void convert_from_proto(const solarmodule::SolarEventZGEN& in, openfmb::solarmodule::SolarEventZGEN& out);

void convert_from_proto(const solarmodule::SolarEvent& in, openfmb::solarmodule::SolarEvent& out);

void convert_from_proto(const solarmodule::SolarReading& in, openfmb::solarmodule::SolarReading& out);

void convert_from_proto(const solarmodule::SolarStatusZGEN& in, openfmb::solarmodule::SolarStatusZGEN& out);

void convert_from_proto(const solarmodule::SolarStatus& in, openfmb::solarmodule::SolarStatus& out);

void convert_from_proto(const switchmodule::SwitchControl& in, openfmb::switchmodule::SwitchControl& out);

void convert_from_proto(const switchmodule::SwitchControlFSCC& in, openfmb::switchmodule::SwitchControlFSCC& out);

void convert_from_proto(const switchmodule::ProtectedSwitch& in, openfmb::switchmodule::ProtectedSwitch& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControl& in, openfmb::switchmodule::SwitchDiscreteControl& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControlXSWI& in, openfmb::switchmodule::SwitchDiscreteControlXSWI& out);

void convert_from_proto(const switchmodule::SwitchEventXSWI& in, openfmb::switchmodule::SwitchEventXSWI& out);

void convert_from_proto(const switchmodule::SwitchEvent& in, openfmb::switchmodule::SwitchEvent& out);

void convert_from_proto(const switchmodule::SwitchReading& in, openfmb::switchmodule::SwitchReading& out);

void convert_from_proto(const switchmodule::SwitchStatus& in, openfmb::switchmodule::SwitchStatus& out);

void convert_from_proto(const switchmodule::SwitchStatusXSWI& in, openfmb::switchmodule::SwitchStatusXSWI& out);

// ---- implement the top level profile conversion routines ---

void convert_from_proto(const breakermodule::BreakerDiscreteControlProfile& in, openfmb::breakermodule::BreakerDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker()); // required field in DDS

    convert_from_proto(in.breakerdiscretecontrol(), out.breakerDiscreteControl()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerEventProfile& in, openfmb::breakermodule::BreakerEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker()); // required field in DDS

    convert_from_proto(in.breakerevent(), out.breakerEvent()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, openfmb::breakermodule::BreakerReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker()); // required field in DDS

    for(const auto& input : in.breakerreading())
    {
        openfmb::breakermodule::BreakerReading output;
        convert_from_proto(input, output);
        out.breakerReading().push_back(output);
    }

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerStatusProfile& in, openfmb::breakermodule::BreakerStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker()); // required field in DDS

    convert_from_proto(in.breakerstatus(), out.breakerStatus()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSControlProfile& in, openfmb::essmodule::ESSControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.esscontrol(), out.essControl()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSEventProfile& in, openfmb::essmodule::ESSEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.essevent(), out.essEvent()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSReadingProfile& in, openfmb::essmodule::ESSReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.essreading(), out.essReading()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSStatusProfile& in, openfmb::essmodule::ESSStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.essstatus(), out.essStatus()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationControlProfile& in, openfmb::generationmodule::GenerationControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationcontrol(), out.generationControl()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationEventProfile& in, openfmb::generationmodule::GenerationEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationevent(), out.generationEvent()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationReadingProfile& in, openfmb::generationmodule::GenerationReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationreading(), out.generationReading()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationStatusProfile& in, openfmb::generationmodule::GenerationStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationstatus(), out.generationStatus()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadControlProfile& in, openfmb::loadmodule::LoadControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.loadcontrol(), out.loadControl()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadEventProfile& in, openfmb::loadmodule::LoadEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.loadevent(), out.loadEvent()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadReadingProfile& in, openfmb::loadmodule::LoadReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.loadreading(), out.loadReading()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadStatusProfile& in, openfmb::loadmodule::LoadStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.loadstatus(), out.loadStatus()); // required field in DDS
}

void convert_from_proto(const metermodule::MeterReadingProfile& in, openfmb::metermodule::MeterReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.meter(), out.meter()); // required field in DDS

    convert_from_proto(in.meterreading(), out.meterReading()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserControlProfile& in, openfmb::reclosermodule::RecloserControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.reclosercontrol(), out.recloserControl()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControlProfile& in, openfmb::reclosermodule::RecloserDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.recloserdiscretecontrol(), out.recloserDiscreteControl()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserEventProfile& in, openfmb::reclosermodule::RecloserEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.recloserevent(), out.recloserEvent()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserReadingProfile& in, openfmb::reclosermodule::RecloserReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    for(const auto& input : in.recloserreading())
    {
        openfmb::reclosermodule::RecloserReading output;
        convert_from_proto(input, output);
        out.recloserReading().push_back(output);
    }
}

void convert_from_proto(const reclosermodule::RecloserStatusProfile& in, openfmb::reclosermodule::RecloserStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.recloserstatus(), out.recloserStatus()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorControlProfile& in, openfmb::regulatormodule::RegulatorControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.regulatorcontrol(), out.regulatorControl()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorEventProfile& in, openfmb::regulatormodule::RegulatorEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.regulatorevent(), out.regulatorEvent()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorReadingProfile& in, openfmb::regulatormodule::RegulatorReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    for(const auto& input : in.regulatorreading())
    {
        openfmb::regulatormodule::RegulatorReading output;
        convert_from_proto(input, output);
        out.regulatorReading().push_back(output);
    }

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorStatusProfile& in, openfmb::regulatormodule::RegulatorStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.regulatorstatus(), out.regulatorStatus()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.resourcereading(), out.resourceReading()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceStatusProfile& in, openfmb::resourcemodule::ResourceStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.resourcestatus(), out.resourceStatus()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarControlProfile& in, openfmb::solarmodule::SolarControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.solarcontrol(), out.solarControl()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarEventProfile& in, openfmb::solarmodule::SolarEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.solarevent(), out.solarEvent()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarReadingProfile& in, openfmb::solarmodule::SolarReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS

    convert_from_proto(in.solarreading(), out.solarReading()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarStatusProfile& in, openfmb::solarmodule::SolarStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS

    convert_from_proto(in.solarstatus(), out.solarStatus()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchControlProfile& in, openfmb::switchmodule::SwitchControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    convert_from_proto(in.switchcontrol(), out.switchControl()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchDiscreteControlProfile& in, openfmb::switchmodule::SwitchDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    convert_from_proto(in.switchdiscretecontrol(), out.switchDiscreteControl()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchEventProfile& in, openfmb::switchmodule::SwitchEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    convert_from_proto(in.switchevent(), out.switchEvent()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, openfmb::switchmodule::SwitchReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    for(const auto& input : in.switchreading())
    {
        openfmb::switchmodule::SwitchReading output;
        convert_from_proto(input, output);
        out.switchReading().push_back(output);
    }
}

void convert_from_proto(const switchmodule::SwitchStatusProfile& in, openfmb::switchmodule::SwitchStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    convert_from_proto(in.switchstatus(), out.switchStatus()); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_from_proto(const commonmodule::ControlDPC& in, openfmb::commonmodule::ControlDPC& out)
{
    out.ctlVal() = in.ctlval(); // required BOOL primitive
}

void convert_from_proto(const commonmodule::NamedObject& in, openfmb::commonmodule::NamedObject& out)
{
    if(in.has_description()) out.description() = in.description().value(); // optional string

    if(in.has_name()) out.name() = in.name().value(); // optional string
}

void convert_from_proto(const commonmodule::CheckConditions& in, openfmb::commonmodule::CheckConditions& out)
{
    if(in.has_interlockcheck())
    {
        out.interlockCheck() = in.interlockcheck().value();
    }

    if(in.has_synchrocheck())
    {
        out.synchroCheck() = in.synchrocheck().value();
    }
}

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, openfmb::commonmodule::LogicalNodeForControl& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
}

void convert_from_proto(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerDiscreteControlXCBR& in, openfmb::breakermodule::BreakerDiscreteControlXCBR& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    convert_from_proto(in.pos(), out.Pos()); // required field in DDS
}

void convert_from_proto(const commonmodule::IED& in, openfmb::commonmodule::IED& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::TimeQuality& in, openfmb::commonmodule::TimeQuality& out)
{
    out.clockFailure() = in.clockfailure(); // required BOOL primitive

    out.clockNotSynchronized() = in.clocknotsynchronized(); // required BOOL primitive

    out.leapSecondsKnown() = in.leapsecondsknown(); // required BOOL primitive

    out.timeAccuracy() = static_cast<openfmb::commonmodule::TimeAccuracyKind::inner_enum>(in.timeaccuracy());
}

void convert_from_proto(const breakermodule::Breaker& in, openfmb::breakermodule::Breaker& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::MessageInfo& in, openfmb::commonmodule::MessageInfo& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.messagetimestamp(), out.messageTimeStamp()); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerDiscreteControl& in, openfmb::breakermodule::BreakerDiscreteControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.breakerdiscretecontrolxcbr(), out.breakerDiscreteControlXCBR()); // required field in DDS
}

void convert_from_proto(const commonmodule::ControlValue& in, openfmb::commonmodule::ControlValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk() = in.modblk().value();
    }
}

void convert_from_proto(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out)
{
    if(in.has_description()) out.description() = in.description().value(); // optional string

    if(in.has_mrid()) out.mRID() = in.mrid().value(); // optional string

    if(in.has_name()) out.name() = in.name().value(); // optional string
}

void convert_from_proto(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out)
{
    out.fraction() = in.fraction(); // required UINT32 primitive

    out.seconds() = in.seconds(); // required UINT64 primitive

    if(in.has_tq()) // optional field in DDS
    {
        openfmb::commonmodule::TimeQuality temp{};
        convert_from_proto(in.tq(), temp);
        out.tq() = temp;
    }
}

void convert_from_proto(const commonmodule::ConductingEquipment& in, openfmb::commonmodule::ConductingEquipment& out)
{
    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type

    out.mRID() = in.mrid(); // required string
}

void convert_from_proto(const commonmodule::ControlMessageInfo& in, openfmb::commonmodule::ControlMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::ENS_HealthKind& in, openfmb::commonmodule::ENS_HealthKind& out)
{
    if(in.has_d()) out.d() = in.d().value(); // optional string

    out.stVal() = static_cast<openfmb::commonmodule::HealthKind::inner_enum>(in.stval());
}

void convert_from_proto(const commonmodule::StatusAndEventXCBR& in, openfmb::commonmodule::StatusAndEventXCBR& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    convert_from_proto(in.pos(), out.Pos()); // required field in DDS
}

void convert_from_proto(const commonmodule::EventMessageInfo& in, openfmb::commonmodule::EventMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::EventValue& in, openfmb::commonmodule::EventValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::DetailQual& in, openfmb::commonmodule::DetailQual& out)
{
    out.badReference() = in.badreference(); // required BOOL primitive

    out.failure() = in.failure(); // required BOOL primitive

    out.inaccurate() = in.inaccurate(); // required BOOL primitive

    out.inconsistent() = in.inconsistent(); // required BOOL primitive

    out.oldData() = in.olddata(); // required BOOL primitive

    out.oscillatory() = in.oscillatory(); // required BOOL primitive

    out.outOfRange() = in.outofrange(); // required BOOL primitive

    out.overflow() = in.overflow(); // required BOOL primitive
}

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, openfmb::commonmodule::ENS_DynamicTestKind& out)
{
    convert_from_proto(in.q(), out.q()); // required field in DDS

    out.stVal() = static_cast<openfmb::commonmodule::DynamicTestKind::inner_enum>(in.stval());

    convert_from_proto(in.t(), out.t()); // required field in DDS
}

void convert_from_proto(const commonmodule::LogicalNodeForEventAndStatus& in, openfmb::commonmodule::LogicalNodeForEventAndStatus& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_beh()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_BehaviourModeKind temp{};
        convert_from_proto(in.beh(), temp);
        out.Beh() = temp;
    }

    if(in.has_eehealth()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_HealthKind temp{};
        convert_from_proto(in.eehealth(), temp);
        out.EEHealth() = temp;
    }
}

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, openfmb::commonmodule::ENS_BehaviourModeKind& out)
{
    convert_from_proto(in.q(), out.q()); // required field in DDS

    out.stVal() = static_cast<openfmb::commonmodule::BehaviourModeKind::inner_enum>(in.stval());

    convert_from_proto(in.t(), out.t()); // required field in DDS
}

void convert_from_proto(const commonmodule::StatusDPS& in, openfmb::commonmodule::StatusDPS& out)
{
    convert_from_proto(in.q(), out.q()); // required field in DDS

    out.stVal() = static_cast<openfmb::commonmodule::DbPosKind::inner_enum>(in.stval());

    convert_from_proto(in.t(), out.t()); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerEvent& in, openfmb::breakermodule::BreakerEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.statusandeventxcbr(), out.statusAndEventXCBR()); // required field in DDS
}

void convert_from_proto(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out)
{
    convert_from_proto(in.detailqual(), out.detailQual()); // required field in DDS

    out.operatorBlocked() = in.operatorblocked(); // required BOOL primitive

    out.source() = static_cast<openfmb::commonmodule::SourceKind::inner_enum>(in.source());

    out.test() = in.test(); // required BOOL primitive

    out.validity() = static_cast<openfmb::commonmodule::ValidityKind::inner_enum>(in.validity());
}

void convert_from_proto(const commonmodule::AnalogueValue& in, openfmb::commonmodule::AnalogueValue& out)
{
    if(in.has_f())
    {
        out.f() = in.f().value();
    }

    if(in.has_i())
    {
        out.i() = in.i().value();
    }
}

void convert_from_proto(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out)
{
    if(in.has_multiplier()) // optional enum in DDS
    {
        out.multiplier() = static_cast<openfmb::commonmodule::UnitMultiplierKind::inner_enum>(in.multiplier().value());
    }

    out.SIUnit() = static_cast<openfmb::commonmodule::UnitSymbolKind::inner_enum>(in.siunit());
}

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out)
{
    convert_from_proto(in.mag(), out.mag()); // required field in DDS

    convert_from_proto(in.q(), out.q()); // required field in DDS

    convert_from_proto(in.t(), out.t()); // required field in DDS

    if(in.has_units()) // optional field in DDS
    {
        openfmb::commonmodule::Unit temp{};
        convert_from_proto(in.units(), temp);
        out.units() = temp;
    }
}

void convert_from_proto(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out)
{
    if(in.has_acdcterminal()) convert_from_proto(in.acdcterminal(), out); // inherited type

    if(in.has_phases()) // optional enum in DDS
    {
        out.phases() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phases().value());
    }
}

void convert_from_proto(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out)
{
    if(in.has_ang()) // optional field in DDS
    {
        openfmb::commonmodule::AnalogueValue temp{};
        convert_from_proto(in.ang(), temp);
        out.ang() = temp;
    }

    convert_from_proto(in.mag(), out.mag()); // required field in DDS
}

void convert_from_proto(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_a()) // optional field in DDS
    {
        openfmb::commonmodule::WYE temp{};
        convert_from_proto(in.a(), temp);
        out.A() = temp;
    }

    if(in.has_clcmth()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_CalcMethodKind temp{};
        convert_from_proto(in.clcmth(), temp);
        out.ClcMth() = temp;
    }

    if(in.has_hz()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.hz(), temp);
        out.Hz() = temp;
    }

    if(in.has_pf()) // optional field in DDS
    {
        openfmb::commonmodule::WYE temp{};
        convert_from_proto(in.pf(), temp);
        out.PF() = temp;
    }

    if(in.has_pfsign()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_PFSignKind temp{};
        convert_from_proto(in.pfsign(), temp);
        out.PFSign() = temp;
    }

    if(in.has_phv()) // optional field in DDS
    {
        openfmb::commonmodule::WYE temp{};
        convert_from_proto(in.phv(), temp);
        out.PhV() = temp;
    }

    if(in.has_ppv()) // optional field in DDS
    {
        openfmb::commonmodule::DEL temp{};
        convert_from_proto(in.ppv(), temp);
        out.PPV() = temp;
    }

    if(in.has_va()) // optional field in DDS
    {
        openfmb::commonmodule::WYE temp{};
        convert_from_proto(in.va(), temp);
        out.VA() = temp;
    }

    if(in.has_var()) // optional field in DDS
    {
        openfmb::commonmodule::WYE temp{};
        convert_from_proto(in.var(), temp);
        out.VAr() = temp;
    }

    if(in.has_w()) // optional field in DDS
    {
        openfmb::commonmodule::WYE temp{};
        convert_from_proto(in.w(), temp);
        out.W() = temp;
    }
}

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::CalcMethodKind::inner_enum>(in.setval());
}

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out)
{
    convert_from_proto(in.cval(), out.cVal()); // required field in DDS

    convert_from_proto(in.q(), out.q()); // required field in DDS

    convert_from_proto(in.t(), out.t()); // required field in DDS

    if(in.has_units()) // optional field in DDS
    {
        openfmb::commonmodule::Unit temp{};
        convert_from_proto(in.units(), temp);
        out.units() = temp;
    }
}

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, openfmb::commonmodule::ENG_PFSignKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::PFSignKind::inner_enum>(in.setval());
}

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out)
{
    convert_from_proto(in.terminal(), out.terminal()); // required field in DDS
}

void convert_from_proto(const commonmodule::ReadingMMTR& in, openfmb::commonmodule::ReadingMMTR& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_dmdvah()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.dmdvah(), temp);
        out.DmdVAh() = temp;
    }

    if(in.has_dmdvarh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.dmdvarh(), temp);
        out.DmdVArh() = temp;
    }

    if(in.has_dmdwh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.dmdwh(), temp);
        out.DmdWh() = temp;
    }

    if(in.has_supvah()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.supvah(), temp);
        out.SupVAh() = temp;
    }

    if(in.has_supvarh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.supvarh(), temp);
        out.SupVArh() = temp;
    }

    if(in.has_supwh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.supwh(), temp);
        out.SupWh() = temp;
    }

    if(in.has_totvah()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.totvah(), temp);
        out.TotVAh() = temp;
    }

    if(in.has_totvarh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.totvarh(), temp);
        out.TotVArh() = temp;
    }

    if(in.has_totwh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.totwh(), temp);
        out.TotWh() = temp;
    }
}

void convert_from_proto(const commonmodule::PhaseMMTN& in, openfmb::commonmodule::PhaseMMTN& out)
{
    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTN temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsab()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTN temp{};
        convert_from_proto(in.phsab(), temp);
        out.phsAB() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTN temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsbc()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTN temp{};
        convert_from_proto(in.phsbc(), temp);
        out.phsBC() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTN temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }

    if(in.has_phsca()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTN temp{};
        convert_from_proto(in.phsca(), temp);
        out.phsCA() = temp;
    }
}

void convert_from_proto(const commonmodule::ACDCTerminal& in, openfmb::commonmodule::ACDCTerminal& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_connected())
    {
        out.connected() = in.connected().value();
    }

    if(in.has_sequencenumber())
    {
        out.sequenceNumber() = in.sequencenumber().value();
    }
}

void convert_from_proto(const commonmodule::ReadingMMTN& in, openfmb::commonmodule::ReadingMMTN& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_dmdvah()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.dmdvah(), temp);
        out.DmdVAh() = temp;
    }

    if(in.has_dmdvarh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.dmdvarh(), temp);
        out.DmdVArh() = temp;
    }

    if(in.has_dmdwh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.dmdwh(), temp);
        out.DmdWh() = temp;
    }

    if(in.has_supvah()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.supvah(), temp);
        out.SupVAh() = temp;
    }

    if(in.has_supvarh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.supvarh(), temp);
        out.SupVArh() = temp;
    }

    if(in.has_supwh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.supwh(), temp);
        out.SupWh() = temp;
    }

    if(in.has_totvah()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.totvah(), temp);
        out.TotVAh() = temp;
    }

    if(in.has_totvarh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.totvarh(), temp);
        out.TotVArh() = temp;
    }

    if(in.has_totwh()) // optional field in DDS
    {
        openfmb::commonmodule::BCR temp{};
        convert_from_proto(in.totwh(), temp);
        out.TotWh() = temp;
    }
}

void convert_from_proto(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out)
{
    if(in.has_net()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.net(), temp);
        out.net() = temp;
    }

    if(in.has_neut()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.neut(), temp);
        out.neut() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const breakermodule::BreakerReading& in, openfmb::breakermodule::BreakerReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_diffreadingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.diffreadingmmxu(), temp);
        out.diffReadingMMXU() = temp;
    }

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out)
{
    if(in.has_phsab()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.phsab(), temp);
        out.phsAB() = temp;
    }

    if(in.has_phsbc()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.phsbc(), temp);
        out.phsBC() = temp;
    }

    if(in.has_phsca()) // optional field in DDS
    {
        openfmb::commonmodule::CMV temp{};
        convert_from_proto(in.phsca(), temp);
        out.phsCA() = temp;
    }
}

void convert_from_proto(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out)
{
    out.actVal() = in.actval(); // required INT64 primitive

    convert_from_proto(in.q(), out.q()); // required field in DDS

    convert_from_proto(in.t(), out.t()); // required field in DDS

    if(in.has_units()) // optional enum in DDS
    {
        out.units() = static_cast<openfmb::commonmodule::UnitSymbolKind::inner_enum>(in.units().value());
    }
}

void convert_from_proto(const breakermodule::BreakerStatus& in, openfmb::breakermodule::BreakerStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.statusandeventxcbr(), out.statusAndEventXCBR()); // required field in DDS
}

void convert_from_proto(const commonmodule::StatusMessageInfo& in, openfmb::commonmodule::StatusMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::StatusValue& in, openfmb::commonmodule::StatusValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::ENG_ScheduleParameter& in, openfmb::commonmodule::ENG_ScheduleParameter& out)
{
    out.scheduleParameterType() = static_cast<openfmb::commonmodule::ScheduleParameterKind::inner_enum>(in.scheduleparametertype());

    out.value() = in.value(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, openfmb::commonmodule::ENG_GridConnectModeKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::GridConnectModeKind::inner_enum>(in.setval());

    if(in.has_setvalextension()) out.setValExtension() = in.setvalextension().value(); // optional string
}

void convert_from_proto(const essmodule::FrequencyRegulation& in, openfmb::essmodule::FrequencyRegulation& out)
{
    if(in.has_frequencydeadbandminus())
    {
        out.frequencyDeadBandMinus() = in.frequencydeadbandminus().value();
    }

    if(in.has_frequencydeadbandplus())
    {
        out.frequencyDeadBandPlus() = in.frequencydeadbandplus().value();
    }

    if(in.has_frequencyregulationctl())
    {
        out.frequencyRegulationCtl() = in.frequencyregulationctl().value();
    }

    if(in.has_frequencysetpoint())
    {
        out.frequencySetPoint() = in.frequencysetpoint().value();
    }

    if(in.has_gridfrequencystablebandminus())
    {
        out.gridFrequencyStableBandMinus() = in.gridfrequencystablebandminus().value();
    }

    if(in.has_gridfrequencystablebandplus())
    {
        out.gridFrequencyStableBandPlus() = in.gridfrequencystablebandplus().value();
    }

    if(in.has_overfrequencydroop())
    {
        out.overFrequencyDroop() = in.overfrequencydroop().value();
    }

    if(in.has_underfrequencydroop())
    {
        out.underFrequencyDroop() = in.underfrequencydroop().value();
    }
}

void convert_from_proto(const essmodule::SocLimit& in, openfmb::essmodule::SocLimit& out)
{
    if(in.has_sochighlimit())
    {
        out.socHighLimit() = in.sochighlimit().value();
    }

    if(in.has_sochighlimithysteresis())
    {
        out.socHighLimitHysteresis() = in.sochighlimithysteresis().value();
    }

    if(in.has_soclimitctl())
    {
        out.socLimitCtl() = in.soclimitctl().value();
    }

    if(in.has_soclowlimit())
    {
        out.socLowLimit() = in.soclowlimit().value();
    }

    if(in.has_soclowlimithysteresis())
    {
        out.socLowLimitHysteresis() = in.soclowlimithysteresis().value();
    }
}

void convert_from_proto(const commonmodule::ESS& in, openfmb::commonmodule::ESS& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const essmodule::VoltagePI& in, openfmb::essmodule::VoltagePI& out)
{
    if(in.has_voltagepictl())
    {
        out.voltagePICtl() = in.voltagepictl().value();
    }

    if(in.has_voltageregulation()) // optional field in DDS
    {
        openfmb::essmodule::VoltageRegulation temp{};
        convert_from_proto(in.voltageregulation(), temp);
        out.voltageRegulation() = temp;
    }
}

void convert_from_proto(const essmodule::ESSFunction& in, openfmb::essmodule::ESSFunction& out)
{
    if(in.has_capacityfirming()) // optional field in DDS
    {
        openfmb::essmodule::CapacityFirming temp{};
        convert_from_proto(in.capacityfirming(), temp);
        out.capacityFirming() = temp;
    }

    if(in.has_frequencyregulation()) // optional field in DDS
    {
        openfmb::essmodule::FrequencyRegulation temp{};
        convert_from_proto(in.frequencyregulation(), temp);
        out.frequencyRegulation() = temp;
    }

    if(in.has_peakshaving()) // optional field in DDS
    {
        openfmb::essmodule::PeakShaving temp{};
        convert_from_proto(in.peakshaving(), temp);
        out.peakShaving() = temp;
    }

    if(in.has_soclimit()) // optional field in DDS
    {
        openfmb::essmodule::SocLimit temp{};
        convert_from_proto(in.soclimit(), temp);
        out.socLimit() = temp;
    }

    if(in.has_socmanagement()) // optional field in DDS
    {
        openfmb::essmodule::SOCManagement temp{};
        convert_from_proto(in.socmanagement(), temp);
        out.socManagement() = temp;
    }

    if(in.has_voltagedroop()) // optional field in DDS
    {
        openfmb::essmodule::VoltageDroop temp{};
        convert_from_proto(in.voltagedroop(), temp);
        out.voltageDroop() = temp;
    }

    if(in.has_voltagepi()) // optional field in DDS
    {
        openfmb::essmodule::VoltagePI temp{};
        convert_from_proto(in.voltagepi(), temp);
        out.voltagePI() = temp;
    }
}

void convert_from_proto(const essmodule::VoltageDroop& in, openfmb::essmodule::VoltageDroop& out)
{
    if(in.has_voltagedroopctl())
    {
        out.voltageDroopCtl() = in.voltagedroopctl().value();
    }

    if(in.has_voltageregulation()) // optional field in DDS
    {
        openfmb::essmodule::VoltageRegulation temp{};
        convert_from_proto(in.voltageregulation(), temp);
        out.voltageRegulation() = temp;
    }
}

void convert_from_proto(const essmodule::VoltageRegulation& in, openfmb::essmodule::VoltageRegulation& out)
{
    if(in.has_overvoltagedroop())
    {
        out.overVoltageDroop() = in.overvoltagedroop().value();
    }

    if(in.has_undervoltagedroop())
    {
        out.underVoltageDroop() = in.undervoltagedroop().value();
    }

    if(in.has_voltagedeadbandminus())
    {
        out.voltageDeadBandMinus() = in.voltagedeadbandminus().value();
    }

    if(in.has_voltagedeadbandplus())
    {
        out.voltageDeadBandPlus() = in.voltagedeadbandplus().value();
    }

    if(in.has_voltagesetpoint())
    {
        out.voltageSetPoint() = in.voltagesetpoint().value();
    }
}

void convert_from_proto(const essmodule::CapacityFirming& in, openfmb::essmodule::CapacityFirming& out)
{
    if(in.has_capacityfirmingctl())
    {
        out.capacityFirmingCtl() = in.capacityfirmingctl().value();
    }

    if(in.has_limitnegative_dp_dt())
    {
        out.limitNegative_dp_dt() = in.limitnegative_dp_dt().value();
    }

    if(in.has_limitpositive_dp_dt())
    {
        out.limitPositive_dp_dt() = in.limitpositive_dp_dt().value();
    }
}

void convert_from_proto(const commonmodule::SchedulePoint& in, openfmb::commonmodule::SchedulePoint& out)
{
    for(const auto& input : in.scheduleparameter())
    {
        openfmb::commonmodule::ENG_ScheduleParameter output;
        convert_from_proto(input, output);
        out.scheduleParameter().push_back(output);
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const commonmodule::ScheduleCSG& in, openfmb::commonmodule::ScheduleCSG& out)
{
    for(const auto& input : in.schpts())
    {
        openfmb::commonmodule::SchedulePoint output;
        convert_from_proto(input, output);
        out.schPts().push_back(output);
    }
}

void convert_from_proto(const commonmodule::ControlFSCC& in, openfmb::commonmodule::ControlFSCC& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_controlschedulefsch()) // optional field in DDS
    {
        openfmb::commonmodule::ControlScheduleFSCH temp{};
        convert_from_proto(in.controlschedulefsch(), temp);
        out.controlScheduleFSCH() = temp;
    }

    if(in.has_islandcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::commonmodule::ControlScheduleFSCH temp{};
        convert_from_proto(in.islandcontrolschedulefsch(), temp);
        out.islandControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const essmodule::ESSPoint& in, openfmb::essmodule::ESSPoint& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_function()) // optional field in DDS
    {
        openfmb::essmodule::ESSFunction temp{};
        convert_from_proto(in.function(), temp);
        out.function() = temp;
    }

    if(in.has_mode()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.mode(), temp);
        out.mode() = temp;
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop() = in.pcthzdroop().value();
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const essmodule::EssControlFSCC& in, openfmb::essmodule::EssControlFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_esscontrolschedulefsch()) // optional field in DDS
    {
        openfmb::essmodule::ESSControlScheduleFSCH temp{};
        convert_from_proto(in.esscontrolschedulefsch(), temp);
        out.essControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const commonmodule::ControlTimestamp& in, openfmb::commonmodule::ControlTimestamp& out)
{
    out.fraction() = in.fraction(); // required UINT32 primitive

    out.seconds() = in.seconds(); // required UINT64 primitive
}

void convert_from_proto(const essmodule::ESSCSG& in, openfmb::essmodule::ESSCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::essmodule::ESSPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, openfmb::commonmodule::ControlScheduleFSCH& out)
{
    convert_from_proto(in.valacsg(), out.ValACSG()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSControl& in, openfmb::essmodule::ESSControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.esscontrolfscc(), out.essControlFSCC()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, openfmb::essmodule::ESSControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const essmodule::SOCManagement& in, openfmb::essmodule::SOCManagement& out)
{
    if(in.has_socdeadbandminus())
    {
        out.socDeadBandMinus() = in.socdeadbandminus().value();
    }

    if(in.has_socdeadbandplus())
    {
        out.socDeadBandPlus() = in.socdeadbandplus().value();
    }

    if(in.has_socmanagementctl())
    {
        out.socManagementCtl() = in.socmanagementctl().value();
    }

    if(in.has_socpowersetpoint())
    {
        out.socPowerSetPoint() = in.socpowersetpoint().value();
    }

    if(in.has_socsetpoint())
    {
        out.socSetPoint() = in.socsetpoint().value();
    }
}

void convert_from_proto(const essmodule::PeakShaving& in, openfmb::essmodule::PeakShaving& out)
{
    if(in.has_baseshavinglimit())
    {
        out.baseShavingLimit() = in.baseshavinglimit().value();
    }

    if(in.has_peakshavingctl())
    {
        out.peakShavingCtl() = in.peakshavingctl().value();
    }

    if(in.has_peakshavinglimit())
    {
        out.peakShavingLimit() = in.peakshavinglimit().value();
    }

    if(in.has_socmanagementallowedhighlimit())
    {
        out.socManagementAllowedHighLimit() = in.socmanagementallowedhighlimit().value();
    }

    if(in.has_socmanagementallowedlowlimit())
    {
        out.socManagementAllowedLowLimit() = in.socmanagementallowedlowlimit().value();
    }
}

void convert_from_proto(const commonmodule::RampRate& in, openfmb::commonmodule::RampRate& out)
{
    if(in.has_negativereactivepowerkvarpermin())
    {
        out.negativeReactivePowerKVArPerMin() = in.negativereactivepowerkvarpermin().value();
    }

    if(in.has_negativerealpowerkwpermin())
    {
        out.negativeRealPowerKWPerMin() = in.negativerealpowerkwpermin().value();
    }

    if(in.has_positivereactivepowerkvarpermin())
    {
        out.positiveReactivePowerKVArPerMin() = in.positivereactivepowerkvarpermin().value();
    }

    if(in.has_positiverealpowerkwpermin())
    {
        out.positiveRealPowerKWPerMin() = in.positiverealpowerkwpermin().value();
    }
}

void convert_from_proto(const essmodule::ESSEventZGEN& in, openfmb::essmodule::ESSEventZGEN& out)
{
    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const commonmodule::StatusSPS& in, openfmb::commonmodule::StatusSPS& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = in.stval(); // required BOOL primitive

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
}

void convert_from_proto(const essmodule::ESSEvent& in, openfmb::essmodule::ESSEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_esseventzbat()) // optional field in DDS
    {
        openfmb::essmodule::EssEventZBAT temp{};
        convert_from_proto(in.esseventzbat(), temp);
        out.essEventZBAT() = temp;
    }

    if(in.has_esseventzgen()) // optional field in DDS
    {
        openfmb::essmodule::ESSEventZGEN temp{};
        convert_from_proto(in.esseventzgen(), temp);
        out.essEventZGEN() = temp;
    }
}

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, openfmb::essmodule::ESSEventAndStatusZGEN& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_auxpwrst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.auxpwrst(), temp);
        out.AuxPwrSt() = temp;
    }

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.emgstop(), temp);
        out.EmgStop() = temp;
    }

    if(in.has_gnsynst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.gnsynst(), temp);
        out.GnSynSt() = temp;
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        openfmb::essmodule::ESSPointStatus temp{};
        convert_from_proto(in.pointstatus(), temp);
        out.PointStatus() = temp;
    }
}

void convert_from_proto(const essmodule::EssEventZBAT& in, openfmb::essmodule::EssEventZBAT& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_bathi()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.bathi(), temp);
        out.BatHi() = temp;
    }

    if(in.has_batlo()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.batlo(), temp);
        out.BatLo() = temp;
    }

    if(in.has_batst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.batst(), temp);
        out.BatSt() = temp;
    }

    if(in.has_soc()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.soc(), temp);
        out.Soc() = temp;
    }

    if(in.has_stdby()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.stdby(), temp);
        out.Stdby() = temp;
    }
}

void convert_from_proto(const essmodule::ESSPointStatus& in, openfmb::essmodule::ESSPointStatus& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_function()) // optional field in DDS
    {
        openfmb::essmodule::ESSFunction temp{};
        convert_from_proto(in.function(), temp);
        out.function() = temp;
    }

    if(in.has_mode()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.mode(), temp);
        out.mode() = temp;
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop() = in.pcthzdroop().value();
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }
}

void convert_from_proto(const essmodule::ESSReading& in, openfmb::essmodule::ESSReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const essmodule::ESSStatusZGEN& in, openfmb::essmodule::ESSStatusZGEN& out)
{
    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const essmodule::EssStatusZBAT& in, openfmb::essmodule::EssStatusZBAT& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    convert_from_proto(in.batst(), out.BatSt()); // required field in DDS

    if(in.has_grimod()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.grimod(), temp);
        out.GriMod() = temp;
    }

    if(in.has_soc()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.soc(), temp);
        out.Soc() = temp;
    }

    if(in.has_stdby()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.stdby(), temp);
        out.Stdby() = temp;
    }
}

void convert_from_proto(const essmodule::ESSStatus& in, openfmb::essmodule::ESSStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_essstatuszbat()) // optional field in DDS
    {
        openfmb::essmodule::EssStatusZBAT temp{};
        convert_from_proto(in.essstatuszbat(), temp);
        out.essStatusZBAT() = temp;
    }

    if(in.has_essstatuszgen()) // optional field in DDS
    {
        openfmb::essmodule::ESSStatusZGEN temp{};
        convert_from_proto(in.essstatuszgen(), temp);
        out.essStatusZGEN() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationControlFSCC& in, openfmb::generationmodule::GenerationControlFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_generationcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::generationmodule::GenerationControlScheduleFSCH temp{};
        convert_from_proto(in.generationcontrolschedulefsch(), temp);
        out.GenerationControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const commonmodule::ActivePower& in, openfmb::commonmodule::ActivePower& out)
{
    if(in.has_multiplier()) // optional enum in DDS
    {
        out.multiplier() = static_cast<openfmb::commonmodule::UnitMultiplierKind::inner_enum>(in.multiplier().value());
    }

    if(in.has_unit()) // optional enum in DDS
    {
        out.unit() = static_cast<openfmb::commonmodule::UnitSymbolKind::inner_enum>(in.unit().value());
    }

    if(in.has_value())
    {
        out.value() = in.value().value();
    }
}

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, openfmb::generationmodule::GenerationControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationControl& in, openfmb::generationmodule::GenerationControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.generationcontrolfscc(), out.generationControlFSCC()); // required field in DDS
}

void convert_from_proto(const generationmodule::GeneratingUnit& in, openfmb::generationmodule::GeneratingUnit& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_maxoperatingp()) // optional field in DDS
    {
        openfmb::commonmodule::ActivePower temp{};
        convert_from_proto(in.maxoperatingp(), temp);
        out.maxOperatingP() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationCSG& in, openfmb::generationmodule::GenerationCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::generationmodule::GenerationPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const generationmodule::GenerationPoint& in, openfmb::generationmodule::GenerationPoint& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop() = in.pcthzdroop().value();
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationEvent& in, openfmb::generationmodule::GenerationEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.generationeventzgen(), out.generationEventZGEN()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationEventZGEN& in, openfmb::generationmodule::GenerationEventZGEN& out)
{
    if(in.has_generationeventandstatuszgen()) convert_from_proto(in.generationeventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const generationmodule::GenerationEventAndStatusZGEN& in, openfmb::generationmodule::GenerationEventAndStatusZGEN& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_auxpwrst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.auxpwrst(), temp);
        out.AuxPwrSt() = temp;
    }

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.emgstop(), temp);
        out.EmgStop() = temp;
    }

    if(in.has_gnsynst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.gnsynst(), temp);
        out.GnSynSt() = temp;
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        openfmb::generationmodule::GenerationPointStatus temp{};
        convert_from_proto(in.pointstatus(), temp);
        out.PointStatus() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationPointStatus& in, openfmb::generationmodule::GenerationPointStatus& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop() = in.pcthzdroop().value();
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationReading& in, openfmb::generationmodule::GenerationReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationStatus& in, openfmb::generationmodule::GenerationStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.generationstatuszgen(), out.generationStatusZGEN()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationStatusZGEN& in, openfmb::generationmodule::GenerationStatusZGEN& out)
{
    if(in.has_generationeventandstatuszgen()) convert_from_proto(in.generationeventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const loadmodule::LoadPoint& in, openfmb::loadmodule::LoadPoint& out)
{
    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, openfmb::loadmodule::LoadControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const commonmodule::EnergyConsumer& in, openfmb::commonmodule::EnergyConsumer& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_operatinglimit()) out.operatingLimit() = in.operatinglimit().value(); // optional string
}

void convert_from_proto(const loadmodule::LoadControl& in, openfmb::loadmodule::LoadControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.loadcontrolfscc(), out.loadControlFSCC()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadControlFSCC& in, openfmb::loadmodule::LoadControlFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_loadcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::loadmodule::LoadControlScheduleFSCH temp{};
        convert_from_proto(in.loadcontrolschedulefsch(), temp);
        out.loadControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const loadmodule::LoadCSG& in, openfmb::loadmodule::LoadCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::loadmodule::LoadPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const loadmodule::LoadEventZGLD& in, openfmb::loadmodule::LoadEventZGLD& out)
{
    if(in.has_loadeventandstatuszgld()) convert_from_proto(in.loadeventandstatuszgld(), out); // inherited type
}

void convert_from_proto(const loadmodule::LoadEventAndStatusZGLD& in, openfmb::loadmodule::LoadEventAndStatusZGLD& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.emgstop(), temp);
        out.EmgStop() = temp;
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        openfmb::loadmodule::LoadPointStatus temp{};
        convert_from_proto(in.pointstatus(), temp);
        out.PointStatus() = temp;
    }
}

void convert_from_proto(const loadmodule::LoadPointStatus& in, openfmb::loadmodule::LoadPointStatus& out)
{
    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }
}

void convert_from_proto(const loadmodule::LoadEvent& in, openfmb::loadmodule::LoadEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.loadeventzgld(), out.loadEventZGLD()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadReading& in, openfmb::loadmodule::LoadReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, openfmb::loadmodule::LoadStatusZGLD& out)
{
    if(in.has_loadeventandstatuszgld()) convert_from_proto(in.loadeventandstatuszgld(), out); // inherited type
}

void convert_from_proto(const loadmodule::LoadStatus& in, openfmb::loadmodule::LoadStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.loadstatuszgld(), out.loadStatusZGLD()); // required field in DDS
}

void convert_from_proto(const commonmodule::Meter& in, openfmb::commonmodule::Meter& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const metermodule::MeterReading& in, openfmb::metermodule::MeterReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const commonmodule::SwitchPoint& in, openfmb::commonmodule::SwitchPoint& out)
{
    convert_from_proto(in.pos(), out.Pos()); // required field in DDS

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const commonmodule::SwitchCSG& in, openfmb::commonmodule::SwitchCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::commonmodule::SwitchPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const reclosermodule::Recloser& in, openfmb::reclosermodule::Recloser& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_normalopen())
    {
        out.normalOpen() = in.normalopen().value();
    }
}

void convert_from_proto(const commonmodule::SwitchControlScheduleFSCH& in, openfmb::commonmodule::SwitchControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserControlFSCC& in, openfmb::reclosermodule::RecloserControlFSCC& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_switchcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::commonmodule::SwitchControlScheduleFSCH temp{};
        convert_from_proto(in.switchcontrolschedulefsch(), temp);
        out.switchControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const reclosermodule::RecloserControl& in, openfmb::reclosermodule::RecloserControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.reclosercontrolfscc(), out.recloserControlFSCC()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControl& in, openfmb::reclosermodule::RecloserDiscreteControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.recloserdiscretecontrolxcbr(), out.recloserDiscreteControlXCBR()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControlXCBR& in, openfmb::reclosermodule::RecloserDiscreteControlXCBR& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }
}

void convert_from_proto(const reclosermodule::RecloserEvent& in, openfmb::reclosermodule::RecloserEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.statusandeventxcbr(), out.statusAndEventXCBR()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserReading& in, openfmb::reclosermodule::RecloserReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_diffreadingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.diffreadingmmxu(), temp);
        out.diffReadingMMXU() = temp;
    }

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const reclosermodule::RecloserStatus& in, openfmb::reclosermodule::RecloserStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.statusandeventxcbr(), out.statusAndEventXCBR()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorPoint& in, openfmb::regulatormodule::RegulatorPoint& out)
{
    if(in.has_control()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorControlATCC temp{};
        convert_from_proto(in.control(), temp);
        out.control() = temp;
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorCSG& in, openfmb::regulatormodule::RegulatorCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::regulatormodule::RegulatorPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const regulatormodule::RegulatorControlScheduleFSCH& in, openfmb::regulatormodule::RegulatorControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorControl& in, openfmb::regulatormodule::RegulatorControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.regulatorcontrolfscc(), out.regulatorControlFSCC()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorSystem& in, openfmb::regulatormodule::RegulatorSystem& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::ControlISC& in, openfmb::commonmodule::ControlISC& out)
{
    out.ctlVal() = in.ctlval(); // required INT32 primitive
}

void convert_from_proto(const commonmodule::ControlING& in, openfmb::commonmodule::ControlING& out)
{
    out.setVal() = in.setval(); // required INT32 primitive

    if(in.has_units()) // optional field in DDS
    {
        openfmb::commonmodule::Unit temp{};
        convert_from_proto(in.units(), temp);
        out.units() = temp;
    }
}

void convert_from_proto(const commonmodule::ControlSPC& in, openfmb::commonmodule::ControlSPC& out)
{
    out.ctlVal() = in.ctlval(); // required BOOL primitive
}

void convert_from_proto(const regulatormodule::RegulatorControlATCC& in, openfmb::regulatormodule::RegulatorControlATCC& out)
{
    if(in.has_bndctr()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.bndctr(), temp);
        out.BndCtr() = temp;
    }

    if(in.has_bndwid()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.bndwid(), temp);
        out.BndWid() = temp;
    }

    if(in.has_ctldltmms()) // optional field in DDS
    {
        openfmb::commonmodule::ControlING temp{};
        convert_from_proto(in.ctldltmms(), temp);
        out.CtlDlTmms() = temp;
    }

    if(in.has_ldcr()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.ldcr(), temp);
        out.LDCR() = temp;
    }

    if(in.has_ldcx()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.ldcx(), temp);
        out.LDCX() = temp;
    }

    if(in.has_ldcz()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.ldcz(), temp);
        out.LDCZ() = temp;
    }

    if(in.has_parop()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.parop(), temp);
        out.ParOp() = temp;
    }

    if(in.has_tappos()) // optional field in DDS
    {
        openfmb::commonmodule::ControlISC temp{};
        convert_from_proto(in.tappos(), temp);
        out.TapPos() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorControlFSCC& in, openfmb::regulatormodule::RegulatorControlFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_regulatorcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorControlScheduleFSCH temp{};
        convert_from_proto(in.regulatorcontrolschedulefsch(), temp);
        out.regulatorControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const commonmodule::AnalogueValueCtl& in, openfmb::commonmodule::AnalogueValueCtl& out)
{
    if(in.has_f())
    {
        out.f() = in.f().value();
    }

    if(in.has_i())
    {
        out.i() = in.i().value();
    }
}

void convert_from_proto(const commonmodule::ASG& in, openfmb::commonmodule::ASG& out)
{
    convert_from_proto(in.setmag(), out.setMag()); // required field in DDS

    if(in.has_units()) // optional field in DDS
    {
        openfmb::commonmodule::Unit temp{};
        convert_from_proto(in.units(), temp);
        out.units() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorEvent& in, openfmb::regulatormodule::RegulatorEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.regulatoreventandstatusancr(), out.regulatorEventAndStatusANCR()); // required field in DDS
}

void convert_from_proto(const commonmodule::StatusSPC& in, openfmb::commonmodule::StatusSPC& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = in.stval(); // required BOOL primitive

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusPoint& in, openfmb::regulatormodule::RegulatorEventAndStatusPoint& out)
{
    if(in.has_eventandstatus()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorEventAndStatusATCC temp{};
        convert_from_proto(in.eventandstatus(), temp);
        out.eventAndStatus() = temp;
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusANCR& in, openfmb::regulatormodule::RegulatorEventAndStatusANCR& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    convert_from_proto(in.pointstatus(), out.PointStatus()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusATCC& in, openfmb::regulatormodule::RegulatorEventAndStatusATCC& out)
{
    if(in.has_bndctr()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.bndctr(), temp);
        out.BndCtr() = temp;
    }

    if(in.has_bndwid()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.bndwid(), temp);
        out.BndWid() = temp;
    }

    if(in.has_ldcr()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.ldcr(), temp);
        out.LDCR() = temp;
    }

    if(in.has_ldcx()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.ldcx(), temp);
        out.LDCX() = temp;
    }

    if(in.has_ldcz()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.ldcz(), temp);
        out.LDCZ() = temp;
    }

    if(in.has_parop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPC temp{};
        convert_from_proto(in.parop(), temp);
        out.ParOp() = temp;
    }

    if(in.has_tapoperr()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.tapoperr(), temp);
        out.TapOpErr() = temp;
    }

    if(in.has_tappos()) // optional field in DDS
    {
        openfmb::commonmodule::StatusISC temp{};
        convert_from_proto(in.tappos(), temp);
        out.TapPos() = temp;
    }
}

void convert_from_proto(const commonmodule::StatusISC& in, openfmb::commonmodule::StatusISC& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = in.stval(); // required INT32 primitive

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorReading& in, openfmb::regulatormodule::RegulatorReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorStatus& in, openfmb::regulatormodule::RegulatorStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.regulatoreventandstatusancr(), out.regulatorEventAndStatusANCR()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const commonmodule::AnalogStatusGGIO& in, openfmb::commonmodule::AnalogStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.anin(), out.AnIn()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const commonmodule::VSS& in, openfmb::commonmodule::VSS& out)
{
    convert_from_proto(in.q(), out.q()); // required field in DDS

    out.stVal() = in.stval(); // required string

    convert_from_proto(in.t(), out.t()); // required field in DDS
}

void convert_from_proto(const commonmodule::IntegerStatusGGIO& in, openfmb::commonmodule::IntegerStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.intin(), out.IntIn()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const commonmodule::BooleanStatusGGIO& in, openfmb::commonmodule::BooleanStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.ind(), out.Ind()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const commonmodule::StatusINS& in, openfmb::commonmodule::StatusINS& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = in.stval(); // required INT32 primitive

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }

    if(in.has_units()) // optional field in DDS
    {
        openfmb::commonmodule::Unit temp{};
        convert_from_proto(in.units(), temp);
        out.units() = temp;
    }
}

void convert_from_proto(const commonmodule::StringStatusGGIO& in, openfmb::commonmodule::StringStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }

    convert_from_proto(in.strin(), out.StrIn()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceStatus& in, openfmb::resourcemodule::ResourceStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    for(const auto& input : in.analogstatusggio())
    {
        openfmb::commonmodule::AnalogStatusGGIO output;
        convert_from_proto(input, output);
        out.analogStatusGGIO().push_back(output);
    }

    for(const auto& input : in.booleanstatusggio())
    {
        openfmb::commonmodule::BooleanStatusGGIO output;
        convert_from_proto(input, output);
        out.booleanStatusGGIO().push_back(output);
    }

    for(const auto& input : in.integerstatusggio())
    {
        openfmb::commonmodule::IntegerStatusGGIO output;
        convert_from_proto(input, output);
        out.integerStatusGGIO().push_back(output);
    }

    for(const auto& input : in.stringstatusggio())
    {
        openfmb::commonmodule::StringStatusGGIO output;
        convert_from_proto(input, output);
        out.stringStatusGGIO().push_back(output);
    }
}

void convert_from_proto(const solarmodule::SolarControlFSCC& in, openfmb::solarmodule::SolarControlFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_solarcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::solarmodule::SolarControlScheduleFSCH temp{};
        convert_from_proto(in.solarcontrolschedulefsch(), temp);
        out.SolarControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarControl& in, openfmb::solarmodule::SolarControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    if(in.has_solarcontrolfscc()) // optional field in DDS
    {
        openfmb::solarmodule::SolarControlFSCC temp{};
        convert_from_proto(in.solarcontrolfscc(), temp);
        out.solarControlFSCC() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, openfmb::solarmodule::SolarControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarPoint& in, openfmb::solarmodule::SolarPoint& out)
{
    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_mode()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.mode(), temp);
        out.mode() = temp;
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop() = in.pcthzdroop().value();
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarInverter& in, openfmb::solarmodule::SolarInverter& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const solarmodule::SolarCSG& in, openfmb::solarmodule::SolarCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::solarmodule::SolarPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const solarmodule::SolarEventAndStatusZGEN& in, openfmb::solarmodule::SolarEventAndStatusZGEN& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_auxpwrst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.auxpwrst(), temp);
        out.AuxPwrSt() = temp;
    }

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.emgstop(), temp);
        out.EmgStop() = temp;
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        openfmb::solarmodule::SolarPointStatus temp{};
        convert_from_proto(in.pointstatus(), temp);
        out.PointStatus() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarPointStatus& in, openfmb::solarmodule::SolarPointStatus& out)
{
    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_mode()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.mode(), temp);
        out.mode() = temp;
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop() = in.pcthzdroop().value();
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop() = in.pctvdroop().value();
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarEventZGEN& in, openfmb::solarmodule::SolarEventZGEN& out)
{
    if(in.has_solareventandstatuszgen()) convert_from_proto(in.solareventandstatuszgen(), out); // inherited type

    if(in.has_grimod()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.grimod(), temp);
        out.GriMod() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarEvent& in, openfmb::solarmodule::SolarEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.solareventzgen(), out.solarEventZGEN()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarReading& in, openfmb::solarmodule::SolarReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarStatusZGEN& in, openfmb::solarmodule::SolarStatusZGEN& out)
{
    if(in.has_solareventandstatuszgen()) convert_from_proto(in.solareventandstatuszgen(), out); // inherited type

    if(in.has_grimod()) // optional field in DDS
    {
        openfmb::commonmodule::ENG_GridConnectModeKind temp{};
        convert_from_proto(in.grimod(), temp);
        out.GriMod() = temp;
    }
}

void convert_from_proto(const solarmodule::SolarStatus& in, openfmb::solarmodule::SolarStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.solarstatuszgen(), out.solarStatusZGEN()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchControl& in, openfmb::switchmodule::SwitchControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.switchcontrolfscc(), out.SwitchControlFSCC()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchControlFSCC& in, openfmb::switchmodule::SwitchControlFSCC& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_switchcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::commonmodule::SwitchControlScheduleFSCH temp{};
        convert_from_proto(in.switchcontrolschedulefsch(), temp);
        out.switchControlScheduleFSCH() = temp;
    }
}

void convert_from_proto(const switchmodule::ProtectedSwitch& in, openfmb::switchmodule::ProtectedSwitch& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const switchmodule::SwitchDiscreteControl& in, openfmb::switchmodule::SwitchDiscreteControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.switchdiscretecontrolxswi(), out.switchDiscreteControlXSWI()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchDiscreteControlXSWI& in, openfmb::switchmodule::SwitchDiscreteControlXSWI& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }
}

void convert_from_proto(const switchmodule::SwitchEventXSWI& in, openfmb::switchmodule::SwitchEventXSWI& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    convert_from_proto(in.pos(), out.Pos()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchEvent& in, openfmb::switchmodule::SwitchEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    convert_from_proto(in.switcheventxswi(), out.switchEventXSWI()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchReading& in, openfmb::switchmodule::SwitchReading& out)
{
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_diffreadingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.diffreadingmmxu(), temp);
        out.diffReadingMMXU() = temp;
    }

    if(in.has_phasemmtn()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseMMTN temp{};
        convert_from_proto(in.phasemmtn(), temp);
        out.phaseMMTN() = temp;
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMTR temp{};
        convert_from_proto(in.readingmmtr(), temp);
        out.readingMMTR() = temp;
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.readingmmxu(), temp);
        out.readingMMXU() = temp;
    }
}

void convert_from_proto(const switchmodule::SwitchStatus& in, openfmb::switchmodule::SwitchStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.switchstatusxswi(), out.switchStatusXSWI()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchStatusXSWI& in, openfmb::switchmodule::SwitchStatusXSWI& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    convert_from_proto(in.pos(), out.Pos()); // required field in DDS
}

// ---- static assertions related to enums
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_transient) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_transient), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_closed) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_closed), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_open) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_invalid) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_invalid), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_process) == static_cast<int>(openfmb::commonmodule::SourceKind::SourceKind_process), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_substituted) == static_cast<int>(openfmb::commonmodule::SourceKind::SourceKind_substituted), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_none) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_testing) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_testing), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_operating) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_operating), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_failed) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_failed), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_good) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_good), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_invalid) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_invalid), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_reserved) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_reserved), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_questionable) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_questionable), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_on) == static_cast<int>(openfmb::commonmodule::BehaviourModeKind::BehaviourModeKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_blocked) == static_cast<int>(openfmb::commonmodule::BehaviourModeKind::BehaviourModeKind_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_test) == static_cast<int>(openfmb::commonmodule::BehaviourModeKind::BehaviourModeKind_test), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_test_blocked) == static_cast<int>(openfmb::commonmodule::BehaviourModeKind::BehaviourModeKind_test_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_off) == static_cast<int>(openfmb::commonmodule::BehaviourModeKind::BehaviourModeKind_off), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_none) == static_cast<int>(openfmb::commonmodule::HealthKind::HealthKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_OK) == static_cast<int>(openfmb::commonmodule::HealthKind::HealthKind_OK), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_Warning) == static_cast<int>(openfmb::commonmodule::HealthKind::HealthKind_Warning), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_Alarm) == static_cast<int>(openfmb::commonmodule::HealthKind::HealthKind_Alarm), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_DIFF) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_DIFF), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_none) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_other) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_C) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_C), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_CN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_CN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AC) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_AC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ACN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ACN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_B) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_B), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_BN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BC) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_BC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BCN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_BCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_A) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_A), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_AN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AB) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_AB), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ABN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABC) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ABC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s2N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s1N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s12), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s12N), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_none) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_meter) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_meter), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_gram) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_gram), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Amp) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Amp), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_deg) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_deg), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_rad) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_rad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degC) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_degC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Farad) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Farad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_sec) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_sec), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Henry) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Henry), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_V) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_V), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_ohm) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_ohm), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Joule) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Joule), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Newton) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Newton), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Hz) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Hz), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_W) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_W), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Pa) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Pa), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m2) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_m2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VA) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAr) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VAr), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAh) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VAh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Wh) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Wh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VArh) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VArh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_other) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Ah) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Ah), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_min) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_min), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hour) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_hour), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m3) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_m3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degF) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_degF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_mph) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_mph), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_none) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_other) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_IEC) == static_cast<int>(openfmb::commonmodule::PFSignKind::PFSignKind_IEC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_EEI) == static_cast<int>(openfmb::commonmodule::PFSignKind::PFSignKind_EEI), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::StateKind::StateKind_off) == static_cast<int>(openfmb::commonmodule::StateKind::StateKind_off), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_on) == static_cast<int>(openfmb::commonmodule::StateKind::StateKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_standby) == static_cast<int>(openfmb::commonmodule::StateKind::StateKind_standby), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_none) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_other) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_neut_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_Hz_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_Hz_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_net_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_neut_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_ang) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_net_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_neut_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_net_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_neut_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_neut_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsA_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsB_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsC_mag) == static_cast<int>(openfmb::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsC_mag), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_CSI) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_CSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VC_VSI) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_VC_VSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_CC_VSI) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_CC_VSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_none) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_other) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_PQ) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_PQ), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_VF) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_VF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_ISO) == static_cast<int>(openfmb::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_ISO), "mismatched enum values");

} // end namespace rti

} // end namespace dds

} // end namespace adapter
