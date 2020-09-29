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

#include "ConvertFromProto.h"

#include "../ConvertFromProtoHelpers.h"

namespace adapter {

namespace dds {

// ---- forward declare the conversion routines for the child types ---

void convert_from_proto(const commonmodule::ControlMessageInfo& in, twinoaks::commonmodule::ControlMessageInfo& out);

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out);

void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out);

void convert_from_proto(const commonmodule::TimeQuality& in, twinoaks::commonmodule::TimeQuality& out);

void convert_from_proto(const breakermodule::Breaker& in, twinoaks::breakermodule::Breaker& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out);

void convert_from_proto(const breakermodule::BreakerDiscreteControl& in, twinoaks::breakermodule::BreakerDiscreteControl& out);

void convert_from_proto(const commonmodule::ControlValue& in, twinoaks::commonmodule::ControlValue& out);

void convert_from_proto(const commonmodule::CheckConditions& in, twinoaks::commonmodule::CheckConditions& out);

void convert_from_proto(const breakermodule::BreakerDiscreteControlXCBR& in, twinoaks::breakermodule::BreakerDiscreteControlXCBR& out);

void convert_from_proto(const commonmodule::DiscreteControlXCBR& in, twinoaks::commonmodule::DiscreteControlXCBR& out);

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, twinoaks::commonmodule::LogicalNodeForControl& out);

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::PhaseDPC& in, twinoaks::commonmodule::PhaseDPC& out);

void convert_from_proto(const commonmodule::ControlDPC& in, twinoaks::commonmodule::ControlDPC& out);

void convert_from_proto(const commonmodule::ControlINC& in, twinoaks::commonmodule::ControlINC& out);

void convert_from_proto(const commonmodule::ControlSPC& in, twinoaks::commonmodule::ControlSPC& out);

void convert_from_proto(const commonmodule::EventMessageInfo& in, twinoaks::commonmodule::EventMessageInfo& out);

void convert_from_proto(const breakermodule::BreakerEvent& in, twinoaks::breakermodule::BreakerEvent& out);

void convert_from_proto(const commonmodule::EventValue& in, twinoaks::commonmodule::EventValue& out);

void convert_from_proto(const commonmodule::StatusAndEventXCBR& in, twinoaks::commonmodule::StatusAndEventXCBR& out);

void convert_from_proto(const commonmodule::LogicalNodeForEventAndStatus& in, twinoaks::commonmodule::LogicalNodeForEventAndStatus& out);

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, twinoaks::commonmodule::ENS_BehaviourModeKind& out);

void convert_from_proto(const commonmodule::Quality& in, twinoaks::commonmodule::Quality& out);

void convert_from_proto(const commonmodule::DetailQual& in, twinoaks::commonmodule::DetailQual& out);

void convert_from_proto(const commonmodule::ENS_HealthKind& in, twinoaks::commonmodule::ENS_HealthKind& out);

void convert_from_proto(const commonmodule::StatusSPS& in, twinoaks::commonmodule::StatusSPS& out);

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, twinoaks::commonmodule::ENS_DynamicTestKind& out);

void convert_from_proto(const commonmodule::PhaseDPS& in, twinoaks::commonmodule::PhaseDPS& out);

void convert_from_proto(const commonmodule::StatusDPS& in, twinoaks::commonmodule::StatusDPS& out);

void convert_from_proto(const commonmodule::ACD& in, twinoaks::commonmodule::ACD& out);

void convert_from_proto(const commonmodule::StatusINS& in, twinoaks::commonmodule::StatusINS& out);

void convert_from_proto(const commonmodule::PhaseSPS& in, twinoaks::commonmodule::PhaseSPS& out);

void convert_from_proto(const commonmodule::PhaseRecloseAction& in, twinoaks::commonmodule::PhaseRecloseAction& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const breakermodule::BreakerReading& in, twinoaks::breakermodule::BreakerReading& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, twinoaks::commonmodule::ACDCTerminal& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, twinoaks::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::WYE& in, twinoaks::commonmodule::WYE& out);

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out);

void convert_from_proto(const google::protobuf::DoubleValue& in, twinoaks::google::protobuf::DoubleValue& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out);

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const commonmodule::DEL& in, twinoaks::commonmodule::DEL& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, twinoaks::commonmodule::PhaseMMTN& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, twinoaks::commonmodule::ReadingMMTN& out);

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, twinoaks::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::StatusMessageInfo& in, twinoaks::commonmodule::StatusMessageInfo& out);

void convert_from_proto(const breakermodule::BreakerStatus& in, twinoaks::breakermodule::BreakerStatus& out);

void convert_from_proto(const commonmodule::StatusValue& in, twinoaks::commonmodule::StatusValue& out);

void convert_from_proto(const capbankmodule::CapBankControl& in, twinoaks::capbankmodule::CapBankControl& out);

void convert_from_proto(const capbankmodule::CapBankControlFSCC& in, twinoaks::capbankmodule::CapBankControlFSCC& out);

void convert_from_proto(const commonmodule::ControlFSCC& in, twinoaks::commonmodule::ControlFSCC& out);

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, twinoaks::commonmodule::ControlScheduleFSCH& out);

void convert_from_proto(const commonmodule::ScheduleCSG& in, twinoaks::commonmodule::ScheduleCSG& out);

void convert_from_proto(const commonmodule::SchedulePoint& in, twinoaks::commonmodule::SchedulePoint& out);

void convert_from_proto(const commonmodule::ENG_ScheduleParameter& in, twinoaks::commonmodule::ENG_ScheduleParameter& out);

void convert_from_proto(const commonmodule::ControlTimestamp& in, twinoaks::commonmodule::ControlTimestamp& out);

void convert_from_proto(const capbankmodule::CapBankControlScheduleFSCH& in, twinoaks::capbankmodule::CapBankControlScheduleFSCH& out);

void convert_from_proto(const capbankmodule::CapBankCSG& in, twinoaks::capbankmodule::CapBankCSG& out);

void convert_from_proto(const capbankmodule::CapBankPoint& in, twinoaks::capbankmodule::CapBankPoint& out);

void convert_from_proto(const capbankmodule::CapBankControlYPSH& in, twinoaks::capbankmodule::CapBankControlYPSH& out);

void convert_from_proto(const capbankmodule::CapBankSystem& in, twinoaks::capbankmodule::CapBankSystem& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControl& in, twinoaks::capbankmodule::CapBankDiscreteControl& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControlYPSH& in, twinoaks::capbankmodule::CapBankDiscreteControlYPSH& out);

void convert_from_proto(const capbankmodule::CapBankEvent& in, twinoaks::capbankmodule::CapBankEvent& out);

void convert_from_proto(const capbankmodule::CapBankEventAndStatusYPSH& in, twinoaks::capbankmodule::CapBankEventAndStatusYPSH& out);

void convert_from_proto(const capbankmodule::CapBankReading& in, twinoaks::capbankmodule::CapBankReading& out);

void convert_from_proto(const capbankmodule::CapBankStatus& in, twinoaks::capbankmodule::CapBankStatus& out);

void convert_from_proto(const commonmodule::ESS& in, twinoaks::commonmodule::ESS& out);

void convert_from_proto(const essmodule::ESSControl& in, twinoaks::essmodule::ESSControl& out);

void convert_from_proto(const essmodule::EssControlFSCC& in, twinoaks::essmodule::EssControlFSCC& out);

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, twinoaks::essmodule::ESSControlScheduleFSCH& out);

void convert_from_proto(const essmodule::ESSCSG& in, twinoaks::essmodule::ESSCSG& out);

void convert_from_proto(const essmodule::ESSPoint& in, twinoaks::essmodule::ESSPoint& out);

void convert_from_proto(const essmodule::ESSFunction& in, twinoaks::essmodule::ESSFunction& out);

void convert_from_proto(const essmodule::CapacityFirming& in, twinoaks::essmodule::CapacityFirming& out);

void convert_from_proto(const essmodule::FrequencyRegulation& in, twinoaks::essmodule::FrequencyRegulation& out);

void convert_from_proto(const essmodule::PeakShaving& in, twinoaks::essmodule::PeakShaving& out);

void convert_from_proto(const essmodule::SocLimit& in, twinoaks::essmodule::SocLimit& out);

void convert_from_proto(const essmodule::SOCManagement& in, twinoaks::essmodule::SOCManagement& out);

void convert_from_proto(const essmodule::VoltageDroop& in, twinoaks::essmodule::VoltageDroop& out);

void convert_from_proto(const essmodule::VoltageRegulation& in, twinoaks::essmodule::VoltageRegulation& out);

void convert_from_proto(const essmodule::VoltagePI& in, twinoaks::essmodule::VoltagePI& out);

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, twinoaks::commonmodule::ENG_GridConnectModeKind& out);

void convert_from_proto(const commonmodule::RampRate& in, twinoaks::commonmodule::RampRate& out);

void convert_from_proto(const essmodule::ESSEvent& in, twinoaks::essmodule::ESSEvent& out);

void convert_from_proto(const essmodule::EssEventZBAT& in, twinoaks::essmodule::EssEventZBAT& out);

void convert_from_proto(const essmodule::ESSEventZGEN& in, twinoaks::essmodule::ESSEventZGEN& out);

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, twinoaks::essmodule::ESSEventAndStatusZGEN& out);

void convert_from_proto(const essmodule::ESSPointStatus& in, twinoaks::essmodule::ESSPointStatus& out);

void convert_from_proto(const essmodule::ESSReading& in, twinoaks::essmodule::ESSReading& out);

void convert_from_proto(const essmodule::ESSStatus& in, twinoaks::essmodule::ESSStatus& out);

void convert_from_proto(const essmodule::EssStatusZBAT& in, twinoaks::essmodule::EssStatusZBAT& out);

void convert_from_proto(const essmodule::ESSStatusZGEN& in, twinoaks::essmodule::ESSStatusZGEN& out);

void convert_from_proto(const generationmodule::GeneratingUnit& in, twinoaks::generationmodule::GeneratingUnit& out);

void convert_from_proto(const commonmodule::ActivePower& in, twinoaks::commonmodule::ActivePower& out);

void convert_from_proto(const generationmodule::GenerationControl& in, twinoaks::generationmodule::GenerationControl& out);

void convert_from_proto(const generationmodule::GenerationControlFSCC& in, twinoaks::generationmodule::GenerationControlFSCC& out);

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, twinoaks::generationmodule::GenerationControlScheduleFSCH& out);

void convert_from_proto(const generationmodule::GenerationCSG& in, twinoaks::generationmodule::GenerationCSG& out);

void convert_from_proto(const generationmodule::GenerationPoint& in, twinoaks::generationmodule::GenerationPoint& out);

void convert_from_proto(const generationmodule::GenerationDiscreteControl& in, twinoaks::generationmodule::GenerationDiscreteControl& out);

void convert_from_proto(const generationmodule::ReactivePowerControl& in, twinoaks::generationmodule::ReactivePowerControl& out);

void convert_from_proto(const generationmodule::DroopParameter& in, twinoaks::generationmodule::DroopParameter& out);

void convert_from_proto(const generationmodule::RealPowerControl& in, twinoaks::generationmodule::RealPowerControl& out);

void convert_from_proto(const generationmodule::GenerationEvent& in, twinoaks::generationmodule::GenerationEvent& out);

void convert_from_proto(const generationmodule::GenerationEventZGEN& in, twinoaks::generationmodule::GenerationEventZGEN& out);

void convert_from_proto(const generationmodule::GenerationEventAndStatusZGEN& in, twinoaks::generationmodule::GenerationEventAndStatusZGEN& out);

void convert_from_proto(const generationmodule::GenerationPointStatus& in, twinoaks::generationmodule::GenerationPointStatus& out);

void convert_from_proto(const generationmodule::GenerationReading& in, twinoaks::generationmodule::GenerationReading& out);

void convert_from_proto(const generationmodule::GenerationStatus& in, twinoaks::generationmodule::GenerationStatus& out);

void convert_from_proto(const generationmodule::GenerationStatusZGEN& in, twinoaks::generationmodule::GenerationStatusZGEN& out);

void convert_from_proto(const commonmodule::EnergyConsumer& in, twinoaks::commonmodule::EnergyConsumer& out);

void convert_from_proto(const loadmodule::LoadControl& in, twinoaks::loadmodule::LoadControl& out);

void convert_from_proto(const loadmodule::LoadControlFSCC& in, twinoaks::loadmodule::LoadControlFSCC& out);

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, twinoaks::loadmodule::LoadControlScheduleFSCH& out);

void convert_from_proto(const loadmodule::LoadCSG& in, twinoaks::loadmodule::LoadCSG& out);

void convert_from_proto(const loadmodule::LoadPoint& in, twinoaks::loadmodule::LoadPoint& out);

void convert_from_proto(const loadmodule::LoadEvent& in, twinoaks::loadmodule::LoadEvent& out);

void convert_from_proto(const loadmodule::LoadEventZGLD& in, twinoaks::loadmodule::LoadEventZGLD& out);

void convert_from_proto(const loadmodule::LoadEventAndStatusZGLD& in, twinoaks::loadmodule::LoadEventAndStatusZGLD& out);

void convert_from_proto(const loadmodule::LoadPointStatus& in, twinoaks::loadmodule::LoadPointStatus& out);

void convert_from_proto(const loadmodule::LoadReading& in, twinoaks::loadmodule::LoadReading& out);

void convert_from_proto(const loadmodule::LoadStatus& in, twinoaks::loadmodule::LoadStatus& out);

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, twinoaks::loadmodule::LoadStatusZGLD& out);

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out);

void convert_from_proto(const metermodule::MeterReading& in, twinoaks::metermodule::MeterReading& out);

void convert_from_proto(const reclosermodule::Recloser& in, twinoaks::reclosermodule::Recloser& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControl& in, twinoaks::reclosermodule::RecloserDiscreteControl& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControlXCBR& in, twinoaks::reclosermodule::RecloserDiscreteControlXCBR& out);

void convert_from_proto(const reclosermodule::RecloserEvent& in, twinoaks::reclosermodule::RecloserEvent& out);

void convert_from_proto(const reclosermodule::RecloserReading& in, twinoaks::reclosermodule::RecloserReading& out);

