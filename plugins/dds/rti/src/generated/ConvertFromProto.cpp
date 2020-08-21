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

void convert_from_proto(const commonmodule::ControlMessageInfo& in, openfmb::commonmodule::ControlMessageInfo& out);

void convert_from_proto(const commonmodule::MessageInfo& in, openfmb::commonmodule::MessageInfo& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out);

void convert_from_proto(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out);

void convert_from_proto(const commonmodule::TimeQuality& in, openfmb::commonmodule::TimeQuality& out);

void convert_from_proto(const breakermodule::Breaker& in, openfmb::breakermodule::Breaker& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, openfmb::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::NamedObject& in, openfmb::commonmodule::NamedObject& out);

void convert_from_proto(const breakermodule::BreakerDiscreteControl& in, openfmb::breakermodule::BreakerDiscreteControl& out);

void convert_from_proto(const commonmodule::ControlValue& in, openfmb::commonmodule::ControlValue& out);

void convert_from_proto(const commonmodule::CheckConditions& in, openfmb::commonmodule::CheckConditions& out);

void convert_from_proto(const breakermodule::BreakerDiscreteControlXCBR& in, openfmb::breakermodule::BreakerDiscreteControlXCBR& out);

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, openfmb::commonmodule::LogicalNodeForControl& out);

void convert_from_proto(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::PhaseDPC& in, openfmb::commonmodule::PhaseDPC& out);

void convert_from_proto(const commonmodule::ControlDPC& in, openfmb::commonmodule::ControlDPC& out);

void convert_from_proto(const commonmodule::ControlINC& in, openfmb::commonmodule::ControlINC& out);

void convert_from_proto(const commonmodule::ControlSPC& in, openfmb::commonmodule::ControlSPC& out);

void convert_from_proto(const commonmodule::IED& in, openfmb::commonmodule::IED& out);

void convert_from_proto(const commonmodule::EventMessageInfo& in, openfmb::commonmodule::EventMessageInfo& out);

void convert_from_proto(const breakermodule::BreakerEvent& in, openfmb::breakermodule::BreakerEvent& out);

void convert_from_proto(const commonmodule::EventValue& in, openfmb::commonmodule::EventValue& out);

void convert_from_proto(const commonmodule::StatusAndEventXCBR& in, openfmb::commonmodule::StatusAndEventXCBR& out);

void convert_from_proto(const commonmodule::LogicalNodeForEventAndStatus& in, openfmb::commonmodule::LogicalNodeForEventAndStatus& out);

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, openfmb::commonmodule::ENS_BehaviourModeKind& out);

void convert_from_proto(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out);

void convert_from_proto(const commonmodule::DetailQual& in, openfmb::commonmodule::DetailQual& out);

void convert_from_proto(const commonmodule::ENS_HealthKind& in, openfmb::commonmodule::ENS_HealthKind& out);

void convert_from_proto(const commonmodule::StatusSPS& in, openfmb::commonmodule::StatusSPS& out);

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, openfmb::commonmodule::ENS_DynamicTestKind& out);

void convert_from_proto(const commonmodule::PhaseDPS& in, openfmb::commonmodule::PhaseDPS& out);

void convert_from_proto(const commonmodule::StatusDPS& in, openfmb::commonmodule::StatusDPS& out);

void convert_from_proto(const commonmodule::ACD& in, openfmb::commonmodule::ACD& out);

void convert_from_proto(const commonmodule::StatusINS& in, openfmb::commonmodule::StatusINS& out);

void convert_from_proto(const commonmodule::PhaseSPS& in, openfmb::commonmodule::PhaseSPS& out);

void convert_from_proto(const commonmodule::PhaseRecloseAction& in, openfmb::commonmodule::PhaseRecloseAction& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const breakermodule::BreakerReading& in, openfmb::breakermodule::BreakerReading& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, openfmb::commonmodule::ACDCTerminal& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out);

void convert_from_proto(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out);

void convert_from_proto(const commonmodule::AnalogueValue& in, openfmb::commonmodule::AnalogueValue& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out);

void convert_from_proto(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, openfmb::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, openfmb::commonmodule::PhaseMMTN& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, openfmb::commonmodule::ReadingMMTN& out);

void convert_from_proto(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, openfmb::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::StatusMessageInfo& in, openfmb::commonmodule::StatusMessageInfo& out);

void convert_from_proto(const breakermodule::BreakerStatus& in, openfmb::breakermodule::BreakerStatus& out);

void convert_from_proto(const commonmodule::StatusValue& in, openfmb::commonmodule::StatusValue& out);

void convert_from_proto(const capbankmodule::CapBankControl& in, openfmb::capbankmodule::CapBankControl& out);

void convert_from_proto(const capbankmodule::CapBankControlFSCC& in, openfmb::capbankmodule::CapBankControlFSCC& out);

void convert_from_proto(const commonmodule::ControlFSCC& in, openfmb::commonmodule::ControlFSCC& out);

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, openfmb::commonmodule::ControlScheduleFSCH& out);

void convert_from_proto(const commonmodule::ScheduleCSG& in, openfmb::commonmodule::ScheduleCSG& out);

void convert_from_proto(const commonmodule::SchedulePoint& in, openfmb::commonmodule::SchedulePoint& out);

void convert_from_proto(const commonmodule::ENG_ScheduleParameter& in, openfmb::commonmodule::ENG_ScheduleParameter& out);

void convert_from_proto(const commonmodule::ControlTimestamp& in, openfmb::commonmodule::ControlTimestamp& out);

void convert_from_proto(const capbankmodule::CapBankControlScheduleFSCH& in, openfmb::capbankmodule::CapBankControlScheduleFSCH& out);

void convert_from_proto(const capbankmodule::CapBankCSG& in, openfmb::capbankmodule::CapBankCSG& out);

void convert_from_proto(const capbankmodule::CapBankPoint& in, openfmb::capbankmodule::CapBankPoint& out);

void convert_from_proto(const capbankmodule::CapBankControlYPSH& in, openfmb::capbankmodule::CapBankControlYPSH& out);

void convert_from_proto(const capbankmodule::CapBankSystem& in, openfmb::capbankmodule::CapBankSystem& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControl& in, openfmb::capbankmodule::CapBankDiscreteControl& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControlZCAP& in, openfmb::capbankmodule::CapBankDiscreteControlZCAP& out);

void convert_from_proto(const capbankmodule::CapBankEvent& in, openfmb::capbankmodule::CapBankEvent& out);

void convert_from_proto(const capbankmodule::CapBankEventAndStatusZCAP& in, openfmb::capbankmodule::CapBankEventAndStatusZCAP& out);

void convert_from_proto(const capbankmodule::CapBankEventAndStatusPoint& in, openfmb::capbankmodule::CapBankEventAndStatusPoint& out);

void convert_from_proto(const capbankmodule::CapBankEventAndStatusYPSH& in, openfmb::capbankmodule::CapBankEventAndStatusYPSH& out);

void convert_from_proto(const capbankmodule::CapBankReading& in, openfmb::capbankmodule::CapBankReading& out);

void convert_from_proto(const capbankmodule::CapBankStatus& in, openfmb::capbankmodule::CapBankStatus& out);

void convert_from_proto(const commonmodule::ESS& in, openfmb::commonmodule::ESS& out);

void convert_from_proto(const essmodule::ESSControl& in, openfmb::essmodule::ESSControl& out);

