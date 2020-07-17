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

#include "generated/ConvertToProto.h"

namespace adapter {

namespace dds {

namespace rti {

// ---- forward declare the conversion routines for the child types ---

void convert_to_proto(const openfmb::commonmodule::ControlMessageInfo& in, commonmodule::ControlMessageInfo& out);

void convert_to_proto(const openfmb::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out);

void convert_to_proto(const openfmb::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out);

void convert_to_proto(const openfmb::commonmodule::Timestamp& in, commonmodule::Timestamp& out);

void convert_to_proto(const openfmb::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out);

void convert_to_proto(const openfmb::breakermodule::Breaker& in, breakermodule::Breaker& out);

void convert_to_proto(const openfmb::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out);

void convert_to_proto(const openfmb::commonmodule::NamedObject& in, commonmodule::NamedObject& out);

void convert_to_proto(const openfmb::breakermodule::BreakerDiscreteControl& in, breakermodule::BreakerDiscreteControl& out);

void convert_to_proto(const openfmb::commonmodule::ControlValue& in, commonmodule::ControlValue& out);

void convert_to_proto(const openfmb::commonmodule::CheckConditions& in, commonmodule::CheckConditions& out);

void convert_to_proto(const openfmb::breakermodule::BreakerDiscreteControlXCBR& in, breakermodule::BreakerDiscreteControlXCBR& out);

void convert_to_proto(const openfmb::commonmodule::LogicalNodeForControl& in, commonmodule::LogicalNodeForControl& out);

void convert_to_proto(const openfmb::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out);

void convert_to_proto(const openfmb::commonmodule::PhaseDPC& in, commonmodule::PhaseDPC& out);

void convert_to_proto(const openfmb::commonmodule::ControlDPC& in, commonmodule::ControlDPC& out);

void convert_to_proto(const openfmb::commonmodule::ControlINC& in, commonmodule::ControlINC& out);

void convert_to_proto(const openfmb::commonmodule::ControlSPC& in, commonmodule::ControlSPC& out);

void convert_to_proto(const openfmb::commonmodule::IED& in, commonmodule::IED& out);

void convert_to_proto(const openfmb::commonmodule::EventMessageInfo& in, commonmodule::EventMessageInfo& out);

void convert_to_proto(const openfmb::breakermodule::BreakerEvent& in, breakermodule::BreakerEvent& out);

void convert_to_proto(const openfmb::commonmodule::EventValue& in, commonmodule::EventValue& out);

void convert_to_proto(const openfmb::commonmodule::StatusAndEventXCBR& in, commonmodule::StatusAndEventXCBR& out);

void convert_to_proto(const openfmb::commonmodule::LogicalNodeForEventAndStatus& in, commonmodule::LogicalNodeForEventAndStatus& out);

void convert_to_proto(const openfmb::commonmodule::ENS_BehaviourModeKind& in, commonmodule::ENS_BehaviourModeKind& out);

void convert_to_proto(const openfmb::commonmodule::Quality& in, commonmodule::Quality& out);

void convert_to_proto(const openfmb::commonmodule::DetailQual& in, commonmodule::DetailQual& out);

void convert_to_proto(const openfmb::commonmodule::ENS_HealthKind& in, commonmodule::ENS_HealthKind& out);

void convert_to_proto(const openfmb::commonmodule::StatusSPS& in, commonmodule::StatusSPS& out);

void convert_to_proto(const openfmb::commonmodule::ENS_DynamicTestKind& in, commonmodule::ENS_DynamicTestKind& out);

void convert_to_proto(const openfmb::commonmodule::PhaseDPS& in, commonmodule::PhaseDPS& out);

void convert_to_proto(const openfmb::commonmodule::StatusDPS& in, commonmodule::StatusDPS& out);

void convert_to_proto(const openfmb::commonmodule::PhaseSPS& in, commonmodule::PhaseSPS& out);

void convert_to_proto(const openfmb::commonmodule::StatusINS& in, commonmodule::StatusINS& out);

void convert_to_proto(const openfmb::commonmodule::PhaseRecloseAction& in, commonmodule::PhaseRecloseAction& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out);

void convert_to_proto(const openfmb::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out);

void convert_to_proto(const openfmb::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out);

void convert_to_proto(const openfmb::commonmodule::Terminal& in, commonmodule::Terminal& out);

void convert_to_proto(const openfmb::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out);

void convert_to_proto(const openfmb::commonmodule::WYE& in, commonmodule::WYE& out);

void convert_to_proto(const openfmb::commonmodule::CMV& in, commonmodule::CMV& out);

void convert_to_proto(const openfmb::commonmodule::Vector& in, commonmodule::Vector& out);

void convert_to_proto(const openfmb::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out);

void convert_to_proto(const openfmb::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out);

void convert_to_proto(const openfmb::commonmodule::MV& in, commonmodule::MV& out);

void convert_to_proto(const openfmb::commonmodule::Unit& in, commonmodule::Unit& out);

void convert_to_proto(const openfmb::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out);

void convert_to_proto(const openfmb::commonmodule::DEL& in, commonmodule::DEL& out);

void convert_to_proto(const openfmb::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out);

void convert_to_proto(const openfmb::commonmodule::BCR& in, commonmodule::BCR& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out);

void convert_to_proto(const openfmb::commonmodule::StatusMessageInfo& in, commonmodule::StatusMessageInfo& out);

void convert_to_proto(const openfmb::breakermodule::BreakerStatus& in, breakermodule::BreakerStatus& out);

void convert_to_proto(const openfmb::commonmodule::StatusValue& in, commonmodule::StatusValue& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankControl& in, capbankmodule::CapBankControl& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankControlFSCC& in, capbankmodule::CapBankControlFSCC& out);

void convert_to_proto(const openfmb::commonmodule::ControlFSCC& in, commonmodule::ControlFSCC& out);

void convert_to_proto(const openfmb::commonmodule::ControlScheduleFSCH& in, commonmodule::ControlScheduleFSCH& out);

void convert_to_proto(const openfmb::commonmodule::ScheduleCSG& in, commonmodule::ScheduleCSG& out);

void convert_to_proto(const openfmb::commonmodule::SchedulePoint& in, commonmodule::SchedulePoint& out);

void convert_to_proto(const openfmb::commonmodule::ENG_ScheduleParameter& in, commonmodule::ENG_ScheduleParameter& out);

void convert_to_proto(const openfmb::commonmodule::ControlTimestamp& in, commonmodule::ControlTimestamp& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankControlScheduleFSCH& in, capbankmodule::CapBankControlScheduleFSCH& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankCSG& in, capbankmodule::CapBankCSG& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankPoint& in, capbankmodule::CapBankPoint& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankEventAndStatusYPSH& in, capbankmodule::CapBankEventAndStatusYPSH& out);

void convert_to_proto(const openfmb::commonmodule::ENS_SwitchingCapabilityKind& in, commonmodule::ENS_SwitchingCapabilityKind& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankSystem& in, capbankmodule::CapBankSystem& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankDiscreteControl& in, capbankmodule::CapBankDiscreteControl& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankDiscreteControlZCAP& in, capbankmodule::CapBankDiscreteControlZCAP& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankEvent& in, capbankmodule::CapBankEvent& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankEventAndStatusZCAP& in, capbankmodule::CapBankEventAndStatusZCAP& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankEventAndStatusPoint& in, capbankmodule::CapBankEventAndStatusPoint& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankReading& in, capbankmodule::CapBankReading& out);

void convert_to_proto(const openfmb::capbankmodule::CapBankStatus& in, capbankmodule::CapBankStatus& out);

void convert_to_proto(const openfmb::commonmodule::ESS& in, commonmodule::ESS& out);

void convert_to_proto(const openfmb::essmodule::ESSControl& in, essmodule::ESSControl& out);

void convert_to_proto(const openfmb::essmodule::EssControlFSCC& in, essmodule::EssControlFSCC& out);

void convert_to_proto(const openfmb::essmodule::ESSControlScheduleFSCH& in, essmodule::ESSControlScheduleFSCH& out);

void convert_to_proto(const openfmb::essmodule::ESSCSG& in, essmodule::ESSCSG& out);

void convert_to_proto(const openfmb::essmodule::ESSPoint& in, essmodule::ESSPoint& out);

void convert_to_proto(const openfmb::essmodule::ESSFunction& in, essmodule::ESSFunction& out);

void convert_to_proto(const openfmb::essmodule::CapacityFirming& in, essmodule::CapacityFirming& out);

void convert_to_proto(const openfmb::essmodule::FrequencyRegulation& in, essmodule::FrequencyRegulation& out);

void convert_to_proto(const openfmb::essmodule::PeakShaving& in, essmodule::PeakShaving& out);

void convert_to_proto(const openfmb::essmodule::SocLimit& in, essmodule::SocLimit& out);

void convert_to_proto(const openfmb::essmodule::SOCManagement& in, essmodule::SOCManagement& out);

void convert_to_proto(const openfmb::essmodule::VoltageDroop& in, essmodule::VoltageDroop& out);

void convert_to_proto(const openfmb::essmodule::VoltageRegulation& in, essmodule::VoltageRegulation& out);

void convert_to_proto(const openfmb::essmodule::VoltagePI& in, essmodule::VoltagePI& out);

void convert_to_proto(const openfmb::commonmodule::ENG_GridConnectModeKind& in, commonmodule::ENG_GridConnectModeKind& out);

void convert_to_proto(const openfmb::commonmodule::RampRate& in, commonmodule::RampRate& out);

void convert_to_proto(const openfmb::essmodule::ESSEvent& in, essmodule::ESSEvent& out);

void convert_to_proto(const openfmb::essmodule::EssEventZBAT& in, essmodule::EssEventZBAT& out);

void convert_to_proto(const openfmb::essmodule::ESSEventZGEN& in, essmodule::ESSEventZGEN& out);

void convert_to_proto(const openfmb::essmodule::ESSEventAndStatusZGEN& in, essmodule::ESSEventAndStatusZGEN& out);

void convert_to_proto(const openfmb::essmodule::ESSPointStatus& in, essmodule::ESSPointStatus& out);

void convert_to_proto(const openfmb::essmodule::ESSReading& in, essmodule::ESSReading& out);

void convert_to_proto(const openfmb::essmodule::ESSStatus& in, essmodule::ESSStatus& out);

void convert_to_proto(const openfmb::essmodule::EssStatusZBAT& in, essmodule::EssStatusZBAT& out);

void convert_to_proto(const openfmb::essmodule::ESSStatusZGEN& in, essmodule::ESSStatusZGEN& out);

void convert_to_proto(const openfmb::generationmodule::GeneratingUnit& in, generationmodule::GeneratingUnit& out);

void convert_to_proto(const openfmb::commonmodule::ActivePower& in, commonmodule::ActivePower& out);

void convert_to_proto(const openfmb::generationmodule::GenerationControl& in, generationmodule::GenerationControl& out);

void convert_to_proto(const openfmb::generationmodule::GenerationControlFSCC& in, generationmodule::GenerationControlFSCC& out);

void convert_to_proto(const openfmb::generationmodule::GenerationControlScheduleFSCH& in, generationmodule::GenerationControlScheduleFSCH& out);

void convert_to_proto(const openfmb::generationmodule::GenerationCSG& in, generationmodule::GenerationCSG& out);

void convert_to_proto(const openfmb::generationmodule::GenerationPoint& in, generationmodule::GenerationPoint& out);

void convert_to_proto(const openfmb::generationmodule::GenerationDiscreteControl& in, generationmodule::GenerationDiscreteControl& out);

void convert_to_proto(const openfmb::generationmodule::ReactivePowerControl& in, generationmodule::ReactivePowerControl& out);

void convert_to_proto(const openfmb::generationmodule::VV11PlaceHolder& in, generationmodule::VV11PlaceHolder& out);

void convert_to_proto(const openfmb::generationmodule::DroopParameter& in, generationmodule::DroopParameter& out);

void convert_to_proto(const openfmb::generationmodule::RealPowerControl& in, generationmodule::RealPowerControl& out);

void convert_to_proto(const openfmb::generationmodule::GenerationEvent& in, generationmodule::GenerationEvent& out);

void convert_to_proto(const openfmb::generationmodule::GenerationEventZGEN& in, generationmodule::GenerationEventZGEN& out);

void convert_to_proto(const openfmb::generationmodule::GenerationEventAndStatusZGEN& in, generationmodule::GenerationEventAndStatusZGEN& out);

void convert_to_proto(const openfmb::generationmodule::GenerationPointStatus& in, generationmodule::GenerationPointStatus& out);

void convert_to_proto(const openfmb::generationmodule::GenerationReading& in, generationmodule::GenerationReading& out);

void convert_to_proto(const openfmb::generationmodule::GenerationStatus& in, generationmodule::GenerationStatus& out);

void convert_to_proto(const openfmb::generationmodule::GenerationStatusZGEN& in, generationmodule::GenerationStatusZGEN& out);

void convert_to_proto(const openfmb::commonmodule::EnergyConsumer& in, commonmodule::EnergyConsumer& out);

void convert_to_proto(const openfmb::loadmodule::LoadControl& in, loadmodule::LoadControl& out);

void convert_to_proto(const openfmb::loadmodule::LoadControlFSCC& in, loadmodule::LoadControlFSCC& out);

void convert_to_proto(const openfmb::loadmodule::LoadControlScheduleFSCH& in, loadmodule::LoadControlScheduleFSCH& out);

void convert_to_proto(const openfmb::loadmodule::LoadCSG& in, loadmodule::LoadCSG& out);

void convert_to_proto(const openfmb::loadmodule::LoadPoint& in, loadmodule::LoadPoint& out);

void convert_to_proto(const openfmb::loadmodule::LoadEvent& in, loadmodule::LoadEvent& out);

void convert_to_proto(const openfmb::loadmodule::LoadEventZGLD& in, loadmodule::LoadEventZGLD& out);

void convert_to_proto(const openfmb::loadmodule::LoadEventAndStatusZGLD& in, loadmodule::LoadEventAndStatusZGLD& out);

void convert_to_proto(const openfmb::loadmodule::LoadPointStatus& in, loadmodule::LoadPointStatus& out);

void convert_to_proto(const openfmb::loadmodule::LoadReading& in, loadmodule::LoadReading& out);

void convert_to_proto(const openfmb::loadmodule::LoadStatus& in, loadmodule::LoadStatus& out);

void convert_to_proto(const openfmb::loadmodule::LoadStatusZGLD& in, loadmodule::LoadStatusZGLD& out);

void convert_to_proto(const openfmb::commonmodule::Meter& in, commonmodule::Meter& out);

void convert_to_proto(const openfmb::metermodule::MeterReading& in, metermodule::MeterReading& out);

void convert_to_proto(const openfmb::reclosermodule::Recloser& in, reclosermodule::Recloser& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserControl& in, reclosermodule::RecloserControl& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserControlFSCC& in, reclosermodule::RecloserControlFSCC& out);

void convert_to_proto(const openfmb::commonmodule::SwitchControlScheduleFSCH& in, commonmodule::SwitchControlScheduleFSCH& out);

void convert_to_proto(const openfmb::commonmodule::SwitchCSG& in, commonmodule::SwitchCSG& out);

void convert_to_proto(const openfmb::commonmodule::SwitchPoint& in, commonmodule::SwitchPoint& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserDiscreteControl& in, reclosermodule::RecloserDiscreteControl& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserDiscreteControlXCBR& in, reclosermodule::RecloserDiscreteControlXCBR& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserEvent& in, reclosermodule::RecloserEvent& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserReading& in, reclosermodule::RecloserReading& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserStatus& in, reclosermodule::RecloserStatus& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorControl& in, regulatormodule::RegulatorControl& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlFSCC& in, regulatormodule::RegulatorControlFSCC& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlScheduleFSCH& in, regulatormodule::RegulatorControlScheduleFSCH& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorCSG& in, regulatormodule::RegulatorCSG& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorPoint& in, regulatormodule::RegulatorPoint& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlATCC& in, regulatormodule::RegulatorControlATCC& out);

void convert_to_proto(const openfmb::commonmodule::ASG& in, commonmodule::ASG& out);

void convert_to_proto(const openfmb::commonmodule::AnalogueValueCtl& in, commonmodule::AnalogueValueCtl& out);

void convert_to_proto(const openfmb::commonmodule::ControlING& in, commonmodule::ControlING& out);

void convert_to_proto(const openfmb::commonmodule::PhaseISC& in, commonmodule::PhaseISC& out);

void convert_to_proto(const openfmb::commonmodule::ControlISC& in, commonmodule::ControlISC& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorSystem& in, regulatormodule::RegulatorSystem& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorEvent& in, regulatormodule::RegulatorEvent& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventAndStatusANCR& in, regulatormodule::RegulatorEventAndStatusANCR& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventAndStatusPoint& in, regulatormodule::RegulatorEventAndStatusPoint& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventAndStatusATCC& in, regulatormodule::RegulatorEventAndStatusATCC& out);

void convert_to_proto(const openfmb::commonmodule::PhaseINS& in, commonmodule::PhaseINS& out);

void convert_to_proto(const openfmb::commonmodule::StatusSPC& in, commonmodule::StatusSPC& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorReading& in, regulatormodule::RegulatorReading& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorStatus& in, regulatormodule::RegulatorStatus& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceDiscreteControl& in, resourcemodule::ResourceDiscreteControl& out);

void convert_to_proto(const openfmb::resourcemodule::AnalogControlGGIO& in, resourcemodule::AnalogControlGGIO& out);

void convert_to_proto(const openfmb::commonmodule::ControlAPC& in, commonmodule::ControlAPC& out);

void convert_to_proto(const openfmb::resourcemodule::BooleanControlGGIO& in, resourcemodule::BooleanControlGGIO& out);

void convert_to_proto(const openfmb::resourcemodule::IntegerControlGGIO& in, resourcemodule::IntegerControlGGIO& out);

void convert_to_proto(const openfmb::resourcemodule::StringControlGGIO& in, resourcemodule::StringControlGGIO& out);

void convert_to_proto(const openfmb::commonmodule::VSC& in, commonmodule::VSC& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceEvent& in, resourcemodule::ResourceEvent& out);

void convert_to_proto(const openfmb::commonmodule::AnalogEventAndStatusGGIO& in, commonmodule::AnalogEventAndStatusGGIO& out);

void convert_to_proto(const openfmb::commonmodule::BooleanEventAndStatusGGIO& in, commonmodule::BooleanEventAndStatusGGIO& out);

void convert_to_proto(const openfmb::commonmodule::IntegerEventAndStatusGGIO& in, commonmodule::IntegerEventAndStatusGGIO& out);

void convert_to_proto(const openfmb::commonmodule::StringEventAndStatusGGIO& in, commonmodule::StringEventAndStatusGGIO& out);

void convert_to_proto(const openfmb::commonmodule::VSS& in, commonmodule::VSS& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceStatus& in, resourcemodule::ResourceStatus& out);

void convert_to_proto(const openfmb::solarmodule::SolarControl& in, solarmodule::SolarControl& out);

void convert_to_proto(const openfmb::solarmodule::SolarControlFSCC& in, solarmodule::SolarControlFSCC& out);

void convert_to_proto(const openfmb::solarmodule::SolarControlScheduleFSCH& in, solarmodule::SolarControlScheduleFSCH& out);

void convert_to_proto(const openfmb::solarmodule::SolarCSG& in, solarmodule::SolarCSG& out);

void convert_to_proto(const openfmb::solarmodule::SolarPoint& in, solarmodule::SolarPoint& out);

void convert_to_proto(const openfmb::solarmodule::SolarInverter& in, solarmodule::SolarInverter& out);

void convert_to_proto(const openfmb::solarmodule::SolarEvent& in, solarmodule::SolarEvent& out);

void convert_to_proto(const openfmb::solarmodule::SolarEventZGEN& in, solarmodule::SolarEventZGEN& out);

void convert_to_proto(const openfmb::solarmodule::SolarEventAndStatusZGEN& in, solarmodule::SolarEventAndStatusZGEN& out);

void convert_to_proto(const openfmb::solarmodule::SolarPointStatus& in, solarmodule::SolarPointStatus& out);

void convert_to_proto(const openfmb::solarmodule::SolarReading& in, solarmodule::SolarReading& out);

void convert_to_proto(const openfmb::solarmodule::SolarStatus& in, solarmodule::SolarStatus& out);

void convert_to_proto(const openfmb::solarmodule::SolarStatusZGEN& in, solarmodule::SolarStatusZGEN& out);

void convert_to_proto(const openfmb::switchmodule::ProtectedSwitch& in, switchmodule::ProtectedSwitch& out);

void convert_to_proto(const openfmb::switchmodule::SwitchControl& in, switchmodule::SwitchControl& out);

void convert_to_proto(const openfmb::switchmodule::SwitchControlFSCC& in, switchmodule::SwitchControlFSCC& out);

void convert_to_proto(const openfmb::switchmodule::SwitchDiscreteControl& in, switchmodule::SwitchDiscreteControl& out);

void convert_to_proto(const openfmb::switchmodule::SwitchDiscreteControlXSWI& in, switchmodule::SwitchDiscreteControlXSWI& out);

void convert_to_proto(const openfmb::switchmodule::SwitchEvent& in, switchmodule::SwitchEvent& out);

void convert_to_proto(const openfmb::switchmodule::SwitchEventXSWI& in, switchmodule::SwitchEventXSWI& out);

void convert_to_proto(const openfmb::switchmodule::SwitchReading& in, switchmodule::SwitchReading& out);

void convert_to_proto(const openfmb::switchmodule::SwitchStatus& in, switchmodule::SwitchStatus& out);

void convert_to_proto(const openfmb::switchmodule::SwitchStatusXSWI& in, switchmodule::SwitchStatusXSWI& out);

// ---- implement the top level profile conversion routines ---

void convert_to_proto(const openfmb::breakermodule::BreakerDiscreteControlProfile& in, breakermodule::BreakerDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.breaker(), *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerDiscreteControl(), *out.mutable_breakerdiscretecontrol()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::breakermodule::BreakerEventProfile& in, breakermodule::BreakerEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.breaker(), *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerEvent(), *out.mutable_breakerevent()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.breaker(), *out.mutable_breaker()); // required field in DDS