void convert_from_proto(const reclosermodule::RecloserStatus& in, twinoaks::reclosermodule::RecloserStatus& out);

void convert_from_proto(const regulatormodule::RegulatorDiscreteControl& in, twinoaks::regulatormodule::RegulatorDiscreteControl& out);

void convert_from_proto(const regulatormodule::RegulatorControlATCC& in, twinoaks::regulatormodule::RegulatorControlATCC& out);

void convert_from_proto(const commonmodule::ASG& in, twinoaks::commonmodule::ASG& out);

void convert_from_proto(const commonmodule::ControlING& in, twinoaks::commonmodule::ControlING& out);

void convert_from_proto(const commonmodule::PhaseISC& in, twinoaks::commonmodule::PhaseISC& out);

void convert_from_proto(const commonmodule::ControlISC& in, twinoaks::commonmodule::ControlISC& out);

void convert_from_proto(const commonmodule::PhaseAPC& in, twinoaks::commonmodule::PhaseAPC& out);

void convert_from_proto(const commonmodule::ControlAPC& in, twinoaks::commonmodule::ControlAPC& out);

void convert_from_proto(const regulatormodule::RegulatorSystem& in, twinoaks::regulatormodule::RegulatorSystem& out);

void convert_from_proto(const regulatormodule::RegulatorControl& in, twinoaks::regulatormodule::RegulatorControl& out);

void convert_from_proto(const regulatormodule::RegulatorControlFSCC& in, twinoaks::regulatormodule::RegulatorControlFSCC& out);

void convert_from_proto(const regulatormodule::RegulatorControlScheduleFSCH& in, twinoaks::regulatormodule::RegulatorControlScheduleFSCH& out);

void convert_from_proto(const regulatormodule::RegulatorCSG& in, twinoaks::regulatormodule::RegulatorCSG& out);

void convert_from_proto(const regulatormodule::RegulatorPoint& in, twinoaks::regulatormodule::RegulatorPoint& out);

void convert_from_proto(const regulatormodule::RegulatorEvent& in, twinoaks::regulatormodule::RegulatorEvent& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusANCR& in, twinoaks::regulatormodule::RegulatorEventAndStatusANCR& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusATCC& in, twinoaks::regulatormodule::RegulatorEventAndStatusATCC& out);

void convert_from_proto(const commonmodule::StatusINC& in, twinoaks::commonmodule::StatusINC& out);

void convert_from_proto(const commonmodule::PhaseINS& in, twinoaks::commonmodule::PhaseINS& out);

void convert_from_proto(const commonmodule::StatusSPC& in, twinoaks::commonmodule::StatusSPC& out);

void convert_from_proto(const regulatormodule::RegulatorReading& in, twinoaks::regulatormodule::RegulatorReading& out);

void convert_from_proto(const regulatormodule::RegulatorStatus& in, twinoaks::regulatormodule::RegulatorStatus& out);

void convert_from_proto(const resourcemodule::ResourceDiscreteControl& in, twinoaks::resourcemodule::ResourceDiscreteControl& out);

void convert_from_proto(const resourcemodule::AnalogControlGGIO& in, twinoaks::resourcemodule::AnalogControlGGIO& out);

void convert_from_proto(const resourcemodule::BooleanControlGGIO& in, twinoaks::resourcemodule::BooleanControlGGIO& out);

void convert_from_proto(const resourcemodule::IntegerControlGGIO& in, twinoaks::resourcemodule::IntegerControlGGIO& out);

void convert_from_proto(const resourcemodule::StringControlGGIO& in, twinoaks::resourcemodule::StringControlGGIO& out);

void convert_from_proto(const commonmodule::VSC& in, twinoaks::commonmodule::VSC& out);

void convert_from_proto(const resourcemodule::ResourceEvent& in, twinoaks::resourcemodule::ResourceEvent& out);

void convert_from_proto(const commonmodule::AnalogEventAndStatusGGIO& in, twinoaks::commonmodule::AnalogEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::BooleanEventAndStatusGGIO& in, twinoaks::commonmodule::BooleanEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::IntegerEventAndStatusGGIO& in, twinoaks::commonmodule::IntegerEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::StringEventAndStatusGGIO& in, twinoaks::commonmodule::StringEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::VSS& in, twinoaks::commonmodule::VSS& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, twinoaks::resourcemodule::ResourceReading& out);

void convert_from_proto(const resourcemodule::ResourceStatus& in, twinoaks::resourcemodule::ResourceStatus& out);

void convert_from_proto(const solarmodule::SolarControl& in, twinoaks::solarmodule::SolarControl& out);

void convert_from_proto(const solarmodule::SolarControlFSCC& in, twinoaks::solarmodule::SolarControlFSCC& out);

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, twinoaks::solarmodule::SolarControlScheduleFSCH& out);

void convert_from_proto(const solarmodule::SolarCSG& in, twinoaks::solarmodule::SolarCSG& out);

void convert_from_proto(const solarmodule::SolarPoint& in, twinoaks::solarmodule::SolarPoint& out);

void convert_from_proto(const solarmodule::SolarInverter& in, twinoaks::solarmodule::SolarInverter& out);

void convert_from_proto(const solarmodule::SolarEvent& in, twinoaks::solarmodule::SolarEvent& out);

void convert_from_proto(const solarmodule::SolarEventZGEN& in, twinoaks::solarmodule::SolarEventZGEN& out);

void convert_from_proto(const solarmodule::SolarEventAndStatusZGEN& in, twinoaks::solarmodule::SolarEventAndStatusZGEN& out);

void convert_from_proto(const solarmodule::SolarPointStatus& in, twinoaks::solarmodule::SolarPointStatus& out);

void convert_from_proto(const solarmodule::SolarReading& in, twinoaks::solarmodule::SolarReading& out);

void convert_from_proto(const solarmodule::SolarStatus& in, twinoaks::solarmodule::SolarStatus& out);

void convert_from_proto(const solarmodule::SolarStatusZGEN& in, twinoaks::solarmodule::SolarStatusZGEN& out);

void convert_from_proto(const switchmodule::ProtectedSwitch& in, twinoaks::switchmodule::ProtectedSwitch& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControl& in, twinoaks::switchmodule::SwitchDiscreteControl& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControlXSWI& in, twinoaks::switchmodule::SwitchDiscreteControlXSWI& out);

void convert_from_proto(const switchmodule::SwitchEvent& in, twinoaks::switchmodule::SwitchEvent& out);

void convert_from_proto(const switchmodule::SwitchEventXSWI& in, twinoaks::switchmodule::SwitchEventXSWI& out);

void convert_from_proto(const switchmodule::SwitchReading& in, twinoaks::switchmodule::SwitchReading& out);

void convert_from_proto(const switchmodule::SwitchStatus& in, twinoaks::switchmodule::SwitchStatus& out);

void convert_from_proto(const switchmodule::SwitchStatusXSWI& in, twinoaks::switchmodule::SwitchStatusXSWI& out);

// ---- implement the top level profile conversion routines ---

void convert_from_proto(const breakermodule::BreakerDiscreteControlProfile& in, twinoaks::breakermodule::BreakerDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker); // required field in DDS

    convert_from_proto(in.breakerdiscretecontrol(), out.breakerDiscreteControl); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerEventProfile& in, twinoaks::breakermodule::BreakerEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker); // required field in DDS

    convert_from_proto(in.breakerevent(), out.breakerEvent); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, twinoaks::breakermodule::BreakerReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker); // required field in DDS

    for(const auto& input : in.breakerreading())
    {
        twinoaks::breakermodule::BreakerReading ouput;
        convert_from_proto(input, ouput);
        out.breakerReading.push_back(ouput);
    }
}

void convert_from_proto(const breakermodule::BreakerStatusProfile& in, twinoaks::breakermodule::BreakerStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker); // required field in DDS

    convert_from_proto(in.breakerstatus(), out.breakerStatus); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankControlProfile& in, twinoaks::capbankmodule::CapBankControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankcontrol(), out.capBankControl); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControlProfile& in, twinoaks::capbankmodule::CapBankDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankcontrol(), out.capBankControl); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankEventProfile& in, twinoaks::capbankmodule::CapBankEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankevent(), out.capBankEvent); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankReadingProfile& in, twinoaks::capbankmodule::CapBankReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankreading(), out.capBankReading); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankStatusProfile& in, twinoaks::capbankmodule::CapBankStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankstatus(), out.capBankStatus); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem); // required field in DDS
}

void convert_from_proto(const essmodule::ESSControlProfile& in, twinoaks::essmodule::ESSControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.esscontrol(), out.essControl); // required field in DDS
}

void convert_from_proto(const essmodule::ESSEventProfile& in, twinoaks::essmodule::ESSEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.essevent(), out.essEvent); // required field in DDS
}

void convert_from_proto(const essmodule::ESSReadingProfile& in, twinoaks::essmodule::ESSReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.essreading(), out.essReading); // required field in DDS
}

void convert_from_proto(const essmodule::ESSStatusProfile& in, twinoaks::essmodule::ESSStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.essstatus(), out.essStatus); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationControlProfile& in, twinoaks::generationmodule::GenerationControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit); // required field in DDS

    convert_from_proto(in.generationcontrol(), out.generationControl); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationDiscreteControlProfile& in, twinoaks::generationmodule::GenerationDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit); // required field in DDS

    convert_from_proto(in.generationdiscretecontrol(), out.generationDiscreteControl); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationEventProfile& in, twinoaks::generationmodule::GenerationEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit); // required field in DDS

    convert_from_proto(in.generationevent(), out.generationEvent); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationReadingProfile& in, twinoaks::generationmodule::GenerationReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit); // required field in DDS

    convert_from_proto(in.generationreading(), out.generationReading); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationStatusProfile& in, twinoaks::generationmodule::GenerationStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit); // required field in DDS

    convert_from_proto(in.generationstatus(), out.generationStatus); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadControlProfile& in, twinoaks::loadmodule::LoadControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.loadcontrol(), out.loadControl); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadEventProfile& in, twinoaks::loadmodule::LoadEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.loadevent(), out.loadEvent); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadReadingProfile& in, twinoaks::loadmodule::LoadReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.loadreading(), out.loadReading); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadStatusProfile& in, twinoaks::loadmodule::LoadStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.loadstatus(), out.loadStatus); // required field in DDS
}

void convert_from_proto(const metermodule::MeterReadingProfile& in, twinoaks::metermodule::MeterReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.meter(), out.meter); // required field in DDS

    convert_from_proto(in.meterreading(), out.meterReading); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControlProfile& in, twinoaks::reclosermodule::RecloserDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.recloser(), out.recloser); // required field in DDS

    convert_from_proto(in.recloserdiscretecontrol(), out.recloserDiscreteControl); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserEventProfile& in, twinoaks::reclosermodule::RecloserEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.recloser(), out.recloser); // required field in DDS

    convert_from_proto(in.recloserevent(), out.recloserEvent); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserReadingProfile& in, twinoaks::reclosermodule::RecloserReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.recloser(), out.recloser); // required field in DDS

    for(const auto& input : in.recloserreading())
    {
        twinoaks::reclosermodule::RecloserReading ouput;
        convert_from_proto(input, ouput);
        out.recloserReading.push_back(ouput);
    }
}

void convert_from_proto(const reclosermodule::RecloserStatusProfile& in, twinoaks::reclosermodule::RecloserStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.recloser(), out.recloser); // required field in DDS

    convert_from_proto(in.recloserstatus(), out.recloserStatus); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorDiscreteControlProfile& in, twinoaks::regulatormodule::RegulatorDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatordiscretecontrol(), out.regulatorDiscreteControl); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorControlProfile& in, twinoaks::regulatormodule::RegulatorControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatorcontrol(), out.regulatorControl); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorEventProfile& in, twinoaks::regulatormodule::RegulatorEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatorevent(), out.regulatorEvent); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorReadingProfile& in, twinoaks::regulatormodule::RegulatorReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    for(const auto& input : in.regulatorreading())
    {
        twinoaks::regulatormodule::RegulatorReading ouput;
        convert_from_proto(input, ouput);
        out.regulatorReading.push_back(ouput);
    }

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorStatusProfile& in, twinoaks::regulatormodule::RegulatorStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatorstatus(), out.regulatorStatus); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceDiscreteControlProfile& in, twinoaks::resourcemodule::ResourceDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment); // required field in DDS

    convert_from_proto(in.resourcediscretecontrol(), out.resourceDiscreteControl); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceEventProfile& in, twinoaks::resourcemodule::ResourceEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment); // required field in DDS

    convert_from_proto(in.resourceevent(), out.resourceEvent); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, twinoaks::resourcemodule::ResourceReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment); // required field in DDS

    convert_from_proto(in.resourcereading(), out.resourceReading); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceStatusProfile& in, twinoaks::resourcemodule::ResourceStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment); // required field in DDS

    convert_from_proto(in.resourcestatus(), out.resourceStatus); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarControlProfile& in, twinoaks::solarmodule::SolarControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.solarcontrol(), out.solarControl); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarEventProfile& in, twinoaks::solarmodule::SolarEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.solarevent(), out.solarEvent); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarReadingProfile& in, twinoaks::solarmodule::SolarReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS

    convert_from_proto(in.solarreading(), out.solarReading); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarStatusProfile& in, twinoaks::solarmodule::SolarStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS

    convert_from_proto(in.solarstatus(), out.solarStatus); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchDiscreteControlProfile& in, twinoaks::switchmodule::SwitchDiscreteControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    convert_from_proto(in.switchdiscretecontrol(), out.switchDiscreteControl); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchEventProfile& in, twinoaks::switchmodule::SwitchEventProfile& out)
{
    out.clear();

    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    convert_from_proto(in.switchevent(), out.switchEvent); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, twinoaks::switchmodule::SwitchReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    for(const auto& input : in.switchreading())
    {
        twinoaks::switchmodule::SwitchReading ouput;
        convert_from_proto(input, ouput);
        out.switchReading.push_back(ouput);
    }
}