void convert_from_proto(const essmodule::EssControlFSCC& in, openfmb::essmodule::EssControlFSCC& out);

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, openfmb::essmodule::ESSControlScheduleFSCH& out);

void convert_from_proto(const essmodule::ESSCSG& in, openfmb::essmodule::ESSCSG& out);

void convert_from_proto(const essmodule::ESSPoint& in, openfmb::essmodule::ESSPoint& out);

void convert_from_proto(const essmodule::ESSFunction& in, openfmb::essmodule::ESSFunction& out);

void convert_from_proto(const essmodule::CapacityFirming& in, openfmb::essmodule::CapacityFirming& out);

void convert_from_proto(const essmodule::FrequencyRegulation& in, openfmb::essmodule::FrequencyRegulation& out);

void convert_from_proto(const essmodule::PeakShaving& in, openfmb::essmodule::PeakShaving& out);

void convert_from_proto(const essmodule::SocLimit& in, openfmb::essmodule::SocLimit& out);

void convert_from_proto(const essmodule::SOCManagement& in, openfmb::essmodule::SOCManagement& out);

void convert_from_proto(const essmodule::VoltageDroop& in, openfmb::essmodule::VoltageDroop& out);

void convert_from_proto(const essmodule::VoltageRegulation& in, openfmb::essmodule::VoltageRegulation& out);

void convert_from_proto(const essmodule::VoltagePI& in, openfmb::essmodule::VoltagePI& out);

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, openfmb::commonmodule::ENG_GridConnectModeKind& out);

void convert_from_proto(const commonmodule::RampRate& in, openfmb::commonmodule::RampRate& out);

void convert_from_proto(const essmodule::ESSEvent& in, openfmb::essmodule::ESSEvent& out);

void convert_from_proto(const essmodule::EssEventZBAT& in, openfmb::essmodule::EssEventZBAT& out);

void convert_from_proto(const essmodule::ESSEventZGEN& in, openfmb::essmodule::ESSEventZGEN& out);

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, openfmb::essmodule::ESSEventAndStatusZGEN& out);

void convert_from_proto(const essmodule::ESSPointStatus& in, openfmb::essmodule::ESSPointStatus& out);

void convert_from_proto(const essmodule::ESSReading& in, openfmb::essmodule::ESSReading& out);

void convert_from_proto(const essmodule::ESSStatus& in, openfmb::essmodule::ESSStatus& out);

void convert_from_proto(const essmodule::EssStatusZBAT& in, openfmb::essmodule::EssStatusZBAT& out);

void convert_from_proto(const essmodule::ESSStatusZGEN& in, openfmb::essmodule::ESSStatusZGEN& out);

void convert_from_proto(const generationmodule::GeneratingUnit& in, openfmb::generationmodule::GeneratingUnit& out);

void convert_from_proto(const commonmodule::ActivePower& in, openfmb::commonmodule::ActivePower& out);

void convert_from_proto(const generationmodule::GenerationControl& in, openfmb::generationmodule::GenerationControl& out);

void convert_from_proto(const generationmodule::GenerationControlFSCC& in, openfmb::generationmodule::GenerationControlFSCC& out);

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, openfmb::generationmodule::GenerationControlScheduleFSCH& out);

void convert_from_proto(const generationmodule::GenerationCSG& in, openfmb::generationmodule::GenerationCSG& out);

void convert_from_proto(const generationmodule::GenerationPoint& in, openfmb::generationmodule::GenerationPoint& out);

void convert_from_proto(const generationmodule::GenerationDiscreteControl& in, openfmb::generationmodule::GenerationDiscreteControl& out);

void convert_from_proto(const generationmodule::ReactivePowerControl& in, openfmb::generationmodule::ReactivePowerControl& out);

void convert_from_proto(const generationmodule::DroopParameter& in, openfmb::generationmodule::DroopParameter& out);

void convert_from_proto(const generationmodule::RealPowerControl& in, openfmb::generationmodule::RealPowerControl& out);

void convert_from_proto(const generationmodule::GenerationEvent& in, openfmb::generationmodule::GenerationEvent& out);

void convert_from_proto(const generationmodule::GenerationEventZGEN& in, openfmb::generationmodule::GenerationEventZGEN& out);

void convert_from_proto(const generationmodule::GenerationEventAndStatusZGEN& in, openfmb::generationmodule::GenerationEventAndStatusZGEN& out);

void convert_from_proto(const generationmodule::GenerationPointStatus& in, openfmb::generationmodule::GenerationPointStatus& out);

void convert_from_proto(const generationmodule::GenerationReading& in, openfmb::generationmodule::GenerationReading& out);

void convert_from_proto(const generationmodule::GenerationStatus& in, openfmb::generationmodule::GenerationStatus& out);

void convert_from_proto(const generationmodule::GenerationStatusZGEN& in, openfmb::generationmodule::GenerationStatusZGEN& out);

void convert_from_proto(const commonmodule::EnergyConsumer& in, openfmb::commonmodule::EnergyConsumer& out);

void convert_from_proto(const loadmodule::LoadControl& in, openfmb::loadmodule::LoadControl& out);

void convert_from_proto(const loadmodule::LoadControlFSCC& in, openfmb::loadmodule::LoadControlFSCC& out);

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, openfmb::loadmodule::LoadControlScheduleFSCH& out);

void convert_from_proto(const loadmodule::LoadCSG& in, openfmb::loadmodule::LoadCSG& out);

void convert_from_proto(const loadmodule::LoadPoint& in, openfmb::loadmodule::LoadPoint& out);

void convert_from_proto(const loadmodule::LoadEvent& in, openfmb::loadmodule::LoadEvent& out);

void convert_from_proto(const loadmodule::LoadEventZGLD& in, openfmb::loadmodule::LoadEventZGLD& out);

void convert_from_proto(const loadmodule::LoadEventAndStatusZGLD& in, openfmb::loadmodule::LoadEventAndStatusZGLD& out);

void convert_from_proto(const loadmodule::LoadPointStatus& in, openfmb::loadmodule::LoadPointStatus& out);

void convert_from_proto(const loadmodule::LoadReading& in, openfmb::loadmodule::LoadReading& out);

void convert_from_proto(const loadmodule::LoadStatus& in, openfmb::loadmodule::LoadStatus& out);

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, openfmb::loadmodule::LoadStatusZGLD& out);

void convert_from_proto(const commonmodule::Meter& in, openfmb::commonmodule::Meter& out);

void convert_from_proto(const metermodule::MeterReading& in, openfmb::metermodule::MeterReading& out);

void convert_from_proto(const reclosermodule::Recloser& in, openfmb::reclosermodule::Recloser& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControl& in, openfmb::reclosermodule::RecloserDiscreteControl& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControlXCBR& in, openfmb::reclosermodule::RecloserDiscreteControlXCBR& out);

void convert_from_proto(const reclosermodule::RecloserEvent& in, openfmb::reclosermodule::RecloserEvent& out);

void convert_from_proto(const reclosermodule::RecloserReading& in, openfmb::reclosermodule::RecloserReading& out);

void convert_from_proto(const reclosermodule::RecloserStatus& in, openfmb::reclosermodule::RecloserStatus& out);

void convert_from_proto(const regulatormodule::RegulatorDiscreteControl& in, openfmb::regulatormodule::RegulatorDiscreteControl& out);

void convert_from_proto(const regulatormodule::RegulatorControlATCC& in, openfmb::regulatormodule::RegulatorControlATCC& out);

void convert_from_proto(const commonmodule::ASG& in, openfmb::commonmodule::ASG& out);