    for(const auto& value : in.breakerReading())
    {
        convert_to_proto(value, *out.mutable_breakerreading()->Add());
    }

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::breakermodule::BreakerStatusProfile& in, breakermodule::BreakerStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.breaker(), *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerStatus(), *out.mutable_breakerstatus()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankControlProfile& in, capbankmodule::CapBankControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.capBankControl(), *out.mutable_capbankcontrol()); // required field in DDS

    convert_to_proto(in.capBankSystem(), *out.mutable_capbanksystem()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankDiscreteControlProfile& in, capbankmodule::CapBankDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.capBankControl(), *out.mutable_capbankcontrol()); // required field in DDS

    convert_to_proto(in.capBankSystem(), *out.mutable_capbanksystem()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankEventProfile& in, capbankmodule::CapBankEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.capBankEvent(), *out.mutable_capbankevent()); // required field in DDS

    convert_to_proto(in.capBankSystem(), *out.mutable_capbanksystem()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankReadingProfile& in, capbankmodule::CapBankReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.capBankReading(), *out.mutable_capbankreading()); // required field in DDS

    convert_to_proto(in.capBankSystem(), *out.mutable_capbanksystem()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankStatusProfile& in, capbankmodule::CapBankStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.capBankStatus(), *out.mutable_capbankstatus()); // required field in DDS

