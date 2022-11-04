// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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

void convert_from_proto(const commonmodule::DiscreteControlXCBR& in, openfmb::commonmodule::DiscreteControlXCBR& out);

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, openfmb::commonmodule::LogicalNodeForControl& out);

void convert_from_proto(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::PhaseDPC& in, openfmb::commonmodule::PhaseDPC& out);

void convert_from_proto(const commonmodule::ControlDPC& in, openfmb::commonmodule::ControlDPC& out);

void convert_from_proto(const commonmodule::ControlINC& in, openfmb::commonmodule::ControlINC& out);

void convert_from_proto(const commonmodule::ControlSPC& in, openfmb::commonmodule::ControlSPC& out);

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

void convert_from_proto(const commonmodule::PhaseSPC& in, openfmb::commonmodule::PhaseSPC& out);

void convert_from_proto(const commonmodule::PhaseAPC& in, openfmb::commonmodule::PhaseAPC& out);

void convert_from_proto(const commonmodule::ControlAPC& in, openfmb::commonmodule::ControlAPC& out);

void convert_from_proto(const capbankmodule::CapBankSystem& in, openfmb::capbankmodule::CapBankSystem& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControl& in, openfmb::capbankmodule::CapBankDiscreteControl& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControlYPSH& in, openfmb::capbankmodule::CapBankDiscreteControlYPSH& out);

void convert_from_proto(const capbankmodule::CapBankEvent& in, openfmb::capbankmodule::CapBankEvent& out);

void convert_from_proto(const capbankmodule::CapBankEventAndStatusYPSH& in, openfmb::capbankmodule::CapBankEventAndStatusYPSH& out);

void convert_from_proto(const capbankmodule::CapBankReading& in, openfmb::capbankmodule::CapBankReading& out);

void convert_from_proto(const capbankmodule::CapBankStatus& in, openfmb::capbankmodule::CapBankStatus& out);

void convert_from_proto(const commonmodule::ApplicationSystem& in, openfmb::commonmodule::ApplicationSystem& out);

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentControl& in, openfmb::circuitsegmentservicemodule::CircuitSegmentControl& out);

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentControlDCSC& in, openfmb::circuitsegmentservicemodule::CircuitSegmentControlDCSC& out);

void convert_from_proto(const circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& in, openfmb::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& out);

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentEvent& in, openfmb::circuitsegmentservicemodule::CircuitSegmentEvent& out);

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentEventDCSC& in, openfmb::circuitsegmentservicemodule::CircuitSegmentEventDCSC& out);

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentStatus& in, openfmb::circuitsegmentservicemodule::CircuitSegmentStatus& out);

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentStatusDCSC& in, openfmb::circuitsegmentservicemodule::CircuitSegmentStatusDCSC& out);

void convert_from_proto(const commonmodule::CapabilityMessageInfo& in, openfmb::commonmodule::CapabilityMessageInfo& out);

void convert_from_proto(const commonmodule::ESS& in, openfmb::commonmodule::ESS& out);

void convert_from_proto(const essmodule::ESSCapabilityOverride& in, openfmb::essmodule::ESSCapabilityOverride& out);

void convert_from_proto(const commonmodule::NameplateValue& in, openfmb::commonmodule::NameplateValue& out);

void convert_from_proto(const essmodule::ESSCapabilityConfiguration& in, openfmb::essmodule::ESSCapabilityConfiguration& out);

void convert_from_proto(const commonmodule::SourceCapabilityConfiguration& in, openfmb::commonmodule::SourceCapabilityConfiguration& out);

void convert_from_proto(const commonmodule::ASG& in, openfmb::commonmodule::ASG& out);

void convert_from_proto(const essmodule::ESSCapability& in, openfmb::essmodule::ESSCapability& out);

void convert_from_proto(const essmodule::ESSCapabilityRatings& in, openfmb::essmodule::ESSCapabilityRatings& out);

void convert_from_proto(const commonmodule::SourceCapabilityRatings& in, openfmb::commonmodule::SourceCapabilityRatings& out);

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

void convert_from_proto(const commonmodule::EnterServiceAPC& in, openfmb::commonmodule::EnterServiceAPC& out);

void convert_from_proto(const commonmodule::OperationDCTE& in, openfmb::commonmodule::OperationDCTE& out);

void convert_from_proto(const commonmodule::HzWAPC& in, openfmb::commonmodule::HzWAPC& out);

void convert_from_proto(const commonmodule::HzWPoint& in, openfmb::commonmodule::HzWPoint& out);

void convert_from_proto(const commonmodule::OperationDHFW& in, openfmb::commonmodule::OperationDHFW& out);

void convert_from_proto(const commonmodule::ClearingTime& in, openfmb::commonmodule::ClearingTime& out);

void convert_from_proto(const commonmodule::OperationDLFW& in, openfmb::commonmodule::OperationDLFW& out);

void convert_from_proto(const commonmodule::LimitWAPC& in, openfmb::commonmodule::LimitWAPC& out);

void convert_from_proto(const commonmodule::OperationDWMX& in, openfmb::commonmodule::OperationDWMX& out);

void convert_from_proto(const commonmodule::OperationDWMN& in, openfmb::commonmodule::OperationDWMN& out);

void convert_from_proto(const commonmodule::PFStorageSPC& in, openfmb::commonmodule::PFStorageSPC& out);

void convert_from_proto(const commonmodule::OperationStorageDFPF& in, openfmb::commonmodule::OperationStorageDFPF& out);

void convert_from_proto(const commonmodule::OperationDFPF& in, openfmb::commonmodule::OperationDFPF& out);

void convert_from_proto(const commonmodule::TmHzCSG& in, openfmb::commonmodule::TmHzCSG& out);

void convert_from_proto(const commonmodule::TmHzPoint& in, openfmb::commonmodule::TmHzPoint& out);

void convert_from_proto(const commonmodule::TmVoltCSG& in, openfmb::commonmodule::TmVoltCSG& out);

void convert_from_proto(const commonmodule::TmVoltPoint& in, openfmb::commonmodule::TmVoltPoint& out);

void convert_from_proto(const commonmodule::VarSPC& in, openfmb::commonmodule::VarSPC& out);

void convert_from_proto(const commonmodule::OperationDVAR& in, openfmb::commonmodule::OperationDVAR& out);

void convert_from_proto(const commonmodule::VoltVarCSG& in, openfmb::commonmodule::VoltVarCSG& out);

void convert_from_proto(const commonmodule::VoltVarPoint& in, openfmb::commonmodule::VoltVarPoint& out);

void convert_from_proto(const commonmodule::OperationDVVR& in, openfmb::commonmodule::OperationDVVR& out);

void convert_from_proto(const commonmodule::VoltWCSG& in, openfmb::commonmodule::VoltWCSG& out);

void convert_from_proto(const commonmodule::VoltWPoint& in, openfmb::commonmodule::VoltWPoint& out);

void convert_from_proto(const commonmodule::OperationDVWC& in, openfmb::commonmodule::OperationDVWC& out);

void convert_from_proto(const commonmodule::WVarCSG& in, openfmb::commonmodule::WVarCSG& out);

void convert_from_proto(const commonmodule::WVarPoint& in, openfmb::commonmodule::WVarPoint& out);

void convert_from_proto(const commonmodule::OperationDWVR& in, openfmb::commonmodule::OperationDWVR& out);

void convert_from_proto(const essmodule::ESSEvent& in, openfmb::essmodule::ESSEvent& out);

void convert_from_proto(const essmodule::EssEventZBAT& in, openfmb::essmodule::EssEventZBAT& out);

void convert_from_proto(const essmodule::ESSEventZGEN& in, openfmb::essmodule::ESSEventZGEN& out);

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, openfmb::essmodule::ESSEventAndStatusZGEN& out);

void convert_from_proto(const essmodule::ESSPointStatus& in, openfmb::essmodule::ESSPointStatus& out);

void convert_from_proto(const essmodule::ESSReading& in, openfmb::essmodule::ESSReading& out);

void convert_from_proto(const essmodule::ESSStatus& in, openfmb::essmodule::ESSStatus& out);

void convert_from_proto(const essmodule::EssStatusZBAT& in, openfmb::essmodule::EssStatusZBAT& out);

void convert_from_proto(const essmodule::ESSStatusZGEN& in, openfmb::essmodule::ESSStatusZGEN& out);

void convert_from_proto(const commonmodule::CapabilityOverrideMessageInfo& in, openfmb::commonmodule::CapabilityOverrideMessageInfo& out);

void convert_from_proto(const generationmodule::GenerationCapabilityOverride& in, openfmb::generationmodule::GenerationCapabilityOverride& out);

void convert_from_proto(const generationmodule::GenerationCapabilityConfiguration& in, openfmb::generationmodule::GenerationCapabilityConfiguration& out);

void convert_from_proto(const generationmodule::GeneratingUnit& in, openfmb::generationmodule::GeneratingUnit& out);

void convert_from_proto(const commonmodule::ActivePower& in, openfmb::commonmodule::ActivePower& out);

void convert_from_proto(const generationmodule::GenerationCapability& in, openfmb::generationmodule::GenerationCapability& out);

void convert_from_proto(const generationmodule::GenerationCapabilityRatings& in, openfmb::generationmodule::GenerationCapabilityRatings& out);

void convert_from_proto(const generationmodule::GenerationControl& in, openfmb::generationmodule::GenerationControl& out);

void convert_from_proto(const generationmodule::GenerationControlFSCC& in, openfmb::generationmodule::GenerationControlFSCC& out);

void convert_from_proto(const generationmodule::GenerationControlScheduleFSCH& in, openfmb::generationmodule::GenerationControlScheduleFSCH& out);

void convert_from_proto(const generationmodule::GenerationCSG& in, openfmb::generationmodule::GenerationCSG& out);

void convert_from_proto(const generationmodule::GenerationPoint& in, openfmb::generationmodule::GenerationPoint& out);

void convert_from_proto(const commonmodule::PFSPC& in, openfmb::commonmodule::PFSPC& out);

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

void convert_from_proto(const interconnectionmodule::InterconnectionSchedule& in, openfmb::interconnectionmodule::InterconnectionSchedule& out);