void convert_from_proto(const commonmodule::AnalogueValueCtl& in, openfmb::commonmodule::AnalogueValueCtl& out);

void convert_from_proto(const commonmodule::ControlING& in, openfmb::commonmodule::ControlING& out);

void convert_from_proto(const commonmodule::PhaseISC& in, openfmb::commonmodule::PhaseISC& out);

void convert_from_proto(const commonmodule::ControlISC& in, openfmb::commonmodule::ControlISC& out);

void convert_from_proto(const commonmodule::PhaseAPC& in, openfmb::commonmodule::PhaseAPC& out);

void convert_from_proto(const commonmodule::ControlAPC& in, openfmb::commonmodule::ControlAPC& out);

void convert_from_proto(const regulatormodule::RegulatorSystem& in, openfmb::regulatormodule::RegulatorSystem& out);

void convert_from_proto(const regulatormodule::RegulatorControl& in, openfmb::regulatormodule::RegulatorControl& out);

void convert_from_proto(const regulatormodule::RegulatorControlFSCC& in, openfmb::regulatormodule::RegulatorControlFSCC& out);

void convert_from_proto(const regulatormodule::RegulatorControlScheduleFSCH& in, openfmb::regulatormodule::RegulatorControlScheduleFSCH& out);

void convert_from_proto(const regulatormodule::RegulatorCSG& in, openfmb::regulatormodule::RegulatorCSG& out);

void convert_from_proto(const regulatormodule::RegulatorPoint& in, openfmb::regulatormodule::RegulatorPoint& out);

void convert_from_proto(const regulatormodule::RegulatorEvent& in, openfmb::regulatormodule::RegulatorEvent& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusANCR& in, openfmb::regulatormodule::RegulatorEventAndStatusANCR& out);

void convert_from_proto(const regulatormodule::RegulatorEventAndStatusATCC& in, openfmb::regulatormodule::RegulatorEventAndStatusATCC& out);

void convert_from_proto(const commonmodule::StatusINC& in, openfmb::commonmodule::StatusINC& out);

void convert_from_proto(const commonmodule::PhaseINS& in, openfmb::commonmodule::PhaseINS& out);

void convert_from_proto(const commonmodule::StatusSPC& in, openfmb::commonmodule::StatusSPC& out);

void convert_from_proto(const regulatormodule::RegulatorReading& in, openfmb::regulatormodule::RegulatorReading& out);

void convert_from_proto(const regulatormodule::RegulatorStatus& in, openfmb::regulatormodule::RegulatorStatus& out);

void convert_from_proto(const resourcemodule::ResourceDiscreteControl& in, openfmb::resourcemodule::ResourceDiscreteControl& out);

void convert_from_proto(const resourcemodule::AnalogControlGGIO& in, openfmb::resourcemodule::AnalogControlGGIO& out);

void convert_from_proto(const resourcemodule::BooleanControlGGIO& in, openfmb::resourcemodule::BooleanControlGGIO& out);

void convert_from_proto(const resourcemodule::IntegerControlGGIO& in, openfmb::resourcemodule::IntegerControlGGIO& out);

void convert_from_proto(const resourcemodule::StringControlGGIO& in, openfmb::resourcemodule::StringControlGGIO& out);

void convert_from_proto(const commonmodule::VSC& in, openfmb::commonmodule::VSC& out);

void convert_from_proto(const resourcemodule::ResourceEvent& in, openfmb::resourcemodule::ResourceEvent& out);

void convert_from_proto(const commonmodule::AnalogEventAndStatusGGIO& in, openfmb::commonmodule::AnalogEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::BooleanEventAndStatusGGIO& in, openfmb::commonmodule::BooleanEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::IntegerEventAndStatusGGIO& in, openfmb::commonmodule::IntegerEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::StringEventAndStatusGGIO& in, openfmb::commonmodule::StringEventAndStatusGGIO& out);

void convert_from_proto(const commonmodule::VSS& in, openfmb::commonmodule::VSS& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out);

void convert_from_proto(const resourcemodule::ResourceStatus& in, openfmb::resourcemodule::ResourceStatus& out);

void convert_from_proto(const solarmodule::SolarControl& in, openfmb::solarmodule::SolarControl& out);

void convert_from_proto(const solarmodule::SolarControlFSCC& in, openfmb::solarmodule::SolarControlFSCC& out);

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, openfmb::solarmodule::SolarControlScheduleFSCH& out);

void convert_from_proto(const solarmodule::SolarCSG& in, openfmb::solarmodule::SolarCSG& out);

void convert_from_proto(const solarmodule::SolarPoint& in, openfmb::solarmodule::SolarPoint& out);

void convert_from_proto(const solarmodule::SolarInverter& in, openfmb::solarmodule::SolarInverter& out);

void convert_from_proto(const solarmodule::SolarEvent& in, openfmb::solarmodule::SolarEvent& out);

void convert_from_proto(const solarmodule::SolarEventZGEN& in, openfmb::solarmodule::SolarEventZGEN& out);

void convert_from_proto(const solarmodule::SolarEventAndStatusZGEN& in, openfmb::solarmodule::SolarEventAndStatusZGEN& out);

void convert_from_proto(const solarmodule::SolarPointStatus& in, openfmb::solarmodule::SolarPointStatus& out);

void convert_from_proto(const solarmodule::SolarReading& in, openfmb::solarmodule::SolarReading& out);

void convert_from_proto(const solarmodule::SolarStatus& in, openfmb::solarmodule::SolarStatus& out);

void convert_from_proto(const solarmodule::SolarStatusZGEN& in, openfmb::solarmodule::SolarStatusZGEN& out);

void convert_from_proto(const switchmodule::ProtectedSwitch& in, openfmb::switchmodule::ProtectedSwitch& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControl& in, openfmb::switchmodule::SwitchDiscreteControl& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControlXSWI& in, openfmb::switchmodule::SwitchDiscreteControlXSWI& out);

void convert_from_proto(const switchmodule::SwitchEvent& in, openfmb::switchmodule::SwitchEvent& out);

void convert_from_proto(const switchmodule::SwitchEventXSWI& in, openfmb::switchmodule::SwitchEventXSWI& out);

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