    convert_to_proto(in.capBankSystem(), *out.mutable_capbanksystem()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::essmodule::ESSControlProfile& in, essmodule::ESSControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ess(), *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essControl(), *out.mutable_esscontrol()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::essmodule::ESSEventProfile& in, essmodule::ESSEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.ess(), *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essEvent(), *out.mutable_essevent()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::essmodule::ESSReadingProfile& in, essmodule::ESSReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ess(), *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essReading(), *out.mutable_essreading()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::essmodule::ESSStatusProfile& in, essmodule::ESSStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ess(), *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essStatus(), *out.mutable_essstatus()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationControlProfile& in, generationmodule::GenerationControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit(), *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationControl(), *out.mutable_generationcontrol()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationDiscreteControlProfile& in, generationmodule::GenerationDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit(), *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationDiscreteControl(), *out.mutable_generationdiscretecontrol()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationEventProfile& in, generationmodule::GenerationEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit(), *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationEvent(), *out.mutable_generationevent()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationReadingProfile& in, generationmodule::GenerationReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit(), *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationReading(), *out.mutable_generationreading()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationStatusProfile& in, generationmodule::GenerationStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit(), *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationStatus(), *out.mutable_generationstatus()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::loadmodule::LoadControlProfile& in, loadmodule::LoadControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer(), *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadControl(), *out.mutable_loadcontrol()); // required field in DDS
}

void convert_to_proto(const openfmb::loadmodule::LoadEventProfile& in, loadmodule::LoadEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer(), *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadEvent(), *out.mutable_loadevent()); // required field in DDS
}

void convert_to_proto(const openfmb::loadmodule::LoadReadingProfile& in, loadmodule::LoadReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer(), *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadReading(), *out.mutable_loadreading()); // required field in DDS
}

void convert_to_proto(const openfmb::loadmodule::LoadStatusProfile& in, loadmodule::LoadStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer(), *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadStatus(), *out.mutable_loadstatus()); // required field in DDS
}

void convert_to_proto(const openfmb::metermodule::MeterReadingProfile& in, metermodule::MeterReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.meter(), *out.mutable_meter()); // required field in DDS

    convert_to_proto(in.meterReading(), *out.mutable_meterreading()); // required field in DDS
}

void convert_to_proto(const openfmb::reclosermodule::RecloserControlProfile& in, reclosermodule::RecloserControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.recloser(), *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserControl(), *out.mutable_reclosercontrol()); // required field in DDS
}

void convert_to_proto(const openfmb::reclosermodule::RecloserDiscreteControlProfile& in, reclosermodule::RecloserDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.recloser(), *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserDiscreteControl(), *out.mutable_recloserdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const openfmb::reclosermodule::RecloserEventProfile& in, reclosermodule::RecloserEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.recloser(), *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserEvent(), *out.mutable_recloserevent()); // required field in DDS
}

void convert_to_proto(const openfmb::reclosermodule::RecloserReadingProfile& in, reclosermodule::RecloserReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.recloser(), *out.mutable_recloser()); // required field in DDS

    for(const auto& value : in.recloserReading())
    {
        convert_to_proto(value, *out.mutable_recloserreading()->Add());
    }
}

void convert_to_proto(const openfmb::reclosermodule::RecloserStatusProfile& in, reclosermodule::RecloserStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.recloser(), *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserStatus(), *out.mutable_recloserstatus()); // required field in DDS
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlProfile& in, regulatormodule::RegulatorControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.regulatorControl(), *out.mutable_regulatorcontrol()); // required field in DDS

    convert_to_proto(in.regulatorSystem(), *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventProfile& in, regulatormodule::RegulatorEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.regulatorEvent(), *out.mutable_regulatorevent()); // required field in DDS

    convert_to_proto(in.regulatorSystem(), *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorReadingProfile& in, regulatormodule::RegulatorReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    for(const auto& value : in.regulatorReading())
    {
        convert_to_proto(value, *out.mutable_regulatorreading()->Add());
    }

    convert_to_proto(in.regulatorSystem(), *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorStatusProfile& in, regulatormodule::RegulatorStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.regulatorStatus(), *out.mutable_regulatorstatus()); // required field in DDS

    convert_to_proto(in.regulatorSystem(), *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::ResourceDiscreteControlProfile& in, resourcemodule::ResourceDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment(), *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.resourceDiscreteControl(), *out.mutable_resourcediscretecontrol()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::ResourceEventProfile& in, resourcemodule::ResourceEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment(), *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.resourceEvent(), *out.mutable_resourceevent()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment(), *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.resourceReading(), *out.mutable_resourcereading()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::ResourceStatusProfile& in, resourcemodule::ResourceStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment(), *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.resourceStatus(), *out.mutable_resourcestatus()); // required field in DDS
}

void convert_to_proto(const openfmb::solarmodule::SolarControlProfile& in, solarmodule::SolarControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarControl(), *out.mutable_solarcontrol()); // required field in DDS

    convert_to_proto(in.solarInverter(), *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const openfmb::solarmodule::SolarEventProfile& in, solarmodule::SolarEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarEvent(), *out.mutable_solarevent()); // required field in DDS

    convert_to_proto(in.solarInverter(), *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const openfmb::solarmodule::SolarReadingProfile& in, solarmodule::SolarReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarInverter(), *out.mutable_solarinverter()); // required field in DDS

    convert_to_proto(in.solarReading(), *out.mutable_solarreading()); // required field in DDS
}

void convert_to_proto(const openfmb::solarmodule::SolarStatusProfile& in, solarmodule::SolarStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarInverter(), *out.mutable_solarinverter()); // required field in DDS

    convert_to_proto(in.solarStatus(), *out.mutable_solarstatus()); // required field in DDS
}

void convert_to_proto(const openfmb::switchmodule::SwitchControlProfile& in, switchmodule::SwitchControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch(), *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchControl(), *out.mutable_switchcontrol()); // required field in DDS
}

void convert_to_proto(const openfmb::switchmodule::SwitchDiscreteControlProfile& in, switchmodule::SwitchDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch(), *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchDiscreteControl(), *out.mutable_switchdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const openfmb::switchmodule::SwitchEventProfile& in, switchmodule::SwitchEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch(), *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchEvent(), *out.mutable_switchevent()); // required field in DDS
}

void convert_to_proto(const openfmb::switchmodule::SwitchReadingProfile& in, switchmodule::SwitchReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch(), *out.mutable_protectedswitch()); // required field in DDS

    for(const auto& value : in.switchReading())
    {
        convert_to_proto(value, *out.mutable_switchreading()->Add());
    }
}

void convert_to_proto(const openfmb::switchmodule::SwitchStatusProfile& in, switchmodule::SwitchStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ied(), *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch(), *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchStatus(), *out.mutable_switchstatus()); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_to_proto(const openfmb::commonmodule::ControlMessageInfo& in, commonmodule::ControlMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.messageTimeStamp(), *out.mutable_messagetimestamp()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out)
{
    out.Clear();

    if(in.description().is_set()) out.mutable_description()->set_value(in.description().get());

    if(in.mRID().is_set()) out.mutable_mrid()->set_value(in.mRID().get());

    if(in.name().is_set()) out.mutable_name()->set_value(in.name().get());
}

void convert_to_proto(const openfmb::commonmodule::Timestamp& in, commonmodule::Timestamp& out)
{
    out.Clear();

    out.set_seconds(in.seconds());

    if(in.tq().is_set()) convert_to_proto(in.tq().get(), *out.mutable_tq());

    out.set_nanoseconds(in.nanoseconds());
}

void convert_to_proto(const openfmb::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out)
{
    out.Clear();

    out.set_clockfailure(in.clockFailure());

    out.set_clocknotsynchronized(in.clockNotSynchronized());

    out.set_leapsecondsknown(in.leapSecondsKnown());

    out.set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(in.timeAccuracy().underlying()));
}

void convert_to_proto(const openfmb::breakermodule::Breaker& in, breakermodule::Breaker& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_namedobject()); // inherited type

    out.set_mrid(in.mRID());
}

void convert_to_proto(const openfmb::commonmodule::NamedObject& in, commonmodule::NamedObject& out)
{
    out.Clear();

    if(in.description().is_set()) out.mutable_description()->set_value(in.description().get());

    if(in.name().is_set()) out.mutable_name()->set_value(in.name().get());
}

void convert_to_proto(const openfmb::breakermodule::BreakerDiscreteControl& in, breakermodule::BreakerDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.breakerDiscreteControlXCBR().is_set()) convert_to_proto(in.breakerDiscreteControlXCBR().get(), *out.mutable_breakerdiscretecontrolxcbr());
}

void convert_to_proto(const openfmb::commonmodule::ControlValue& in, commonmodule::ControlValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk().is_set()) out.mutable_modblk()->set_value(in.modBlk().get());

    if(in.reset().is_set()) out.mutable_reset()->set_value(in.reset().get());
}

void convert_to_proto(const openfmb::commonmodule::CheckConditions& in, commonmodule::CheckConditions& out)
{
    out.Clear();

    if(in.interlockCheck().is_set()) out.mutable_interlockcheck()->set_value(in.interlockCheck().get());

    if(in.synchroCheck().is_set()) out.mutable_synchrocheck()->set_value(in.synchroCheck().get());
}

void convert_to_proto(const openfmb::breakermodule::BreakerDiscreteControlXCBR& in, breakermodule::BreakerDiscreteControlXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());

    if(in.ProtectionMode().is_set()) convert_to_proto(in.ProtectionMode().get(), *out.mutable_protectionmode());

    if(in.RecloseEnabled().is_set()) convert_to_proto(in.RecloseEnabled().get(), *out.mutable_recloseenabled());

    if(in.ResetProtectionPickup().is_set()) convert_to_proto(in.ResetProtectionPickup().get(), *out.mutable_resetprotectionpickup());
}

void convert_to_proto(const openfmb::commonmodule::LogicalNodeForControl& in, commonmodule::LogicalNodeForControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::PhaseDPC& in, commonmodule::PhaseDPC& out)
{
    out.Clear();

    if(in.phs3().is_set()) convert_to_proto(in.phs3().get(), *out.mutable_phs3());

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());
}

void convert_to_proto(const openfmb::commonmodule::ControlDPC& in, commonmodule::ControlDPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal());
}

void convert_to_proto(const openfmb::commonmodule::ControlINC& in, commonmodule::ControlINC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal());
}

void convert_to_proto(const openfmb::commonmodule::ControlSPC& in, commonmodule::ControlSPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal());
}

void convert_to_proto(const openfmb::commonmodule::IED& in, commonmodule::IED& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::EventMessageInfo& in, commonmodule::EventMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const openfmb::breakermodule::BreakerEvent& in, breakermodule::BreakerEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.statusAndEventXCBR().is_set()) convert_to_proto(in.statusAndEventXCBR().get(), *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const openfmb::commonmodule::EventValue& in, commonmodule::EventValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk().is_set()) out.mutable_modblk()->set_value(in.modBlk().get());
}

void convert_to_proto(const openfmb::commonmodule::StatusAndEventXCBR& in, commonmodule::StatusAndEventXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());

    if(in.ProtectionPickup().is_set()) convert_to_proto(in.ProtectionPickup().get(), *out.mutable_protectionpickup());

    if(in.ProtectionMode().is_set()) convert_to_proto(in.ProtectionMode().get(), *out.mutable_protectionmode());

    if(in.RecloseEnabled().is_set()) convert_to_proto(in.RecloseEnabled().get(), *out.mutable_recloseenabled());

    if(in.ReclosingAction().is_set()) convert_to_proto(in.ReclosingAction().get(), *out.mutable_reclosingaction());
}