void convert_from_proto(const interconnectionmodule::InterconnectionScheduleFSCC& in, openfmb::interconnectionmodule::InterconnectionScheduleFSCC& out);

void convert_from_proto(const interconnectionmodule::InterconnectionControlScheduleFSCH& in, openfmb::interconnectionmodule::InterconnectionControlScheduleFSCH& out);

void convert_from_proto(const interconnectionmodule::InterconnectionCSG& in, openfmb::interconnectionmodule::InterconnectionCSG& out);

void convert_from_proto(const interconnectionmodule::InterconnectionPoint& in, openfmb::interconnectionmodule::InterconnectionPoint& out);

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

void convert_from_proto(const regulatormodule::DirectionalATCC& in, openfmb::regulatormodule::DirectionalATCC& out);

void convert_from_proto(const commonmodule::PhaseISC& in, openfmb::commonmodule::PhaseISC& out);

void convert_from_proto(const commonmodule::ControlISC& in, openfmb::commonmodule::ControlISC& out);

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

void convert_from_proto(const regulatormodule::RegulatorReading& in, openfmb::regulatormodule::RegulatorReading& out);

void convert_from_proto(const regulatormodule::RegulatorStatus& in, openfmb::regulatormodule::RegulatorStatus& out);

void convert_from_proto(const reservemodule::AllocatedMargin& in, openfmb::reservemodule::AllocatedMargin& out);

void convert_from_proto(const reservemodule::ReserveMargin& in, openfmb::reservemodule::ReserveMargin& out);

void convert_from_proto(const commonmodule::PMG& in, openfmb::commonmodule::PMG& out);

void convert_from_proto(const reservemodule::ReserveAvailability& in, openfmb::reservemodule::ReserveAvailability& out);

void convert_from_proto(const reservemodule::ReserveRequest& in, openfmb::reservemodule::ReserveRequest& out);

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

void convert_from_proto(const solarmodule::SolarCapabilityOverride& in, openfmb::solarmodule::SolarCapabilityOverride& out);

void convert_from_proto(const solarmodule::SolarCapabilityConfiguration& in, openfmb::solarmodule::SolarCapabilityConfiguration& out);

void convert_from_proto(const solarmodule::SolarInverter& in, openfmb::solarmodule::SolarInverter& out);

void convert_from_proto(const solarmodule::SolarCapability& in, openfmb::solarmodule::SolarCapability& out);

void convert_from_proto(const solarmodule::SolarCapabilityRatings& in, openfmb::solarmodule::SolarCapabilityRatings& out);

void convert_from_proto(const solarmodule::SolarControl& in, openfmb::solarmodule::SolarControl& out);

void convert_from_proto(const solarmodule::SolarControlFSCC& in, openfmb::solarmodule::SolarControlFSCC& out);

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, openfmb::solarmodule::SolarControlScheduleFSCH& out);

void convert_from_proto(const solarmodule::SolarCSG& in, openfmb::solarmodule::SolarCSG& out);

void convert_from_proto(const solarmodule::SolarPoint& in, openfmb::solarmodule::SolarPoint& out);

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
}

void convert_from_proto(const breakermodule::BreakerEventProfile& in, openfmb::breakermodule::BreakerEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker()); // required field in DDS

    convert_from_proto(in.breakerevent(), out.breakerEvent()); // required field in DDS
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
}

void convert_from_proto(const breakermodule::BreakerStatusProfile& in, openfmb::breakermodule::BreakerStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.breaker(), out.breaker()); // required field in DDS

    convert_from_proto(in.breakerstatus(), out.breakerStatus()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankControlProfile& in, openfmb::capbankmodule::CapBankControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankcontrol(), out.capBankControl()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControlProfile& in, openfmb::capbankmodule::CapBankDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankcontrol(), out.capBankControl()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankEventProfile& in, openfmb::capbankmodule::CapBankEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankevent(), out.capBankEvent()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankReadingProfile& in, openfmb::capbankmodule::CapBankReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankreading(), out.capBankReading()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS
}

void convert_from_proto(const capbankmodule::CapBankStatusProfile& in, openfmb::capbankmodule::CapBankStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.capbankstatus(), out.capBankStatus()); // required field in DDS

    convert_from_proto(in.capbanksystem(), out.capBankSystem()); // required field in DDS
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentControlProfile& in, openfmb::circuitsegmentservicemodule::CircuitSegmentControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.applicationsystem(), out.applicationSystem()); // required field in DDS

    convert_from_proto(in.circuitsegmentcontrol(), out.circuitSegmentControl()); // required field in DDS
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentEventProfile& in, openfmb::circuitsegmentservicemodule::CircuitSegmentEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.applicationsystem(), out.applicationSystem()); // required field in DDS

    convert_from_proto(in.circuitsegmentevent(), out.circuitSegmentEvent()); // required field in DDS
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentStatusProfile& in, openfmb::circuitsegmentservicemodule::CircuitSegmentStatusProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.applicationsystem(), out.applicationSystem()); // required field in DDS

    convert_from_proto(in.circuitsegmentstatus(), out.circuitSegmentStatus()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSCapabilityOverrideProfile& in, openfmb::essmodule::ESSCapabilityOverrideProfile& out)
{
    if(in.has_capabilitymessageinfo()) convert_from_proto(in.capabilitymessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.esscapabilityoverride(), out.essCapabilityOverride()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSCapabilityProfile& in, openfmb::essmodule::ESSCapabilityProfile& out)
{
    if(in.has_capabilitymessageinfo()) convert_from_proto(in.capabilitymessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.esscapability(), out.essCapability()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSControlProfile& in, openfmb::essmodule::ESSControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.esscontrol(), out.essControl()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSEventProfile& in, openfmb::essmodule::ESSEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.essevent(), out.essEvent()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSReadingProfile& in, openfmb::essmodule::ESSReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.essreading(), out.essReading()); // required field in DDS
}

void convert_from_proto(const essmodule::ESSStatusProfile& in, openfmb::essmodule::ESSStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess()); // required field in DDS

    convert_from_proto(in.essstatus(), out.essStatus()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationCapabilityOverrideProfile& in, openfmb::generationmodule::GenerationCapabilityOverrideProfile& out)
{
    if(in.has_capabilityoverridemessageinfo()) convert_from_proto(in.capabilityoverridemessageinfo(), out); // inherited type

    convert_from_proto(in.generationcapabilityoverride(), out.generationCapabilityOverride()); // required field in DDS

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationCapabilityProfile& in, openfmb::generationmodule::GenerationCapabilityProfile& out)
{
    if(in.has_capabilitymessageinfo()) convert_from_proto(in.capabilitymessageinfo(), out); // inherited type

    convert_from_proto(in.generationcapability(), out.generationCapability()); // required field in DDS

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationControlProfile& in, openfmb::generationmodule::GenerationControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationcontrol(), out.generationControl()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationDiscreteControlProfile& in, openfmb::generationmodule::GenerationDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationdiscretecontrol(), out.generationDiscreteControl()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationEventProfile& in, openfmb::generationmodule::GenerationEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationevent(), out.generationEvent()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationReadingProfile& in, openfmb::generationmodule::GenerationReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationreading(), out.generationReading()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationStatusProfile& in, openfmb::generationmodule::GenerationStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.generatingunit(), out.generatingUnit()); // required field in DDS

    convert_from_proto(in.generationstatus(), out.generationStatus()); // required field in DDS
}

void convert_from_proto(const interconnectionmodule::PlannedInterconnectionScheduleProfile& in, openfmb::interconnectionmodule::PlannedInterconnectionScheduleProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.requestercircuitsegmentservice(), out.requesterCircuitSegmentService()); // required field in DDS

    convert_from_proto(in.interconnectionschedule(), out.interconnectionSchedule()); // required field in DDS

    convert_from_proto(in.tiepoint(), out.tiePoint()); // required field in DDS

    convert_from_proto(in.respondercircuitsegmentservice(), out.responderCircuitSegmentService()); // required field in DDS
}

void convert_from_proto(const interconnectionmodule::RequestedInterconnectionScheduleProfile& in, openfmb::interconnectionmodule::RequestedInterconnectionScheduleProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.requestercircuitsegmentservice(), out.requesterCircuitSegmentService()); // required field in DDS

    convert_from_proto(in.interconnectionschedule(), out.interconnectionSchedule()); // required field in DDS

    convert_from_proto(in.tiepoint(), out.tiePoint()); // required field in DDS

    convert_from_proto(in.respondercircuitsegmentservice(), out.responderCircuitSegmentService()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadControlProfile& in, openfmb::loadmodule::LoadControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.loadcontrol(), out.loadControl()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadEventProfile& in, openfmb::loadmodule::LoadEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.loadevent(), out.loadEvent()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadReadingProfile& in, openfmb::loadmodule::LoadReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.loadreading(), out.loadReading()); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadStatusProfile& in, openfmb::loadmodule::LoadStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer()); // required field in DDS

    convert_from_proto(in.loadstatus(), out.loadStatus()); // required field in DDS
}

void convert_from_proto(const metermodule::MeterReadingProfile& in, openfmb::metermodule::MeterReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.meter(), out.meter()); // required field in DDS

    convert_from_proto(in.meterreading(), out.meterReading()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserDiscreteControlProfile& in, openfmb::reclosermodule::RecloserDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.recloserdiscretecontrol(), out.recloserDiscreteControl()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserEventProfile& in, openfmb::reclosermodule::RecloserEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.recloserevent(), out.recloserEvent()); // required field in DDS
}