void convert_from_proto(const capbankmodule::CapBankControlProfile& in, openfmb::capbankmodule::CapBankControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankcontrol(), out.capBankControl()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControlProfile& in, openfmb::capbankmodule::CapBankDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankcontrol(), out.capBankControl()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankEventProfile& in, openfmb::capbankmodule::CapBankEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankevent(), out.capBankEvent()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankReadingProfile& in, openfmb::capbankmodule::CapBankReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.capbankreading(), out.capBankReading()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankStatusProfile& in, openfmb::capbankmodule::CapBankStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankstatus(), out.capBankStatus()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS

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

void convert_from_proto(const generationmodule::GenerationDiscreteControlProfile& in, openfmb::generationmodule::GenerationDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationdiscretecontrol(), out.generationDiscreteControl()); // required field in DDS

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

void convert_from_proto(const regulatormodule::RegulatorDiscreteControlProfile& in, openfmb::regulatormodule::RegulatorDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.regulatordiscretecontrol(), out.regulatorDiscreteControl()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
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

void convert_from_proto(const resourcemodule::ResourceDiscreteControlProfile& in, openfmb::resourcemodule::ResourceDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.resourcediscretecontrol(), out.resourceDiscreteControl()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceEventProfile& in, openfmb::resourcemodule::ResourceEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.ied(), out.ied()); // required field in DDS

    convert_from_proto(in.resourceevent(), out.resourceEvent()); // required field in DDS
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
void convert_from_proto(const commonmodule::ControlMessageInfo& in, openfmb::commonmodule::ControlMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::MessageInfo& in, openfmb::commonmodule::MessageInfo& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.messagetimestamp(), out.messageTimeStamp()); // required field in DDS
}

void convert_from_proto(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out)
{
    if(in.has_description()) out.description() = in.description().value(); // optional string

    if(in.has_mrid()) out.mRID() = in.mrid().value(); // optional string

    if(in.has_name()) out.name() = in.name().value(); // optional string
}

void convert_from_proto(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out)
{
    out.seconds() = in.seconds(); // required UINT64 primitive

    if(in.has_tq()) // optional field in DDS
    {
        openfmb::commonmodule::TimeQuality temp{};
        convert_from_proto(in.tq(), temp);
        out.tq() = temp;
    }

    out.nanoseconds() = in.nanoseconds(); // required UINT32 primitive
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

void convert_from_proto(const commonmodule::ConductingEquipment& in, openfmb::commonmodule::ConductingEquipment& out)
{
    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type

    out.mRID() = in.mrid(); // required string
}

void convert_from_proto(const commonmodule::NamedObject& in, openfmb::commonmodule::NamedObject& out)
{
    if(in.has_description()) out.description() = in.description().value(); // optional string

    if(in.has_name()) out.name() = in.name().value(); // optional string
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

    if(in.has_breakerdiscretecontrolxcbr()) // optional field in DDS
    {
        openfmb::breakermodule::BreakerDiscreteControlXCBR temp{};
        convert_from_proto(in.breakerdiscretecontrolxcbr(), temp);
        out.breakerDiscreteControlXCBR() = temp;
    }
}

void convert_from_proto(const commonmodule::ControlValue& in, openfmb::commonmodule::ControlValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk() = in.modblk().value();
    }

    if(in.has_reset())
    {
        out.reset() = in.reset().value();
    }
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

void convert_from_proto(const breakermodule::BreakerDiscreteControlXCBR& in, openfmb::breakermodule::BreakerDiscreteControlXCBR& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }

    if(in.has_protectionmode()) // optional field in DDS
    {
        openfmb::commonmodule::ControlINC temp{};
        convert_from_proto(in.protectionmode(), temp);
        out.ProtectionMode() = temp;
    }

    if(in.has_recloseenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.recloseenabled(), temp);
        out.RecloseEnabled() = temp;
    }

    if(in.has_resetprotectionpickup()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.resetprotectionpickup(), temp);
        out.ResetProtectionPickup() = temp;
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

void convert_from_proto(const commonmodule::PhaseDPC& in, openfmb::commonmodule::PhaseDPC& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const commonmodule::ControlDPC& in, openfmb::commonmodule::ControlDPC& out)
{
    out.ctlVal() = in.ctlval(); // required BOOL primitive
}

void convert_from_proto(const commonmodule::ControlINC& in, openfmb::commonmodule::ControlINC& out)
{
    out.ctlVal() = in.ctlval(); // required INT32 primitive
}

void convert_from_proto(const commonmodule::ControlSPC& in, openfmb::commonmodule::ControlSPC& out)
{
    out.ctlVal() = in.ctlval(); // required BOOL primitive
}

void convert_from_proto(const commonmodule::IED& in, openfmb::commonmodule::IED& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::EventMessageInfo& in, openfmb::commonmodule::EventMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerEvent& in, openfmb::breakermodule::BreakerEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        openfmb::commonmodule::StatusAndEventXCBR temp{};
        convert_from_proto(in.statusandeventxcbr(), temp);
        out.statusAndEventXCBR() = temp;
    }
}

void convert_from_proto(const commonmodule::EventValue& in, openfmb::commonmodule::EventValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk() = in.modblk().value();
    }
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

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPS temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }

    if(in.has_protectionpickup()) // optional field in DDS
    {
        openfmb::commonmodule::ACD temp{};
        convert_from_proto(in.protectionpickup(), temp);
        out.ProtectionPickup() = temp;
    }

    if(in.has_protectionmode()) // optional field in DDS
    {
        openfmb::commonmodule::StatusINS temp{};
        convert_from_proto(in.protectionmode(), temp);
        out.ProtectionMode() = temp;
    }

    if(in.has_recloseenabled()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.recloseenabled(), temp);
        out.RecloseEnabled() = temp;
    }

    if(in.has_reclosingaction()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseRecloseAction temp{};
        convert_from_proto(in.reclosingaction(), temp);
        out.ReclosingAction() = temp;
    }
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

    if(in.has_hotlinetag()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.hotlinetag(), temp);
        out.HotLineTag() = temp;
    }

    if(in.has_remoteblk()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.remoteblk(), temp);
        out.RemoteBlk() = temp;
    }
}

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, openfmb::commonmodule::ENS_BehaviourModeKind& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = static_cast<openfmb::commonmodule::BehaviourModeKind::inner_enum>(in.stval());

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
}