void convert_from_proto(const switchmodule::SwitchStatusProfile& in, twinoaks::switchmodule::SwitchStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    convert_from_proto(in.switchstatus(), out.switchStatus); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_from_proto(const commonmodule::ControlMessageInfo& in, twinoaks::commonmodule::ControlMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.messagetimestamp(), out.messageTimeStamp); // required field in DDS
}

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out)
{
    out.clear();

    if(in.has_description()) out.description = allocate_cstring(in.description().value()); // optional string

    if(in.has_mrid()) out.mRID = allocate_cstring(in.mrid().value()); // optional string

    if(in.has_name()) out.name = allocate_cstring(in.name().value()); // optional string
}

void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out)
{
    out.clear();

    out.seconds = in.seconds(); // required UINT64 primitive

    if(in.has_tq()) // optional field in DDS
    {
        out.tq = new twinoaks::commonmodule::TimeQuality();
        convert_from_proto(in.tq(), *out.tq);
    }

    out.nanoseconds = in.nanoseconds(); // required UINT32 primitive
}

void convert_from_proto(const commonmodule::TimeQuality& in, twinoaks::commonmodule::TimeQuality& out)
{
    out.clear();

    static_assert(std::is_same<decltype(out.clockFailure), unsigned char>::value, "unexpected type");
    out.clockFailure = static_cast<unsigned char>(in.clockfailure()); // required bool

    static_assert(std::is_same<decltype(out.clockNotSynchronized), unsigned char>::value, "unexpected type");
    out.clockNotSynchronized = static_cast<unsigned char>(in.clocknotsynchronized()); // required bool

    static_assert(std::is_same<decltype(out.leapSecondsKnown), unsigned char>::value, "unexpected type");
    out.leapSecondsKnown = static_cast<unsigned char>(in.leapsecondsknown()); // required bool

    out.timeAccuracy = static_cast<twinoaks::commonmodule::TimeAccuracyKind>(in.timeaccuracy());
}

void convert_from_proto(const breakermodule::Breaker& in, twinoaks::breakermodule::Breaker& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out)
{
    out.clear();

    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type

    out.mRID = allocate_cstring(in.mrid()); // required string
}

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out)
{
    out.clear();

    if(in.has_description()) out.description = allocate_cstring(in.description().value()); // optional string

    if(in.has_name()) out.name = allocate_cstring(in.name().value()); // optional string
}

void convert_from_proto(const breakermodule::BreakerDiscreteControl& in, twinoaks::breakermodule::BreakerDiscreteControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_breakerdiscretecontrolxcbr()) // optional field in DDS
    {
        out.breakerDiscreteControlXCBR = new twinoaks::breakermodule::BreakerDiscreteControlXCBR();
        convert_from_proto(in.breakerdiscretecontrolxcbr(), *out.breakerDiscreteControlXCBR);
    }
}

void convert_from_proto(const commonmodule::ControlValue& in, twinoaks::commonmodule::ControlValue& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk = allocate_from_wrapper_type(in.modblk());
    }

    if(in.has_reset())
    {
        out.reset = allocate_from_wrapper_type(in.reset());
    }
}

void convert_from_proto(const commonmodule::CheckConditions& in, twinoaks::commonmodule::CheckConditions& out)
{
    out.clear();

    if(in.has_interlockcheck())
    {
        out.interlockCheck = allocate_from_wrapper_type(in.interlockcheck());
    }

    if(in.has_synchrocheck())
    {
        out.synchroCheck = allocate_from_wrapper_type(in.synchrocheck());
    }
}

void convert_from_proto(const breakermodule::BreakerDiscreteControlXCBR& in, twinoaks::breakermodule::BreakerDiscreteControlXCBR& out)
{
    out.clear();

    if(in.has_discretecontrolxcbr()) convert_from_proto(in.discretecontrolxcbr(), out); // inherited type
}

void convert_from_proto(const commonmodule::DiscreteControlXCBR& in, twinoaks::commonmodule::DiscreteControlXCBR& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPC();
        convert_from_proto(in.pos(), *out.Pos);
    }

    if(in.has_protectionmode()) // optional field in DDS
    {
        out.ProtectionMode = new twinoaks::commonmodule::ControlINC();
        convert_from_proto(in.protectionmode(), *out.ProtectionMode);
    }

    if(in.has_recloseenabled()) // optional field in DDS
    {
        out.RecloseEnabled = new twinoaks::commonmodule::ControlSPC();
        convert_from_proto(in.recloseenabled(), *out.RecloseEnabled);
    }

    if(in.has_resetprotectionpickup()) // optional field in DDS
    {
        out.ResetProtectionPickup = new twinoaks::commonmodule::ControlSPC();
        convert_from_proto(in.resetprotectionpickup(), *out.ResetProtectionPickup);
    }
}

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, twinoaks::commonmodule::LogicalNodeForControl& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
}

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::PhaseDPC& in, twinoaks::commonmodule::PhaseDPC& out)
{
    out.clear();

    if(in.has_phs3()) // optional field in DDS
    {
        out.phs3 = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.phs3(), *out.phs3);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::ControlDPC& in, twinoaks::commonmodule::ControlDPC& out)
{
    out.clear();

    static_assert(std::is_same<decltype(out.ctlVal), unsigned char>::value, "unexpected type");
    out.ctlVal = static_cast<unsigned char>(in.ctlval()); // required bool
}

void convert_from_proto(const commonmodule::ControlINC& in, twinoaks::commonmodule::ControlINC& out)
{
    out.clear();

    out.ctlVal = in.ctlval(); // required INT32 primitive
}

void convert_from_proto(const commonmodule::ControlSPC& in, twinoaks::commonmodule::ControlSPC& out)
{
    out.clear();

    static_assert(std::is_same<decltype(out.ctlVal), unsigned char>::value, "unexpected type");
    out.ctlVal = static_cast<unsigned char>(in.ctlval()); // required bool
}

void convert_from_proto(const commonmodule::EventMessageInfo& in, twinoaks::commonmodule::EventMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerEvent& in, twinoaks::breakermodule::BreakerEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        out.statusAndEventXCBR = new twinoaks::commonmodule::StatusAndEventXCBR();
        convert_from_proto(in.statusandeventxcbr(), *out.statusAndEventXCBR);
    }
}

void convert_from_proto(const commonmodule::EventValue& in, twinoaks::commonmodule::EventValue& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk = allocate_from_wrapper_type(in.modblk());
    }
}

void convert_from_proto(const commonmodule::StatusAndEventXCBR& in, twinoaks::commonmodule::StatusAndEventXCBR& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPS();
        convert_from_proto(in.pos(), *out.Pos);
    }

    if(in.has_protectionpickup()) // optional field in DDS
    {
        out.ProtectionPickup = new twinoaks::commonmodule::ACD();
        convert_from_proto(in.protectionpickup(), *out.ProtectionPickup);
    }

    if(in.has_protectionmode()) // optional field in DDS
    {
        out.ProtectionMode = new twinoaks::commonmodule::StatusINS();
        convert_from_proto(in.protectionmode(), *out.ProtectionMode);
    }

    if(in.has_recloseenabled()) // optional field in DDS
    {
        out.RecloseEnabled = new twinoaks::commonmodule::PhaseSPS();
        convert_from_proto(in.recloseenabled(), *out.RecloseEnabled);
    }

    if(in.has_reclosingaction()) // optional field in DDS
    {
        out.ReclosingAction = new twinoaks::commonmodule::PhaseRecloseAction();
        convert_from_proto(in.reclosingaction(), *out.ReclosingAction);
    }
}

void convert_from_proto(const commonmodule::LogicalNodeForEventAndStatus& in, twinoaks::commonmodule::LogicalNodeForEventAndStatus& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_beh()) // optional field in DDS
    {
        out.Beh = new twinoaks::commonmodule::ENS_BehaviourModeKind();
        convert_from_proto(in.beh(), *out.Beh);
    }

    if(in.has_eehealth()) // optional field in DDS
    {
        out.EEHealth = new twinoaks::commonmodule::ENS_HealthKind();
        convert_from_proto(in.eehealth(), *out.EEHealth);
    }

    if(in.has_hotlinetag()) // optional field in DDS
    {
        out.HotLineTag = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.hotlinetag(), *out.HotLineTag);
    }

    if(in.has_remoteblk()) // optional field in DDS
    {
        out.RemoteBlk = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.remoteblk(), *out.RemoteBlk);
    }
}

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, twinoaks::commonmodule::ENS_BehaviourModeKind& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    out.stVal = static_cast<twinoaks::commonmodule::BehaviourModeKind>(in.stval());

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::Quality& in, twinoaks::commonmodule::Quality& out)
{
    out.clear();

    convert_from_proto(in.detailqual(), out.detailQual); // required field in DDS

    static_assert(std::is_same<decltype(out.operatorBlocked), unsigned char>::value, "unexpected type");
    out.operatorBlocked = static_cast<unsigned char>(in.operatorblocked()); // required bool

    out.source = static_cast<twinoaks::commonmodule::SourceKind>(in.source());

    static_assert(std::is_same<decltype(out.test), unsigned char>::value, "unexpected type");
    out.test = static_cast<unsigned char>(in.test()); // required bool

    out.validity = static_cast<twinoaks::commonmodule::ValidityKind>(in.validity());
}

void convert_from_proto(const commonmodule::DetailQual& in, twinoaks::commonmodule::DetailQual& out)
{
    out.clear();

    static_assert(std::is_same<decltype(out.badReference), unsigned char>::value, "unexpected type");
    out.badReference = static_cast<unsigned char>(in.badreference()); // required bool

    static_assert(std::is_same<decltype(out.failure), unsigned char>::value, "unexpected type");
    out.failure = static_cast<unsigned char>(in.failure()); // required bool

    static_assert(std::is_same<decltype(out.inaccurate), unsigned char>::value, "unexpected type");
    out.inaccurate = static_cast<unsigned char>(in.inaccurate()); // required bool

    static_assert(std::is_same<decltype(out.inconsistent), unsigned char>::value, "unexpected type");
    out.inconsistent = static_cast<unsigned char>(in.inconsistent()); // required bool

    static_assert(std::is_same<decltype(out.oldData), unsigned char>::value, "unexpected type");
    out.oldData = static_cast<unsigned char>(in.olddata()); // required bool

    static_assert(std::is_same<decltype(out.oscillatory), unsigned char>::value, "unexpected type");
    out.oscillatory = static_cast<unsigned char>(in.oscillatory()); // required bool

    static_assert(std::is_same<decltype(out.outOfRange), unsigned char>::value, "unexpected type");
    out.outOfRange = static_cast<unsigned char>(in.outofrange()); // required bool

    static_assert(std::is_same<decltype(out.overflow), unsigned char>::value, "unexpected type");
    out.overflow = static_cast<unsigned char>(in.overflow()); // required bool
}

void convert_from_proto(const commonmodule::ENS_HealthKind& in, twinoaks::commonmodule::ENS_HealthKind& out)
{
    out.clear();

    if(in.has_d()) out.d = allocate_cstring(in.d().value()); // optional string

    out.stVal = static_cast<twinoaks::commonmodule::HealthKind>(in.stval());
}

void convert_from_proto(const commonmodule::StatusSPS& in, twinoaks::commonmodule::StatusSPS& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    static_assert(std::is_same<decltype(out.stVal), unsigned char>::value, "unexpected type");
    out.stVal = static_cast<unsigned char>(in.stval()); // required bool

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, twinoaks::commonmodule::ENS_DynamicTestKind& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    out.stVal = static_cast<twinoaks::commonmodule::DynamicTestKind>(in.stval());

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::PhaseDPS& in, twinoaks::commonmodule::PhaseDPS& out)
{
    out.clear();

    if(in.has_phs3()) // optional field in DDS
    {
        out.phs3 = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.phs3(), *out.phs3);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::StatusDPS& in, twinoaks::commonmodule::StatusDPS& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    out.stVal = static_cast<twinoaks::commonmodule::DbPosKind>(in.stval());

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::ACD& in, twinoaks::commonmodule::ACD& out)
{
    out.clear();

    out.dirGeneral = static_cast<twinoaks::commonmodule::FaultDirectionKind>(in.dirgeneral());

    out.dirNeut = new twinoaks::commonmodule::PhaseFaultDirectionKind(static_cast<twinoaks::commonmodule::PhaseFaultDirectionKind>(in.dirneut().value())); // optional enum

    out.dirPhsA = new twinoaks::commonmodule::PhaseFaultDirectionKind(static_cast<twinoaks::commonmodule::PhaseFaultDirectionKind>(in.dirphsa().value())); // optional enum

    out.dirPhsB = new twinoaks::commonmodule::PhaseFaultDirectionKind(static_cast<twinoaks::commonmodule::PhaseFaultDirectionKind>(in.dirphsb().value())); // optional enum

    out.dirPhsC = new twinoaks::commonmodule::PhaseFaultDirectionKind(static_cast<twinoaks::commonmodule::PhaseFaultDirectionKind>(in.dirphsc().value())); // optional enum

    static_assert(std::is_same<decltype(out.general), unsigned char>::value, "unexpected type");
    out.general = static_cast<unsigned char>(in.general()); // required bool

    if(in.has_neut())
    {
        out.neut = allocate_from_wrapper_type(in.neut());
    }

    if(in.has_phsa())
    {
        out.phsA = allocate_from_wrapper_type(in.phsa());
    }

    if(in.has_phsb())
    {
        out.phsB = allocate_from_wrapper_type(in.phsb());
    }

    if(in.has_phsc())
    {
        out.phsC = allocate_from_wrapper_type(in.phsc());
    }
}