void convert_from_proto(const reclosermodule::RecloserReadingProfile& in, openfmb::reclosermodule::RecloserReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

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

    convert_from_proto(in.recloser(), out.recloser()); // required field in DDS

    convert_from_proto(in.recloserstatus(), out.recloserStatus()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorDiscreteControlProfile& in, openfmb::regulatormodule::RegulatorDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatordiscretecontrol(), out.regulatorDiscreteControl()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorControlProfile& in, openfmb::regulatormodule::RegulatorControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatorcontrol(), out.regulatorControl()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorEventProfile& in, openfmb::regulatormodule::RegulatorEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.regulatorevent(), out.regulatorEvent()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const regulatormodule::RegulatorReadingProfile& in, openfmb::regulatormodule::RegulatorReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

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

    convert_from_proto(in.regulatorstatus(), out.regulatorStatus()); // required field in DDS

    convert_from_proto(in.regulatorsystem(), out.regulatorSystem()); // required field in DDS
}

void convert_from_proto(const reservemodule::ReserveAvailabilityProfile& in, openfmb::reservemodule::ReserveAvailabilityProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    if(in.has_allocatedmargin()) // optional field in DDS
    {
        openfmb::reservemodule::AllocatedMargin temp{};
        convert_from_proto(in.allocatedmargin(), temp);
        out.allocatedMargin() = temp;
    }

    convert_from_proto(in.requestercircuitsegmentservice(), out.requesterCircuitSegmentService()); // required field in DDS

    convert_from_proto(in.reserveavailability(), out.reserveAvailability()); // required field in DDS

    convert_from_proto(in.respondercircuitsegmentservice(), out.responderCircuitSegmentService()); // required field in DDS

    convert_from_proto(in.tiepoint(), out.tiePoint()); // required field in DDS
}

void convert_from_proto(const reservemodule::ReserveRequestProfile& in, openfmb::reservemodule::ReserveRequestProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.requestercircuitsegmentservice(), out.requesterCircuitSegmentService()); // required field in DDS

    convert_from_proto(in.reserverequest(), out.reserveRequest()); // required field in DDS

    convert_from_proto(in.respondercircuitsegmentservice(), out.responderCircuitSegmentService()); // required field in DDS

    convert_from_proto(in.tiepoint(), out.tiePoint()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceDiscreteControlProfile& in, openfmb::resourcemodule::ResourceDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.resourcediscretecontrol(), out.resourceDiscreteControl()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceEventProfile& in, openfmb::resourcemodule::ResourceEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.resourceevent(), out.resourceEvent()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.resourcereading(), out.resourceReading()); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceStatusProfile& in, openfmb::resourcemodule::ResourceStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.conductingequipment(), out.conductingEquipment()); // required field in DDS

    convert_from_proto(in.resourcestatus(), out.resourceStatus()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarCapabilityOverrideProfile& in, openfmb::solarmodule::SolarCapabilityOverrideProfile& out)
{
    if(in.has_capabilityoverridemessageinfo()) convert_from_proto(in.capabilityoverridemessageinfo(), out); // inherited type

    convert_from_proto(in.solarcapabilityoverride(), out.solarCapabilityOverride()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarCapabilityProfile& in, openfmb::solarmodule::SolarCapabilityProfile& out)
{
    if(in.has_capabilitymessageinfo()) convert_from_proto(in.capabilitymessageinfo(), out); // inherited type

    convert_from_proto(in.solarcapability(), out.solarCapability()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarControlProfile& in, openfmb::solarmodule::SolarControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.solarcontrol(), out.solarControl()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarEventProfile& in, openfmb::solarmodule::SolarEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.solarevent(), out.solarEvent()); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarReadingProfile& in, openfmb::solarmodule::SolarReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS

    convert_from_proto(in.solarreading(), out.solarReading()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarStatusProfile& in, openfmb::solarmodule::SolarStatusProfile& out)
{
    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.solarinverter(), out.solarInverter()); // required field in DDS

    convert_from_proto(in.solarstatus(), out.solarStatus()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchDiscreteControlProfile& in, openfmb::switchmodule::SwitchDiscreteControlProfile& out)
{
    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    convert_from_proto(in.switchdiscretecontrol(), out.switchDiscreteControl()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchEventProfile& in, openfmb::switchmodule::SwitchEventProfile& out)
{
    if(in.has_eventmessageinfo()) convert_from_proto(in.eventmessageinfo(), out); // inherited type

    convert_from_proto(in.protectedswitch(), out.protectedSwitch()); // required field in DDS

    convert_from_proto(in.switchevent(), out.switchEvent()); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, openfmb::switchmodule::SwitchReadingProfile& out)
{
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

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
    if(in.has_discretecontrolxcbr()) convert_from_proto(in.discretecontrolxcbr(), out); // inherited type
}

void convert_from_proto(const commonmodule::DiscreteControlXCBR& in, openfmb::commonmodule::DiscreteControlXCBR& out)
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
    if(in.has_ang())
    {
        out.ang() = in.ang().value();
    }

    out.mag() = in.mag(); // required DOUBLE primitive
}

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out)
{
    out.setVal() = static_cast<openfmb::commonmodule::CalcMethodKind::inner_enum>(in.setval());
}

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out)
{
    out.mag() = in.mag(); // required DOUBLE primitive

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

    out.value() = in.value(); // required DOUBLE primitive
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
    if(in.has_amplmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
        convert_from_proto(in.amplmt(), temp);
        out.AmpLmt() = temp;
    }

    if(in.has_ampthdhi()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.ampthdhi(), temp);
        out.AmpThdHi() = temp;
    }

    if(in.has_ampthdlo()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.ampthdlo(), temp);
        out.AmpThdLo() = temp;
    }

    if(in.has_ctlmodeauto()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.ctlmodeauto(), temp);
        out.CtlModeAuto() = temp;
    }

    if(in.has_ctlmodeovrrd()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.ctlmodeovrrd(), temp);
        out.CtlModeOvrRd() = temp;
    }

    if(in.has_ctlmoderem()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.ctlmoderem(), temp);
        out.CtlModeRem() = temp;
    }

    if(in.has_dirmode()) // optional enum in DDS
    {
        out.DirMode() = static_cast<openfmb::commonmodule::DirectionModeKind::inner_enum>(in.dirmode().value());
    }

    if(in.has_pos()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
        convert_from_proto(in.pos(), temp);
        out.Pos() = temp;
    }

    if(in.has_templmt()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.templmt(), temp);
        out.TempLmt() = temp;
    }

    if(in.has_tempthdhi()) // optional field in DDS
    {
        openfmb::commonmodule::ControlAPC temp{};
        convert_from_proto(in.tempthdhi(), temp);
        out.TempThdHi() = temp;
    }

    if(in.has_tempthdlo()) // optional field in DDS
    {
        openfmb::commonmodule::ControlAPC temp{};
        convert_from_proto(in.tempthdlo(), temp);
        out.TempThdLo() = temp;
    }

    if(in.has_varlmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
        convert_from_proto(in.varlmt(), temp);
        out.VArLmt() = temp;
    }

    if(in.has_varthdhi()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.varthdhi(), temp);
        out.VArThdHi() = temp;
    }

    if(in.has_varthdlo()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.varthdlo(), temp);
        out.VArThdLo() = temp;
    }

    if(in.has_vollmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
        convert_from_proto(in.vollmt(), temp);
        out.VolLmt() = temp;
    }

    if(in.has_volthdhi()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.volthdhi(), temp);
        out.VolThdHi() = temp;
    }

    if(in.has_volthdlo()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.volthdlo(), temp);
        out.VolThdLo() = temp;
    }
}

void convert_from_proto(const commonmodule::PhaseSPC& in, openfmb::commonmodule::PhaseSPC& out)
{
    if(in.has_phs3()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.phs3(), temp);
        out.phs3() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
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
    out.ctlVal() = in.ctlval(); // required DOUBLE primitive
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

    if(in.has_capbankdiscretecontrolypsh()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankDiscreteControlYPSH temp{};
        convert_from_proto(in.capbankdiscretecontrolypsh(), temp);
        out.capBankDiscreteControlYPSH() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankDiscreteControlYPSH& in, openfmb::capbankmodule::CapBankDiscreteControlYPSH& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_control()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankControlYPSH temp{};
        convert_from_proto(in.control(), temp);
        out.control() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankEvent& in, openfmb::capbankmodule::CapBankEvent& out)
{
    if(in.has_eventvalue()) convert_from_proto(in.eventvalue(), out); // inherited type

    if(in.has_capbankeventandstatusypsh()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankEventAndStatusYPSH temp{};
        convert_from_proto(in.capbankeventandstatusypsh(), temp);
        out.CapBankEventAndStatusYPSH() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankEventAndStatusYPSH& in, openfmb::capbankmodule::CapBankEventAndStatusYPSH& out)
{
    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_amplmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.amplmt(), temp);
        out.AmpLmt() = temp;
    }

    if(in.has_ctlmode()) // optional enum in DDS
    {
        out.CtlMode() = static_cast<openfmb::commonmodule::ControlModeKind::inner_enum>(in.ctlmode().value());
    }

    if(in.has_dirrev()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.dirrev(), temp);
        out.DirRev() = temp;
    }

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

    if(in.has_templmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.templmt(), temp);
        out.TempLmt() = temp;
    }

    if(in.has_varlmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.varlmt(), temp);
        out.VArLmt() = temp;
    }

    if(in.has_vollmt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.vollmt(), temp);
        out.VolLmt() = temp;
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

    if(in.has_secondaryreadingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.secondaryreadingmmxu(), temp);
        out.secondaryReadingMMXU() = temp;
    }
}

void convert_from_proto(const capbankmodule::CapBankStatus& in, openfmb::capbankmodule::CapBankStatus& out)
{
    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    if(in.has_capbankeventandstatusypsh()) // optional field in DDS
    {
        openfmb::capbankmodule::CapBankEventAndStatusYPSH temp{};
        convert_from_proto(in.capbankeventandstatusypsh(), temp);
        out.capBankEventAndStatusYPSH() = temp;
    }
}

void convert_from_proto(const commonmodule::ApplicationSystem& in, openfmb::commonmodule::ApplicationSystem& out)
{
    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type

    out.mRID() = in.mrid(); // required string
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentControl& in, openfmb::circuitsegmentservicemodule::CircuitSegmentControl& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.circuitsegmentcontroldcsc(), out.circuitSegmentControlDCSC()); // required field in DDS
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentControlDCSC& in, openfmb::circuitsegmentservicemodule::CircuitSegmentControlDCSC& out)
{
    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_circuitsegmentservicemode()) // optional field in DDS
    {
        openfmb::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind temp{};
        convert_from_proto(in.circuitsegmentservicemode(), temp);
        out.CircuitSegmentServiceMode() = temp;
    }

    if(in.has_island()) // optional field in DDS
    {
        openfmb::commonmodule::ControlDPC temp{};
        convert_from_proto(in.island(), temp);
        out.Island() = temp;
    }
}