void convert_to_proto(const openfmb::commonmodule::LogicalNodeForEventAndStatus& in, commonmodule::LogicalNodeForEventAndStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Beh().is_set()) convert_to_proto(in.Beh().get(), *out.mutable_beh());

    if(in.EEHealth().is_set()) convert_to_proto(in.EEHealth().get(), *out.mutable_eehealth());

    if(in.HotLineTag().is_set()) convert_to_proto(in.HotLineTag().get(), *out.mutable_hotlinetag());

    if(in.RemoteBlk().is_set()) convert_to_proto(in.RemoteBlk().get(), *out.mutable_remoteblk());
}

void convert_to_proto(const openfmb::commonmodule::ENS_BehaviourModeKind& in, commonmodule::ENS_BehaviourModeKind& out)
{
    out.Clear();

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    out.set_stval(static_cast<commonmodule::BehaviourModeKind>(in.stVal().underlying()));

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::Quality& in, commonmodule::Quality& out)
{
    out.Clear();

    convert_to_proto(in.detailQual(), *out.mutable_detailqual()); // required field in DDS

    out.set_operatorblocked(in.operatorBlocked());

    out.set_source(static_cast<commonmodule::SourceKind>(in.source().underlying()));

    out.set_test(in.test());

    out.set_validity(static_cast<commonmodule::ValidityKind>(in.validity().underlying()));
}

void convert_to_proto(const openfmb::commonmodule::DetailQual& in, commonmodule::DetailQual& out)
{
    out.Clear();

    out.set_badreference(in.badReference());

    out.set_failure(in.failure());

    out.set_inaccurate(in.inaccurate());

    out.set_inconsistent(in.inconsistent());

    out.set_olddata(in.oldData());

    out.set_oscillatory(in.oscillatory());

    out.set_outofrange(in.outOfRange());

    out.set_overflow(in.overflow());
}

void convert_to_proto(const openfmb::commonmodule::ENS_HealthKind& in, commonmodule::ENS_HealthKind& out)
{
    out.Clear();

    if(in.d().is_set()) out.mutable_d()->set_value(in.d().get());

    out.set_stval(static_cast<commonmodule::HealthKind>(in.stVal().underlying()));
}

void convert_to_proto(const openfmb::commonmodule::StatusSPS& in, commonmodule::StatusSPS& out)
{
    out.Clear();

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    out.set_stval(in.stVal());

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::ENS_DynamicTestKind& in, commonmodule::ENS_DynamicTestKind& out)
{
    out.Clear();

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    out.set_stval(static_cast<commonmodule::DynamicTestKind>(in.stVal().underlying()));

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::PhaseDPS& in, commonmodule::PhaseDPS& out)
{
    out.Clear();

    if(in.phs3().is_set()) convert_to_proto(in.phs3().get(), *out.mutable_phs3());

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());
}

void convert_to_proto(const openfmb::commonmodule::StatusDPS& in, commonmodule::StatusDPS& out)
{
    out.Clear();

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    out.set_stval(static_cast<commonmodule::DbPosKind>(in.stVal().underlying()));

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::PhaseSPS& in, commonmodule::PhaseSPS& out)
{
    out.Clear();

    if(in.phs3().is_set()) convert_to_proto(in.phs3().get(), *out.mutable_phs3());

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());
}

void convert_to_proto(const openfmb::commonmodule::StatusINS& in, commonmodule::StatusINS& out)
{
    out.Clear();

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    out.set_stval(in.stVal());

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::PhaseRecloseAction& in, commonmodule::PhaseRecloseAction& out)
{
    out.Clear();

    if(in.phs3().is_set()) out.mutable_phs3()->set_value(static_cast<commonmodule::RecloseActionKind>(in.phs3().get().underlying()));  // wrapped optional enum

    if(in.phsA().is_set()) out.mutable_phsa()->set_value(static_cast<commonmodule::RecloseActionKind>(in.phsA().get().underlying()));  // wrapped optional enum

    if(in.phsB().is_set()) out.mutable_phsb()->set_value(static_cast<commonmodule::RecloseActionKind>(in.phsB().get().underlying()));  // wrapped optional enum

    if(in.phsC().is_set()) out.mutable_phsc()->set_value(static_cast<commonmodule::RecloseActionKind>(in.phsC().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const openfmb::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.diffReadingMMXU().is_set()) convert_to_proto(in.diffReadingMMXU().get(), *out.mutable_diffreadingmmxu());

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.Clear();

    convert_to_proto(in.terminal(), *out.mutable_terminal()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::Terminal& in, commonmodule::Terminal& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_acdcterminal()); // inherited type

    if(in.phases().is_set()) out.mutable_phases()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.phases().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.connected().is_set()) out.mutable_connected()->set_value(in.connected().get());

    if(in.sequenceNumber().is_set()) out.mutable_sequencenumber()->set_value(in.sequenceNumber().get());
}

void convert_to_proto(const openfmb::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.A().is_set()) convert_to_proto(in.A().get(), *out.mutable_a());

    if(in.ClcMth().is_set()) convert_to_proto(in.ClcMth().get(), *out.mutable_clcmth());

    if(in.Hz().is_set()) convert_to_proto(in.Hz().get(), *out.mutable_hz());

    if(in.PF().is_set()) convert_to_proto(in.PF().get(), *out.mutable_pf());

    if(in.PFSign().is_set()) convert_to_proto(in.PFSign().get(), *out.mutable_pfsign());

    if(in.PhV().is_set()) convert_to_proto(in.PhV().get(), *out.mutable_phv());

    if(in.PPV().is_set()) convert_to_proto(in.PPV().get(), *out.mutable_ppv());

    if(in.VA().is_set()) convert_to_proto(in.VA().get(), *out.mutable_va());

    if(in.VAr().is_set()) convert_to_proto(in.VAr().get(), *out.mutable_var());

    if(in.W().is_set()) convert_to_proto(in.W().get(), *out.mutable_w());
}

void convert_to_proto(const openfmb::commonmodule::WYE& in, commonmodule::WYE& out)
{
    out.Clear();

    if(in.net().is_set()) convert_to_proto(in.net().get(), *out.mutable_net());

    if(in.neut().is_set()) convert_to_proto(in.neut().get(), *out.mutable_neut());

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());
}

void convert_to_proto(const openfmb::commonmodule::CMV& in, commonmodule::CMV& out)
{
    out.Clear();

    convert_to_proto(in.cVal(), *out.mutable_cval()); // required field in DDS

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::Vector& in, commonmodule::Vector& out)
{
    out.Clear();

    if(in.ang().is_set()) convert_to_proto(in.ang().get(), *out.mutable_ang());

    convert_to_proto(in.mag(), *out.mutable_mag()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out)
{
    out.Clear();

    if(in.f().is_set()) out.mutable_f()->set_value(in.f().get());

    if(in.i().is_set()) out.mutable_i()->set_value(in.i().get());
}

void convert_to_proto(const openfmb::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::CalcMethodKind>(in.setVal().underlying()));
}

void convert_to_proto(const openfmb::commonmodule::MV& in, commonmodule::MV& out)
{
    out.Clear();

    convert_to_proto(in.mag(), *out.mutable_mag()); // required field in DDS

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());

    if(in.units().is_set()) convert_to_proto(in.units().get(), *out.mutable_units());
}

void convert_to_proto(const openfmb::commonmodule::Unit& in, commonmodule::Unit& out)
{
    out.Clear();

    if(in.multiplier().is_set()) out.mutable_multiplier()->set_value(static_cast<commonmodule::UnitMultiplierKind>(in.multiplier().get().underlying()));  // wrapped optional enum

    out.set_siunit(static_cast<commonmodule::UnitSymbolKind>(in.SIUnit().underlying()));
}

void convert_to_proto(const openfmb::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::PFSignKind>(in.setVal().underlying()));
}

void convert_to_proto(const openfmb::commonmodule::DEL& in, commonmodule::DEL& out)
{
    out.Clear();

    if(in.phsAB().is_set()) convert_to_proto(in.phsAB().get(), *out.mutable_phsab());

    if(in.phsBC().is_set()) convert_to_proto(in.phsBC().get(), *out.mutable_phsbc());

    if(in.phsCA().is_set()) convert_to_proto(in.phsCA().get(), *out.mutable_phsca());
}

void convert_to_proto(const openfmb::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out)
{
    out.Clear();

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsAB().is_set()) convert_to_proto(in.phsAB().get(), *out.mutable_phsab());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsBC().is_set()) convert_to_proto(in.phsBC().get(), *out.mutable_phsbc());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());

    if(in.phsCA().is_set()) convert_to_proto(in.phsCA().get(), *out.mutable_phsca());
}

void convert_to_proto(const openfmb::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.DmdVAh().is_set()) convert_to_proto(in.DmdVAh().get(), *out.mutable_dmdvah());

    if(in.DmdVArh().is_set()) convert_to_proto(in.DmdVArh().get(), *out.mutable_dmdvarh());

    if(in.DmdWh().is_set()) convert_to_proto(in.DmdWh().get(), *out.mutable_dmdwh());

    if(in.SupVAh().is_set()) convert_to_proto(in.SupVAh().get(), *out.mutable_supvah());

    if(in.SupVArh().is_set()) convert_to_proto(in.SupVArh().get(), *out.mutable_supvarh());

    if(in.SupWh().is_set()) convert_to_proto(in.SupWh().get(), *out.mutable_supwh());

    if(in.TotVAh().is_set()) convert_to_proto(in.TotVAh().get(), *out.mutable_totvah());

    if(in.TotVArh().is_set()) convert_to_proto(in.TotVArh().get(), *out.mutable_totvarh());

    if(in.TotWh().is_set()) convert_to_proto(in.TotWh().get(), *out.mutable_totwh());
}

void convert_to_proto(const openfmb::commonmodule::BCR& in, commonmodule::BCR& out)
{
    out.Clear();

    out.set_actval(in.actVal());

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.DmdVAh().is_set()) convert_to_proto(in.DmdVAh().get(), *out.mutable_dmdvah());

    if(in.DmdVArh().is_set()) convert_to_proto(in.DmdVArh().get(), *out.mutable_dmdvarh());

    if(in.DmdWh().is_set()) convert_to_proto(in.DmdWh().get(), *out.mutable_dmdwh());

    if(in.SupVAh().is_set()) convert_to_proto(in.SupVAh().get(), *out.mutable_supvah());

    if(in.SupVArh().is_set()) convert_to_proto(in.SupVArh().get(), *out.mutable_supvarh());

    if(in.SupWh().is_set()) convert_to_proto(in.SupWh().get(), *out.mutable_supwh());

    if(in.TotVAh().is_set()) convert_to_proto(in.TotVAh().get(), *out.mutable_totvah());

    if(in.TotVArh().is_set()) convert_to_proto(in.TotVArh().get(), *out.mutable_totvarh());

    if(in.TotWh().is_set()) convert_to_proto(in.TotWh().get(), *out.mutable_totwh());
}

void convert_to_proto(const openfmb::commonmodule::StatusMessageInfo& in, commonmodule::StatusMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const openfmb::breakermodule::BreakerStatus& in, breakermodule::BreakerStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.statusAndEventXCBR().is_set()) convert_to_proto(in.statusAndEventXCBR().get(), *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const openfmb::commonmodule::StatusValue& in, commonmodule::StatusValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk().is_set()) out.mutable_modblk()->set_value(in.modBlk().get());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankControl& in, capbankmodule::CapBankControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.capBankControlFSCC().is_set()) convert_to_proto(in.capBankControlFSCC().get(), *out.mutable_capbankcontrolfscc());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankControlFSCC& in, capbankmodule::CapBankControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.capBankControlScheduleFSCH().is_set()) convert_to_proto(in.capBankControlScheduleFSCH().get(), *out.mutable_capbankcontrolschedulefsch());
}