void convert_from_proto(const commonmodule::StatusINS& in, twinoaks::commonmodule::StatusINS& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    out.stVal = in.stval(); // required INT32 primitive

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::PhaseSPS& in, twinoaks::commonmodule::PhaseSPS& out)
{
    out.clear();

    if(in.has_phs3()) // optional field in DDS
    {
        out.phs3 = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.phs3(), *out.phs3);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::PhaseRecloseAction& in, twinoaks::commonmodule::PhaseRecloseAction& out)
{
    out.clear();

    out.phs3 = new twinoaks::commonmodule::RecloseActionKind(static_cast<twinoaks::commonmodule::RecloseActionKind>(in.phs3().value())); // optional enum

    out.phsA = new twinoaks::commonmodule::RecloseActionKind(static_cast<twinoaks::commonmodule::RecloseActionKind>(in.phsa().value())); // optional enum

    out.phsB = new twinoaks::commonmodule::RecloseActionKind(static_cast<twinoaks::commonmodule::RecloseActionKind>(in.phsb().value())); // optional enum

    out.phsC = new twinoaks::commonmodule::RecloseActionKind(static_cast<twinoaks::commonmodule::RecloseActionKind>(in.phsc().value())); // optional enum
}

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerReading& in, twinoaks::breakermodule::BreakerReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_diffreadingmmxu()) // optional field in DDS
    {
        out.diffReadingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.diffreadingmmxu(), *out.diffReadingMMXU);
    }

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.clear();

    convert_from_proto(in.terminal(), out.terminal); // required field in DDS
}

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out)
{
    out.clear();

    if(in.has_acdcterminal()) convert_from_proto(in.acdcterminal(), out); // inherited type

    out.phases = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phases().value())); // optional enum
}

void convert_from_proto(const commonmodule::ACDCTerminal& in, twinoaks::commonmodule::ACDCTerminal& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_connected())
    {
        out.connected = allocate_from_wrapper_type(in.connected());
    }

    if(in.has_sequencenumber())
    {
        out.sequenceNumber = allocate_from_wrapper_type(in.sequencenumber());
    }
}

void convert_from_proto(const commonmodule::ReadingMMXU& in, twinoaks::commonmodule::ReadingMMXU& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_a()) // optional field in DDS
    {
        out.A = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.a(), *out.A);
    }

    if(in.has_clcmth()) // optional field in DDS
    {
        out.ClcMth = new twinoaks::commonmodule::ENG_CalcMethodKind();
        convert_from_proto(in.clcmth(), *out.ClcMth);
    }

    if(in.has_hz()) // optional field in DDS
    {
        out.Hz = new twinoaks::commonmodule::MV();
        convert_from_proto(in.hz(), *out.Hz);
    }

    if(in.has_pf()) // optional field in DDS
    {
        out.PF = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.pf(), *out.PF);
    }

    if(in.has_pfsign()) // optional field in DDS
    {
        out.PFSign = new twinoaks::commonmodule::ENG_PFSignKind();
        convert_from_proto(in.pfsign(), *out.PFSign);
    }

    if(in.has_phv()) // optional field in DDS
    {
        out.PhV = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.phv(), *out.PhV);
    }

    if(in.has_ppv()) // optional field in DDS
    {
        out.PPV = new twinoaks::commonmodule::DEL();
        convert_from_proto(in.ppv(), *out.PPV);
    }

    if(in.has_va()) // optional field in DDS
    {
        out.VA = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.va(), *out.VA);
    }

    if(in.has_var()) // optional field in DDS
    {
        out.VAr = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.var(), *out.VAr);
    }

    if(in.has_w()) // optional field in DDS
    {
        out.W = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.w(), *out.W);
    }
}

void convert_from_proto(const commonmodule::WYE& in, twinoaks::commonmodule::WYE& out)
{
    out.clear();

    if(in.has_net()) // optional field in DDS
    {
        out.net = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.net(), *out.net);
    }

    if(in.has_neut()) // optional field in DDS
    {
        out.neut = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.neut(), *out.neut);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out)
{
    out.clear();

    convert_from_proto(in.cval(), out.cVal); // required field in DDS

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out)
{
    out.clear();

    if(in.has_ang()) // optional field in DDS
    {
        out.ang = new twinoaks::google::protobuf::DoubleValue();
        convert_from_proto(in.ang(), *out.ang);
    }

    out.mag = in.mag(); // required DOUBLE primitive
}

void convert_from_proto(const google::protobuf::DoubleValue& in, twinoaks::google::protobuf::DoubleValue& out)
{
    out.clear();

    out.value = in.value(); // required DOUBLE primitive
}

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::commonmodule::CalcMethodKind>(in.setval());
}

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out)
{
    out.clear();

    out.mag = in.mag(); // required DOUBLE primitive

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }

    if(in.has_units()) // optional field in DDS
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
    }
}

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out)
{
    out.clear();

    out.multiplier = new twinoaks::commonmodule::UnitMultiplierKind(static_cast<twinoaks::commonmodule::UnitMultiplierKind>(in.multiplier().value())); // optional enum

    out.SIUnit = static_cast<twinoaks::commonmodule::UnitSymbolKind>(in.siunit());
}

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::commonmodule::PFSignKind>(in.setval());
}

void convert_from_proto(const commonmodule::DEL& in, twinoaks::commonmodule::DEL& out)
{
    out.clear();

    if(in.has_phsab()) // optional field in DDS
    {
        out.phsAB = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsab(), *out.phsAB);
    }

    if(in.has_phsbc()) // optional field in DDS
    {
        out.phsBC = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsbc(), *out.phsBC);
    }

    if(in.has_phsca()) // optional field in DDS
    {
        out.phsCA = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsca(), *out.phsCA);
    }
}

void convert_from_proto(const commonmodule::PhaseMMTN& in, twinoaks::commonmodule::PhaseMMTN& out)
{
    out.clear();

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsab()) // optional field in DDS
    {
        out.phsAB = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsab(), *out.phsAB);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsbc()) // optional field in DDS
    {
        out.phsBC = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsbc(), *out.phsBC);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsc(), *out.phsC);
    }

    if(in.has_phsca()) // optional field in DDS
    {
        out.phsCA = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsca(), *out.phsCA);
    }
}

void convert_from_proto(const commonmodule::ReadingMMTN& in, twinoaks::commonmodule::ReadingMMTN& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_dmdvah()) // optional field in DDS
    {
        out.DmdVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvah(), *out.DmdVAh);
    }

    if(in.has_dmdvarh()) // optional field in DDS
    {
        out.DmdVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvarh(), *out.DmdVArh);
    }

    if(in.has_dmdwh()) // optional field in DDS
    {
        out.DmdWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdwh(), *out.DmdWh);
    }

    if(in.has_supvah()) // optional field in DDS
    {
        out.SupVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvah(), *out.SupVAh);
    }

    if(in.has_supvarh()) // optional field in DDS
    {
        out.SupVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvarh(), *out.SupVArh);
    }

    if(in.has_supwh()) // optional field in DDS
    {
        out.SupWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supwh(), *out.SupWh);
    }

    if(in.has_totvah()) // optional field in DDS
    {
        out.TotVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvah(), *out.TotVAh);
    }

    if(in.has_totvarh()) // optional field in DDS
    {
        out.TotVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvarh(), *out.TotVArh);
    }

    if(in.has_totwh()) // optional field in DDS
    {
        out.TotWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totwh(), *out.TotWh);
    }
}

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out)
{
    out.clear();

    out.actVal = in.actval(); // required INT64 primitive

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::ReadingMMTR& in, twinoaks::commonmodule::ReadingMMTR& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_dmdvah()) // optional field in DDS
    {
        out.DmdVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvah(), *out.DmdVAh);
    }

    if(in.has_dmdvarh()) // optional field in DDS
    {
        out.DmdVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvarh(), *out.DmdVArh);
    }

    if(in.has_dmdwh()) // optional field in DDS
    {
        out.DmdWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdwh(), *out.DmdWh);
    }

    if(in.has_supvah()) // optional field in DDS
    {
        out.SupVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvah(), *out.SupVAh);
    }

    if(in.has_supvarh()) // optional field in DDS
    {
        out.SupVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvarh(), *out.SupVArh);
    }

    if(in.has_supwh()) // optional field in DDS
    {
        out.SupWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supwh(), *out.SupWh);
    }

    if(in.has_totvah()) // optional field in DDS
    {
        out.TotVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvah(), *out.TotVAh);
    }

    if(in.has_totvarh()) // optional field in DDS
    {
        out.TotVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvarh(), *out.TotVArh);
    }

    if(in.has_totwh()) // optional field in DDS
    {
        out.TotWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totwh(), *out.TotWh);
    }
}

void convert_from_proto(const commonmodule::StatusMessageInfo& in, twinoaks::commonmodule::StatusMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerStatus& in, twinoaks::breakermodule::BreakerStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        out.statusAndEventXCBR = new twinoaks::commonmodule::StatusAndEventXCBR();
        convert_from_proto(in.statusandeventxcbr(), *out.statusAndEventXCBR);
    }
}

void convert_from_proto(const commonmodule::StatusValue& in, twinoaks::commonmodule::StatusValue& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk = allocate_from_wrapper_type(in.modblk());
    }
}

void convert_from_proto(const capbankmodule::CapBankControl& in, twinoaks::capbankmodule::CapBankControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_capbankcontrolfscc()) // optional field in DDS
    {
        out.capBankControlFSCC = new twinoaks::capbankmodule::CapBankControlFSCC();
        convert_from_proto(in.capbankcontrolfscc(), *out.capBankControlFSCC);
    }
}

void convert_from_proto(const capbankmodule::CapBankControlFSCC& in, twinoaks::capbankmodule::CapBankControlFSCC& out)
{
    out.clear();

    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_capbankcontrolschedulefsch()) // optional field in DDS
    {
        out.capBankControlScheduleFSCH = new twinoaks::capbankmodule::CapBankControlScheduleFSCH();
        convert_from_proto(in.capbankcontrolschedulefsch(), *out.capBankControlScheduleFSCH);
    }
}

void convert_from_proto(const commonmodule::ControlFSCC& in, twinoaks::commonmodule::ControlFSCC& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_controlschedulefsch()) // optional field in DDS
    {
        out.controlScheduleFSCH = new twinoaks::commonmodule::ControlScheduleFSCH();
        convert_from_proto(in.controlschedulefsch(), *out.controlScheduleFSCH);
    }

    if(in.has_islandcontrolschedulefsch()) // optional field in DDS
    {
        out.islandControlScheduleFSCH = new twinoaks::commonmodule::ControlScheduleFSCH();
        convert_from_proto(in.islandcontrolschedulefsch(), *out.islandControlScheduleFSCH);
    }
}

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, twinoaks::commonmodule::ControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valacsg(), out.ValACSG); // required field in DDS
}

void convert_from_proto(const commonmodule::ScheduleCSG& in, twinoaks::commonmodule::ScheduleCSG& out)
{
    out.clear();

    for(const auto& input : in.schpts())
    {
        twinoaks::commonmodule::SchedulePoint ouput;
        convert_from_proto(input, ouput);
        out.schPts.push_back(ouput);
    }
}

void convert_from_proto(const commonmodule::SchedulePoint& in, twinoaks::commonmodule::SchedulePoint& out)
{
    out.clear();

    for(const auto& input : in.scheduleparameter())
    {
        twinoaks::commonmodule::ENG_ScheduleParameter ouput;
        convert_from_proto(input, ouput);
        out.scheduleParameter.push_back(ouput);
    }

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const commonmodule::ENG_ScheduleParameter& in, twinoaks::commonmodule::ENG_ScheduleParameter& out)
{
    out.clear();

    out.scheduleParameterType = static_cast<twinoaks::commonmodule::ScheduleParameterKind>(in.scheduleparametertype());

    out.value = in.value(); // required DOUBLE primitive
}

void convert_from_proto(const commonmodule::ControlTimestamp& in, twinoaks::commonmodule::ControlTimestamp& out)
{
    out.clear();

    out.seconds = in.seconds(); // required UINT64 primitive

    out.nanoseconds = in.nanoseconds(); // required UINT32 primitive
}

void convert_from_proto(const capbankmodule::CapBankControlScheduleFSCH& in, twinoaks::capbankmodule::CapBankControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valcsg(), out.ValCSG); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankCSG& in, twinoaks::capbankmodule::CapBankCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::capbankmodule::CapBankPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const capbankmodule::CapBankPoint& in, twinoaks::capbankmodule::CapBankPoint& out)
{
    out.clear();

    if(in.has_control()) // optional field in DDS
    {
        out.control = new twinoaks::capbankmodule::CapBankControlYPSH();
        convert_from_proto(in.control(), *out.control);
    }

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankControlYPSH& in, twinoaks::capbankmodule::CapBankControlYPSH& out)
{
    out.clear();

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPC();
        convert_from_proto(in.pos(), *out.Pos);
    }
}

void convert_from_proto(const capbankmodule::CapBankSystem& in, twinoaks::capbankmodule::CapBankSystem& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControl& in, twinoaks::capbankmodule::CapBankDiscreteControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_capbankdiscretecontrolypsh()) // optional field in DDS
    {
        out.capBankDiscreteControlYPSH = new twinoaks::capbankmodule::CapBankDiscreteControlYPSH();
        convert_from_proto(in.capbankdiscretecontrolypsh(), *out.capBankDiscreteControlYPSH);
    }
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControlYPSH& in, twinoaks::capbankmodule::CapBankDiscreteControlYPSH& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPC();
        convert_from_proto(in.pos(), *out.Pos);
    }
}

void convert_from_proto(const capbankmodule::CapBankEvent& in, twinoaks::capbankmodule::CapBankEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_capbankeventandstatusypsh()) // optional field in DDS
    {
        out.CapBankEventAndStatusYPSH = new twinoaks::capbankmodule::CapBankEventAndStatusYPSH();
        convert_from_proto(in.capbankeventandstatusypsh(), *out.CapBankEventAndStatusYPSH);
    }
}

void convert_from_proto(const capbankmodule::CapBankEventAndStatusYPSH& in, twinoaks::capbankmodule::CapBankEventAndStatusYPSH& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPS();
        convert_from_proto(in.pos(), *out.Pos);
    }
}

void convert_from_proto(const capbankmodule::CapBankReading& in, twinoaks::capbankmodule::CapBankReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const capbankmodule::CapBankStatus& in, twinoaks::capbankmodule::CapBankStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_capbankeventandstatusypsh()) // optional field in DDS
    {
        out.capBankEventAndStatusYPSH = new twinoaks::capbankmodule::CapBankEventAndStatusYPSH();
        convert_from_proto(in.capbankeventandstatusypsh(), *out.capBankEventAndStatusYPSH);
    }
}