void convert_from_proto(const circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& in, openfmb::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& out)
{
    out.setVal() = static_cast<openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::inner_enum>(in.setval());

    if(in.has_setvalextension()) out.setValExtension() = in.setvalextension().value(); // optional string
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentEvent& in, openfmb::circuitsegmentservicemodule::CircuitSegmentEvent& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.circuitsegmenteventdcsc(), out.circuitSegmentEventDCSC()); // required field in DDS
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentEventDCSC& in, openfmb::circuitsegmentservicemodule::CircuitSegmentEventDCSC& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_circuitsegmentservicemode()) // optional field in DDS
    {
        openfmb::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind temp{};
        convert_from_proto(in.circuitsegmentservicemode(), temp);
        out.CircuitSegmentServiceMode() = temp;
    }

    if(in.has_island()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.island(), temp);
        out.Island() = temp;
    }

    if(in.has_permissibleauto()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissibleauto(), temp);
        out.PermissibleAuto() = temp;
    }

    if(in.has_permissiblemanual()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblemanual(), temp);
        out.PermissibleManual() = temp;
    }

    if(in.has_permissiblenetzero()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblenetzero(), temp);
        out.PermissibleNetzero() = temp;
    }

    if(in.has_permissiblestart()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblestart(), temp);
        out.PermissibleStart() = temp;
    }

    if(in.has_permissiblestop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblestop(), temp);
        out.PermissibleStop() = temp;
    }
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentStatus& in, openfmb::circuitsegmentservicemodule::CircuitSegmentStatus& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.circuitsegmentstatusdcsc(), out.circuitSegmentStatusDCSC()); // required field in DDS
}

void convert_from_proto(const circuitsegmentservicemodule::CircuitSegmentStatusDCSC& in, openfmb::circuitsegmentservicemodule::CircuitSegmentStatusDCSC& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_circuitsegmentservicemode()) // optional field in DDS
    {
        openfmb::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind temp{};
        convert_from_proto(in.circuitsegmentservicemode(), temp);
        out.CircuitSegmentServiceMode() = temp;
    }

    if(in.has_island()) // optional field in DDS
    {
        openfmb::commonmodule::StatusDPS temp{};
        convert_from_proto(in.island(), temp);
        out.Island() = temp;
    }

    if(in.has_permissibleauto()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissibleauto(), temp);
        out.PermissibleAuto() = temp;
    }

    if(in.has_permissiblemanual()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblemanual(), temp);
        out.PermissibleManual() = temp;
    }

    if(in.has_permissiblenetzero()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblenetzero(), temp);
        out.PermissibleNetzero() = temp;
    }

    if(in.has_permissiblestart()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblestart(), temp);
        out.PermissibleStart() = temp;
    }

    if(in.has_permissiblestop()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.permissiblestop(), temp);
        out.PermissibleStop() = temp;
    }
}

void convert_from_proto(const commonmodule::CapabilityMessageInfo& in, openfmb::commonmodule::CapabilityMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::ESS& in, openfmb::commonmodule::ESS& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const essmodule::ESSCapabilityOverride& in, openfmb::essmodule::ESSCapabilityOverride& out)
{
    if(in.has_nameplatevalue()) convert_from_proto(in.nameplatevalue(), out); // inherited type

    convert_from_proto(in.esscapabilityconfiguration(), out.essCapabilityConfiguration()); // required field in DDS
}

void convert_from_proto(const commonmodule::NameplateValue& in, openfmb::commonmodule::NameplateValue& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_model()) out.model() = in.model().value(); // optional string

    if(in.has_sernum()) out.sernum() = in.sernum().value(); // optional string

    if(in.has_swrev()) out.swRev() = in.swrev().value(); // optional string

    if(in.has_vendor()) out.vendor() = in.vendor().value(); // optional string
}

void convert_from_proto(const essmodule::ESSCapabilityConfiguration& in, openfmb::essmodule::ESSCapabilityConfiguration& out)
{
    if(in.has_sourcecapabilityconfiguration()) convert_from_proto(in.sourcecapabilityconfiguration(), out); // inherited type

    if(in.has_vachartemax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.vachartemax(), temp);
        out.VAChaRteMax() = temp;
    }

    if(in.has_vadischartemax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.vadischartemax(), temp);
        out.VADisChaRteMax() = temp;
    }

    if(in.has_wchartemax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wchartemax(), temp);
        out.WChaRteMax() = temp;
    }

    if(in.has_wdischartemax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wdischartemax(), temp);
        out.WDisChaRteMax() = temp;
    }
}

void convert_from_proto(const commonmodule::SourceCapabilityConfiguration& in, openfmb::commonmodule::SourceCapabilityConfiguration& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_amax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.amax(), temp);
        out.AMax() = temp;
    }

    if(in.has_vamax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.vamax(), temp);
        out.VAMax() = temp;
    }

    if(in.has_varmaxabs()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.varmaxabs(), temp);
        out.VarMaxAbs() = temp;
    }

    if(in.has_varmaxinj()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.varmaxinj(), temp);
        out.VarMaxInj() = temp;
    }

    if(in.has_vmax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.vmax(), temp);
        out.VMax() = temp;
    }

    if(in.has_vmin()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.vmin(), temp);
        out.VMin() = temp;
    }

    if(in.has_vnom()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.vnom(), temp);
        out.VNom() = temp;
    }

    if(in.has_wmax()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wmax(), temp);
        out.WMax() = temp;
    }

    if(in.has_wovrext()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wovrext(), temp);
        out.WOvrExt() = temp;
    }

    if(in.has_wovrextpf()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wovrextpf(), temp);
        out.WOvrExtPF() = temp;
    }

    if(in.has_wundext()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wundext(), temp);
        out.WUndExt() = temp;
    }

    if(in.has_wundextpf()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.wundextpf(), temp);
        out.WUndExtPF() = temp;
    }
}

void convert_from_proto(const commonmodule::ASG& in, openfmb::commonmodule::ASG& out)
{
    out.setMag() = in.setmag(); // required DOUBLE primitive
}

void convert_from_proto(const essmodule::ESSCapability& in, openfmb::essmodule::ESSCapability& out)
{
    if(in.has_nameplatevalue()) convert_from_proto(in.nameplatevalue(), out); // inherited type

    convert_from_proto(in.esscapabilityratings(), out.essCapabilityRatings()); // required field in DDS

    if(in.has_esscapabilityconfiguration()) // optional field in DDS
    {
        openfmb::essmodule::ESSCapabilityConfiguration temp{};
        convert_from_proto(in.esscapabilityconfiguration(), temp);
        out.essCapabilityConfiguration() = temp;
    }
}

void convert_from_proto(const essmodule::ESSCapabilityRatings& in, openfmb::essmodule::ESSCapabilityRatings& out)
{
    if(in.has_sourcecapabilityratings()) convert_from_proto(in.sourcecapabilityratings(), out); // inherited type

    convert_from_proto(in.vachartemaxrtg(), out.VAChaRteMaxRtg()); // required field in DDS

    convert_from_proto(in.vadischartemaxrtg(), out.VADisChaRteMaxRtg()); // required field in DDS

    convert_from_proto(in.wchartemaxrtg(), out.WChaRteMaxRtg()); // required field in DDS

    convert_from_proto(in.wdischartemaxrtg(), out.WDisChaRteMaxRtg()); // required field in DDS

    convert_from_proto(in.whrtg(), out.WHRtg()); // required field in DDS
}