void convert_to_proto(const openfmb::commonmodule::ControlFSCC& in, commonmodule::ControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.controlScheduleFSCH().is_set()) convert_to_proto(in.controlScheduleFSCH().get(), *out.mutable_controlschedulefsch());

    if(in.islandControlScheduleFSCH().is_set()) convert_to_proto(in.islandControlScheduleFSCH().get(), *out.mutable_islandcontrolschedulefsch());
}

void convert_to_proto(const openfmb::commonmodule::ControlScheduleFSCH& in, commonmodule::ControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValACSG(), *out.mutable_valacsg()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::ScheduleCSG& in, commonmodule::ScheduleCSG& out)
{
    out.Clear();

    for(const auto& value : in.schPts())
    {
        convert_to_proto(value, *out.mutable_schpts()->Add());
    }
}

void convert_to_proto(const openfmb::commonmodule::SchedulePoint& in, commonmodule::SchedulePoint& out)
{
    out.Clear();

    for(const auto& value : in.scheduleParameter())
    {
        convert_to_proto(value, *out.mutable_scheduleparameter()->Add());
    }

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::ENG_ScheduleParameter& in, commonmodule::ENG_ScheduleParameter& out)
{
    out.Clear();

    out.set_scheduleparametertype(static_cast<commonmodule::ScheduleParameterKind>(in.scheduleParameterType().underlying()));

    out.set_value(in.value());
}

void convert_to_proto(const openfmb::commonmodule::ControlTimestamp& in, commonmodule::ControlTimestamp& out)
{
    out.Clear();

    out.set_seconds(in.seconds());

    out.set_nanoseconds(in.nanoseconds());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankControlScheduleFSCH& in, capbankmodule::CapBankControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValCSG(), *out.mutable_valcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankCSG& in, capbankmodule::CapBankCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::capbankmodule::CapBankPoint& in, capbankmodule::CapBankPoint& out)
{
    out.Clear();

    if(in.control().is_set()) convert_to_proto(in.control().get(), *out.mutable_control());

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::capbankmodule::CapBankEventAndStatusYPSH& in, capbankmodule::CapBankEventAndStatusYPSH& out)
{
    out.Clear();

    if(in.BlkCls().is_set()) convert_to_proto(in.BlkCls().get(), *out.mutable_blkcls());

    if(in.BlkOpn().is_set()) convert_to_proto(in.BlkOpn().get(), *out.mutable_blkopn());

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());

    if(in.ShOpCap().is_set()) convert_to_proto(in.ShOpCap().get(), *out.mutable_shopcap());
}

void convert_to_proto(const openfmb::commonmodule::ENS_SwitchingCapabilityKind& in, commonmodule::ENS_SwitchingCapabilityKind& out)
{
    out.Clear();

    if(in.blkEna().is_set()) out.mutable_blkena()->set_value(in.blkEna().get());

    out.set_stval(static_cast<commonmodule::SwitchingCapabilityKind>(in.stVal().underlying()));
}

void convert_to_proto(const openfmb::capbankmodule::CapBankSystem& in, capbankmodule::CapBankSystem& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::capbankmodule::CapBankDiscreteControl& in, capbankmodule::CapBankDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.capBankDiscreteControlZCAP().is_set()) convert_to_proto(in.capBankDiscreteControlZCAP().get(), *out.mutable_capbankdiscretecontrolzcap());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankDiscreteControlZCAP& in, capbankmodule::CapBankDiscreteControlZCAP& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankEvent& in, capbankmodule::CapBankEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.capBankEventAndStatusZCAP().is_set()) convert_to_proto(in.capBankEventAndStatusZCAP().get(), *out.mutable_capbankeventandstatuszcap());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankEventAndStatusZCAP& in, capbankmodule::CapBankEventAndStatusZCAP& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.PointStatus().is_set()) convert_to_proto(in.PointStatus().get(), *out.mutable_pointstatus());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankEventAndStatusPoint& in, capbankmodule::CapBankEventAndStatusPoint& out)
{
    out.Clear();

    if(in.eventAndStatus().is_set()) convert_to_proto(in.eventAndStatus().get(), *out.mutable_eventandstatus());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankReading& in, capbankmodule::CapBankReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::capbankmodule::CapBankStatus& in, capbankmodule::CapBankStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.capBankEventAndStatusZCAP().is_set()) convert_to_proto(in.capBankEventAndStatusZCAP().get(), *out.mutable_capbankeventandstatuszcap());
}

void convert_to_proto(const openfmb::commonmodule::ESS& in, commonmodule::ESS& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::essmodule::ESSControl& in, essmodule::ESSControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.essControlFSCC().is_set()) convert_to_proto(in.essControlFSCC().get(), *out.mutable_esscontrolfscc());
}

void convert_to_proto(const openfmb::essmodule::EssControlFSCC& in, essmodule::EssControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.essControlScheduleFSCH().is_set()) convert_to_proto(in.essControlScheduleFSCH().get(), *out.mutable_esscontrolschedulefsch());
}

void convert_to_proto(const openfmb::essmodule::ESSControlScheduleFSCH& in, essmodule::ESSControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG(), *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::essmodule::ESSCSG& in, essmodule::ESSCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::essmodule::ESSPoint& in, essmodule::ESSPoint& out)
{
    out.Clear();

    if(in.blackStartEnabled().is_set()) convert_to_proto(in.blackStartEnabled().get(), *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled().is_set()) convert_to_proto(in.frequencySetPointEnabled().get(), *out.mutable_frequencysetpointenabled());

    if(in.function().is_set()) convert_to_proto(in.function().get(), *out.mutable_function());

    if(in.mode().is_set()) convert_to_proto(in.mode().get(), *out.mutable_mode());

    if(in.pctHzDroop().is_set()) out.mutable_pcthzdroop()->set_value(in.pctHzDroop().get());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.reset().is_set()) convert_to_proto(in.reset().get(), *out.mutable_reset());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.syncBackToGrid().is_set()) convert_to_proto(in.syncBackToGrid().get(), *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled().is_set()) convert_to_proto(in.transToIslndOnGridLossEnabled().get(), *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::essmodule::ESSFunction& in, essmodule::ESSFunction& out)
{
    out.Clear();

    if(in.capacityFirming().is_set()) convert_to_proto(in.capacityFirming().get(), *out.mutable_capacityfirming());

    if(in.frequencyRegulation().is_set()) convert_to_proto(in.frequencyRegulation().get(), *out.mutable_frequencyregulation());

    if(in.peakShaving().is_set()) convert_to_proto(in.peakShaving().get(), *out.mutable_peakshaving());

    if(in.socLimit().is_set()) convert_to_proto(in.socLimit().get(), *out.mutable_soclimit());

    if(in.socManagement().is_set()) convert_to_proto(in.socManagement().get(), *out.mutable_socmanagement());

    if(in.voltageDroop().is_set()) convert_to_proto(in.voltageDroop().get(), *out.mutable_voltagedroop());

    if(in.voltagePI().is_set()) convert_to_proto(in.voltagePI().get(), *out.mutable_voltagepi());
}

void convert_to_proto(const openfmb::essmodule::CapacityFirming& in, essmodule::CapacityFirming& out)
{
    out.Clear();

    if(in.capacityFirmingCtl().is_set()) out.mutable_capacityfirmingctl()->set_value(in.capacityFirmingCtl().get());

    if(in.limitNegative_dp_dt().is_set()) out.mutable_limitnegative_dp_dt()->set_value(in.limitNegative_dp_dt().get());

    if(in.limitPositive_dp_dt().is_set()) out.mutable_limitpositive_dp_dt()->set_value(in.limitPositive_dp_dt().get());
}

void convert_to_proto(const openfmb::essmodule::FrequencyRegulation& in, essmodule::FrequencyRegulation& out)
{
    out.Clear();

    if(in.frequencyDeadBandMinus().is_set()) out.mutable_frequencydeadbandminus()->set_value(in.frequencyDeadBandMinus().get());

    if(in.frequencyDeadBandPlus().is_set()) out.mutable_frequencydeadbandplus()->set_value(in.frequencyDeadBandPlus().get());

    if(in.frequencyRegulationCtl().is_set()) out.mutable_frequencyregulationctl()->set_value(in.frequencyRegulationCtl().get());

    if(in.frequencySetPoint().is_set()) out.mutable_frequencysetpoint()->set_value(in.frequencySetPoint().get());

    if(in.gridFrequencyStableBandMinus().is_set()) out.mutable_gridfrequencystablebandminus()->set_value(in.gridFrequencyStableBandMinus().get());

    if(in.gridFrequencyStableBandPlus().is_set()) out.mutable_gridfrequencystablebandplus()->set_value(in.gridFrequencyStableBandPlus().get());

    if(in.overFrequencyDroop().is_set()) out.mutable_overfrequencydroop()->set_value(in.overFrequencyDroop().get());

    if(in.underFrequencyDroop().is_set()) out.mutable_underfrequencydroop()->set_value(in.underFrequencyDroop().get());
}

void convert_to_proto(const openfmb::essmodule::PeakShaving& in, essmodule::PeakShaving& out)
{
    out.Clear();

    if(in.baseShavingLimit().is_set()) out.mutable_baseshavinglimit()->set_value(in.baseShavingLimit().get());

    if(in.peakShavingCtl().is_set()) out.mutable_peakshavingctl()->set_value(in.peakShavingCtl().get());

    if(in.peakShavingLimit().is_set()) out.mutable_peakshavinglimit()->set_value(in.peakShavingLimit().get());

    if(in.socManagementAllowedHighLimit().is_set()) out.mutable_socmanagementallowedhighlimit()->set_value(in.socManagementAllowedHighLimit().get());

    if(in.socManagementAllowedLowLimit().is_set()) out.mutable_socmanagementallowedlowlimit()->set_value(in.socManagementAllowedLowLimit().get());
}

void convert_to_proto(const openfmb::essmodule::SocLimit& in, essmodule::SocLimit& out)
{
    out.Clear();

    if(in.socHighLimit().is_set()) out.mutable_sochighlimit()->set_value(in.socHighLimit().get());

    if(in.socHighLimitHysteresis().is_set()) out.mutable_sochighlimithysteresis()->set_value(in.socHighLimitHysteresis().get());

    if(in.socLimitCtl().is_set()) out.mutable_soclimitctl()->set_value(in.socLimitCtl().get());

    if(in.socLowLimit().is_set()) out.mutable_soclowlimit()->set_value(in.socLowLimit().get());

    if(in.socLowLimitHysteresis().is_set()) out.mutable_soclowlimithysteresis()->set_value(in.socLowLimitHysteresis().get());
}

void convert_to_proto(const openfmb::essmodule::SOCManagement& in, essmodule::SOCManagement& out)
{
    out.Clear();

    if(in.socDeadBandMinus().is_set()) out.mutable_socdeadbandminus()->set_value(in.socDeadBandMinus().get());

    if(in.socDeadBandPlus().is_set()) out.mutable_socdeadbandplus()->set_value(in.socDeadBandPlus().get());

    if(in.socManagementCtl().is_set()) out.mutable_socmanagementctl()->set_value(in.socManagementCtl().get());

    if(in.socPowerSetPoint().is_set()) out.mutable_socpowersetpoint()->set_value(in.socPowerSetPoint().get());

    if(in.socSetPoint().is_set()) out.mutable_socsetpoint()->set_value(in.socSetPoint().get());
}

void convert_to_proto(const openfmb::essmodule::VoltageDroop& in, essmodule::VoltageDroop& out)
{
    out.Clear();

    if(in.voltageDroopCtl().is_set()) out.mutable_voltagedroopctl()->set_value(in.voltageDroopCtl().get());

    if(in.voltageRegulation().is_set()) convert_to_proto(in.voltageRegulation().get(), *out.mutable_voltageregulation());
}