void convert_from_proto(const commonmodule::ESS& in, twinoaks::commonmodule::ESS& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const essmodule::ESSControl& in, twinoaks::essmodule::ESSControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_esscontrolfscc()) // optional field in DDS
    {
        out.essControlFSCC = new twinoaks::essmodule::EssControlFSCC();
        convert_from_proto(in.esscontrolfscc(), *out.essControlFSCC);
    }
}

void convert_from_proto(const essmodule::EssControlFSCC& in, twinoaks::essmodule::EssControlFSCC& out)
{
    out.clear();

    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_esscontrolschedulefsch()) // optional field in DDS
    {
        out.essControlScheduleFSCH = new twinoaks::essmodule::ESSControlScheduleFSCH();
        convert_from_proto(in.esscontrolschedulefsch(), *out.essControlScheduleFSCH);
    }
}

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, twinoaks::essmodule::ESSControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
}

void convert_from_proto(const essmodule::ESSCSG& in, twinoaks::essmodule::ESSCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::essmodule::ESSPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const essmodule::ESSPoint& in, twinoaks::essmodule::ESSPoint& out)
{
    out.clear();

    if(in.has_blackstartenabled()) // optional field in DDS
    {
        out.blackStartEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.blackstartenabled(), *out.blackStartEnabled);
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        out.frequencySetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.frequencysetpointenabled(), *out.frequencySetPointEnabled);
    }

    if(in.has_function()) // optional field in DDS
    {
        out.function = new twinoaks::essmodule::ESSFunction();
        convert_from_proto(in.function(), *out.function);
    }

    if(in.has_mode()) // optional field in DDS
    {
        out.mode = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.mode(), *out.mode);
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop = allocate_from_wrapper_type(in.pcthzdroop());
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop = allocate_from_wrapper_type(in.pctvdroop());
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    if(in.has_reset()) // optional field in DDS
    {
        out.reset = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reset(), *out.reset);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        out.syncBackToGrid = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.syncbacktogrid(), *out.syncBackToGrid);
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        out.transToIslndOnGridLossEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.transtoislndongridlossenabled(), *out.transToIslndOnGridLossEnabled);
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const essmodule::ESSFunction& in, twinoaks::essmodule::ESSFunction& out)
{
    out.clear();

    if(in.has_capacityfirming()) // optional field in DDS
    {
        out.capacityFirming = new twinoaks::essmodule::CapacityFirming();
        convert_from_proto(in.capacityfirming(), *out.capacityFirming);
    }

    if(in.has_frequencyregulation()) // optional field in DDS
    {
        out.frequencyRegulation = new twinoaks::essmodule::FrequencyRegulation();
        convert_from_proto(in.frequencyregulation(), *out.frequencyRegulation);
    }

    if(in.has_peakshaving()) // optional field in DDS
    {
        out.peakShaving = new twinoaks::essmodule::PeakShaving();
        convert_from_proto(in.peakshaving(), *out.peakShaving);
    }

    if(in.has_soclimit()) // optional field in DDS
    {
        out.socLimit = new twinoaks::essmodule::SocLimit();
        convert_from_proto(in.soclimit(), *out.socLimit);
    }

    if(in.has_socmanagement()) // optional field in DDS
    {
        out.socManagement = new twinoaks::essmodule::SOCManagement();
        convert_from_proto(in.socmanagement(), *out.socManagement);
    }

    if(in.has_voltagedroop()) // optional field in DDS
    {
        out.voltageDroop = new twinoaks::essmodule::VoltageDroop();
        convert_from_proto(in.voltagedroop(), *out.voltageDroop);
    }

    if(in.has_voltagepi()) // optional field in DDS
    {
        out.voltagePI = new twinoaks::essmodule::VoltagePI();
        convert_from_proto(in.voltagepi(), *out.voltagePI);
    }
}

void convert_from_proto(const essmodule::CapacityFirming& in, twinoaks::essmodule::CapacityFirming& out)
{
    out.clear();

    if(in.has_capacityfirmingctl())
    {
        out.capacityFirmingCtl = allocate_from_wrapper_type(in.capacityfirmingctl());
    }

    if(in.has_limitnegative_dp_dt())
    {
        out.limitNegative_dp_dt = allocate_from_wrapper_type(in.limitnegative_dp_dt());
    }

    if(in.has_limitpositive_dp_dt())
    {
        out.limitPositive_dp_dt = allocate_from_wrapper_type(in.limitpositive_dp_dt());
    }
}

void convert_from_proto(const essmodule::FrequencyRegulation& in, twinoaks::essmodule::FrequencyRegulation& out)
{
    out.clear();

    if(in.has_frequencydeadbandminus())
    {
        out.frequencyDeadBandMinus = allocate_from_wrapper_type(in.frequencydeadbandminus());
    }

    if(in.has_frequencydeadbandplus())
    {
        out.frequencyDeadBandPlus = allocate_from_wrapper_type(in.frequencydeadbandplus());
    }

    if(in.has_frequencyregulationctl())
    {
        out.frequencyRegulationCtl = allocate_from_wrapper_type(in.frequencyregulationctl());
    }

    if(in.has_frequencysetpoint())
    {
        out.frequencySetPoint = allocate_from_wrapper_type(in.frequencysetpoint());
    }

    if(in.has_gridfrequencystablebandminus())
    {
        out.gridFrequencyStableBandMinus = allocate_from_wrapper_type(in.gridfrequencystablebandminus());
    }

    if(in.has_gridfrequencystablebandplus())
    {
        out.gridFrequencyStableBandPlus = allocate_from_wrapper_type(in.gridfrequencystablebandplus());
    }

    if(in.has_overfrequencydroop())
    {
        out.overFrequencyDroop = allocate_from_wrapper_type(in.overfrequencydroop());
    }

    if(in.has_underfrequencydroop())
    {
        out.underFrequencyDroop = allocate_from_wrapper_type(in.underfrequencydroop());
    }
}

void convert_from_proto(const essmodule::PeakShaving& in, twinoaks::essmodule::PeakShaving& out)
{
    out.clear();

    if(in.has_baseshavinglimit())
    {
        out.baseShavingLimit = allocate_from_wrapper_type(in.baseshavinglimit());
    }

    if(in.has_peakshavingctl())
    {
        out.peakShavingCtl = allocate_from_wrapper_type(in.peakshavingctl());
    }

    if(in.has_peakshavinglimit())
    {
        out.peakShavingLimit = allocate_from_wrapper_type(in.peakshavinglimit());
    }

    if(in.has_socmanagementallowedhighlimit())
    {
        out.socManagementAllowedHighLimit = allocate_from_wrapper_type(in.socmanagementallowedhighlimit());
    }

    if(in.has_socmanagementallowedlowlimit())
    {
        out.socManagementAllowedLowLimit = allocate_from_wrapper_type(in.socmanagementallowedlowlimit());
    }
}

void convert_from_proto(const essmodule::SocLimit& in, twinoaks::essmodule::SocLimit& out)
{
    out.clear();

    if(in.has_sochighlimit())
    {
        out.socHighLimit = allocate_from_wrapper_type(in.sochighlimit());
    }

    if(in.has_sochighlimithysteresis())
    {
        out.socHighLimitHysteresis = allocate_from_wrapper_type(in.sochighlimithysteresis());
    }

    if(in.has_soclimitctl())
    {
        out.socLimitCtl = allocate_from_wrapper_type(in.soclimitctl());
    }

    if(in.has_soclowlimit())
    {
        out.socLowLimit = allocate_from_wrapper_type(in.soclowlimit());
    }

    if(in.has_soclowlimithysteresis())
    {
        out.socLowLimitHysteresis = allocate_from_wrapper_type(in.soclowlimithysteresis());
    }
}

void convert_from_proto(const essmodule::SOCManagement& in, twinoaks::essmodule::SOCManagement& out)
{
    out.clear();

    if(in.has_socdeadbandminus())
    {
        out.socDeadBandMinus = allocate_from_wrapper_type(in.socdeadbandminus());
    }

    if(in.has_socdeadbandplus())
    {
        out.socDeadBandPlus = allocate_from_wrapper_type(in.socdeadbandplus());
    }

    if(in.has_socmanagementctl())
    {
        out.socManagementCtl = allocate_from_wrapper_type(in.socmanagementctl());
    }

    if(in.has_socpowersetpoint())
    {
        out.socPowerSetPoint = allocate_from_wrapper_type(in.socpowersetpoint());
    }

    if(in.has_socsetpoint())
    {
        out.socSetPoint = allocate_from_wrapper_type(in.socsetpoint());
    }
}

void convert_from_proto(const essmodule::VoltageDroop& in, twinoaks::essmodule::VoltageDroop& out)
{
    out.clear();

    if(in.has_voltagedroopctl())
    {
        out.voltageDroopCtl = allocate_from_wrapper_type(in.voltagedroopctl());
    }

    if(in.has_voltageregulation()) // optional field in DDS
    {
        out.voltageRegulation = new twinoaks::essmodule::VoltageRegulation();
        convert_from_proto(in.voltageregulation(), *out.voltageRegulation);
    }
}

void convert_from_proto(const essmodule::VoltageRegulation& in, twinoaks::essmodule::VoltageRegulation& out)
{
    out.clear();

    if(in.has_overvoltagedroop())
    {
        out.overVoltageDroop = allocate_from_wrapper_type(in.overvoltagedroop());
    }

    if(in.has_undervoltagedroop())
    {
        out.underVoltageDroop = allocate_from_wrapper_type(in.undervoltagedroop());
    }

    if(in.has_voltagedeadbandminus())
    {
        out.voltageDeadBandMinus = allocate_from_wrapper_type(in.voltagedeadbandminus());
    }

    if(in.has_voltagedeadbandplus())
    {
        out.voltageDeadBandPlus = allocate_from_wrapper_type(in.voltagedeadbandplus());
    }

    if(in.has_voltagesetpoint())
    {
        out.voltageSetPoint = allocate_from_wrapper_type(in.voltagesetpoint());
    }
}

void convert_from_proto(const essmodule::VoltagePI& in, twinoaks::essmodule::VoltagePI& out)
{
    out.clear();

    if(in.has_voltagepictl())
    {
        out.voltagePICtl = allocate_from_wrapper_type(in.voltagepictl());
    }

    if(in.has_voltageregulation()) // optional field in DDS
    {
        out.voltageRegulation = new twinoaks::essmodule::VoltageRegulation();
        convert_from_proto(in.voltageregulation(), *out.voltageRegulation);
    }
}

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, twinoaks::commonmodule::ENG_GridConnectModeKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::commonmodule::GridConnectModeKind>(in.setval());

    if(in.has_setvalextension()) out.setValExtension = allocate_cstring(in.setvalextension().value()); // optional string
}

void convert_from_proto(const commonmodule::RampRate& in, twinoaks::commonmodule::RampRate& out)
{
    out.clear();

    if(in.has_negativereactivepowerkvarpermin())
    {
        out.negativeReactivePowerKVArPerMin = allocate_from_wrapper_type(in.negativereactivepowerkvarpermin());
    }

    if(in.has_negativerealpowerkwpermin())
    {
        out.negativeRealPowerKWPerMin = allocate_from_wrapper_type(in.negativerealpowerkwpermin());
    }

    if(in.has_positivereactivepowerkvarpermin())
    {
        out.positiveReactivePowerKVArPerMin = allocate_from_wrapper_type(in.positivereactivepowerkvarpermin());
    }

    if(in.has_positiverealpowerkwpermin())
    {
        out.positiveRealPowerKWPerMin = allocate_from_wrapper_type(in.positiverealpowerkwpermin());
    }
}

void convert_from_proto(const essmodule::ESSEvent& in, twinoaks::essmodule::ESSEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_esseventzbat()) // optional field in DDS
    {
        out.essEventZBAT = new twinoaks::essmodule::EssEventZBAT();
        convert_from_proto(in.esseventzbat(), *out.essEventZBAT);
    }

    if(in.has_esseventzgen()) // optional field in DDS
    {
        out.essEventZGEN = new twinoaks::essmodule::ESSEventZGEN();
        convert_from_proto(in.esseventzgen(), *out.essEventZGEN);
    }
}

void convert_from_proto(const essmodule::EssEventZBAT& in, twinoaks::essmodule::EssEventZBAT& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_bathi()) // optional field in DDS
    {
        out.BatHi = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.bathi(), *out.BatHi);
    }

    if(in.has_batlo()) // optional field in DDS
    {
        out.BatLo = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.batlo(), *out.BatLo);
    }

    if(in.has_batst()) // optional field in DDS
    {
        out.BatSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.batst(), *out.BatSt);
    }

    if(in.has_soc()) // optional field in DDS
    {
        out.Soc = new twinoaks::commonmodule::MV();
        convert_from_proto(in.soc(), *out.Soc);
    }

    if(in.has_stdby()) // optional field in DDS
    {
        out.Stdby = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.stdby(), *out.Stdby);
    }
}

void convert_from_proto(const essmodule::ESSEventZGEN& in, twinoaks::essmodule::ESSEventZGEN& out)
{
    out.clear();

    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, twinoaks::essmodule::ESSEventAndStatusZGEN& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_auxpwrst()) // optional field in DDS
    {
        out.AuxPwrSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.auxpwrst(), *out.AuxPwrSt);
    }

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        out.EmgStop = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.emgstop(), *out.EmgStop);
    }

    if(in.has_gnsynst()) // optional field in DDS
    {
        out.GnSynSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.gnsynst(), *out.GnSynSt);
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        out.PointStatus = new twinoaks::essmodule::ESSPointStatus();
        convert_from_proto(in.pointstatus(), *out.PointStatus);
    }
}

void convert_from_proto(const essmodule::ESSPointStatus& in, twinoaks::essmodule::ESSPointStatus& out)
{
    out.clear();

    if(in.has_blackstartenabled()) // optional field in DDS
    {
        out.blackStartEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.blackstartenabled(), *out.blackStartEnabled);
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        out.frequencySetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.frequencysetpointenabled(), *out.frequencySetPointEnabled);
    }

    if(in.has_function()) // optional field in DDS
    {
        out.function = new twinoaks::essmodule::ESSFunction();
        convert_from_proto(in.function(), *out.function);
    }

    if(in.has_mode()) // optional field in DDS
    {
        out.mode = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.mode(), *out.mode);
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop = allocate_from_wrapper_type(in.pcthzdroop());
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop = allocate_from_wrapper_type(in.pctvdroop());
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        out.syncBackToGrid = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.syncbacktogrid(), *out.syncBackToGrid);
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        out.transToIslndOnGridLossEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.transtoislndongridlossenabled(), *out.transToIslndOnGridLossEnabled);
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }
}