void convert_from_proto(const commonmodule::SourceCapabilityRatings& in, openfmb::commonmodule::SourceCapabilityRatings& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    out.AbnOpCatRtg() = static_cast<openfmb::commonmodule::AbnOpCatKind::inner_enum>(in.abnopcatrtg());

    if(in.has_amaxrtg()) // optional field in DDS
    {
        openfmb::commonmodule::ASG temp{};
        convert_from_proto(in.amaxrtg(), temp);
        out.AMaxRtg() = temp;
    }

    convert_from_proto(in.freqnomrtg(), out.FreqNomRtg()); // required field in DDS

    out.NorOpCatRtg() = static_cast<openfmb::commonmodule::NorOpCatKind::inner_enum>(in.noropcatrtg());

    convert_from_proto(in.reactsusceptrtg(), out.ReactSusceptRtg()); // required field in DDS

    convert_from_proto(in.vamaxrtg(), out.VAMaxRtg()); // required field in DDS

    convert_from_proto(in.varmaxabsrtg(), out.VarMaxAbsRtg()); // required field in DDS

    convert_from_proto(in.varmaxinjrtg(), out.VarMaxInjRtg()); // required field in DDS

    convert_from_proto(in.vmaxrtg(), out.VMaxRtg()); // required field in DDS

    convert_from_proto(in.vminrtg(), out.VMinRtg()); // required field in DDS

    convert_from_proto(in.vnomrtg(), out.VNomRtg()); // required field in DDS

    convert_from_proto(in.wmaxrtg(), out.WMaxRtg()); // required field in DDS

    convert_from_proto(in.wovrextrtg(), out.WOvrExtRtg()); // required field in DDS

    convert_from_proto(in.wovrextrtgpf(), out.WOvrExtRtgPF()); // required field in DDS

    convert_from_proto(in.wundextrtg(), out.WUndExtRtg()); // required field in DDS

    convert_from_proto(in.wundextrtgpf(), out.WUndExtRtgPF()); // required field in DDS
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS

    if(in.has_enterserviceoperation()) // optional field in DDS
    {
        openfmb::commonmodule::EnterServiceAPC temp{};
        convert_from_proto(in.enterserviceoperation(), temp);
        out.enterServiceOperation() = temp;
    }

    if(in.has_hzwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::HzWAPC temp{};
        convert_from_proto(in.hzwoperation(), temp);
        out.hzWOperation() = temp;
    }

    if(in.has_limitwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::LimitWAPC temp{};
        convert_from_proto(in.limitwoperation(), temp);
        out.limitWOperation() = temp;
    }

    if(in.has_pfstorageoperation()) // optional field in DDS
    {
        openfmb::commonmodule::PFStorageSPC temp{};
        convert_from_proto(in.pfstorageoperation(), temp);
        out.pFStorageOperation() = temp;
    }

    if(in.has_tmhztripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmHzCSG temp{};
        convert_from_proto(in.tmhztripoperation(), temp);
        out.tmHzTripOperation() = temp;
    }

    if(in.has_tmvolttripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmVoltCSG temp{};
        convert_from_proto(in.tmvolttripoperation(), temp);
        out.tmVoltTripOperation() = temp;
    }

    if(in.has_varoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VarSPC temp{};
        convert_from_proto(in.varoperation(), temp);
        out.vArOperation() = temp;
    }

    if(in.has_voltvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltVarCSG temp{};
        convert_from_proto(in.voltvaroperation(), temp);
        out.voltVarOperation() = temp;
    }

    if(in.has_voltwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltWCSG temp{};
        convert_from_proto(in.voltwoperation(), temp);
        out.voltWOperation() = temp;
    }

    if(in.has_wvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::WVarCSG temp{};
        convert_from_proto(in.wvaroperation(), temp);
        out.wVarOperation() = temp;
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

void convert_from_proto(const commonmodule::EnterServiceAPC& in, openfmb::commonmodule::EnterServiceAPC& out)
{
    convert_from_proto(in.enterserviceparameter(), out.enterServiceParameter()); // required field in DDS

    out.hzHiLim() = in.hzhilim(); // required FLOAT primitive

    out.hzLoLim() = in.hzlolim(); // required FLOAT primitive

    out.rtnSrvAuto() = in.rtnsrvauto(); // required BOOL primitive

    out.vHiLim() = in.vhilim(); // required FLOAT primitive

    out.vLoLim() = in.vlolim(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDCTE& in, openfmb::commonmodule::OperationDCTE& out)
{
    out.rndDlTmms() = in.rnddltmms(); // required FLOAT primitive

    out.rtnDlTmms() = in.rtndltmms(); // required FLOAT primitive

    out.rtnRmpTmms() = in.rtnrmptmms(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::HzWAPC& in, openfmb::commonmodule::HzWAPC& out)
{
    convert_from_proto(in.overhzwpt(), out.overHzWPt()); // required field in DDS

    convert_from_proto(in.overhzwparameter(), out.overHzWParameter()); // required field in DDS

    convert_from_proto(in.underhzwpt(), out.underHzWPt()); // required field in DDS

    convert_from_proto(in.underhzwparameter(), out.underHzWParameter()); // required field in DDS
}

void convert_from_proto(const commonmodule::HzWPoint& in, openfmb::commonmodule::HzWPoint& out)
{
    out.deadbandHzVal() = in.deadbandhzval(); // required FLOAT primitive

    out.slopeVal() = in.slopeval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDHFW& in, openfmb::commonmodule::OperationDHFW& out)
{
    out.modEna() = in.modena(); // required BOOL primitive

    convert_from_proto(in.opltmmsmax(), out.OplTmmsMax()); // required field in DDS
}

void convert_from_proto(const commonmodule::ClearingTime& in, openfmb::commonmodule::ClearingTime& out)
{
    out.seconds() = in.seconds(); // required UINT64 primitive

    out.nanoseconds() = in.nanoseconds(); // required UINT32 primitive
}

void convert_from_proto(const commonmodule::OperationDLFW& in, openfmb::commonmodule::OperationDLFW& out)
{
    out.modEna() = in.modena(); // required BOOL primitive

    convert_from_proto(in.opltmmsmax(), out.OplTmmsMax()); // required field in DDS
}

void convert_from_proto(const commonmodule::LimitWAPC& in, openfmb::commonmodule::LimitWAPC& out)
{
    convert_from_proto(in.maxlimparameter(), out.maxLimParameter()); // required field in DDS

    convert_from_proto(in.minlimparameter(), out.minLimParameter()); // required field in DDS

    out.wMaxSptVal() = in.wmaxsptval(); // required FLOAT primitive

    out.wMinSptVal() = in.wminsptval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDWMX& in, openfmb::commonmodule::OperationDWMX& out)
{
    out.modEna() = in.modena(); // required BOOL primitive
}

void convert_from_proto(const commonmodule::OperationDWMN& in, openfmb::commonmodule::OperationDWMN& out)
{
    out.modEna() = in.modena(); // required BOOL primitive
}

void convert_from_proto(const commonmodule::PFStorageSPC& in, openfmb::commonmodule::PFStorageSPC& out)
{
    out.ctlVal() = in.ctlval(); // required BOOL primitive

    convert_from_proto(in.pfstorageparameter(), out.pFStorageParameter()); // required field in DDS
}

void convert_from_proto(const commonmodule::OperationStorageDFPF& in, openfmb::commonmodule::OperationStorageDFPF& out)
{
    if(in.has_operationdfpf()) convert_from_proto(in.operationdfpf(), out); // inherited type

    out.pFLodTgtMxVal() = in.pflodtgtmxval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDFPF& in, openfmb::commonmodule::OperationDFPF& out)
{
    out.modEna() = in.modena(); // required BOOL primitive

    out.pFExtSet() = in.pfextset(); // required BOOL primitive

    out.pFGnTgtMxVal() = in.pfgntgtmxval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::TmHzCSG& in, openfmb::commonmodule::TmHzCSG& out)
{
    for(const auto& input : in.overcrvpts())
    {
        openfmb::commonmodule::TmHzPoint output;
        convert_from_proto(input, output);
        out.overCrvPts().push_back(output);
    }

    for(const auto& input : in.undercrvpts())
    {
        openfmb::commonmodule::TmHzPoint output;
        convert_from_proto(input, output);
        out.underCrvPts().push_back(output);
    }
}

void convert_from_proto(const commonmodule::TmHzPoint& in, openfmb::commonmodule::TmHzPoint& out)
{
    out.hzVal() = in.hzval(); // required FLOAT primitive

    convert_from_proto(in.tmval(), out.tmVal()); // required field in DDS
}

void convert_from_proto(const commonmodule::TmVoltCSG& in, openfmb::commonmodule::TmVoltCSG& out)
{
    for(const auto& input : in.overcrvpts())
    {
        openfmb::commonmodule::TmVoltPoint output;
        convert_from_proto(input, output);
        out.overCrvPts().push_back(output);
    }

    for(const auto& input : in.undercrvpts())
    {
        openfmb::commonmodule::TmVoltPoint output;
        convert_from_proto(input, output);
        out.underCrvPts().push_back(output);
    }
}

void convert_from_proto(const commonmodule::TmVoltPoint& in, openfmb::commonmodule::TmVoltPoint& out)
{
    convert_from_proto(in.tmval(), out.tmVal()); // required field in DDS

    out.voltVal() = in.voltval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::VarSPC& in, openfmb::commonmodule::VarSPC& out)
{
    out.modEna() = in.modena(); // required BOOL primitive

    convert_from_proto(in.varparameter(), out.varParameter()); // required field in DDS
}

void convert_from_proto(const commonmodule::OperationDVAR& in, openfmb::commonmodule::OperationDVAR& out)
{
    out.varTgtSpt() = in.vartgtspt(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::VoltVarCSG& in, openfmb::commonmodule::VoltVarCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::commonmodule::VoltVarPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }

    convert_from_proto(in.vvarparameter(), out.vVarParameter()); // required field in DDS
}

void convert_from_proto(const commonmodule::VoltVarPoint& in, openfmb::commonmodule::VoltVarPoint& out)
{
    out.varVal() = in.varval(); // required FLOAT primitive

    out.voltVal() = in.voltval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDVVR& in, openfmb::commonmodule::OperationDVVR& out)
{
    out.modEna() = in.modena(); // required BOOL primitive

    convert_from_proto(in.opltmmsmax(), out.OplTmmsMax()); // required field in DDS

    out.VRef() = in.vref(); // required FLOAT primitive

    out.VRefAdjEna() = in.vrefadjena(); // required BOOL primitive

    out.VRefTmms() = in.vreftmms(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::VoltWCSG& in, openfmb::commonmodule::VoltWCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::commonmodule::VoltWPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }

    convert_from_proto(in.voltwparameter(), out.voltWParameter()); // required field in DDS
}

void convert_from_proto(const commonmodule::VoltWPoint& in, openfmb::commonmodule::VoltWPoint& out)
{
    out.voltVal() = in.voltval(); // required FLOAT primitive

    out.wVal() = in.wval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDVWC& in, openfmb::commonmodule::OperationDVWC& out)
{
    out.modEna() = in.modena(); // required BOOL primitive

    convert_from_proto(in.opltmmsmax(), out.OplTmmsMax()); // required field in DDS
}

void convert_from_proto(const commonmodule::WVarCSG& in, openfmb::commonmodule::WVarCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::commonmodule::WVarPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }

    convert_from_proto(in.wvarparameter(), out.wVarParameter()); // required field in DDS
}

void convert_from_proto(const commonmodule::WVarPoint& in, openfmb::commonmodule::WVarPoint& out)
{
    out.varVal() = in.varval(); // required FLOAT primitive

    out.wVal() = in.wval(); // required FLOAT primitive
}

void convert_from_proto(const commonmodule::OperationDWVR& in, openfmb::commonmodule::OperationDWVR& out)
{
    out.modEna() = in.modena(); // required BOOL primitive
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

    if(in.has_soh()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.soh(), temp);
        out.SoH() = temp;
    }

    if(in.has_whavail()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.whavail(), temp);
        out.WHAvail() = temp;
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
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
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
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    if(in.has_enterserviceoperation()) // optional field in DDS
    {
        openfmb::commonmodule::EnterServiceAPC temp{};
        convert_from_proto(in.enterserviceoperation(), temp);
        out.enterServiceOperation() = temp;
    }

    if(in.has_hzwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::HzWAPC temp{};
        convert_from_proto(in.hzwoperation(), temp);
        out.hzWOperation() = temp;
    }

    if(in.has_limitwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::LimitWAPC temp{};
        convert_from_proto(in.limitwoperation(), temp);
        out.limitWOperation() = temp;
    }

    if(in.has_pfstorageoperation()) // optional field in DDS
    {
        openfmb::commonmodule::PFStorageSPC temp{};
        convert_from_proto(in.pfstorageoperation(), temp);
        out.pFStorageOperation() = temp;
    }

    if(in.has_tmhztripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmHzCSG temp{};
        convert_from_proto(in.tmhztripoperation(), temp);
        out.tmHzTripOperation() = temp;
    }

    if(in.has_tmvolttripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmVoltCSG temp{};
        convert_from_proto(in.tmvolttripoperation(), temp);
        out.tmVoltTripOperation() = temp;
    }

    if(in.has_varoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VarSPC temp{};
        convert_from_proto(in.varoperation(), temp);
        out.vArOperation() = temp;
    }

    if(in.has_voltvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltVarCSG temp{};
        convert_from_proto(in.voltvaroperation(), temp);
        out.voltVarOperation() = temp;
    }

    if(in.has_voltwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltWCSG temp{};
        convert_from_proto(in.voltwoperation(), temp);
        out.voltWOperation() = temp;
    }

    if(in.has_wvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::WVarCSG temp{};
        convert_from_proto(in.wvaroperation(), temp);
        out.wVarOperation() = temp;
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

    if(in.has_soh()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.soh(), temp);
        out.SoH() = temp;
    }

    if(in.has_whavail()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.whavail(), temp);
        out.WHAvail() = temp;
    }
}

void convert_from_proto(const essmodule::ESSStatusZGEN& in, openfmb::essmodule::ESSStatusZGEN& out)
{
    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
}

void convert_from_proto(const commonmodule::CapabilityOverrideMessageInfo& in, openfmb::commonmodule::CapabilityOverrideMessageInfo& out)
{
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const generationmodule::GenerationCapabilityOverride& in, openfmb::generationmodule::GenerationCapabilityOverride& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.generationcapabilityconfiguration(), out.generationCapabilityConfiguration()); // required field in DDS
}