void convert_to_proto(const openfmb::essmodule::VoltageRegulation& in, essmodule::VoltageRegulation& out)
{
    out.Clear();

    if(in.overVoltageDroop().is_set()) out.mutable_overvoltagedroop()->set_value(in.overVoltageDroop().get());

    if(in.underVoltageDroop().is_set()) out.mutable_undervoltagedroop()->set_value(in.underVoltageDroop().get());

    if(in.voltageDeadBandMinus().is_set()) out.mutable_voltagedeadbandminus()->set_value(in.voltageDeadBandMinus().get());

    if(in.voltageDeadBandPlus().is_set()) out.mutable_voltagedeadbandplus()->set_value(in.voltageDeadBandPlus().get());

    if(in.voltageSetPoint().is_set()) out.mutable_voltagesetpoint()->set_value(in.voltageSetPoint().get());
}

void convert_to_proto(const openfmb::essmodule::VoltagePI& in, essmodule::VoltagePI& out)
{
    out.Clear();

    if(in.voltagePICtl().is_set()) out.mutable_voltagepictl()->set_value(in.voltagePICtl().get());

    if(in.voltageRegulation().is_set()) convert_to_proto(in.voltageRegulation().get(), *out.mutable_voltageregulation());
}

void convert_to_proto(const openfmb::commonmodule::ENG_GridConnectModeKind& in, commonmodule::ENG_GridConnectModeKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::GridConnectModeKind>(in.setVal().underlying()));

    if(in.setValExtension().is_set()) out.mutable_setvalextension()->set_value(in.setValExtension().get());
}

void convert_to_proto(const openfmb::commonmodule::RampRate& in, commonmodule::RampRate& out)
{
    out.Clear();

    if(in.negativeReactivePowerKVArPerMin().is_set()) out.mutable_negativereactivepowerkvarpermin()->set_value(in.negativeReactivePowerKVArPerMin().get());

    if(in.negativeRealPowerKWPerMin().is_set()) out.mutable_negativerealpowerkwpermin()->set_value(in.negativeRealPowerKWPerMin().get());

    if(in.positiveReactivePowerKVArPerMin().is_set()) out.mutable_positivereactivepowerkvarpermin()->set_value(in.positiveReactivePowerKVArPerMin().get());

    if(in.positiveRealPowerKWPerMin().is_set()) out.mutable_positiverealpowerkwpermin()->set_value(in.positiveRealPowerKWPerMin().get());
}

void convert_to_proto(const openfmb::essmodule::ESSEvent& in, essmodule::ESSEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.essEventZBAT().is_set()) convert_to_proto(in.essEventZBAT().get(), *out.mutable_esseventzbat());

    if(in.essEventZGEN().is_set()) convert_to_proto(in.essEventZGEN().get(), *out.mutable_esseventzgen());
}

void convert_to_proto(const openfmb::essmodule::EssEventZBAT& in, essmodule::EssEventZBAT& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.BatHi().is_set()) convert_to_proto(in.BatHi().get(), *out.mutable_bathi());

    if(in.BatLo().is_set()) convert_to_proto(in.BatLo().get(), *out.mutable_batlo());

    if(in.BatSt().is_set()) convert_to_proto(in.BatSt().get(), *out.mutable_batst());

    if(in.Soc().is_set()) convert_to_proto(in.Soc().get(), *out.mutable_soc());

    if(in.Stdby().is_set()) convert_to_proto(in.Stdby().get(), *out.mutable_stdby());
}

void convert_to_proto(const openfmb::essmodule::ESSEventZGEN& in, essmodule::ESSEventZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_esseventandstatuszgen()); // inherited type
}

void convert_to_proto(const openfmb::essmodule::ESSEventAndStatusZGEN& in, essmodule::ESSEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt().is_set()) convert_to_proto(in.AuxPwrSt().get(), *out.mutable_auxpwrst());

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.EmgStop().is_set()) convert_to_proto(in.EmgStop().get(), *out.mutable_emgstop());

    if(in.GnSynSt().is_set()) convert_to_proto(in.GnSynSt().get(), *out.mutable_gnsynst());

    if(in.PointStatus().is_set()) convert_to_proto(in.PointStatus().get(), *out.mutable_pointstatus());
}

void convert_to_proto(const openfmb::essmodule::ESSPointStatus& in, essmodule::ESSPointStatus& out)
{
    out.Clear();

    if(in.blackStartEnabled().is_set()) convert_to_proto(in.blackStartEnabled().get(), *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled().is_set()) convert_to_proto(in.frequencySetPointEnabled().get(), *out.mutable_frequencysetpointenabled());

    if(in.function().is_set()) convert_to_proto(in.function().get(), *out.mutable_function());

    if(in.mode().is_set()) convert_to_proto(in.mode().get(), *out.mutable_mode());

    if(in.pctHzDroop().is_set()) out.mutable_pcthzdroop()->set_value(in.pctHzDroop().get());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.syncBackToGrid().is_set()) convert_to_proto(in.syncBackToGrid().get(), *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled().is_set()) convert_to_proto(in.transToIslndOnGridLossEnabled().get(), *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());
}

void convert_to_proto(const openfmb::essmodule::ESSReading& in, essmodule::ESSReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::essmodule::ESSStatus& in, essmodule::ESSStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.essStatusZBAT().is_set()) convert_to_proto(in.essStatusZBAT().get(), *out.mutable_essstatuszbat());

    if(in.essStatusZGEN().is_set()) convert_to_proto(in.essStatusZGEN().get(), *out.mutable_essstatuszgen());
}

void convert_to_proto(const openfmb::essmodule::EssStatusZBAT& in, essmodule::EssStatusZBAT& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.BatSt().is_set()) convert_to_proto(in.BatSt().get(), *out.mutable_batst());

    if(in.GriMod().is_set()) convert_to_proto(in.GriMod().get(), *out.mutable_grimod());

    if(in.Soc().is_set()) convert_to_proto(in.Soc().get(), *out.mutable_soc());

    if(in.Stdby().is_set()) convert_to_proto(in.Stdby().get(), *out.mutable_stdby());
}

void convert_to_proto(const openfmb::essmodule::ESSStatusZGEN& in, essmodule::ESSStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_esseventandstatuszgen()); // inherited type
}

void convert_to_proto(const openfmb::generationmodule::GeneratingUnit& in, generationmodule::GeneratingUnit& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.maxOperatingP().is_set()) convert_to_proto(in.maxOperatingP().get(), *out.mutable_maxoperatingp());
}

void convert_to_proto(const openfmb::commonmodule::ActivePower& in, commonmodule::ActivePower& out)
{
    out.Clear();

    if(in.multiplier().is_set()) out.mutable_multiplier()->set_value(static_cast<commonmodule::UnitMultiplierKind>(in.multiplier().get().underlying()));  // wrapped optional enum

    if(in.unit().is_set()) out.mutable_unit()->set_value(static_cast<commonmodule::UnitSymbolKind>(in.unit().get().underlying()));  // wrapped optional enum

    if(in.value().is_set()) out.mutable_value()->set_value(in.value().get());
}

void convert_to_proto(const openfmb::generationmodule::GenerationControl& in, generationmodule::GenerationControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.generationControlFSCC().is_set()) convert_to_proto(in.generationControlFSCC().get(), *out.mutable_generationcontrolfscc());
}

void convert_to_proto(const openfmb::generationmodule::GenerationControlFSCC& in, generationmodule::GenerationControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.GenerationControlScheduleFSCH().is_set()) convert_to_proto(in.GenerationControlScheduleFSCH().get(), *out.mutable_generationcontrolschedulefsch());
}

void convert_to_proto(const openfmb::generationmodule::GenerationControlScheduleFSCH& in, generationmodule::GenerationControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG(), *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationCSG& in, generationmodule::GenerationCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::generationmodule::GenerationPoint& in, generationmodule::GenerationPoint& out)
{
    out.Clear();

    if(in.blackStartEnabled().is_set()) convert_to_proto(in.blackStartEnabled().get(), *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled().is_set()) convert_to_proto(in.frequencySetPointEnabled().get(), *out.mutable_frequencysetpointenabled());

    if(in.pctHzDroop().is_set()) out.mutable_pcthzdroop()->set_value(in.pctHzDroop().get());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.reset().is_set()) convert_to_proto(in.reset().get(), *out.mutable_reset());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.syncBackToGrid().is_set()) convert_to_proto(in.syncBackToGrid().get(), *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled().is_set()) convert_to_proto(in.transToIslndOnGridLossEnabled().get(), *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::generationmodule::GenerationDiscreteControl& in, generationmodule::GenerationDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.ReactivePowerControl().is_set()) convert_to_proto(in.ReactivePowerControl().get(), *out.mutable_reactivepowercontrol());

    if(in.RealPowerControl().is_set()) convert_to_proto(in.RealPowerControl().get(), *out.mutable_realpowercontrol());
}

void convert_to_proto(const openfmb::generationmodule::ReactivePowerControl& in, generationmodule::ReactivePowerControl& out)
{
    out.Clear();

    if(in.advancedSetpoint().is_set()) convert_to_proto(in.advancedSetpoint().get(), *out.mutable_advancedsetpoint());

    if(in.droopSetpoint().is_set()) convert_to_proto(in.droopSetpoint().get(), *out.mutable_droopsetpoint());

    if(in.powerFactorSetpoint().is_set()) out.mutable_powerfactorsetpoint()->set_value(in.powerFactorSetpoint().get());

    if(in.reactivePowerControlMode().is_set()) out.mutable_reactivepowercontrolmode()->set_value(static_cast<generationmodule::ReactivePowerControlKind>(in.reactivePowerControlMode().get().underlying()));  // wrapped optional enum

    if(in.reactivePowerSetpoint().is_set()) out.mutable_reactivepowersetpoint()->set_value(in.reactivePowerSetpoint().get());

    if(in.voltageSetpoint().is_set()) out.mutable_voltagesetpoint()->set_value(in.voltageSetpoint().get());
}

void convert_to_proto(const openfmb::generationmodule::VV11PlaceHolder& in, generationmodule::VV11PlaceHolder& out)
{
    out.Clear();

    out.set_point(in.point());

    if(in.unloadedOffset().is_set()) out.mutable_unloadedoffset()->set_value(in.unloadedOffset().get());
}

void convert_to_proto(const openfmb::generationmodule::DroopParameter& in, generationmodule::DroopParameter& out)
{
    out.Clear();

    if(in.slope().is_set()) out.mutable_slope()->set_value(in.slope().get());

    if(in.unloadedOffset().is_set()) out.mutable_unloadedoffset()->set_value(in.unloadedOffset().get());
}

void convert_to_proto(const openfmb::generationmodule::RealPowerControl& in, generationmodule::RealPowerControl& out)
{
    out.Clear();

    if(in.advancedSetpoint().is_set()) convert_to_proto(in.advancedSetpoint().get(), *out.mutable_advancedsetpoint());

    if(in.droopSetpoint().is_set()) convert_to_proto(in.droopSetpoint().get(), *out.mutable_droopsetpoint());

    if(in.isochronousSetpoint().is_set()) out.mutable_isochronoussetpoint()->set_value(in.isochronousSetpoint().get());

    if(in.realPowerControlMode().is_set()) out.mutable_realpowercontrolmode()->set_value(static_cast<generationmodule::RealPowerControlKind>(in.realPowerControlMode().get().underlying()));  // wrapped optional enum

    if(in.realPowerSetpoint().is_set()) out.mutable_realpowersetpoint()->set_value(in.realPowerSetpoint().get());
}

void convert_to_proto(const openfmb::generationmodule::GenerationEvent& in, generationmodule::GenerationEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.generationEventZGEN().is_set()) convert_to_proto(in.generationEventZGEN().get(), *out.mutable_generationeventzgen());
}

void convert_to_proto(const openfmb::generationmodule::GenerationEventZGEN& in, generationmodule::GenerationEventZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_generationeventandstatuszgen()); // inherited type
}