void convert_from_proto(const essmodule::ESSReading& in, twinoaks::essmodule::ESSReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const essmodule::ESSStatus& in, twinoaks::essmodule::ESSStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_essstatuszbat()) // optional field in DDS
    {
        out.essStatusZBAT = new twinoaks::essmodule::EssStatusZBAT();
        convert_from_proto(in.essstatuszbat(), *out.essStatusZBAT);
    }

    if(in.has_essstatuszgen()) // optional field in DDS
    {
        out.essStatusZGEN = new twinoaks::essmodule::ESSStatusZGEN();
        convert_from_proto(in.essstatuszgen(), *out.essStatusZGEN);
    }
}

void convert_from_proto(const essmodule::EssStatusZBAT& in, twinoaks::essmodule::EssStatusZBAT& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_batst()) // optional field in DDS
    {
        out.BatSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.batst(), *out.BatSt);
    }

    if(in.has_grimod()) // optional field in DDS
    {
        out.GriMod = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.grimod(), *out.GriMod);
    }

    if(in.has_soc()) // optional field in DDS
    {
        out.Soc = new twinoaks::commonmodule::MV();
        convert_from_proto(in.soc(), *out.Soc);
    }

    if(in.has_stdby()) // optional field in DDS
    {
        out.Stdby = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.stdby(), *out.Stdby);
    }
}

void convert_from_proto(const essmodule::ESSStatusZGEN& in, twinoaks::essmodule::ESSStatusZGEN& out)
{
    out.clear();

    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const generationmodule::GeneratingUnit& in, twinoaks::generationmodule::GeneratingUnit& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_maxoperatingp()) // optional field in DDS
    {
        out.maxOperatingP = new twinoaks::commonmodule::ActivePower();
        convert_from_proto(in.maxoperatingp(), *out.maxOperatingP);
    }
}

void convert_from_proto(const commonmodule::ActivePower& in, twinoaks::commonmodule::ActivePower& out)
{
    out.clear();

    out.multiplier = new twinoaks::commonmodule::UnitMultiplierKind(static_cast<twinoaks::commonmodule::UnitMultiplierKind>(in.multiplier().value())); // optional enum

    out.unit = new twinoaks::commonmodule::UnitSymbolKind(static_cast<twinoaks::commonmodule::UnitSymbolKind>(in.unit().value())); // optional enum

    if(in.has_value())
    {
        out.value = allocate_from_wrapper_type(in.value());
    }
}

void convert_from_proto(const generationmodule::GenerationControl& in, twinoaks::generationmodule::GenerationControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_generationcontrolfscc()) // optional field in DDS
    {
        out.generationControlFSCC = new twinoaks::generationmodule::GenerationControlFSCC();
        convert_from_proto(in.generationcontrolfscc(), *out.generationControlFSCC);
    }
}

void convert_from_proto(const generationmodule::GenerationControlFSCC& in, twinoaks::generationmodule::GenerationControlFSCC& out)
{
    out.clear();

    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_generationcontrolschedulefsch()) // optional field in DDS
    {
        out.GenerationControlScheduleFSCH = new twinoaks::generationmodule::GenerationControlScheduleFSCH();
        convert_from_proto(in.generationcontrolschedulefsch(), *out.GenerationControlScheduleFSCH);
    }
}

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, twinoaks::generationmodule::GenerationControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationCSG& in, twinoaks::generationmodule::GenerationCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::generationmodule::GenerationPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const generationmodule::GenerationPoint& in, twinoaks::generationmodule::GenerationPoint& out)
{
    out.clear();

    if(in.has_blackstartenabled()) // optional field in DDS
    {
        out.blackStartEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.blackstartenabled(), *out.blackStartEnabled);
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        out.frequencySetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.frequencysetpointenabled(), *out.frequencySetPointEnabled);
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop = allocate_from_wrapper_type(in.pcthzdroop());
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop = allocate_from_wrapper_type(in.pctvdroop());
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    if(in.has_reset()) // optional field in DDS
    {
        out.reset = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reset(), *out.reset);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        out.syncBackToGrid = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.syncbacktogrid(), *out.syncBackToGrid);
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        out.transToIslndOnGridLossEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.transtoislndongridlossenabled(), *out.transToIslndOnGridLossEnabled);
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationDiscreteControl& in, twinoaks::generationmodule::GenerationDiscreteControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_reactivepowercontrol()) // optional field in DDS
    {
        out.ReactivePowerControl = new twinoaks::generationmodule::ReactivePowerControl();
        convert_from_proto(in.reactivepowercontrol(), *out.ReactivePowerControl);
    }

    if(in.has_realpowercontrol()) // optional field in DDS
    {
        out.RealPowerControl = new twinoaks::generationmodule::RealPowerControl();
        convert_from_proto(in.realpowercontrol(), *out.RealPowerControl);
    }
}

void convert_from_proto(const generationmodule::ReactivePowerControl& in, twinoaks::generationmodule::ReactivePowerControl& out)
{
    out.clear();

    if(in.has_droopsetpoint()) // optional field in DDS
    {
        out.droopSetpoint = new twinoaks::generationmodule::DroopParameter();
        convert_from_proto(in.droopsetpoint(), *out.droopSetpoint);
    }

    if(in.has_powerfactorsetpoint())
    {
        out.powerFactorSetpoint = allocate_from_wrapper_type(in.powerfactorsetpoint());
    }

    out.reactivePowerControlMode = new twinoaks::generationmodule::ReactivePowerControlKind(static_cast<twinoaks::generationmodule::ReactivePowerControlKind>(in.reactivepowercontrolmode().value())); // optional enum

    if(in.has_reactivepowersetpoint())
    {
        out.reactivePowerSetpoint = allocate_from_wrapper_type(in.reactivepowersetpoint());
    }

    if(in.has_voltagesetpoint())
    {
        out.voltageSetpoint = allocate_from_wrapper_type(in.voltagesetpoint());
    }
}

void convert_from_proto(const generationmodule::DroopParameter& in, twinoaks::generationmodule::DroopParameter& out)
{
    out.clear();

    if(in.has_slope())
    {
        out.slope = allocate_from_wrapper_type(in.slope());
    }

    if(in.has_unloadedoffset())
    {
        out.unloadedOffset = allocate_from_wrapper_type(in.unloadedoffset());
    }
}

void convert_from_proto(const generationmodule::RealPowerControl& in, twinoaks::generationmodule::RealPowerControl& out)
{
    out.clear();

    if(in.has_droopsetpoint()) // optional field in DDS
    {
        out.droopSetpoint = new twinoaks::generationmodule::DroopParameter();
        convert_from_proto(in.droopsetpoint(), *out.droopSetpoint);
    }

    if(in.has_isochronoussetpoint())
    {
        out.isochronousSetpoint = allocate_from_wrapper_type(in.isochronoussetpoint());
    }

    out.realPowerControlMode = new twinoaks::generationmodule::RealPowerControlKind(static_cast<twinoaks::generationmodule::RealPowerControlKind>(in.realpowercontrolmode().value())); // optional enum

    if(in.has_realpowersetpoint())
    {
        out.realPowerSetpoint = allocate_from_wrapper_type(in.realpowersetpoint());
    }
}

void convert_from_proto(const generationmodule::GenerationEvent& in, twinoaks::generationmodule::GenerationEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_generationeventzgen()) // optional field in DDS
    {
        out.generationEventZGEN = new twinoaks::generationmodule::GenerationEventZGEN();
        convert_from_proto(in.generationeventzgen(), *out.generationEventZGEN);
    }
}

void convert_from_proto(const generationmodule::GenerationEventZGEN& in, twinoaks::generationmodule::GenerationEventZGEN& out)
{
    out.clear();

    if(in.has_generationeventandstatuszgen()) convert_from_proto(in.generationeventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const generationmodule::GenerationEventAndStatusZGEN& in, twinoaks::generationmodule::GenerationEventAndStatusZGEN& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_auxpwrst()) // optional field in DDS
    {
        out.AuxPwrSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.auxpwrst(), *out.AuxPwrSt);
    }

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        out.EmgStop = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.emgstop(), *out.EmgStop);
    }

    if(in.has_gnsynst()) // optional field in DDS
    {
        out.GnSynSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.gnsynst(), *out.GnSynSt);
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        out.PointStatus = new twinoaks::generationmodule::GenerationPointStatus();
        convert_from_proto(in.pointstatus(), *out.PointStatus);
    }
}

void convert_from_proto(const generationmodule::GenerationPointStatus& in, twinoaks::generationmodule::GenerationPointStatus& out)
{
    out.clear();

    if(in.has_blackstartenabled()) // optional field in DDS
    {
        out.blackStartEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.blackstartenabled(), *out.blackStartEnabled);
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        out.frequencySetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.frequencysetpointenabled(), *out.frequencySetPointEnabled);
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop = allocate_from_wrapper_type(in.pcthzdroop());
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop = allocate_from_wrapper_type(in.pctvdroop());
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        out.syncBackToGrid = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.syncbacktogrid(), *out.syncBackToGrid);
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        out.transToIslndOnGridLossEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.transtoislndongridlossenabled(), *out.transToIslndOnGridLossEnabled);
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }
}

void convert_from_proto(const generationmodule::GenerationReading& in, twinoaks::generationmodule::GenerationReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const generationmodule::GenerationStatus& in, twinoaks::generationmodule::GenerationStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_generationstatuszgen()) // optional field in DDS
    {
        out.generationStatusZGEN = new twinoaks::generationmodule::GenerationStatusZGEN();
        convert_from_proto(in.generationstatuszgen(), *out.generationStatusZGEN);
    }
}

void convert_from_proto(const generationmodule::GenerationStatusZGEN& in, twinoaks::generationmodule::GenerationStatusZGEN& out)
{
    out.clear();

    if(in.has_generationeventandstatuszgen()) convert_from_proto(in.generationeventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const commonmodule::EnergyConsumer& in, twinoaks::commonmodule::EnergyConsumer& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_operatinglimit()) out.operatingLimit = allocate_cstring(in.operatinglimit().value()); // optional string
}

void convert_from_proto(const loadmodule::LoadControl& in, twinoaks::loadmodule::LoadControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_loadcontrolfscc()) // optional field in DDS
    {
        out.loadControlFSCC = new twinoaks::loadmodule::LoadControlFSCC();
        convert_from_proto(in.loadcontrolfscc(), *out.loadControlFSCC);
    }
}

void convert_from_proto(const loadmodule::LoadControlFSCC& in, twinoaks::loadmodule::LoadControlFSCC& out)
{
    out.clear();

    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_loadcontrolschedulefsch()) // optional field in DDS
    {
        out.loadControlScheduleFSCH = new twinoaks::loadmodule::LoadControlScheduleFSCH();
        convert_from_proto(in.loadcontrolschedulefsch(), *out.loadControlScheduleFSCH);
    }
}

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, twinoaks::loadmodule::LoadControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadCSG& in, twinoaks::loadmodule::LoadCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::loadmodule::LoadPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const loadmodule::LoadPoint& in, twinoaks::loadmodule::LoadPoint& out)
{
    out.clear();

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    if(in.has_reset()) // optional field in DDS
    {
        out.reset = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reset(), *out.reset);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadEvent& in, twinoaks::loadmodule::LoadEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_loadeventzgld()) // optional field in DDS
    {
        out.loadEventZGLD = new twinoaks::loadmodule::LoadEventZGLD();
        convert_from_proto(in.loadeventzgld(), *out.loadEventZGLD);
    }
}

void convert_from_proto(const loadmodule::LoadEventZGLD& in, twinoaks::loadmodule::LoadEventZGLD& out)
{
    out.clear();

    if(in.has_loadeventandstatuszgld()) convert_from_proto(in.loadeventandstatuszgld(), out); // inherited type
}

void convert_from_proto(const loadmodule::LoadEventAndStatusZGLD& in, twinoaks::loadmodule::LoadEventAndStatusZGLD& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        out.EmgStop = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.emgstop(), *out.EmgStop);
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        out.PointStatus = new twinoaks::loadmodule::LoadPointStatus();
        convert_from_proto(in.pointstatus(), *out.PointStatus);
    }
}

void convert_from_proto(const loadmodule::LoadPointStatus& in, twinoaks::loadmodule::LoadPointStatus& out)
{
    out.clear();

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    if(in.has_reset()) // optional field in DDS
    {
        out.reset = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.reset(), *out.reset);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum
}

void convert_from_proto(const loadmodule::LoadReading& in, twinoaks::loadmodule::LoadReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const loadmodule::LoadStatus& in, twinoaks::loadmodule::LoadStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_isuncontrollable())
    {
        out.isUncontrollable = allocate_from_wrapper_type(in.isuncontrollable());
    }

    if(in.has_loadstatuszgld()) // optional field in DDS
    {
        out.loadStatusZGLD = new twinoaks::loadmodule::LoadStatusZGLD();
        convert_from_proto(in.loadstatuszgld(), *out.loadStatusZGLD);
    }
}

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, twinoaks::loadmodule::LoadStatusZGLD& out)
{
    out.clear();

    if(in.has_loadeventandstatuszgld()) convert_from_proto(in.loadeventandstatuszgld(), out); // inherited type
}

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const metermodule::MeterReading& in, twinoaks::metermodule::MeterReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const reclosermodule::Recloser& in, twinoaks::reclosermodule::Recloser& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_normalopen())
    {
        out.normalOpen = allocate_from_wrapper_type(in.normalopen());
    }
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControl& in, twinoaks::reclosermodule::RecloserDiscreteControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_recloserdiscretecontrolxcbr()) // optional field in DDS
    {
        out.recloserDiscreteControlXCBR = new twinoaks::reclosermodule::RecloserDiscreteControlXCBR();
        convert_from_proto(in.recloserdiscretecontrolxcbr(), *out.recloserDiscreteControlXCBR);
    }
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControlXCBR& in, twinoaks::reclosermodule::RecloserDiscreteControlXCBR& out)
{
    out.clear();

    if(in.has_discretecontrolxcbr()) convert_from_proto(in.discretecontrolxcbr(), out); // inherited type
}