void convert_from_proto(const generationmodule::GenerationCapabilityConfiguration& in, openfmb::generationmodule::GenerationCapabilityConfiguration& out)
{
    if(in.has_sourcecapabilityconfiguration()) convert_from_proto(in.sourcecapabilityconfiguration(), out); // inherited type
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

void convert_from_proto(const generationmodule::GenerationCapability& in, openfmb::generationmodule::GenerationCapability& out)
{
    if(in.has_nameplatevalue()) convert_from_proto(in.nameplatevalue(), out); // inherited type

    convert_from_proto(in.generationcapabilityratings(), out.generationCapabilityRatings()); // required field in DDS

    if(in.has_generationcapabilityconfiguration()) // optional field in DDS
    {
        openfmb::generationmodule::GenerationCapabilityConfiguration temp{};
        convert_from_proto(in.generationcapabilityconfiguration(), temp);
        out.generationCapabilityConfiguration() = temp;
    }
}

void convert_from_proto(const generationmodule::GenerationCapabilityRatings& in, openfmb::generationmodule::GenerationCapabilityRatings& out)
{
    if(in.has_sourcecapabilityratings()) convert_from_proto(in.sourcecapabilityratings(), out); // inherited type
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS

    if(in.has_enterserviceoperation()) // optional field in DDS
    {
        openfmb::commonmodule::EnterServiceAPC temp{};
        convert_from_proto(in.enterserviceoperation(), temp);
        out.enterServiceOperation() = temp;
    }

    if(in.has_hzwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::HzWAPC temp{};
        convert_from_proto(in.hzwoperation(), temp);
        out.hzWOperation() = temp;
    }

    if(in.has_limitwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::LimitWAPC temp{};
        convert_from_proto(in.limitwoperation(), temp);
        out.limitWOperation() = temp;
    }

    if(in.has_pfoperation()) // optional field in DDS
    {
        openfmb::commonmodule::PFSPC temp{};
        convert_from_proto(in.pfoperation(), temp);
        out.pFOperation() = temp;
    }

    if(in.has_tmhztripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmHzCSG temp{};
        convert_from_proto(in.tmhztripoperation(), temp);
        out.tmHzTripOperation() = temp;
    }

    if(in.has_tmvolttripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmVoltCSG temp{};
        convert_from_proto(in.tmvolttripoperation(), temp);
        out.tmVoltTripOperation() = temp;
    }

    if(in.has_varoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VarSPC temp{};
        convert_from_proto(in.varoperation(), temp);
        out.vArOperation() = temp;
    }

    if(in.has_voltvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltVarCSG temp{};
        convert_from_proto(in.voltvaroperation(), temp);
        out.voltVarOperation() = temp;
    }

    if(in.has_voltwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltWCSG temp{};
        convert_from_proto(in.voltwoperation(), temp);
        out.voltWOperation() = temp;
    }

    if(in.has_wvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::WVarCSG temp{};
        convert_from_proto(in.wvaroperation(), temp);
        out.wVarOperation() = temp;
    }
}

void convert_from_proto(const commonmodule::PFSPC& in, openfmb::commonmodule::PFSPC& out)
{
    out.ctlVal() = in.ctlval(); // required BOOL primitive

    convert_from_proto(in.pfparameter(), out.pFParameter()); // required field in DDS
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
        out.reactivePowerControlMode() = static_cast<openfmb::commonmodule::ReactivePowerControlKind::inner_enum>(in.reactivepowercontrolmode().value());
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
        out.realPowerControlMode() = static_cast<openfmb::commonmodule::RealPowerControlKind::inner_enum>(in.realpowercontrolmode().value());
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

    if(in.has_alrm()) // optional enum in DDS
    {
        out.Alrm() = static_cast<openfmb::commonmodule::AlrmKind::inner_enum>(in.alrm().value());
    }

    if(in.has_gridconnectionstate()) // optional enum in DDS
    {
        out.GridConnectionState() = static_cast<openfmb::commonmodule::GridConnectionStateKind::inner_enum>(in.gridconnectionstate().value());
    }

    if(in.has_manalrminfo()) out.ManAlrmInfo() = in.manalrminfo().value(); // optional string

    if(in.has_operatingstate()) // optional enum in DDS
    {
        out.OperatingState() = static_cast<openfmb::commonmodule::OperatingStateKind::inner_enum>(in.operatingstate().value());
    }
}

void convert_from_proto(const generationmodule::GenerationPointStatus& in, openfmb::generationmodule::GenerationPointStatus& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
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
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_transtoislndongridlossenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.transtoislndongridlossenabled(), temp);
        out.transToIslndOnGridLossEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    if(in.has_enterserviceoperation()) // optional field in DDS
    {
        openfmb::commonmodule::EnterServiceAPC temp{};
        convert_from_proto(in.enterserviceoperation(), temp);
        out.enterServiceOperation() = temp;
    }

    if(in.has_hzwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::HzWAPC temp{};
        convert_from_proto(in.hzwoperation(), temp);
        out.hzWOperation() = temp;
    }

    if(in.has_limitwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::LimitWAPC temp{};
        convert_from_proto(in.limitwoperation(), temp);
        out.limitWOperation() = temp;
    }

    if(in.has_pfoperation()) // optional field in DDS
    {
        openfmb::commonmodule::PFSPC temp{};
        convert_from_proto(in.pfoperation(), temp);
        out.pFOperation() = temp;
    }

    if(in.has_tmhztripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmHzCSG temp{};
        convert_from_proto(in.tmhztripoperation(), temp);
        out.tmHzTripOperation() = temp;
    }

    if(in.has_tmvolttripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmVoltCSG temp{};
        convert_from_proto(in.tmvolttripoperation(), temp);
        out.tmVoltTripOperation() = temp;
    }

    if(in.has_varoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VarSPC temp{};
        convert_from_proto(in.varoperation(), temp);
        out.vArOperation() = temp;
    }

    if(in.has_voltvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltVarCSG temp{};
        convert_from_proto(in.voltvaroperation(), temp);
        out.voltVarOperation() = temp;
    }

    if(in.has_voltwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltWCSG temp{};
        convert_from_proto(in.voltwoperation(), temp);
        out.voltWOperation() = temp;
    }

    if(in.has_wvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::WVarCSG temp{};
        convert_from_proto(in.wvaroperation(), temp);
        out.wVarOperation() = temp;
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

void convert_from_proto(const interconnectionmodule::InterconnectionSchedule& in, openfmb::interconnectionmodule::InterconnectionSchedule& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        openfmb::commonmodule::CheckConditions temp{};
        convert_from_proto(in.check(), temp);
        out.check() = temp;
    }

    convert_from_proto(in.interconnectionschedulefscc(), out.interconnectionScheduleFSCC()); // required field in DDS
}

void convert_from_proto(const interconnectionmodule::InterconnectionScheduleFSCC& in, openfmb::interconnectionmodule::InterconnectionScheduleFSCC& out)
{
    if(in.has_controlfscc()) convert_from_proto(in.controlfscc(), out); // inherited type

    for(const auto& input : in.interconnectioncontrolschedulefsch())
    {
        openfmb::interconnectionmodule::InterconnectionControlScheduleFSCH output;
        convert_from_proto(input, output);
        out.interconnectionControlScheduleFSCH().push_back(output);
    }
}

void convert_from_proto(const interconnectionmodule::InterconnectionControlScheduleFSCH& in, openfmb::interconnectionmodule::InterconnectionControlScheduleFSCH& out)
{
    convert_from_proto(in.valdcsg(), out.ValDCSG()); // required field in DDS
}

void convert_from_proto(const interconnectionmodule::InterconnectionCSG& in, openfmb::interconnectionmodule::InterconnectionCSG& out)
{
    for(const auto& input : in.crvpts())
    {
        openfmb::interconnectionmodule::InterconnectionPoint output;
        convert_from_proto(input, output);
        out.crvPts().push_back(output);
    }
}

void convert_from_proto(const interconnectionmodule::InterconnectionPoint& in, openfmb::interconnectionmodule::InterconnectionPoint& out)
{
    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.frequencysetpointenabled(), temp);
        out.frequencySetPointEnabled() = temp;
    }

    if(in.has_island()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.island(), temp);
        out.island() = temp;
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
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
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
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

    if(in.has_isuncontrollable())
    {
        out.isUncontrollable() = in.isuncontrollable().value();
    }

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
    if(in.has_discretecontrolxcbr()) convert_from_proto(in.discretecontrolxcbr(), out); // inherited type
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

    if(in.has_dirfwd()) // optional field in DDS
    {
        openfmb::regulatormodule::DirectionalATCC temp{};
        convert_from_proto(in.dirfwd(), temp);
        out.DirFwd() = temp;
    }

    if(in.has_dirmode()) // optional enum in DDS
    {
        out.DirMode() = static_cast<openfmb::commonmodule::DirectionModeKind::inner_enum>(in.dirmode().value());
    }

    if(in.has_dirrev()) // optional field in DDS
    {
        openfmb::regulatormodule::DirectionalATCC temp{};
        convert_from_proto(in.dirrev(), temp);
        out.DirRev() = temp;
    }

    if(in.has_dirthd()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.dirthd(), temp);
        out.DirThd() = temp;
    }

    if(in.has_parop()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
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

    if(in.has_tapopl()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
        convert_from_proto(in.tapopl(), temp);
        out.TapOpL() = temp;
    }

    if(in.has_tapopr()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPC temp{};
        convert_from_proto(in.tapopr(), temp);
        out.TapOpR() = temp;
    }

    if(in.has_vollmthi()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.vollmthi(), temp);
        out.VolLmtHi() = temp;
    }

    if(in.has_vollmtlo()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.vollmtlo(), temp);
        out.VolLmtLo() = temp;
    }

    if(in.has_vollmtmode()) // optional enum in DDS
    {
        out.VolLmtMode() = static_cast<openfmb::commonmodule::VoltLimitModeKind::inner_enum>(in.vollmtmode().value());
    }
}