void convert_from_proto(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out)
{
    convert_from_proto(in.detailqual(), out.detailQual()); // required field in DDS

    out.operatorBlocked() = in.operatorblocked(); // required BOOL primitive

    out.source() = static_cast<openfmb::commonmodule::SourceKind::inner_enum>(in.source());

    out.test() = in.test(); // required BOOL primitive

    out.validity() = static_cast<openfmb::commonmodule::ValidityKind::inner_enum>(in.validity());
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

void convert_from_proto(const commonmodule::ENS_HealthKind& in, openfmb::commonmodule::ENS_HealthKind& out)
{
    if(in.has_d()) out.d() = in.d().value(); // optional string

    out.stVal() = static_cast<openfmb::commonmodule::HealthKind::inner_enum>(in.stval());
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

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, openfmb::commonmodule::ENS_DynamicTestKind& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = static_cast<openfmb::commonmodule::DynamicTestKind::inner_enum>(in.stval());

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
}

void convert_from_proto(const commonmodule::PhaseDPS& in, openfmb::commonmodule::PhaseDPS& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const commonmodule::StatusDPS& in, openfmb::commonmodule::StatusDPS& out)
{
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = static_cast<openfmb::commonmodule::DbPosKind::inner_enum>(in.stval());

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
}

void convert_from_proto(const commonmodule::ACD& in, openfmb::commonmodule::ACD& out)
{
    out.dirGeneral() = static_cast<openfmb::commonmodule::FaultDirectionKind::inner_enum>(in.dirgeneral());

    if(in.has_dirneut()) // optional enum in DDS
    {
        out.dirNeut() = static_cast<openfmb::commonmodule::PhaseFaultDirectionKind::inner_enum>(in.dirneut().value());
    }

    if(in.has_dirphsa()) // optional enum in DDS
    {
        out.dirPhsA() = static_cast<openfmb::commonmodule::PhaseFaultDirectionKind::inner_enum>(in.dirphsa().value());
    }

    if(in.has_dirphsb()) // optional enum in DDS
    {
        out.dirPhsB() = static_cast<openfmb::commonmodule::PhaseFaultDirectionKind::inner_enum>(in.dirphsb().value());
    }

    if(in.has_dirphsc()) // optional enum in DDS
    {
        out.dirPhsC() = static_cast<openfmb::commonmodule::PhaseFaultDirectionKind::inner_enum>(in.dirphsc().value());
    }

    out.general() = in.general(); // required BOOL primitive

    if(in.has_neut())
    {
        out.neut() = in.neut().value();
    }

    if(in.has_phsa())
    {
        out.phsA() = in.phsa().value();
    }

    if(in.has_phsb())
    {
        out.phsB() = in.phsb().value();
    }

    if(in.has_phsc())
    {
        out.phsC() = in.phsc().value();
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
}

void convert_from_proto(const commonmodule::PhaseSPS& in, openfmb::commonmodule::PhaseSPS& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const commonmodule::PhaseRecloseAction& in, openfmb::commonmodule::PhaseRecloseAction& out)
{
    if(in.has_phs3()) // optional enum in DDS
    {
        out.phs3() = static_cast<openfmb::commonmodule::RecloseActionKind::inner_enum>(in.phs3().value());
    }

    if(in.has_phsa()) // optional enum in DDS
    {
        out.phsA() = static_cast<openfmb::commonmodule::RecloseActionKind::inner_enum>(in.phsa().value());
    }

    if(in.has_phsb()) // optional enum in DDS
    {
        out.phsB() = static_cast<openfmb::commonmodule::RecloseActionKind::inner_enum>(in.phsb().value());
    }

    if(in.has_phsc()) // optional enum in DDS
    {
        out.phsC() = static_cast<openfmb::commonmodule::RecloseActionKind::inner_enum>(in.phsc().value());
    }
}

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
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

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out)
{
    convert_from_proto(in.terminal(), out.terminal()); // required field in DDS
}

void convert_from_proto(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out)
{
    if(in.has_acdcterminal()) convert_from_proto(in.acdcterminal(), out); // inherited type

    if(in.has_phases()) // optional enum in DDS
    {
        out.phases() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phases().value());
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

void convert_from_proto(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out)
{
    convert_from_proto(in.cval(), out.cVal()); // required field in DDS

    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
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

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::CalcMethodKind::inner_enum>(in.setval());
}

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out)
{
    convert_from_proto(in.mag(), out.mag()); // required field in DDS

    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

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

void convert_from_proto(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out)
{
    if(in.has_multiplier()) // optional enum in DDS
    {
        out.multiplier() = static_cast<openfmb::commonmodule::UnitMultiplierKind::inner_enum>(in.multiplier().value());
    }

    out.SIUnit() = static_cast<openfmb::commonmodule::UnitSymbolKind::inner_enum>(in.siunit());
}

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, openfmb::commonmodule::ENG_PFSignKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::PFSignKind::inner_enum>(in.setval());
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

void convert_from_proto(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out)
{
    out.actVal() = in.actval(); // required INT64 primitive

    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
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

void convert_from_proto(const commonmodule::StatusMessageInfo& in, openfmb::commonmodule::StatusMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerStatus& in, openfmb::breakermodule::BreakerStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        openfmb::commonmodule::StatusAndEventXCBR temp{};
        convert_from_proto(in.statusandeventxcbr(), temp);
        out.statusAndEventXCBR() = temp;
    }
}

void convert_from_proto(const commonmodule::StatusValue& in, openfmb::commonmodule::StatusValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk() = in.modblk().value();
    }
}

void convert_from_proto(const capbankmodule::CapBankControl& in, openfmb::capbankmodule::CapBankControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    if(in.has_capbankcontrolfscc()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankControlFSCC temp{};
        convert_from_proto(in.capbankcontrolfscc(), temp);
        out.capBankControlFSCC() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankControlFSCC& in, openfmb::capbankmodule::CapBankControlFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    if(in.has_capbankcontrolschedulefsch()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankControlScheduleFSCH temp{};
        convert_from_proto(in.capbankcontrolschedulefsch(), temp);
        out.capBankControlScheduleFSCH() = temp;
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

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, openfmb::commonmodule::ControlScheduleFSCH& out)
{
    convert_from_proto(in.valacsg(), out.ValACSG()); // required field in DDS
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

void convert_from_proto(const commonmodule::ENG_ScheduleParameter& in, openfmb::commonmodule::ENG_ScheduleParameter& out)
{
    out.scheduleParameterType() = static_cast<openfmb::commonmodule::ScheduleParameterKind::inner_enum>(in.scheduleparametertype());

    out.value() = in.value(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::ControlTimestamp& in, openfmb::commonmodule::ControlTimestamp& out)
{
    out.seconds() = in.seconds(); // required UINT64 primitive

    out.nanoseconds() = in.nanoseconds(); // required UINT32 primitive
}

void convert_from_proto(const capbankmodule::CapBankControlScheduleFSCH& in, openfmb::capbankmodule::CapBankControlScheduleFSCH& out)
{
    convert_from_proto(in.valcsg(), out.ValCSG()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankCSG& in, openfmb::capbankmodule::CapBankCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::capbankmodule::CapBankPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const capbankmodule::CapBankPoint& in, openfmb::capbankmodule::CapBankPoint& out)
{
    if(in.has_control()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankControlYPSH temp{};
        convert_from_proto(in.control(), temp);
        out.control() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankControlYPSH& in, openfmb::capbankmodule::CapBankControlYPSH& out)
{
    if(in.has_blkcls()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blkcls(), temp);
        out.BlkCls() = temp;
    }

    if(in.has_blkopn()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blkopn(), temp);
        out.BlkOpn() = temp;
    }

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankSystem& in, openfmb::capbankmodule::CapBankSystem& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControl& in, openfmb::capbankmodule::CapBankDiscreteControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    if(in.has_capbankdiscretecontrolzcap()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankDiscreteControlZCAP temp{};
        convert_from_proto(in.capbankdiscretecontrolzcap(), temp);
        out.capBankDiscreteControlZCAP() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControlZCAP& in, openfmb::capbankmodule::CapBankDiscreteControlZCAP& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankEvent& in, openfmb::capbankmodule::CapBankEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_capbankeventandstatuszcap()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankEventAndStatusZCAP temp{};
        convert_from_proto(in.capbankeventandstatuszcap(), temp);
        out.capBankEventAndStatusZCAP() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankEventAndStatusZCAP& in, openfmb::capbankmodule::CapBankEventAndStatusZCAP& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        openfmb::commonmodule::ENS_DynamicTestKind temp{};
        convert_from_proto(in.dynamictest(), temp);
        out.DynamicTest() = temp;
    }

    if(in.has_pointstatus()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankEventAndStatusPoint temp{};
        convert_from_proto(in.pointstatus(), temp);
        out.PointStatus() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankEventAndStatusPoint& in, openfmb::capbankmodule::CapBankEventAndStatusPoint& out)
{
    if(in.has_eventandstatus()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankEventAndStatusYPSH temp{};
        convert_from_proto(in.eventandstatus(), temp);
        out.eventAndStatus() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankEventAndStatusYPSH& in, openfmb::capbankmodule::CapBankEventAndStatusYPSH& out)
{
    if(in.has_blkcls()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.blkcls(), temp);
        out.BlkCls() = temp;
    }

    if(in.has_blkopn()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.blkopn(), temp);
        out.BlkOpn() = temp;
    }

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPS temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankReading& in, openfmb::capbankmodule::CapBankReading& out)
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

void convert_from_proto(const capbankmodule::CapBankStatus& in, openfmb::capbankmodule::CapBankStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_capbankeventandstatuszcap()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankEventAndStatusZCAP temp{};
        convert_from_proto(in.capbankeventandstatuszcap(), temp);
        out.capBankEventAndStatusZCAP() = temp;
    }
}

void convert_from_proto(const commonmodule::ESS& in, openfmb::commonmodule::ESS& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
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

    if(in.has_esscontrolfscc()) // optional field in DDS
    {
        openfmb::essmodule::EssControlFSCC temp{};
        convert_from_proto(in.esscontrolfscc(), temp);
        out.essControlFSCC() = temp;
    }
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

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, openfmb::essmodule::ESSControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
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

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, openfmb::commonmodule::ENG_GridConnectModeKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::GridConnectModeKind::inner_enum>(in.setval());

    if(in.has_setvalextension()) out.setValExtension() = in.setvalextension().value(); // optional string
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

void convert_from_proto(const essmodule::ESSEventZGEN& in, openfmb::essmodule::ESSEventZGEN& out)
{
    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
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

void convert_from_proto(const essmodule::ESSPointStatus& in, openfmb::essmodule::ESSPointStatus& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
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
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
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

void convert_from_proto(const essmodule::EssStatusZBAT& in, openfmb::essmodule::EssStatusZBAT& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_batst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.batst(), temp);
        out.BatSt() = temp;
    }

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

void convert_from_proto(const essmodule::ESSStatusZGEN& in, openfmb::essmodule::ESSStatusZGEN& out)
{
    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
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

void convert_from_proto(const generationmodule::GenerationControl& in, openfmb::generationmodule::GenerationControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    if(in.has_generationcontrolfscc()) // optional field in DDS
    {
        openfmb::generationmodule::GenerationControlFSCC temp{};
        convert_from_proto(in.generationcontrolfscc(), temp);
        out.generationControlFSCC() = temp;
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

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, openfmb::generationmodule::GenerationControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
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

void convert_from_proto(const generationmodule::GenerationDiscreteControl& in, openfmb::generationmodule::GenerationDiscreteControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    if(in.has_reactivepowercontrol()) // optional field in DDS
    {
        openfmb::generationmodule::ReactivePowerControl temp{};
        convert_from_proto(in.reactivepowercontrol(), temp);
        out.ReactivePowerControl() = temp;
    }

    if(in.has_realpowercontrol()) // optional field in DDS
    {
        openfmb::generationmodule::RealPowerControl temp{};
        convert_from_proto(in.realpowercontrol(), temp);
        out.RealPowerControl() = temp;
    }
}

void convert_from_proto(const generationmodule::ReactivePowerControl& in, openfmb::generationmodule::ReactivePowerControl& out)
{
    if(in.has_droopsetpoint()) // optional field in DDS
    {
        openfmb::generationmodule::DroopParameter temp{};
        convert_from_proto(in.droopsetpoint(), temp);
        out.droopSetpoint() = temp;
    }

    if(in.has_powerfactorsetpoint())
    {
        out.powerFactorSetpoint() = in.powerfactorsetpoint().value();
    }

    if(in.has_reactivepowercontrolmode()) // optional enum in DDS
    {
        out.reactivePowerControlMode() = static_cast<openfmb::generationmodule::ReactivePowerControlKind::inner_enum>(in.reactivepowercontrolmode().value());
    }

    if(in.has_reactivepowersetpoint())
    {
        out.reactivePowerSetpoint() = in.reactivepowersetpoint().value();
    }

    if(in.has_voltagesetpoint())
    {
        out.voltageSetpoint() = in.voltagesetpoint().value();
    }
}

void convert_from_proto(const generationmodule::DroopParameter& in, openfmb::generationmodule::DroopParameter& out)
{
    if(in.has_slope())
    {
        out.slope() = in.slope().value();
    }

    if(in.has_unloadedoffset())
    {
        out.unloadedOffset() = in.unloadedoffset().value();
    }
}

void convert_from_proto(const generationmodule::RealPowerControl& in, openfmb::generationmodule::RealPowerControl& out)
{
    if(in.has_droopsetpoint()) // optional field in DDS
    {
        openfmb::generationmodule::DroopParameter temp{};
        convert_from_proto(in.droopsetpoint(), temp);
        out.droopSetpoint() = temp;
    }

    if(in.has_isochronoussetpoint())
    {
        out.isochronousSetpoint() = in.isochronoussetpoint().value();
    }

    if(in.has_realpowercontrolmode()) // optional enum in DDS
    {
        out.realPowerControlMode() = static_cast<openfmb::generationmodule::RealPowerControlKind::inner_enum>(in.realpowercontrolmode().value());
    }

    if(in.has_realpowersetpoint())
    {
        out.realPowerSetpoint() = in.realpowersetpoint().value();
    }
}

void convert_from_proto(const generationmodule::GenerationEvent& in, openfmb::generationmodule::GenerationEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_generationeventzgen()) // optional field in DDS
    {
        openfmb::generationmodule::GenerationEventZGEN temp{};
        convert_from_proto(in.generationeventzgen(), temp);
        out.generationEventZGEN() = temp;
    }
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
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
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
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
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

    if(in.has_generationstatuszgen()) // optional field in DDS
    {
        openfmb::generationmodule::GenerationStatusZGEN temp{};
        convert_from_proto(in.generationstatuszgen(), temp);
        out.generationStatusZGEN() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationStatusZGEN& in, openfmb::generationmodule::GenerationStatusZGEN& out)
{
    if(in.has_generationeventandstatuszgen()) convert_from_proto(in.generationeventandstatuszgen(), out); // inherited type
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

    if(in.has_loadcontrolfscc()) // optional field in DDS
    {
        openfmb::loadmodule::LoadControlFSCC temp{};
        convert_from_proto(in.loadcontrolfscc(), temp);
        out.loadControlFSCC() = temp;
    }
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

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, openfmb::loadmodule::LoadControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
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

void convert_from_proto(const loadmodule::LoadEvent& in, openfmb::loadmodule::LoadEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_loadeventzgld()) // optional field in DDS
    {
        openfmb::loadmodule::LoadEventZGLD temp{};
        convert_from_proto(in.loadeventzgld(), temp);
        out.loadEventZGLD() = temp;
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
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }
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

void convert_from_proto(const loadmodule::LoadStatus& in, openfmb::loadmodule::LoadStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_loadstatuszgld()) // optional field in DDS
    {
        openfmb::loadmodule::LoadStatusZGLD temp{};
        convert_from_proto(in.loadstatuszgld(), temp);
        out.loadStatusZGLD() = temp;
    }
}

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, openfmb::loadmodule::LoadStatusZGLD& out)
{
    if(in.has_loadeventandstatuszgld()) convert_from_proto(in.loadeventandstatuszgld(), out); // inherited type
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

void convert_from_proto(const reclosermodule::Recloser& in, openfmb::reclosermodule::Recloser& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_normalopen())
    {
        out.normalOpen() = in.normalopen().value();
    }
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

    if(in.has_recloserdiscretecontrolxcbr()) // optional field in DDS
    {
        openfmb::reclosermodule::RecloserDiscreteControlXCBR temp{};
        convert_from_proto(in.recloserdiscretecontrolxcbr(), temp);
        out.recloserDiscreteControlXCBR() = temp;
    }
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControlXCBR& in, openfmb::reclosermodule::RecloserDiscreteControlXCBR& out)
{
    if(in.has_breakerdiscretecontrolxcbr()) convert_from_proto(in.breakerdiscretecontrolxcbr(), out); // inherited type
}

void convert_from_proto(const reclosermodule::RecloserEvent& in, openfmb::reclosermodule::RecloserEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        openfmb::commonmodule::StatusAndEventXCBR temp{};
        convert_from_proto(in.statusandeventxcbr(), temp);
        out.statusAndEventXCBR() = temp;
    }
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

    if(in.has_statusandeventxcbr()) // optional field in DDS
    {
        openfmb::commonmodule::StatusAndEventXCBR temp{};
        convert_from_proto(in.statusandeventxcbr(), temp);
        out.statusAndEventXCBR() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorDiscreteControl& in, openfmb::regulatormodule::RegulatorDiscreteControl& out)
{
    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    if(in.has_regulatorcontrolatcc()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorControlATCC temp{};
        convert_from_proto(in.regulatorcontrolatcc(), temp);
        out.regulatorControlATCC() = temp;
    }
}

void convert_from_proto(const regulatormodule::RegulatorControlATCC& in, openfmb::regulatormodule::RegulatorControlATCC& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

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

    if(in.has_parop()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.parop(), temp);
        out.ParOp() = temp;
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_tappos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseISC temp{};
        convert_from_proto(in.tappos(), temp);
        out.TapPos() = temp;
    }

    if(in.has_volspt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.volspt(), temp);
        out.VolSpt() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
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

void convert_from_proto(const commonmodule::PhaseISC& in, openfmb::commonmodule::PhaseISC& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::ControlISC temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::ControlISC temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::ControlISC temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::ControlISC temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const commonmodule::ControlISC& in, openfmb::commonmodule::ControlISC& out)
{
    out.ctlVal() = in.ctlval(); // required INT32 primitive
}

void convert_from_proto(const commonmodule::PhaseAPC& in, openfmb::commonmodule::PhaseAPC& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::ControlAPC temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::ControlAPC temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::ControlAPC temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::ControlAPC temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const commonmodule::ControlAPC& in, openfmb::commonmodule::ControlAPC& out)
{
    convert_from_proto(in.ctlval(), out.ctlVal()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorSystem& in, openfmb::regulatormodule::RegulatorSystem& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
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

    if(in.has_regulatorcontrolfscc()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorControlFSCC temp{};
        convert_from_proto(in.regulatorcontrolfscc(), temp);
        out.regulatorControlFSCC() = temp;
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

void convert_from_proto(const regulatormodule::RegulatorControlScheduleFSCH& in, openfmb::regulatormodule::RegulatorControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
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

void convert_from_proto(const regulatormodule::RegulatorPoint& in, openfmb::regulatormodule::RegulatorPoint& out)
{
    if(in.has_control()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorControlATCC temp{};
        convert_from_proto(in.control(), temp);
        out.control() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorEvent& in, openfmb::regulatormodule::RegulatorEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_regulatoreventandstatusancr()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorEventAndStatusANCR temp{};
        convert_from_proto(in.regulatoreventandstatusancr(), temp);
        out.regulatorEventAndStatusANCR() = temp;
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

    if(in.has_pointstatus()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorEventAndStatusATCC temp{};
        convert_from_proto(in.pointstatus(), temp);
        out.PointStatus() = temp;
    }
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

    if(in.has_parop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.parop(), temp);
        out.ParOp() = temp;
    }

    if(in.has_ramprates()) // optional field in DDS
    {
        openfmb::commonmodule::RampRate temp{};
        convert_from_proto(in.ramprates(), temp);
        out.rampRates() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_stdltmms()) // optional field in DDS
    {
        openfmb::commonmodule::StatusINC temp{};
        convert_from_proto(in.stdltmms(), temp);
        out.StDlTmms() = temp;
    }

    if(in.has_tapoperr()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.tapoperr(), temp);
        out.TapOpErr() = temp;
    }

    if(in.has_tappos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseINS temp{};
        convert_from_proto(in.tappos(), temp);
        out.TapPos() = temp;
    }

    if(in.has_volspt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.volspt(), temp);
        out.VolSpt() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }
}

void convert_from_proto(const commonmodule::StatusINC& in, openfmb::commonmodule::StatusINC& out)
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

void convert_from_proto(const commonmodule::PhaseINS& in, openfmb::commonmodule::PhaseINS& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::StatusINS temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::StatusINS temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::StatusINS temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::StatusINS temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
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

    if(in.has_regulatoreventandstatusancr()) // optional field in DDS
    {
        openfmb::regulatormodule::RegulatorEventAndStatusANCR temp{};
        convert_from_proto(in.regulatoreventandstatusancr(), temp);
        out.regulatorEventAndStatusANCR() = temp;
    }
}

void convert_from_proto(const resourcemodule::ResourceDiscreteControl& in, openfmb::resourcemodule::ResourceDiscreteControl& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    for(const auto& input : in.analogcontrolggio())
    {
        openfmb::resourcemodule::AnalogControlGGIO output;
        convert_from_proto(input, output);
        out.analogControlGGIO().push_back(output);
    }

    for(const auto& input : in.booleancontrolggio())
    {
        openfmb::resourcemodule::BooleanControlGGIO output;
        convert_from_proto(input, output);
        out.booleanControlGGIO().push_back(output);
    }

    for(const auto& input : in.integercontrolggio())
    {
        openfmb::resourcemodule::IntegerControlGGIO output;
        convert_from_proto(input, output);
        out.integerControlGGIO().push_back(output);
    }

    for(const auto& input : in.stringcontrolggio())
    {
        openfmb::resourcemodule::StringControlGGIO output;
        convert_from_proto(input, output);
        out.stringControlGGIO().push_back(output);
    }
}

void convert_from_proto(const resourcemodule::AnalogControlGGIO& in, openfmb::resourcemodule::AnalogControlGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.anout(), out.AnOut()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const resourcemodule::BooleanControlGGIO& in, openfmb::resourcemodule::BooleanControlGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }

    convert_from_proto(in.spcso(), out.SPCSO()); // required field in DDS
}

void convert_from_proto(const resourcemodule::IntegerControlGGIO& in, openfmb::resourcemodule::IntegerControlGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.iscso(), out.ISCSO()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const resourcemodule::StringControlGGIO& in, openfmb::resourcemodule::StringControlGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }

    convert_from_proto(in.strout(), out.StrOut()); // required field in DDS
}

void convert_from_proto(const commonmodule::VSC& in, openfmb::commonmodule::VSC& out)
{
    out.ctlVal() = in.ctlval(); // required string
}

void convert_from_proto(const resourcemodule::ResourceEvent& in, openfmb::resourcemodule::ResourceEvent& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    for(const auto& input : in.analogeventandstatusggio())
    {
        openfmb::commonmodule::AnalogEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.analogEventAndStatusGGIO().push_back(output);
    }

    for(const auto& input : in.booleaneventandstatusggio())
    {
        openfmb::commonmodule::BooleanEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.booleanEventAndStatusGGIO().push_back(output);
    }

    for(const auto& input : in.integereventandstatusggio())
    {
        openfmb::commonmodule::IntegerEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.integerEventAndStatusGGIO().push_back(output);
    }

    for(const auto& input : in.stringeventandstatusggio())
    {
        openfmb::commonmodule::StringEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.stringEventAndStatusGGIO().push_back(output);
    }
}

void convert_from_proto(const commonmodule::AnalogEventAndStatusGGIO& in, openfmb::commonmodule::AnalogEventAndStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.anin(), out.AnIn()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const commonmodule::BooleanEventAndStatusGGIO& in, openfmb::commonmodule::BooleanEventAndStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.ind(), out.Ind()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const commonmodule::IntegerEventAndStatusGGIO& in, openfmb::commonmodule::IntegerEventAndStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    convert_from_proto(in.intin(), out.IntIn()); // required field in DDS

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }
}

void convert_from_proto(const commonmodule::StringEventAndStatusGGIO& in, openfmb::commonmodule::StringEventAndStatusGGIO& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_phase()) // optional enum in DDS
    {
        out.Phase() = static_cast<openfmb::commonmodule::PhaseCodeKind::inner_enum>(in.phase().value());
    }

    convert_from_proto(in.strin(), out.StrIn()); // required field in DDS
}

void convert_from_proto(const commonmodule::VSS& in, openfmb::commonmodule::VSS& out)
{
    convert_from_proto(in.q(), out.q()); // required field in DDS

    out.stVal() = in.stval(); // required string

    convert_from_proto(in.t(), out.t()); // required field in DDS
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

void convert_from_proto(const resourcemodule::ResourceStatus& in, openfmb::resourcemodule::ResourceStatus& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    for(const auto& input : in.analogeventandstatusggio())
    {
        openfmb::commonmodule::AnalogEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.analogEventAndStatusGGIO().push_back(output);
    }

    for(const auto& input : in.booleaneventandstatusggio())
    {
        openfmb::commonmodule::BooleanEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.booleanEventAndStatusGGIO().push_back(output);
    }

    for(const auto& input : in.integereventandstatusggio())
    {
        openfmb::commonmodule::IntegerEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.integerEventAndStatusGGIO().push_back(output);
    }

    for(const auto& input : in.stringeventandstatusggio())
    {
        openfmb::commonmodule::StringEventAndStatusGGIO output;
        convert_from_proto(input, output);
        out.stringEventAndStatusGGIO().push_back(output);
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

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, openfmb::solarmodule::SolarControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
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

void convert_from_proto(const solarmodule::SolarEvent& in, openfmb::solarmodule::SolarEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_solareventzgen()) // optional field in DDS
    {
        openfmb::solarmodule::SolarEventZGEN temp{};
        convert_from_proto(in.solareventzgen(), temp);
        out.solarEventZGEN() = temp;
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
        openfmb::commonmodule::StatusDPS temp{};
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
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }
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

void convert_from_proto(const solarmodule::SolarStatus& in, openfmb::solarmodule::SolarStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_solarstatuszgen()) // optional field in DDS
    {
        openfmb::solarmodule::SolarStatusZGEN temp{};
        convert_from_proto(in.solarstatuszgen(), temp);
        out.solarStatusZGEN() = temp;
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

    if(in.has_switchdiscretecontrolxswi()) // optional field in DDS
    {
        openfmb::switchmodule::SwitchDiscreteControlXSWI temp{};
        convert_from_proto(in.switchdiscretecontrolxswi(), temp);
        out.switchDiscreteControlXSWI() = temp;
    }
}

void convert_from_proto(const switchmodule::SwitchDiscreteControlXSWI& in, openfmb::switchmodule::SwitchDiscreteControlXSWI& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }

    if(in.has_resetprotectionpickup()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.resetprotectionpickup(), temp);
        out.ResetProtectionPickup() = temp;
    }
}

void convert_from_proto(const switchmodule::SwitchEvent& in, openfmb::switchmodule::SwitchEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_switcheventxswi()) // optional field in DDS
    {
        openfmb::switchmodule::SwitchEventXSWI temp{};
        convert_from_proto(in.switcheventxswi(), temp);
        out.switchEventXSWI() = temp;
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

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPS temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }
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

    if(in.has_switchstatusxswi()) // optional field in DDS
    {
        openfmb::switchmodule::SwitchStatusXSWI temp{};
        convert_from_proto(in.switchstatusxswi(), temp);
        out.switchStatusXSWI() = temp;
    }
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

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPS temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }

    convert_from_proto(in.protectionpickup(), out.ProtectionPickup()); // required field in DDS
}

// ---- static assertions related to enums
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_process) == static_cast<int>(openfmb::commonmodule::SourceKind::SourceKind_process), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_substituted) == static_cast<int>(openfmb::commonmodule::SourceKind::SourceKind_substituted), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_none) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_testing) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_testing), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_operating) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_operating), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_failed) == static_cast<int>(openfmb::commonmodule::DynamicTestKind::DynamicTestKind_failed), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_transient) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_transient), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_closed) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_closed), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_open) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_invalid) == static_cast<int>(openfmb::commonmodule::DbPosKind::DbPosKind_invalid), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_unknown) == static_cast<int>(openfmb::commonmodule::FaultDirectionKind::FaultDirectionKind_unknown), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_forward) == static_cast<int>(openfmb::commonmodule::FaultDirectionKind::FaultDirectionKind_forward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_backward) == static_cast<int>(openfmb::commonmodule::FaultDirectionKind::FaultDirectionKind_backward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::FaultDirectionKind::FaultDirectionKind_both) == static_cast<int>(openfmb::commonmodule::FaultDirectionKind::FaultDirectionKind_both), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_unknown) == static_cast<int>(openfmb::commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_unknown), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_forward) == static_cast<int>(openfmb::commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_forward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_backward) == static_cast<int>(openfmb::commonmodule::PhaseFaultDirectionKind::PhaseFaultDirectionKind_backward), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::RecloseActionKind::RecloseActionKind_idle) == static_cast<int>(openfmb::commonmodule::RecloseActionKind::RecloseActionKind_idle), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RecloseActionKind::RecloseActionKind_cycling) == static_cast<int>(openfmb::commonmodule::RecloseActionKind::RecloseActionKind_cycling), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RecloseActionKind::RecloseActionKind_lockout) == static_cast<int>(openfmb::commonmodule::RecloseActionKind::RecloseActionKind_lockout), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_DIFF) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_DIFF), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_IEC) == static_cast<int>(openfmb::commonmodule::PFSignKind::PFSignKind_IEC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_EEI) == static_cast<int>(openfmb::commonmodule::PFSignKind::PFSignKind_EEI), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::StateKind::StateKind_off) == static_cast<int>(openfmb::commonmodule::StateKind::StateKind_off), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_on) == static_cast<int>(openfmb::commonmodule::StateKind::StateKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_standby) == static_cast<int>(openfmb::commonmodule::StateKind::StateKind_standby), "mismatched enum values");

static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_advanced) == static_cast<int>(openfmb::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_advanced), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_droop) == static_cast<int>(openfmb::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_droop), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_voltage) == static_cast<int>(openfmb::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_voltage), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_reactivePower) == static_cast<int>(openfmb::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_reactivePower), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_powerFactor) == static_cast<int>(openfmb::generationmodule::ReactivePowerControlKind::ReactivePowerControlKind_powerFactor), "mismatched enum values");

static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_advanced) == static_cast<int>(openfmb::generationmodule::RealPowerControlKind::RealPowerControlKind_advanced), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_droop) == static_cast<int>(openfmb::generationmodule::RealPowerControlKind::RealPowerControlKind_droop), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_isochronous) == static_cast<int>(openfmb::generationmodule::RealPowerControlKind::RealPowerControlKind_isochronous), "mismatched enum values");
static_assert(static_cast<int>(generationmodule::RealPowerControlKind::RealPowerControlKind_realPower) == static_cast<int>(openfmb::generationmodule::RealPowerControlKind::RealPowerControlKind_realPower), "mismatched enum values");

} // end namespace rti

} // end namespace dds

} // end namespace adapter