void convert_from_proto(const reclosermodule::RecloserEvent& in, twinoaks::reclosermodule::RecloserEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        out.statusAndEventXCBR = new twinoaks::commonmodule::StatusAndEventXCBR();
        convert_from_proto(in.statusandeventxcbr(), *out.statusAndEventXCBR);
    }
}

void convert_from_proto(const reclosermodule::RecloserReading& in, twinoaks::reclosermodule::RecloserReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_diffreadingmmxu()) // optional field in DDS
    {
        out.diffReadingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.diffreadingmmxu(), *out.diffReadingMMXU);
    }

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const reclosermodule::RecloserStatus& in, twinoaks::reclosermodule::RecloserStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        out.statusAndEventXCBR = new twinoaks::commonmodule::StatusAndEventXCBR();
        convert_from_proto(in.statusandeventxcbr(), *out.statusAndEventXCBR);
    }
}

void convert_from_proto(const regulatormodule::RegulatorDiscreteControl& in, twinoaks::regulatormodule::RegulatorDiscreteControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_regulatorcontrolatcc()) // optional field in DDS
    {
        out.regulatorControlATCC = new twinoaks::regulatormodule::RegulatorControlATCC();
        convert_from_proto(in.regulatorcontrolatcc(), *out.regulatorControlATCC);
    }
}

void convert_from_proto(const regulatormodule::RegulatorControlATCC& in, twinoaks::regulatormodule::RegulatorControlATCC& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_bndctr()) // optional field in DDS
    {
        out.BndCtr = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.bndctr(), *out.BndCtr);
    }

    if(in.has_bndwid()) // optional field in DDS
    {
        out.BndWid = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.bndwid(), *out.BndWid);
    }

    if(in.has_ctldltmms()) // optional field in DDS
    {
        out.CtlDlTmms = new twinoaks::commonmodule::ControlING();
        convert_from_proto(in.ctldltmms(), *out.CtlDlTmms);
    }

    if(in.has_ldcr()) // optional field in DDS
    {
        out.LDCR = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.ldcr(), *out.LDCR);
    }

    if(in.has_ldcx()) // optional field in DDS
    {
        out.LDCX = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.ldcx(), *out.LDCX);
    }

    if(in.has_parop()) // optional field in DDS
    {
        out.ParOp = new twinoaks::commonmodule::ControlSPC();
        convert_from_proto(in.parop(), *out.ParOp);
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_tappos()) // optional field in DDS
    {
        out.TapPos = new twinoaks::commonmodule::PhaseISC();
        convert_from_proto(in.tappos(), *out.TapPos);
    }

    if(in.has_volspt()) // optional field in DDS
    {
        out.VolSpt = new twinoaks::commonmodule::PhaseAPC();
        convert_from_proto(in.volspt(), *out.VolSpt);
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }
}

void convert_from_proto(const commonmodule::ASG& in, twinoaks::commonmodule::ASG& out)
{
    out.clear();

    out.setMag = in.setmag(); // required DOUBLE primitive

    if(in.has_units()) // optional field in DDS
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
    }
}

void convert_from_proto(const commonmodule::ControlING& in, twinoaks::commonmodule::ControlING& out)
{
    out.clear();

    out.setVal = in.setval(); // required INT32 primitive

    if(in.has_units()) // optional field in DDS
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
    }
}

void convert_from_proto(const commonmodule::PhaseISC& in, twinoaks::commonmodule::PhaseISC& out)
{
    out.clear();

    if(in.has_phs3()) // optional field in DDS
    {
        out.phs3 = new twinoaks::commonmodule::ControlISC();
        convert_from_proto(in.phs3(), *out.phs3);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::ControlISC();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::ControlISC();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::ControlISC();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::ControlISC& in, twinoaks::commonmodule::ControlISC& out)
{
    out.clear();

    out.ctlVal = in.ctlval(); // required INT32 primitive
}

void convert_from_proto(const commonmodule::PhaseAPC& in, twinoaks::commonmodule::PhaseAPC& out)
{
    out.clear();

    if(in.has_phs3()) // optional field in DDS
    {
        out.phs3 = new twinoaks::commonmodule::ControlAPC();
        convert_from_proto(in.phs3(), *out.phs3);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::ControlAPC();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::ControlAPC();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::ControlAPC();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::ControlAPC& in, twinoaks::commonmodule::ControlAPC& out)
{
    out.clear();

    out.ctlVal = in.ctlval(); // required DOUBLE primitive
}

void convert_from_proto(const regulatormodule::RegulatorSystem& in, twinoaks::regulatormodule::RegulatorSystem& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const regulatormodule::RegulatorControl& in, twinoaks::regulatormodule::RegulatorControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_regulatorcontrolfscc()) // optional field in DDS
    {
        out.regulatorControlFSCC = new twinoaks::regulatormodule::RegulatorControlFSCC();
        convert_from_proto(in.regulatorcontrolfscc(), *out.regulatorControlFSCC);
    }
}

void convert_from_proto(const regulatormodule::RegulatorControlFSCC& in, twinoaks::regulatormodule::RegulatorControlFSCC& out)
{
    out.clear();

    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_regulatorcontrolschedulefsch()) // optional field in DDS
    {
        out.regulatorControlScheduleFSCH = new twinoaks::regulatormodule::RegulatorControlScheduleFSCH();
        convert_from_proto(in.regulatorcontrolschedulefsch(), *out.regulatorControlScheduleFSCH);
    }
}

void convert_from_proto(const regulatormodule::RegulatorControlScheduleFSCH& in, twinoaks::regulatormodule::RegulatorControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorCSG& in, twinoaks::regulatormodule::RegulatorCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::regulatormodule::RegulatorPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const regulatormodule::RegulatorPoint& in, twinoaks::regulatormodule::RegulatorPoint& out)
{
    out.clear();

    if(in.has_control()) // optional field in DDS
    {
        out.control = new twinoaks::regulatormodule::RegulatorControlATCC();
        convert_from_proto(in.control(), *out.control);
    }

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorEvent& in, twinoaks::regulatormodule::RegulatorEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_regulatoreventandstatusancr()) // optional field in DDS
    {
        out.regulatorEventAndStatusANCR = new twinoaks::regulatormodule::RegulatorEventAndStatusANCR();
        convert_from_proto(in.regulatoreventandstatusancr(), *out.regulatorEventAndStatusANCR);
    }
}

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusANCR& in, twinoaks::regulatormodule::RegulatorEventAndStatusANCR& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        out.PointStatus = new twinoaks::regulatormodule::RegulatorEventAndStatusATCC();
        convert_from_proto(in.pointstatus(), *out.PointStatus);
    }
}

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusATCC& in, twinoaks::regulatormodule::RegulatorEventAndStatusATCC& out)
{
    out.clear();

    if(in.has_bndctr()) // optional field in DDS
    {
        out.BndCtr = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.bndctr(), *out.BndCtr);
    }

    if(in.has_bndwid()) // optional field in DDS
    {
        out.BndWid = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.bndwid(), *out.BndWid);
    }

    if(in.has_ldcr()) // optional field in DDS
    {
        out.LDCR = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.ldcr(), *out.LDCR);
    }

    if(in.has_ldcx()) // optional field in DDS
    {
        out.LDCX = new twinoaks::commonmodule::ASG();
        convert_from_proto(in.ldcx(), *out.LDCX);
    }

    if(in.has_parop()) // optional field in DDS
    {
        out.ParOp = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.parop(), *out.ParOp);
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_stdltmms()) // optional field in DDS
    {
        out.StDlTmms = new twinoaks::commonmodule::StatusINC();
        convert_from_proto(in.stdltmms(), *out.StDlTmms);
    }

    if(in.has_tapoperr()) // optional field in DDS
    {
        out.TapOpErr = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.tapoperr(), *out.TapOpErr);
    }

    if(in.has_tappos()) // optional field in DDS
    {
        out.TapPos = new twinoaks::commonmodule::PhaseINS();
        convert_from_proto(in.tappos(), *out.TapPos);
    }

    if(in.has_volspt()) // optional field in DDS
    {
        out.VolSpt = new twinoaks::commonmodule::PhaseAPC();
        convert_from_proto(in.volspt(), *out.VolSpt);
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::StatusSPC();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }
}

void convert_from_proto(const commonmodule::StatusINC& in, twinoaks::commonmodule::StatusINC& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    out.stVal = in.stval(); // required INT32 primitive

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const commonmodule::PhaseINS& in, twinoaks::commonmodule::PhaseINS& out)
{
    out.clear();

    if(in.has_phs3()) // optional field in DDS
    {
        out.phs3 = new twinoaks::commonmodule::StatusINS();
        convert_from_proto(in.phs3(), *out.phs3);
    }

    if(in.has_phsa()) // optional field in DDS
    {
        out.phsA = new twinoaks::commonmodule::StatusINS();
        convert_from_proto(in.phsa(), *out.phsA);
    }

    if(in.has_phsb()) // optional field in DDS
    {
        out.phsB = new twinoaks::commonmodule::StatusINS();
        convert_from_proto(in.phsb(), *out.phsB);
    }

    if(in.has_phsc()) // optional field in DDS
    {
        out.phsC = new twinoaks::commonmodule::StatusINS();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::StatusSPC& in, twinoaks::commonmodule::StatusSPC& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    static_assert(std::is_same<decltype(out.stVal), unsigned char>::value, "unexpected type");
    out.stVal = static_cast<unsigned char>(in.stval()); // required bool

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const regulatormodule::RegulatorReading& in, twinoaks::regulatormodule::RegulatorReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const regulatormodule::RegulatorStatus& in, twinoaks::regulatormodule::RegulatorStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_regulatoreventandstatusancr()) // optional field in DDS
    {
        out.regulatorEventAndStatusANCR = new twinoaks::regulatormodule::RegulatorEventAndStatusANCR();
        convert_from_proto(in.regulatoreventandstatusancr(), *out.regulatorEventAndStatusANCR);
    }
}

void convert_from_proto(const resourcemodule::ResourceDiscreteControl& in, twinoaks::resourcemodule::ResourceDiscreteControl& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    for(const auto& input : in.analogcontrolggio())
    {
        twinoaks::resourcemodule::AnalogControlGGIO ouput;
        convert_from_proto(input, ouput);
        out.analogControlGGIO.push_back(ouput);
    }

    for(const auto& input : in.booleancontrolggio())
    {
        twinoaks::resourcemodule::BooleanControlGGIO ouput;
        convert_from_proto(input, ouput);
        out.booleanControlGGIO.push_back(ouput);
    }

    for(const auto& input : in.integercontrolggio())
    {
        twinoaks::resourcemodule::IntegerControlGGIO ouput;
        convert_from_proto(input, ouput);
        out.integerControlGGIO.push_back(ouput);
    }

    for(const auto& input : in.stringcontrolggio())
    {
        twinoaks::resourcemodule::StringControlGGIO ouput;
        convert_from_proto(input, ouput);
        out.stringControlGGIO.push_back(ouput);
    }
}

void convert_from_proto(const resourcemodule::AnalogControlGGIO& in, twinoaks::resourcemodule::AnalogControlGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.anout(), out.AnOut); // required field in DDS

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum
}

void convert_from_proto(const resourcemodule::BooleanControlGGIO& in, twinoaks::resourcemodule::BooleanControlGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum

    convert_from_proto(in.spcso(), out.SPCSO); // required field in DDS
}

void convert_from_proto(const resourcemodule::IntegerControlGGIO& in, twinoaks::resourcemodule::IntegerControlGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.iscso(), out.ISCSO); // required field in DDS

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum
}

void convert_from_proto(const resourcemodule::StringControlGGIO& in, twinoaks::resourcemodule::StringControlGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum

    convert_from_proto(in.strout(), out.StrOut); // required field in DDS
}

void convert_from_proto(const commonmodule::VSC& in, twinoaks::commonmodule::VSC& out)
{
    out.clear();

    out.ctlVal = allocate_cstring(in.ctlval()); // required string
}

void convert_from_proto(const resourcemodule::ResourceEvent& in, twinoaks::resourcemodule::ResourceEvent& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    for(const auto& input : in.analogeventandstatusggio())
    {
        twinoaks::commonmodule::AnalogEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.analogEventAndStatusGGIO.push_back(ouput);
    }

    for(const auto& input : in.booleaneventandstatusggio())
    {
        twinoaks::commonmodule::BooleanEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.booleanEventAndStatusGGIO.push_back(ouput);
    }

    for(const auto& input : in.integereventandstatusggio())
    {
        twinoaks::commonmodule::IntegerEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.integerEventAndStatusGGIO.push_back(ouput);
    }

    for(const auto& input : in.stringeventandstatusggio())
    {
        twinoaks::commonmodule::StringEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.stringEventAndStatusGGIO.push_back(ouput);
    }
}

void convert_from_proto(const commonmodule::AnalogEventAndStatusGGIO& in, twinoaks::commonmodule::AnalogEventAndStatusGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.anin(), out.AnIn); // required field in DDS

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum
}

void convert_from_proto(const commonmodule::BooleanEventAndStatusGGIO& in, twinoaks::commonmodule::BooleanEventAndStatusGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.ind(), out.Ind); // required field in DDS

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum
}

void convert_from_proto(const commonmodule::IntegerEventAndStatusGGIO& in, twinoaks::commonmodule::IntegerEventAndStatusGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.intin(), out.IntIn); // required field in DDS

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum
}

void convert_from_proto(const commonmodule::StringEventAndStatusGGIO& in, twinoaks::commonmodule::StringEventAndStatusGGIO& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    out.Phase = new twinoaks::commonmodule::PhaseCodeKind(static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phase().value())); // optional enum

    convert_from_proto(in.strin(), out.StrIn); // required field in DDS
}