void convert_from_proto(const regulatormodule::DirectionalATCC& in, openfmb::regulatormodule::DirectionalATCC& out)
{
    if(in.has_bndwid()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.bndwid(), temp);
        out.BndWid() = temp;
    }

    if(in.has_ctldltmms()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseISC temp{};
        convert_from_proto(in.ctldltmms(), temp);
        out.CtlDlTmms() = temp;
    }

    if(in.has_ldcr()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.ldcr(), temp);
        out.LDCR() = temp;
    }

    if(in.has_ldcx()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.ldcx(), temp);
        out.LDCX() = temp;
    }

    if(in.has_volspt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.volspt(), temp);
        out.VolSpt() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseDPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
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

    if(in.has_bndwidhi()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.bndwidhi(), temp);
        out.BndWidHi() = temp;
    }

    if(in.has_bndwidlo()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.bndwidlo(), temp);
        out.BndWidLo() = temp;
    }

    if(in.has_dirctlrev()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.dirctlrev(), temp);
        out.DirCtlRev() = temp;
    }

    if(in.has_dirindt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.dirindt(), temp);
        out.DirIndt() = temp;
    }

    if(in.has_dirrev()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.dirrev(), temp);
        out.DirRev() = temp;
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

    if(in.has_vollmthi()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.vollmthi(), temp);
        out.VolLmtHi() = temp;
    }

    if(in.has_vollmtlo()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseSPS temp{};
        convert_from_proto(in.vollmtlo(), temp);
        out.VolLmtLo() = temp;
    }

    if(in.has_volspt()) // optional field in DDS
    {
        openfmb::commonmodule::PhaseAPC temp{};
        convert_from_proto(in.volspt(), temp);
        out.VolSpt() = temp;
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
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

    if(in.has_secondaryreadingmmxu()) // optional field in DDS
    {
        openfmb::commonmodule::ReadingMMXU temp{};
        convert_from_proto(in.secondaryreadingmmxu(), temp);
        out.secondaryReadingMMXU() = temp;
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

void convert_from_proto(const reservemodule::AllocatedMargin& in, openfmb::reservemodule::AllocatedMargin& out)
{
    out.requestID() = in.requestid(); // required string

    if(in.has_allocatedmargin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.allocatedmargin(), temp);
        out.allocatedMargin() = temp;
    }

    if(in.has_allocatedstandbymargin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.allocatedstandbymargin(), temp);
        out.allocatedStandbyMargin() = temp;
    }
}

void convert_from_proto(const reservemodule::ReserveMargin& in, openfmb::reservemodule::ReserveMargin& out)
{
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type

    if(in.has_a()) // optional field in DDS
    {
        openfmb::commonmodule::PMG temp{};
        convert_from_proto(in.a(), temp);
        out.A() = temp;
    }

    if(in.has_va()) // optional field in DDS
    {
        openfmb::commonmodule::PMG temp{};
        convert_from_proto(in.va(), temp);
        out.VA() = temp;
    }

    if(in.has_var()) // optional field in DDS
    {
        openfmb::commonmodule::PMG temp{};
        convert_from_proto(in.var(), temp);
        out.VAr() = temp;
    }

    if(in.has_w()) // optional field in DDS
    {
        openfmb::commonmodule::PMG temp{};
        convert_from_proto(in.w(), temp);
        out.W() = temp;
    }
}

void convert_from_proto(const commonmodule::PMG& in, openfmb::commonmodule::PMG& out)
{
    if(in.has_net()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.net(), temp);
        out.net() = temp;
    }

    if(in.has_phsa()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.phsa(), temp);
        out.phsA() = temp;
    }

    if(in.has_phsb()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.phsb(), temp);
        out.phsB() = temp;
    }

    if(in.has_phsc()) // optional field in DDS
    {
        openfmb::commonmodule::MV temp{};
        convert_from_proto(in.phsc(), temp);
        out.phsC() = temp;
    }
}

void convert_from_proto(const reservemodule::ReserveAvailability& in, openfmb::reservemodule::ReserveAvailability& out)
{
    if(in.has_incrementalmargin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.incrementalmargin(), temp);
        out.incrementalMargin() = temp;
    }

    if(in.has_margin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.margin(), temp);
        out.margin() = temp;
    }

    if(in.has_standbymargin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.standbymargin(), temp);
        out.standbyMargin() = temp;
    }
}

void convert_from_proto(const reservemodule::ReserveRequest& in, openfmb::reservemodule::ReserveRequest& out)
{
    out.requestID() = in.requestid(); // required string

    if(in.has_margin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.margin(), temp);
        out.margin() = temp;
    }

    if(in.has_standbymargin()) // optional field in DDS
    {
        openfmb::reservemodule::ReserveMargin temp{};
        convert_from_proto(in.standbymargin(), temp);
        out.standbyMargin() = temp;
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
    if(in.has_q()) // optional field in DDS
    {
        openfmb::commonmodule::Quality temp{};
        convert_from_proto(in.q(), temp);
        out.q() = temp;
    }

    out.stVal() = in.stval(); // required string

    if(in.has_t()) // optional field in DDS
    {
        openfmb::commonmodule::Timestamp temp{};
        convert_from_proto(in.t(), temp);
        out.t() = temp;
    }
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

void convert_from_proto(const solarmodule::SolarCapabilityOverride& in, openfmb::solarmodule::SolarCapabilityOverride& out)
{
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.solarcapabilityconfiguration(), out.solarCapabilityConfiguration()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarCapabilityConfiguration& in, openfmb::solarmodule::SolarCapabilityConfiguration& out)
{
    if(in.has_sourcecapabilityconfiguration()) convert_from_proto(in.sourcecapabilityconfiguration(), out); // inherited type
}

void convert_from_proto(const solarmodule::SolarInverter& in, openfmb::solarmodule::SolarInverter& out)
{
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const solarmodule::SolarCapability& in, openfmb::solarmodule::SolarCapability& out)
{
    if(in.has_nameplatevalue()) convert_from_proto(in.nameplatevalue(), out); // inherited type

    if(in.has_solarcapabilityconfiguration()) // optional field in DDS
    {
        openfmb::solarmodule::SolarCapabilityConfiguration temp{};
        convert_from_proto(in.solarcapabilityconfiguration(), temp);
        out.solarCapabilityConfiguration() = temp;
    }

    convert_from_proto(in.solarcapabilityratings(), out.solarCapabilityRatings()); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarCapabilityRatings& in, openfmb::solarmodule::SolarCapabilityRatings& out)
{
    if(in.has_sourcecapabilityratings()) convert_from_proto(in.sourcecapabilityratings(), out); // inherited type
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
        openfmb::commonmodule::ControlSPC temp{};
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
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_reset()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.reset(), temp);
        out.reset() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    convert_from_proto(in.starttime(), out.startTime()); // required field in DDS

    if(in.has_enterserviceoperation()) // optional field in DDS
    {
        openfmb::commonmodule::EnterServiceAPC temp{};
        convert_from_proto(in.enterserviceoperation(), temp);
        out.enterServiceOperation() = temp;
    }

    if(in.has_hzwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::HzWAPC temp{};
        convert_from_proto(in.hzwoperation(), temp);
        out.hzWOperation() = temp;
    }

    if(in.has_limitwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::LimitWAPC temp{};
        convert_from_proto(in.limitwoperation(), temp);
        out.limitWOperation() = temp;
    }

    if(in.has_pfoperation()) // optional field in DDS
    {
        openfmb::commonmodule::PFSPC temp{};
        convert_from_proto(in.pfoperation(), temp);
        out.pFOperation() = temp;
    }

    if(in.has_tmhztripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmHzCSG temp{};
        convert_from_proto(in.tmhztripoperation(), temp);
        out.tmHzTripOperation() = temp;
    }

    if(in.has_tmvolttripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmVoltCSG temp{};
        convert_from_proto(in.tmvolttripoperation(), temp);
        out.tmVoltTripOperation() = temp;
    }

    if(in.has_varoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VarSPC temp{};
        convert_from_proto(in.varoperation(), temp);
        out.vArOperation() = temp;
    }

    if(in.has_voltvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltVarCSG temp{};
        convert_from_proto(in.voltvaroperation(), temp);
        out.voltVarOperation() = temp;
    }

    if(in.has_voltwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltWCSG temp{};
        convert_from_proto(in.voltwoperation(), temp);
        out.voltWOperation() = temp;
    }

    if(in.has_wvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::WVarCSG temp{};
        convert_from_proto(in.wvaroperation(), temp);
        out.wVarOperation() = temp;
    }

    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }
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

    if(in.has_alrm()) // optional enum in DDS
    {
        out.Alrm() = static_cast<openfmb::commonmodule::AlrmKind::inner_enum>(in.alrm().value());
    }

    if(in.has_gnsynst()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.gnsynst(), temp);
        out.GnSynSt() = temp;
    }

    if(in.has_gridconnectionstate()) // optional enum in DDS
    {
        out.GridConnectionState() = static_cast<openfmb::commonmodule::GridConnectionStateKind::inner_enum>(in.gridconnectionstate().value());
    }

    if(in.has_manalrminfo()) out.ManAlrmInfo() = in.manalrminfo().value(); // optional string

    if(in.has_operatingstate()) // optional enum in DDS
    {
        out.OperatingState() = static_cast<openfmb::commonmodule::OperatingStateKind::inner_enum>(in.operatingstate().value());
    }
}