void convert_to_proto(const openfmb::generationmodule::GenerationEventAndStatusZGEN& in, generationmodule::GenerationEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt().is_set()) convert_to_proto(in.AuxPwrSt().get(), *out.mutable_auxpwrst());

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.EmgStop().is_set()) convert_to_proto(in.EmgStop().get(), *out.mutable_emgstop());

    if(in.GnSynSt().is_set()) convert_to_proto(in.GnSynSt().get(), *out.mutable_gnsynst());

    if(in.PointStatus().is_set()) convert_to_proto(in.PointStatus().get(), *out.mutable_pointstatus());
}

void convert_to_proto(const openfmb::generationmodule::GenerationPointStatus& in, generationmodule::GenerationPointStatus& out)
{
    out.Clear();

    if(in.blackStartEnabled().is_set()) convert_to_proto(in.blackStartEnabled().get(), *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled().is_set()) convert_to_proto(in.frequencySetPointEnabled().get(), *out.mutable_frequencysetpointenabled());

    if(in.pctHzDroop().is_set()) out.mutable_pcthzdroop()->set_value(in.pctHzDroop().get());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.syncBackToGrid().is_set()) convert_to_proto(in.syncBackToGrid().get(), *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled().is_set()) convert_to_proto(in.transToIslndOnGridLossEnabled().get(), *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());
}

void convert_to_proto(const openfmb::generationmodule::GenerationReading& in, generationmodule::GenerationReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::generationmodule::GenerationStatus& in, generationmodule::GenerationStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.generationStatusZGEN().is_set()) convert_to_proto(in.generationStatusZGEN().get(), *out.mutable_generationstatuszgen());
}

void convert_to_proto(const openfmb::generationmodule::GenerationStatusZGEN& in, generationmodule::GenerationStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_generationeventandstatuszgen()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::EnergyConsumer& in, commonmodule::EnergyConsumer& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.operatingLimit().is_set()) out.mutable_operatinglimit()->set_value(in.operatingLimit().get());
}

void convert_to_proto(const openfmb::loadmodule::LoadControl& in, loadmodule::LoadControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.loadControlFSCC().is_set()) convert_to_proto(in.loadControlFSCC().get(), *out.mutable_loadcontrolfscc());
}

void convert_to_proto(const openfmb::loadmodule::LoadControlFSCC& in, loadmodule::LoadControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.loadControlScheduleFSCH().is_set()) convert_to_proto(in.loadControlScheduleFSCH().get(), *out.mutable_loadcontrolschedulefsch());
}

void convert_to_proto(const openfmb::loadmodule::LoadControlScheduleFSCH& in, loadmodule::LoadControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG(), *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::loadmodule::LoadCSG& in, loadmodule::LoadCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::loadmodule::LoadPoint& in, loadmodule::LoadPoint& out)
{
    out.Clear();

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.reset().is_set()) convert_to_proto(in.reset().get(), *out.mutable_reset());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::loadmodule::LoadEvent& in, loadmodule::LoadEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.loadEventZGLD().is_set()) convert_to_proto(in.loadEventZGLD().get(), *out.mutable_loadeventzgld());
}

void convert_to_proto(const openfmb::loadmodule::LoadEventZGLD& in, loadmodule::LoadEventZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_loadeventandstatuszgld()); // inherited type
}

void convert_to_proto(const openfmb::loadmodule::LoadEventAndStatusZGLD& in, loadmodule::LoadEventAndStatusZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.EmgStop().is_set()) convert_to_proto(in.EmgStop().get(), *out.mutable_emgstop());

    if(in.PointStatus().is_set()) convert_to_proto(in.PointStatus().get(), *out.mutable_pointstatus());
}

void convert_to_proto(const openfmb::loadmodule::LoadPointStatus& in, loadmodule::LoadPointStatus& out)
{
    out.Clear();

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.reset().is_set()) convert_to_proto(in.reset().get(), *out.mutable_reset());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::loadmodule::LoadReading& in, loadmodule::LoadReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::loadmodule::LoadStatus& in, loadmodule::LoadStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.loadStatusZGLD().is_set()) convert_to_proto(in.loadStatusZGLD().get(), *out.mutable_loadstatuszgld());
}

void convert_to_proto(const openfmb::loadmodule::LoadStatusZGLD& in, loadmodule::LoadStatusZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_loadeventandstatuszgld()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::Meter& in, commonmodule::Meter& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::metermodule::MeterReading& in, metermodule::MeterReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::reclosermodule::Recloser& in, reclosermodule::Recloser& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.normalOpen().is_set()) out.mutable_normalopen()->set_value(in.normalOpen().get());
}

void convert_to_proto(const openfmb::reclosermodule::RecloserControl& in, reclosermodule::RecloserControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.recloserControlFSCC().is_set()) convert_to_proto(in.recloserControlFSCC().get(), *out.mutable_reclosercontrolfscc());
}

void convert_to_proto(const openfmb::reclosermodule::RecloserControlFSCC& in, reclosermodule::RecloserControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.switchControlScheduleFSCH().is_set()) convert_to_proto(in.switchControlScheduleFSCH().get(), *out.mutable_switchcontrolschedulefsch());
}

void convert_to_proto(const openfmb::commonmodule::SwitchControlScheduleFSCH& in, commonmodule::SwitchControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG(), *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::SwitchCSG& in, commonmodule::SwitchCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::commonmodule::SwitchPoint& in, commonmodule::SwitchPoint& out)
{
    out.Clear();

    convert_to_proto(in.Pos(), *out.mutable_pos()); // required field in DDS

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::reclosermodule::RecloserDiscreteControl& in, reclosermodule::RecloserDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.recloserDiscreteControlXCBR().is_set()) convert_to_proto(in.recloserDiscreteControlXCBR().get(), *out.mutable_recloserdiscretecontrolxcbr());
}

void convert_to_proto(const openfmb::reclosermodule::RecloserDiscreteControlXCBR& in, reclosermodule::RecloserDiscreteControlXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_breakerdiscretecontrolxcbr()); // inherited type
}

void convert_to_proto(const openfmb::reclosermodule::RecloserEvent& in, reclosermodule::RecloserEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.statusAndEventXCBR().is_set()) convert_to_proto(in.statusAndEventXCBR().get(), *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const openfmb::reclosermodule::RecloserReading& in, reclosermodule::RecloserReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.diffReadingMMXU().is_set()) convert_to_proto(in.diffReadingMMXU().get(), *out.mutable_diffreadingmmxu());

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::reclosermodule::RecloserStatus& in, reclosermodule::RecloserStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.statusAndEventXCBR().is_set()) convert_to_proto(in.statusAndEventXCBR().get(), *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorControl& in, regulatormodule::RegulatorControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.regulatorControlFSCC().is_set()) convert_to_proto(in.regulatorControlFSCC().get(), *out.mutable_regulatorcontrolfscc());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlFSCC& in, regulatormodule::RegulatorControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.regulatorControlScheduleFSCH().is_set()) convert_to_proto(in.regulatorControlScheduleFSCH().get(), *out.mutable_regulatorcontrolschedulefsch());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlScheduleFSCH& in, regulatormodule::RegulatorControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG(), *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorCSG& in, regulatormodule::RegulatorCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorPoint& in, regulatormodule::RegulatorPoint& out)
{
    out.Clear();

    if(in.control().is_set()) convert_to_proto(in.control().get(), *out.mutable_control());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.reset().is_set()) convert_to_proto(in.reset().get(), *out.mutable_reset());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlATCC& in, regulatormodule::RegulatorControlATCC& out)
{
    out.Clear();

    if(in.BndCtr().is_set()) convert_to_proto(in.BndCtr().get(), *out.mutable_bndctr());

    if(in.BndWid().is_set()) convert_to_proto(in.BndWid().get(), *out.mutable_bndwid());

    if(in.CtlDlTmms().is_set()) convert_to_proto(in.CtlDlTmms().get(), *out.mutable_ctldltmms());

    if(in.LDCR().is_set()) convert_to_proto(in.LDCR().get(), *out.mutable_ldcr());

    if(in.LDCX().is_set()) convert_to_proto(in.LDCX().get(), *out.mutable_ldcx());

    if(in.LDCZ().is_set()) convert_to_proto(in.LDCZ().get(), *out.mutable_ldcz());

    if(in.ParOp().is_set()) convert_to_proto(in.ParOp().get(), *out.mutable_parop());

    if(in.TapPos().is_set()) convert_to_proto(in.TapPos().get(), *out.mutable_tappos());
}

void convert_to_proto(const openfmb::commonmodule::ASG& in, commonmodule::ASG& out)
{
    out.Clear();

    convert_to_proto(in.setMag(), *out.mutable_setmag()); // required field in DDS

    if(in.units().is_set()) convert_to_proto(in.units().get(), *out.mutable_units());
}

void convert_to_proto(const openfmb::commonmodule::AnalogueValueCtl& in, commonmodule::AnalogueValueCtl& out)
{
    out.Clear();

    if(in.f().is_set()) out.mutable_f()->set_value(in.f().get());

    if(in.i().is_set()) out.mutable_i()->set_value(in.i().get());
}

void convert_to_proto(const openfmb::commonmodule::ControlING& in, commonmodule::ControlING& out)
{
    out.Clear();

    out.set_setval(in.setVal());

    if(in.units().is_set()) convert_to_proto(in.units().get(), *out.mutable_units());
}

void convert_to_proto(const openfmb::commonmodule::PhaseISC& in, commonmodule::PhaseISC& out)
{
    out.Clear();

    if(in.phs3().is_set()) convert_to_proto(in.phs3().get(), *out.mutable_phs3());

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());
}

void convert_to_proto(const openfmb::commonmodule::ControlISC& in, commonmodule::ControlISC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorSystem& in, regulatormodule::RegulatorSystem& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorEvent& in, regulatormodule::RegulatorEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.regulatorEventAndStatusANCR().is_set()) convert_to_proto(in.regulatorEventAndStatusANCR().get(), *out.mutable_regulatoreventandstatusancr());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventAndStatusANCR& in, regulatormodule::RegulatorEventAndStatusANCR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.PointStatus().is_set()) convert_to_proto(in.PointStatus().get(), *out.mutable_pointstatus());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventAndStatusPoint& in, regulatormodule::RegulatorEventAndStatusPoint& out)
{
    out.Clear();

    if(in.eventAndStatus().is_set()) convert_to_proto(in.eventAndStatus().get(), *out.mutable_eventandstatus());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventAndStatusATCC& in, regulatormodule::RegulatorEventAndStatusATCC& out)
{
    out.Clear();

    if(in.BndCtr().is_set()) convert_to_proto(in.BndCtr().get(), *out.mutable_bndctr());

    if(in.BndWid().is_set()) convert_to_proto(in.BndWid().get(), *out.mutable_bndwid());

    if(in.LDCR().is_set()) convert_to_proto(in.LDCR().get(), *out.mutable_ldcr());

    if(in.LDCX().is_set()) convert_to_proto(in.LDCX().get(), *out.mutable_ldcx());

    if(in.LDCZ().is_set()) convert_to_proto(in.LDCZ().get(), *out.mutable_ldcz());

    if(in.ParOp().is_set()) convert_to_proto(in.ParOp().get(), *out.mutable_parop());

    if(in.TapOpErr().is_set()) convert_to_proto(in.TapOpErr().get(), *out.mutable_tapoperr());

    if(in.TapPos().is_set()) convert_to_proto(in.TapPos().get(), *out.mutable_tappos());
}