void convert_from_proto(const commonmodule::VSS& in, twinoaks::commonmodule::VSS& out)
{
    out.clear();

    if(in.has_q()) // optional field in DDS
    {
        out.q = new twinoaks::commonmodule::Quality();
        convert_from_proto(in.q(), *out.q);
    }

    out.stVal = allocate_cstring(in.stval()); // required string

    if(in.has_t()) // optional field in DDS
    {
        out.t = new twinoaks::commonmodule::Timestamp();
        convert_from_proto(in.t(), *out.t);
    }
}

void convert_from_proto(const resourcemodule::ResourceReading& in, twinoaks::resourcemodule::ResourceReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const resourcemodule::ResourceStatus& in, twinoaks::resourcemodule::ResourceStatus& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    for(const auto& input : in.analogeventandstatusggio())
    {
        twinoaks::commonmodule::AnalogEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.analogEventAndStatusGGIO.push_back(ouput);
    }

    for(const auto& input : in.booleaneventandstatusggio())
    {
        twinoaks::commonmodule::BooleanEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.booleanEventAndStatusGGIO.push_back(ouput);
    }

    for(const auto& input : in.integereventandstatusggio())
    {
        twinoaks::commonmodule::IntegerEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.integerEventAndStatusGGIO.push_back(ouput);
    }

    for(const auto& input : in.stringeventandstatusggio())
    {
        twinoaks::commonmodule::StringEventAndStatusGGIO ouput;
        convert_from_proto(input, ouput);
        out.stringEventAndStatusGGIO.push_back(ouput);
    }
}

void convert_from_proto(const solarmodule::SolarControl& in, twinoaks::solarmodule::SolarControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_solarcontrolfscc()) // optional field in DDS
    {
        out.solarControlFSCC = new twinoaks::solarmodule::SolarControlFSCC();
        convert_from_proto(in.solarcontrolfscc(), *out.solarControlFSCC);
    }
}

void convert_from_proto(const solarmodule::SolarControlFSCC& in, twinoaks::solarmodule::SolarControlFSCC& out)
{
    out.clear();

    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_solarcontrolschedulefsch()) // optional field in DDS
    {
        out.SolarControlScheduleFSCH = new twinoaks::solarmodule::SolarControlScheduleFSCH();
        convert_from_proto(in.solarcontrolschedulefsch(), *out.SolarControlScheduleFSCH);
    }
}

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, twinoaks::solarmodule::SolarControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarCSG& in, twinoaks::solarmodule::SolarCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::solarmodule::SolarPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const solarmodule::SolarPoint& in, twinoaks::solarmodule::SolarPoint& out)
{
    out.clear();

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        out.frequencySetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.frequencysetpointenabled(), *out.frequencySetPointEnabled);
    }

    if(in.has_mode()) // optional field in DDS
    {
        out.mode = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.mode(), *out.mode);
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop = allocate_from_wrapper_type(in.pcthzdroop());
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop = allocate_from_wrapper_type(in.pctvdroop());
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    if(in.has_reset()) // optional field in DDS
    {
        out.reset = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.reset(), *out.reset);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }

    convert_from_proto(in.starttime(), out.startTime); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarInverter& in, twinoaks::solarmodule::SolarInverter& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const solarmodule::SolarEvent& in, twinoaks::solarmodule::SolarEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_solareventzgen()) // optional field in DDS
    {
        out.solarEventZGEN = new twinoaks::solarmodule::SolarEventZGEN();
        convert_from_proto(in.solareventzgen(), *out.solarEventZGEN);
    }
}

void convert_from_proto(const solarmodule::SolarEventZGEN& in, twinoaks::solarmodule::SolarEventZGEN& out)
{
    out.clear();

    if(in.has_solareventandstatuszgen()) convert_from_proto(in.solareventandstatuszgen(), out); // inherited type

    if(in.has_grimod()) // optional field in DDS
    {
        out.GriMod = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.grimod(), *out.GriMod);
    }
}

void convert_from_proto(const solarmodule::SolarEventAndStatusZGEN& in, twinoaks::solarmodule::SolarEventAndStatusZGEN& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_auxpwrst()) // optional field in DDS
    {
        out.AuxPwrSt = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.auxpwrst(), *out.AuxPwrSt);
    }

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_emgstop()) // optional field in DDS
    {
        out.EmgStop = new twinoaks::commonmodule::StatusSPS();
        convert_from_proto(in.emgstop(), *out.EmgStop);
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        out.PointStatus = new twinoaks::solarmodule::SolarPointStatus();
        convert_from_proto(in.pointstatus(), *out.PointStatus);
    }
}

void convert_from_proto(const solarmodule::SolarPointStatus& in, twinoaks::solarmodule::SolarPointStatus& out)
{
    out.clear();

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        out.frequencySetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.frequencysetpointenabled(), *out.frequencySetPointEnabled);
    }

    if(in.has_mode()) // optional field in DDS
    {
        out.mode = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.mode(), *out.mode);
    }

    if(in.has_pcthzdroop())
    {
        out.pctHzDroop = allocate_from_wrapper_type(in.pcthzdroop());
    }

    if(in.has_pctvdroop())
    {
        out.pctVDroop = allocate_from_wrapper_type(in.pctvdroop());
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        out.rampRates = new twinoaks::commonmodule::RampRate();
        convert_from_proto(in.ramprates(), *out.rampRates);
    }

    if(in.has_reactivepwrsetpointenabled()) // optional field in DDS
    {
        out.reactivePwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.reactivepwrsetpointenabled(), *out.reactivePwrSetPointEnabled);
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        out.realPwrSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.realpwrsetpointenabled(), *out.realPwrSetPointEnabled);
    }

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::StatusDPS();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }
}

void convert_from_proto(const solarmodule::SolarReading& in, twinoaks::solarmodule::SolarReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const solarmodule::SolarStatus& in, twinoaks::solarmodule::SolarStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_solarstatuszgen()) // optional field in DDS
    {
        out.solarStatusZGEN = new twinoaks::solarmodule::SolarStatusZGEN();
        convert_from_proto(in.solarstatuszgen(), *out.solarStatusZGEN);
    }
}

void convert_from_proto(const solarmodule::SolarStatusZGEN& in, twinoaks::solarmodule::SolarStatusZGEN& out)
{
    out.clear();

    if(in.has_solareventandstatuszgen()) convert_from_proto(in.solareventandstatuszgen(), out); // inherited type

    if(in.has_grimod()) // optional field in DDS
    {
        out.GriMod = new twinoaks::commonmodule::ENG_GridConnectModeKind();
        convert_from_proto(in.grimod(), *out.GriMod);
    }
}

void convert_from_proto(const switchmodule::ProtectedSwitch& in, twinoaks::switchmodule::ProtectedSwitch& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const switchmodule::SwitchDiscreteControl& in, twinoaks::switchmodule::SwitchDiscreteControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    if(in.has_switchdiscretecontrolxswi()) // optional field in DDS
    {
        out.switchDiscreteControlXSWI = new twinoaks::switchmodule::SwitchDiscreteControlXSWI();
        convert_from_proto(in.switchdiscretecontrolxswi(), *out.switchDiscreteControlXSWI);
    }
}

void convert_from_proto(const switchmodule::SwitchDiscreteControlXSWI& in, twinoaks::switchmodule::SwitchDiscreteControlXSWI& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPC();
        convert_from_proto(in.pos(), *out.Pos);
    }

    if(in.has_resetprotectionpickup()) // optional field in DDS
    {
        out.ResetProtectionPickup = new twinoaks::commonmodule::ControlSPC();
        convert_from_proto(in.resetprotectionpickup(), *out.ResetProtectionPickup);
    }
}

void convert_from_proto(const switchmodule::SwitchEvent& in, twinoaks::switchmodule::SwitchEvent& out)
{
    out.clear();

    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_switcheventxswi()) // optional field in DDS
    {
        out.switchEventXSWI = new twinoaks::switchmodule::SwitchEventXSWI();
        convert_from_proto(in.switcheventxswi(), *out.switchEventXSWI);
    }
}

void convert_from_proto(const switchmodule::SwitchEventXSWI& in, twinoaks::switchmodule::SwitchEventXSWI& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPS();
        convert_from_proto(in.pos(), *out.Pos);
    }
}

void convert_from_proto(const switchmodule::SwitchReading& in, twinoaks::switchmodule::SwitchReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type

    if(in.has_diffreadingmmxu()) // optional field in DDS
    {
        out.diffReadingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.diffreadingmmxu(), *out.diffReadingMMXU);
    }

    if(in.has_phasemmtn()) // optional field in DDS
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }

    if(in.has_readingmmtr()) // optional field in DDS
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }

    if(in.has_readingmmxu()) // optional field in DDS
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const switchmodule::SwitchStatus& in, twinoaks::switchmodule::SwitchStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_switchstatusxswi()) // optional field in DDS
    {
        out.switchStatusXSWI = new twinoaks::switchmodule::SwitchStatusXSWI();
        convert_from_proto(in.switchstatusxswi(), *out.switchStatusXSWI);
    }
}

void convert_from_proto(const switchmodule::SwitchStatusXSWI& in, twinoaks::switchmodule::SwitchStatusXSWI& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    if(in.has_pos()) // optional field in DDS
    {
        out.Pos = new twinoaks::commonmodule::PhaseDPS();
        convert_from_proto(in.pos(), *out.Pos);
    }

    convert_from_proto(in.protectionpickup(), out.ProtectionPickup); // required field in DDS
}

// ---- static assertions related to enums
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_process) == static_cast<int>(twinoaks::commonmodule::SourceKind::SourceKind_process), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_substituted) == static_cast<int>(twinoaks::commonmodule::SourceKind::SourceKind_substituted), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_good) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_good), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_invalid) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_invalid), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_reserved) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_reserved), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_questionable) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_questionable), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_on) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_blocked) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_test) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_test), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_test_blocked) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_test_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_off) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_off), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_none) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_OK) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_OK), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_Warning) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_Warning), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_Alarm) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_Alarm), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_none) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_testing) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_testing), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_operating) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_operating), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_failed) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_failed), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_transient) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_transient), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_closed) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_closed), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_open) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_invalid) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_invalid), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_unknown) == static_cast<int>(twinoaks::commonmodule::FaultDirectionKind::FaultDirectionKind_unknown), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_forward) == static_cast<int>(twinoaks::commonmodule::FaultDirectionKind::FaultDirectionKind_forward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_backward) == static_cast<int>(twinoaks::commonmodule::FaultDirectionKind::FaultDirectionKind_backward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_both) == static_cast<int>(twinoaks::commonmodule::FaultDirectionKind::FaultDirectionKind_both), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_unknown) == static_cast<int>(twinoaks::commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_unknown), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_forward) == static_cast<int>(twinoaks::commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_forward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_backward) == static_cast<int>(twinoaks::commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_backward), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::RecloseActionKind::RecloseActionKind_idle) == static_cast<int>(twinoaks::commonmodule::RecloseActionKind::RecloseActionKind_idle), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RecloseActionKind::RecloseActionKind_cycling) == static_cast<int>(twinoaks::commonmodule::RecloseActionKind::RecloseActionKind_cycling), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RecloseActionKind::RecloseActionKind_lockout) == static_cast<int>(twinoaks::commonmodule::RecloseActionKind::RecloseActionKind_lockout), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_none) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_other) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_C) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_C), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_CN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_CN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AC) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_AC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ACN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ACN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_B) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_B), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_BN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BC) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_BC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BCN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_BCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_A) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_A), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_AN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AB) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_AB), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ABN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABC) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ABC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s2N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s1N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s12), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s12N), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_DIFF) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_DIFF), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_none) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_other) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_none) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_meter) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_meter), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_gram) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_gram), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Amp) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Amp), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_deg) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_deg), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_rad) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_rad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degC) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_degC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Farad) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Farad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_sec) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_sec), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Henry) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Henry), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_V) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_V), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_ohm) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_ohm), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Joule) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Joule), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Newton) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Newton), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Hz) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Hz), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_W) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_W), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Pa) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Pa), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m2) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_m2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VA) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAr) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VAr), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAh) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VAh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Wh) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Wh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VArh) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VArh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_other) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Ah) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Ah), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_min) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_min), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hour) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_hour), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m3) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_m3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degF) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_degF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_mph) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_mph), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_IEC) == static_cast<int>(twinoaks::commonmodule::PFSignKind::PFSignKind_IEC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_EEI) == static_cast<int>(twinoaks::commonmodule::PFSignKind::PFSignKind_EEI), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_none) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_other) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_neut_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_Hz_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_Hz_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_net_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_neut_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PF_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsAB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsBC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_ang) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_ang), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_PPV_phsCA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_net_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_neut_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VA_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_net_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_neut_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_VAr_phsC_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_neut_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_neut_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsA_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsA_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsB_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsB_mag), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsC_mag) == static_cast<int>(twinoaks::commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_phsC_mag), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_CSI) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_CSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VC_VSI) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VC_VSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_CC_VSI) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_CC_VSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_none) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_other) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_PQ) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_PQ), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_VF) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_VF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_ISO) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_ISO), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::StateKind::StateKind_off) == static_cast<int>(twinoaks::commonmodule::StateKind::StateKind_off), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_on) == static_cast<int>(twinoaks::commonmodule::StateKind::StateKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_standby) == static_cast<int>(twinoaks::commonmodule::StateKind::StateKind_standby), "mismatched enum values");

static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_advanced) == static_cast<int>(twinoaks::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_advanced), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_droop) == static_cast<int>(twinoaks::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_droop), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_voltage) == static_cast<int>(twinoaks::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_voltage), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_reactivePower) == static_cast<int>(twinoaks::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_reactivePower), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_powerFactor) == static_cast<int>(twinoaks::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_powerFactor), "mismatched enum values");

static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_advanced) == static_cast<int>(twinoaks::generationmodule::RealPowerControlKind::RealPowerControlKind_advanced), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_droop) == static_cast<int>(twinoaks::generationmodule::RealPowerControlKind::RealPowerControlKind_droop), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_isochronous) == static_cast<int>(twinoaks::generationmodule::RealPowerControlKind::RealPowerControlKind_isochronous), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_realPower) == static_cast<int>(twinoaks::generationmodule::RealPowerControlKind::RealPowerControlKind_realPower), "mismatched enum values");

} // end namespace dds

} // end namespace adapter