void convert_from_proto(const solarmodule::SolarPointStatus& in, openfmb::solarmodule::SolarPointStatus& out)
{
    if(in.has_frequencysetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
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
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.reactivepwrsetpointenabled(), temp);
        out.reactivePwrSetPointEnabled() = temp;
    }

    if(in.has_realpwrsetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.realpwrsetpointenabled(), temp);
        out.realPwrSetPointEnabled() = temp;
    }

    if(in.has_state()) // optional enum in DDS
    {
        out.state() = static_cast<openfmb::commonmodule::StateKind::inner_enum>(in.state().value());
    }

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        openfmb::commonmodule::StatusSPS temp{};
        convert_from_proto(in.voltagesetpointenabled(), temp);
        out.voltageSetPointEnabled() = temp;
    }

    if(in.has_blackstartenabled()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.blackstartenabled(), temp);
        out.blackStartEnabled() = temp;
    }

    if(in.has_enterserviceoperation()) // optional field in DDS
    {
        openfmb::commonmodule::EnterServiceAPC temp{};
        convert_from_proto(in.enterserviceoperation(), temp);
        out.enterServiceOperation() = temp;
    }

    if(in.has_hzwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::HzWPoint temp{};
        convert_from_proto(in.hzwoperation(), temp);
        out.hzWOperation() = temp;
    }

    if(in.has_limitwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::LimitWAPC temp{};
        convert_from_proto(in.limitwoperation(), temp);
        out.limitWOperation() = temp;
    }

    if(in.has_pfoperation()) // optional field in DDS
    {
        openfmb::commonmodule::PFSPC temp{};
        convert_from_proto(in.pfoperation(), temp);
        out.pFOperation() = temp;
    }

    if(in.has_syncbacktogrid()) // optional field in DDS
    {
        openfmb::commonmodule::ControlSPC temp{};
        convert_from_proto(in.syncbacktogrid(), temp);
        out.syncBackToGrid() = temp;
    }

    if(in.has_tmhztripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmHzCSG temp{};
        convert_from_proto(in.tmhztripoperation(), temp);
        out.tmHzTripOperation() = temp;
    }

    if(in.has_tmvolttripoperation()) // optional field in DDS
    {
        openfmb::commonmodule::TmVoltCSG temp{};
        convert_from_proto(in.tmvolttripoperation(), temp);
        out.tmVoltTripOperation() = temp;
    }

    if(in.has_varoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VarSPC temp{};
        convert_from_proto(in.varoperation(), temp);
        out.vArOperation() = temp;
    }

    if(in.has_voltvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltVarCSG temp{};
        convert_from_proto(in.voltvaroperation(), temp);
        out.voltVarOperation() = temp;
    }

    if(in.has_voltwoperation()) // optional field in DDS
    {
        openfmb::commonmodule::VoltWCSG temp{};
        convert_from_proto(in.voltwoperation(), temp);
        out.voltWOperation() = temp;
    }

    if(in.has_wvaroperation()) // optional field in DDS
    {
        openfmb::commonmodule::WVarCSG temp{};
        convert_from_proto(in.wvaroperation(), temp);
        out.wVarOperation() = temp;
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

static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_locked_forward) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_locked_forward), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_locked_reverse) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_locked_reverse), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_reverse_idle) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_reverse_idle), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_bidirectional) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_bidirectional), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_neutral_idle) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_neutral_idle), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_cogeneration) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_cogeneration), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_reactive_bidirectional) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_reactive_bidirectional), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_bias_bidirectional) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_bias_bidirectional), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_bias_cogeneration) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_bias_cogeneration), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DirectionModeKind::DirectionModeKind_reverse_cogeneration) == static_cast<int>(openfmb::commonmodule::DirectionModeKind::DirectionModeKind_reverse_cogeneration), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ControlModeKind::ControlModeKind_auto) == static_cast<int>(openfmb::commonmodule::ControlModeKind::ControlModeKind_auto), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ControlModeKind::ControlModeKind_manual) == static_cast<int>(openfmb::commonmodule::ControlModeKind::ControlModeKind_manual), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ControlModeKind::ControlModeKind_override) == static_cast<int>(openfmb::commonmodule::ControlModeKind::ControlModeKind_override), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ControlModeKind::ControlModeKind_remote) == static_cast<int>(openfmb::commonmodule::ControlModeKind::ControlModeKind_remote), "mismatched enum values");

static_assert(static_cast<int>(circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_none) == static_cast<int>(openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_none), "mismatched enum values");
static_assert(static_cast<int>(circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_auto) == static_cast<int>(openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_auto), "mismatched enum values");
static_assert(static_cast<int>(circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_manual) == static_cast<int>(openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_manual), "mismatched enum values");
static_assert(static_cast<int>(circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_netzero) == static_cast<int>(openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_netzero), "mismatched enum values");
static_assert(static_cast<int>(circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_start) == static_cast<int>(openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_start), "mismatched enum values");
static_assert(static_cast<int>(circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_stop) == static_cast<int>(openfmb::circuitsegmentservicemodule::CircuitSegmentServiceModeKind::CircuitSegmentServiceModeKind_stop), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::AbnOpCatKind::AbnOpCatKind_I) == static_cast<int>(openfmb::commonmodule::AbnOpCatKind::AbnOpCatKind_I), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AbnOpCatKind::AbnOpCatKind_II) == static_cast<int>(openfmb::commonmodule::AbnOpCatKind::AbnOpCatKind_II), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AbnOpCatKind::AbnOpCatKind_III) == static_cast<int>(openfmb::commonmodule::AbnOpCatKind::AbnOpCatKind_III), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::NorOpCatKind::NorOpCatKind_A) == static_cast<int>(openfmb::commonmodule::NorOpCatKind::NorOpCatKind_A), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::NorOpCatKind::NorOpCatKind_B) == static_cast<int>(openfmb::commonmodule::NorOpCatKind::NorOpCatKind_B), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_advanced) == static_cast<int>(openfmb::commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_advanced), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_droop) == static_cast<int>(openfmb::commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_droop), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_voltage) == static_cast<int>(openfmb::commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_voltage), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_reactivePower) == static_cast<int>(openfmb::commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_reactivePower), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_powerFactor) == static_cast<int>(openfmb::commonmodule::ReactivePowerControlKind::ReactivePowerControlKind_powerFactor), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::RealPowerControlKind::RealPowerControlKind_advanced) == static_cast<int>(openfmb::commonmodule::RealPowerControlKind::RealPowerControlKind_advanced), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RealPowerControlKind::RealPowerControlKind_droop) == static_cast<int>(openfmb::commonmodule::RealPowerControlKind::RealPowerControlKind_droop), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RealPowerControlKind::RealPowerControlKind_isochronous) == static_cast<int>(openfmb::commonmodule::RealPowerControlKind::RealPowerControlKind_isochronous), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::RealPowerControlKind::RealPowerControlKind_realPower) == static_cast<int>(openfmb::commonmodule::RealPowerControlKind::RealPowerControlKind_realPower), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_ground_fault) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_ground_fault), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_dc_over_voltage) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_dc_over_voltage), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_ac_disconnect_open) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_ac_disconnect_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_dc_disconnect_open) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_dc_disconnect_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_grid_disconnect) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_grid_disconnect), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_cabinet_open) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_cabinet_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_manual_shutdown) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_manual_shutdown), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_over_temperature) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_over_temperature), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_frequency_above_limit) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_frequency_above_limit), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_frequency_under_limit) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_frequency_under_limit), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_ac_voltage_above_limit) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_ac_voltage_above_limit), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_ac_voltage_under_limit) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_ac_voltage_under_limit), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_blown_string_fuse_on_input) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_blown_string_fuse_on_input), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_under_temperature) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_under_temperature), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_generic_memory_or_communication_error) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_generic_memory_or_communication_error), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_hardware_test_failure) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_hardware_test_failure), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::AlrmKind::AlrmKind_manufacturer_alarm) == static_cast<int>(openfmb::commonmodule::AlrmKind::AlrmKind_manufacturer_alarm), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::GridConnectionStateKind::GridConnectionStateKind_disconnected) == static_cast<int>(openfmb::commonmodule::GridConnectionStateKind::GridConnectionStateKind_disconnected), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectionStateKind::GridConnectionStateKind_connected) == static_cast<int>(openfmb::commonmodule::GridConnectionStateKind::GridConnectionStateKind_connected), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_off) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_off), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_standby) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_standby), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_available) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_available), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_authorized) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_authorized), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_starting_and_synchronizing) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_starting_and_synchronizing), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_connected_and_idle) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_connected_and_idle), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_connected_and_generating) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_connected_and_generating), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_connected_and_consuming) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_connected_and_consuming), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_stopping) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_stopping), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_blocked) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_in_maintenance) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_disconnected_and_in_maintenance), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_ceased_to_energize) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_ceased_to_energize), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::OperatingStateKind::OperatingStateKind_failed) == static_cast<int>(openfmb::commonmodule::OperatingStateKind::OperatingStateKind_failed), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_off) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_off), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_high_limit_only) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_high_limit_only), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_low_limit_only) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_low_limit_only), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_high_low_limits) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_high_low_limits), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_ivvc_high_limit_only) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_ivvc_high_limit_only), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_ivvc_low_limit_only) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_ivvc_low_limit_only), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::VoltLimitModeKind::VoltLimitModeKind_ivvc_high_low_limits) == static_cast<int>(openfmb::commonmodule::VoltLimitModeKind::VoltLimitModeKind_ivvc_high_low_limits), "mismatched enum values");

} // end namespace rti

} // end namespace dds

} // end namespace adapter