void convert_to_proto(const openfmb::commonmodule::PhaseINS& in, commonmodule::PhaseINS& out)
{
    out.Clear();

    if(in.phs3().is_set()) convert_to_proto(in.phs3().get(), *out.mutable_phs3());

    if(in.phsA().is_set()) convert_to_proto(in.phsA().get(), *out.mutable_phsa());

    if(in.phsB().is_set()) convert_to_proto(in.phsB().get(), *out.mutable_phsb());

    if(in.phsC().is_set()) convert_to_proto(in.phsC().get(), *out.mutable_phsc());
}

void convert_to_proto(const openfmb::commonmodule::StatusSPC& in, commonmodule::StatusSPC& out)
{
    out.Clear();

    if(in.q().is_set()) convert_to_proto(in.q().get(), *out.mutable_q());

    out.set_stval(in.stVal());

    if(in.t().is_set()) convert_to_proto(in.t().get(), *out.mutable_t());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorReading& in, regulatormodule::RegulatorReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::regulatormodule::RegulatorStatus& in, regulatormodule::RegulatorStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.regulatorEventAndStatusANCR().is_set()) convert_to_proto(in.regulatorEventAndStatusANCR().get(), *out.mutable_regulatoreventandstatusancr());
}

void convert_to_proto(const openfmb::resourcemodule::ResourceDiscreteControl& in, resourcemodule::ResourceDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    for(const auto& value : in.analogControlGGIO())
    {
        convert_to_proto(value, *out.mutable_analogcontrolggio()->Add());
    }

    for(const auto& value : in.booleanControlGGIO())
    {
        convert_to_proto(value, *out.mutable_booleancontrolggio()->Add());
    }

    for(const auto& value : in.integerControlGGIO())
    {
        convert_to_proto(value, *out.mutable_integercontrolggio()->Add());
    }

    for(const auto& value : in.stringControlGGIO())
    {
        convert_to_proto(value, *out.mutable_stringcontrolggio()->Add());
    }
}

void convert_to_proto(const openfmb::resourcemodule::AnalogControlGGIO& in, resourcemodule::AnalogControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.AnOut(), *out.mutable_anout()); // required field in DDS

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::commonmodule::ControlAPC& in, commonmodule::ControlAPC& out)
{
    out.Clear();

    convert_to_proto(in.ctlVal(), *out.mutable_ctlval()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::BooleanControlGGIO& in, resourcemodule::BooleanControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum

    convert_to_proto(in.SPCSO(), *out.mutable_spcso()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::IntegerControlGGIO& in, resourcemodule::IntegerControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.ISCSO(), *out.mutable_iscso()); // required field in DDS

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::resourcemodule::StringControlGGIO& in, resourcemodule::StringControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum

    convert_to_proto(in.StrOut(), *out.mutable_strout()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::VSC& in, commonmodule::VSC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal());
}

void convert_to_proto(const openfmb::resourcemodule::ResourceEvent& in, resourcemodule::ResourceEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    for(const auto& value : in.analogEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_analogeventandstatusggio()->Add());
    }

    for(const auto& value : in.booleanEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_booleaneventandstatusggio()->Add());
    }

    for(const auto& value : in.integerEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_integereventandstatusggio()->Add());
    }

    for(const auto& value : in.stringEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_stringeventandstatusggio()->Add());
    }
}

void convert_to_proto(const openfmb::commonmodule::AnalogEventAndStatusGGIO& in, commonmodule::AnalogEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.AnIn(), *out.mutable_anin()); // required field in DDS

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::commonmodule::BooleanEventAndStatusGGIO& in, commonmodule::BooleanEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.Ind(), *out.mutable_ind()); // required field in DDS

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::commonmodule::IntegerEventAndStatusGGIO& in, commonmodule::IntegerEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.IntIn(), *out.mutable_intin()); // required field in DDS

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum
}

void convert_to_proto(const openfmb::commonmodule::StringEventAndStatusGGIO& in, commonmodule::StringEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Phase().is_set()) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(in.Phase().get().underlying()));  // wrapped optional enum

    convert_to_proto(in.StrIn(), *out.mutable_strin()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::VSS& in, commonmodule::VSS& out)
{
    out.Clear();

    convert_to_proto(in.q(), *out.mutable_q()); // required field in DDS

    out.set_stval(in.stVal());

    convert_to_proto(in.t(), *out.mutable_t()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::resourcemodule::ResourceStatus& in, resourcemodule::ResourceStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    for(const auto& value : in.analogEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_analogeventandstatusggio()->Add());
    }

    for(const auto& value : in.booleanEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_booleaneventandstatusggio()->Add());
    }

    for(const auto& value : in.integerEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_integereventandstatusggio()->Add());
    }

    for(const auto& value : in.stringEventAndStatusGGIO())
    {
        convert_to_proto(value, *out.mutable_stringeventandstatusggio()->Add());
    }
}

void convert_to_proto(const openfmb::solarmodule::SolarControl& in, solarmodule::SolarControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.solarControlFSCC().is_set()) convert_to_proto(in.solarControlFSCC().get(), *out.mutable_solarcontrolfscc());
}

void convert_to_proto(const openfmb::solarmodule::SolarControlFSCC& in, solarmodule::SolarControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.SolarControlScheduleFSCH().is_set()) convert_to_proto(in.SolarControlScheduleFSCH().get(), *out.mutable_solarcontrolschedulefsch());
}

void convert_to_proto(const openfmb::solarmodule::SolarControlScheduleFSCH& in, solarmodule::SolarControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG(), *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const openfmb::solarmodule::SolarCSG& in, solarmodule::SolarCSG& out)
{
    out.Clear();

    for(const auto& value : in.crvPts())
    {
        convert_to_proto(value, *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const openfmb::solarmodule::SolarPoint& in, solarmodule::SolarPoint& out)
{
    out.Clear();

    if(in.frequencySetPointEnabled().is_set()) convert_to_proto(in.frequencySetPointEnabled().get(), *out.mutable_frequencysetpointenabled());

    if(in.mode().is_set()) convert_to_proto(in.mode().get(), *out.mutable_mode());

    if(in.pctHzDroop().is_set()) out.mutable_pcthzdroop()->set_value(in.pctHzDroop().get());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.reset().is_set()) convert_to_proto(in.reset().get(), *out.mutable_reset());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime(), *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const openfmb::solarmodule::SolarInverter& in, solarmodule::SolarInverter& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::solarmodule::SolarEvent& in, solarmodule::SolarEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.solarEventZGEN().is_set()) convert_to_proto(in.solarEventZGEN().get(), *out.mutable_solareventzgen());
}

void convert_to_proto(const openfmb::solarmodule::SolarEventZGEN& in, solarmodule::SolarEventZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_solareventandstatuszgen()); // inherited type

    if(in.GriMod().is_set()) convert_to_proto(in.GriMod().get(), *out.mutable_grimod());
}

void convert_to_proto(const openfmb::solarmodule::SolarEventAndStatusZGEN& in, solarmodule::SolarEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt().is_set()) convert_to_proto(in.AuxPwrSt().get(), *out.mutable_auxpwrst());

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.EmgStop().is_set()) convert_to_proto(in.EmgStop().get(), *out.mutable_emgstop());

    if(in.PointStatus().is_set()) convert_to_proto(in.PointStatus().get(), *out.mutable_pointstatus());
}

void convert_to_proto(const openfmb::solarmodule::SolarPointStatus& in, solarmodule::SolarPointStatus& out)
{
    out.Clear();

    if(in.frequencySetPointEnabled().is_set()) convert_to_proto(in.frequencySetPointEnabled().get(), *out.mutable_frequencysetpointenabled());

    if(in.mode().is_set()) convert_to_proto(in.mode().get(), *out.mutable_mode());

    if(in.pctHzDroop().is_set()) out.mutable_pcthzdroop()->set_value(in.pctHzDroop().get());

    if(in.pctVDroop().is_set()) out.mutable_pctvdroop()->set_value(in.pctVDroop().get());

    if(in.rampRates().is_set()) convert_to_proto(in.rampRates().get(), *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled().is_set()) convert_to_proto(in.reactivePwrSetPointEnabled().get(), *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled().is_set()) convert_to_proto(in.realPwrSetPointEnabled().get(), *out.mutable_realpwrsetpointenabled());

    if(in.state().is_set()) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(in.state().get().underlying()));  // wrapped optional enum

    if(in.voltageSetPointEnabled().is_set()) convert_to_proto(in.voltageSetPointEnabled().get(), *out.mutable_voltagesetpointenabled());
}

void convert_to_proto(const openfmb::solarmodule::SolarReading& in, solarmodule::SolarReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::solarmodule::SolarStatus& in, solarmodule::SolarStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.solarStatusZGEN().is_set()) convert_to_proto(in.solarStatusZGEN().get(), *out.mutable_solarstatuszgen());
}

void convert_to_proto(const openfmb::solarmodule::SolarStatusZGEN& in, solarmodule::SolarStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_solareventandstatuszgen()); // inherited type

    if(in.GriMod().is_set()) convert_to_proto(in.GriMod().get(), *out.mutable_grimod());
}

void convert_to_proto(const openfmb::switchmodule::ProtectedSwitch& in, switchmodule::ProtectedSwitch& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::switchmodule::SwitchControl& in, switchmodule::SwitchControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.SwitchControlFSCC().is_set()) convert_to_proto(in.SwitchControlFSCC().get(), *out.mutable_switchcontrolfscc());
}

void convert_to_proto(const openfmb::switchmodule::SwitchControlFSCC& in, switchmodule::SwitchControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.switchControlScheduleFSCH().is_set()) convert_to_proto(in.switchControlScheduleFSCH().get(), *out.mutable_switchcontrolschedulefsch());
}

void convert_to_proto(const openfmb::switchmodule::SwitchDiscreteControl& in, switchmodule::SwitchDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check().is_set()) convert_to_proto(in.check().get(), *out.mutable_check());

    if(in.switchDiscreteControlXSWI().is_set()) convert_to_proto(in.switchDiscreteControlXSWI().get(), *out.mutable_switchdiscretecontrolxswi());
}

void convert_to_proto(const openfmb::switchmodule::SwitchDiscreteControlXSWI& in, switchmodule::SwitchDiscreteControlXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());

    if(in.ResetProtectionPickup().is_set()) convert_to_proto(in.ResetProtectionPickup().get(), *out.mutable_resetprotectionpickup());
}

void convert_to_proto(const openfmb::switchmodule::SwitchEvent& in, switchmodule::SwitchEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.switchEventXSWI().is_set()) convert_to_proto(in.switchEventXSWI().get(), *out.mutable_switcheventxswi());
}

void convert_to_proto(const openfmb::switchmodule::SwitchEventXSWI& in, switchmodule::SwitchEventXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());
}

void convert_to_proto(const openfmb::switchmodule::SwitchReading& in, switchmodule::SwitchReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.diffReadingMMXU().is_set()) convert_to_proto(in.diffReadingMMXU().get(), *out.mutable_diffreadingmmxu());

    if(in.phaseMMTN().is_set()) convert_to_proto(in.phaseMMTN().get(), *out.mutable_phasemmtn());

    if(in.readingMMTR().is_set()) convert_to_proto(in.readingMMTR().get(), *out.mutable_readingmmtr());

    if(in.readingMMXU().is_set()) convert_to_proto(in.readingMMXU().get(), *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::switchmodule::SwitchStatus& in, switchmodule::SwitchStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.switchStatusXSWI().is_set()) convert_to_proto(in.switchStatusXSWI().get(), *out.mutable_switchstatusxswi());
}

void convert_to_proto(const openfmb::switchmodule::SwitchStatusXSWI& in, switchmodule::SwitchStatusXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest().is_set()) convert_to_proto(in.DynamicTest().get(), *out.mutable_dynamictest());

    if(in.Pos().is_set()) convert_to_proto(in.Pos().get(), *out.mutable_pos());

    convert_to_proto(in.ProtectionPickup(), *out.mutable_protectionpickup()); // required field in DDS
}

} // end namespace rti

} // end namespace dds

} // end namespace adapter
