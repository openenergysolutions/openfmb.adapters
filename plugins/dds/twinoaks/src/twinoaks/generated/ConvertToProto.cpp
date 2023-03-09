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

#include "ConvertToProto.h"

#include "../ConvertToProtoHelpers.h"

namespace adapter {

namespace dds {

// ---- forward declare the conversion routines for the child types ---

void convert_to_proto(const twinoaks::commonmodule::ControlMessageInfo& in, commonmodule::ControlMessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out);

void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out);

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out);

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out);

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControl& in, breakermodule::BreakerDiscreteControl& out);

void convert_to_proto(const twinoaks::commonmodule::ControlValue& in, commonmodule::ControlValue& out);

void convert_to_proto(const twinoaks::commonmodule::CheckConditions& in, commonmodule::CheckConditions& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlXCBR& in, breakermodule::BreakerDiscreteControlXCBR& out);

void convert_to_proto(const twinoaks::commonmodule::DiscreteControlXCBR& in, commonmodule::DiscreteControlXCBR& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForControl& in, commonmodule::LogicalNodeForControl& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseDPC& in, commonmodule::PhaseDPC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlDPC& in, commonmodule::ControlDPC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlINC& in, commonmodule::ControlINC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlSPC& in, commonmodule::ControlSPC& out);

void convert_to_proto(const twinoaks::commonmodule::EventMessageInfo& in, commonmodule::EventMessageInfo& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerEvent& in, breakermodule::BreakerEvent& out);

void convert_to_proto(const twinoaks::commonmodule::EventValue& in, commonmodule::EventValue& out);

void convert_to_proto(const twinoaks::commonmodule::StatusAndEventXCBR& in, commonmodule::StatusAndEventXCBR& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForEventAndStatus& in, commonmodule::LogicalNodeForEventAndStatus& out);

void convert_to_proto(const twinoaks::commonmodule::ENS_BehaviourModeKind& in, commonmodule::ENS_BehaviourModeKind& out);

void convert_to_proto(const twinoaks::commonmodule::Quality& in, commonmodule::Quality& out);

void convert_to_proto(const twinoaks::commonmodule::DetailQual& in, commonmodule::DetailQual& out);

void convert_to_proto(const twinoaks::commonmodule::ENS_HealthKind& in, commonmodule::ENS_HealthKind& out);

void convert_to_proto(const twinoaks::commonmodule::StatusSPS& in, commonmodule::StatusSPS& out);

void convert_to_proto(const twinoaks::commonmodule::ENS_DynamicTestKind& in, commonmodule::ENS_DynamicTestKind& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseDPS& in, commonmodule::PhaseDPS& out);

void convert_to_proto(const twinoaks::commonmodule::StatusDPS& in, commonmodule::StatusDPS& out);

void convert_to_proto(const twinoaks::commonmodule::ACD& in, commonmodule::ACD& out);

void convert_to_proto(const twinoaks::commonmodule::StatusINS& in, commonmodule::StatusINS& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseSPS& in, commonmodule::PhaseSPS& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseRecloseAction& in, commonmodule::PhaseRecloseAction& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out);

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out);

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out);

void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out);

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out);

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out);

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out);

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out);

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out);

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out);

void convert_to_proto(const twinoaks::commonmodule::StatusMessageInfo& in, commonmodule::StatusMessageInfo& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerStatus& in, breakermodule::BreakerStatus& out);

void convert_to_proto(const twinoaks::commonmodule::StatusValue& in, commonmodule::StatusValue& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankControl& in, capbankmodule::CapBankControl& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlFSCC& in, capbankmodule::CapBankControlFSCC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlFSCC& in, commonmodule::ControlFSCC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlScheduleFSCH& in, commonmodule::ControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::commonmodule::ScheduleCSG& in, commonmodule::ScheduleCSG& out);

void convert_to_proto(const twinoaks::commonmodule::SchedulePoint& in, commonmodule::SchedulePoint& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_ScheduleParameter& in, commonmodule::ENG_ScheduleParameter& out);

void convert_to_proto(const twinoaks::commonmodule::ControlTimestamp& in, commonmodule::ControlTimestamp& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlScheduleFSCH& in, capbankmodule::CapBankControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankCSG& in, capbankmodule::CapBankCSG& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankPoint& in, capbankmodule::CapBankPoint& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlYPSH& in, capbankmodule::CapBankControlYPSH& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseSPC& in, commonmodule::PhaseSPC& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseAPC& in, commonmodule::PhaseAPC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlAPC& in, commonmodule::ControlAPC& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankSystem& in, capbankmodule::CapBankSystem& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankDiscreteControl& in, capbankmodule::CapBankDiscreteControl& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankDiscreteControlYPSH& in, capbankmodule::CapBankDiscreteControlYPSH& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankEvent& in, capbankmodule::CapBankEvent& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankEventAndStatusYPSH& in, capbankmodule::CapBankEventAndStatusYPSH& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankReading& in, capbankmodule::CapBankReading& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankStatus& in, capbankmodule::CapBankStatus& out);

void convert_to_proto(const twinoaks::commonmodule::ApplicationSystem& in, commonmodule::ApplicationSystem& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentControl& in, circuitsegmentservicemodule::CircuitSegmentControl& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentControlDCSC& in, circuitsegmentservicemodule::CircuitSegmentControlDCSC& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& in, circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentEvent& in, circuitsegmentservicemodule::CircuitSegmentEvent& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentEventDCSC& in, circuitsegmentservicemodule::CircuitSegmentEventDCSC& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentStatus& in, circuitsegmentservicemodule::CircuitSegmentStatus& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentStatusDCSC& in, circuitsegmentservicemodule::CircuitSegmentStatusDCSC& out);

void convert_to_proto(const twinoaks::commonmodule::CapabilityMessageInfo& in, commonmodule::CapabilityMessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::ESS& in, commonmodule::ESS& out);

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityOverride& in, essmodule::ESSCapabilityOverride& out);

void convert_to_proto(const twinoaks::commonmodule::NameplateValue& in, commonmodule::NameplateValue& out);

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityConfiguration& in, essmodule::ESSCapabilityConfiguration& out);

void convert_to_proto(const twinoaks::commonmodule::SourceCapabilityConfiguration& in, commonmodule::SourceCapabilityConfiguration& out);

void convert_to_proto(const twinoaks::commonmodule::ASG& in, commonmodule::ASG& out);

void convert_to_proto(const twinoaks::essmodule::ESSCapability& in, essmodule::ESSCapability& out);

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityRatings& in, essmodule::ESSCapabilityRatings& out);

void convert_to_proto(const twinoaks::commonmodule::SourceCapabilityRatings& in, commonmodule::SourceCapabilityRatings& out);

void convert_to_proto(const twinoaks::essmodule::ESSControl& in, essmodule::ESSControl& out);

void convert_to_proto(const twinoaks::essmodule::EssControlFSCC& in, essmodule::EssControlFSCC& out);

void convert_to_proto(const twinoaks::essmodule::ESSControlScheduleFSCH& in, essmodule::ESSControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::essmodule::ESSCSG& in, essmodule::ESSCSG& out);

void convert_to_proto(const twinoaks::essmodule::ESSCurvePoint& in, essmodule::ESSCurvePoint& out);

void convert_to_proto(const twinoaks::essmodule::ESSPoint& in, essmodule::ESSPoint& out);

void convert_to_proto(const twinoaks::essmodule::ESSFunction& in, essmodule::ESSFunction& out);

void convert_to_proto(const twinoaks::essmodule::CapacityFirming& in, essmodule::CapacityFirming& out);

void convert_to_proto(const twinoaks::essmodule::FrequencyRegulation& in, essmodule::FrequencyRegulation& out);

void convert_to_proto(const twinoaks::essmodule::PeakShaving& in, essmodule::PeakShaving& out);

void convert_to_proto(const twinoaks::essmodule::SocLimit& in, essmodule::SocLimit& out);

void convert_to_proto(const twinoaks::essmodule::SOCManagement& in, essmodule::SOCManagement& out);

void convert_to_proto(const twinoaks::essmodule::VoltageDroop& in, essmodule::VoltageDroop& out);

void convert_to_proto(const twinoaks::essmodule::VoltageRegulation& in, essmodule::VoltageRegulation& out);

void convert_to_proto(const twinoaks::essmodule::VoltagePI& in, essmodule::VoltagePI& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_GridConnectModeKind& in, commonmodule::ENG_GridConnectModeKind& out);

void convert_to_proto(const twinoaks::commonmodule::RampRate& in, commonmodule::RampRate& out);

void convert_to_proto(const twinoaks::commonmodule::EnterServiceAPC& in, commonmodule::EnterServiceAPC& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDCTE& in, commonmodule::OperationDCTE& out);

void convert_to_proto(const twinoaks::commonmodule::ControlING& in, commonmodule::ControlING& out);

void convert_to_proto(const twinoaks::commonmodule::HzWAPC& in, commonmodule::HzWAPC& out);

void convert_to_proto(const twinoaks::commonmodule::HzWPoint& in, commonmodule::HzWPoint& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDHFW& in, commonmodule::OperationDHFW& out);

void convert_to_proto(const twinoaks::commonmodule::ClearingTime& in, commonmodule::ClearingTime& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDLFW& in, commonmodule::OperationDLFW& out);

void convert_to_proto(const twinoaks::commonmodule::LimitWAPC& in, commonmodule::LimitWAPC& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDWMX& in, commonmodule::OperationDWMX& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDWMN& in, commonmodule::OperationDWMN& out);

void convert_to_proto(const twinoaks::commonmodule::PFSPC& in, commonmodule::PFSPC& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDFPF& in, commonmodule::OperationDFPF& out);

void convert_to_proto(const twinoaks::commonmodule::TmHzCSG& in, commonmodule::TmHzCSG& out);

void convert_to_proto(const twinoaks::commonmodule::TmHzPoint& in, commonmodule::TmHzPoint& out);

void convert_to_proto(const twinoaks::commonmodule::TmVoltCSG& in, commonmodule::TmVoltCSG& out);

void convert_to_proto(const twinoaks::commonmodule::TmVoltPoint& in, commonmodule::TmVoltPoint& out);

void convert_to_proto(const twinoaks::commonmodule::VarSPC& in, commonmodule::VarSPC& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDVAR& in, commonmodule::OperationDVAR& out);

void convert_to_proto(const twinoaks::commonmodule::VoltVarCSG& in, commonmodule::VoltVarCSG& out);

void convert_to_proto(const twinoaks::commonmodule::VoltVarPoint& in, commonmodule::VoltVarPoint& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDVVR& in, commonmodule::OperationDVVR& out);

void convert_to_proto(const twinoaks::commonmodule::VoltWCSG& in, commonmodule::VoltWCSG& out);

void convert_to_proto(const twinoaks::commonmodule::VoltWPoint& in, commonmodule::VoltWPoint& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDVWC& in, commonmodule::OperationDVWC& out);

void convert_to_proto(const twinoaks::commonmodule::WVarCSG& in, commonmodule::WVarCSG& out);

void convert_to_proto(const twinoaks::commonmodule::WVarPoint& in, commonmodule::WVarPoint& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDWVR& in, commonmodule::OperationDWVR& out);

void convert_to_proto(const twinoaks::commonmodule::WSPC& in, commonmodule::WSPC& out);

void convert_to_proto(const twinoaks::commonmodule::OperationDWGC& in, commonmodule::OperationDWGC& out);

void convert_to_proto(const twinoaks::essmodule::ESSDiscreteControl& in, essmodule::ESSDiscreteControl& out);

void convert_to_proto(const twinoaks::essmodule::ESSDiscreteControlDBAT& in, essmodule::ESSDiscreteControlDBAT& out);

void convert_to_proto(const twinoaks::essmodule::ESSEvent& in, essmodule::ESSEvent& out);

void convert_to_proto(const twinoaks::essmodule::EssEventZBAT& in, essmodule::EssEventZBAT& out);

void convert_to_proto(const twinoaks::essmodule::ESSEventZGEN& in, essmodule::ESSEventZGEN& out);

void convert_to_proto(const twinoaks::essmodule::ESSEventAndStatusZGEN& in, essmodule::ESSEventAndStatusZGEN& out);

void convert_to_proto(const twinoaks::essmodule::ESSPointStatus& in, essmodule::ESSPointStatus& out);

void convert_to_proto(const twinoaks::essmodule::ESSReading& in, essmodule::ESSReading& out);

void convert_to_proto(const twinoaks::essmodule::ESSStatus& in, essmodule::ESSStatus& out);

void convert_to_proto(const twinoaks::essmodule::EssStatusZBAT& in, essmodule::EssStatusZBAT& out);

void convert_to_proto(const twinoaks::essmodule::ESSStatusZGEN& in, essmodule::ESSStatusZGEN& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityOverride& in, generationmodule::GenerationCapabilityOverride& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityConfiguration& in, generationmodule::GenerationCapabilityConfiguration& out);

void convert_to_proto(const twinoaks::generationmodule::GeneratingUnit& in, generationmodule::GeneratingUnit& out);

void convert_to_proto(const twinoaks::commonmodule::ActivePower& in, commonmodule::ActivePower& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCapability& in, generationmodule::GenerationCapability& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityRatings& in, generationmodule::GenerationCapabilityRatings& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationControl& in, generationmodule::GenerationControl& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationControlFSCC& in, generationmodule::GenerationControlFSCC& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationControlScheduleFSCH& in, generationmodule::GenerationControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCSG& in, generationmodule::GenerationCSG& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationPoint& in, generationmodule::GenerationPoint& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationDiscreteControl& in, generationmodule::GenerationDiscreteControl& out);

void convert_to_proto(const twinoaks::generationmodule::ReactivePowerControl& in, generationmodule::ReactivePowerControl& out);

void convert_to_proto(const twinoaks::generationmodule::DroopParameter& in, generationmodule::DroopParameter& out);

void convert_to_proto(const twinoaks::generationmodule::RealPowerControl& in, generationmodule::RealPowerControl& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationEvent& in, generationmodule::GenerationEvent& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationEventZGEN& in, generationmodule::GenerationEventZGEN& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationEventAndStatusZGEN& in, generationmodule::GenerationEventAndStatusZGEN& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationPointStatus& in, generationmodule::GenerationPointStatus& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationReading& in, generationmodule::GenerationReading& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationStatus& in, generationmodule::GenerationStatus& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationStatusZGEN& in, generationmodule::GenerationStatusZGEN& out);

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionSchedule& in, interconnectionmodule::InterconnectionSchedule& out);

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionScheduleFSCC& in, interconnectionmodule::InterconnectionScheduleFSCC& out);

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionControlScheduleFSCH& in, interconnectionmodule::InterconnectionControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionCSG& in, interconnectionmodule::InterconnectionCSG& out);

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionPoint& in, interconnectionmodule::InterconnectionPoint& out);

void convert_to_proto(const twinoaks::commonmodule::EnergyConsumer& in, commonmodule::EnergyConsumer& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControl& in, loadmodule::LoadControl& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControlFSCC& in, loadmodule::LoadControlFSCC& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControlScheduleFSCH& in, loadmodule::LoadControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::loadmodule::LoadCSG& in, loadmodule::LoadCSG& out);

void convert_to_proto(const twinoaks::loadmodule::LoadPoint& in, loadmodule::LoadPoint& out);

void convert_to_proto(const twinoaks::loadmodule::LoadEvent& in, loadmodule::LoadEvent& out);

void convert_to_proto(const twinoaks::loadmodule::LoadEventZGLD& in, loadmodule::LoadEventZGLD& out);

void convert_to_proto(const twinoaks::loadmodule::LoadEventAndStatusZGLD& in, loadmodule::LoadEventAndStatusZGLD& out);

void convert_to_proto(const twinoaks::loadmodule::LoadPointStatus& in, loadmodule::LoadPointStatus& out);

void convert_to_proto(const twinoaks::loadmodule::LoadReading& in, loadmodule::LoadReading& out);

void convert_to_proto(const twinoaks::loadmodule::LoadStatus& in, loadmodule::LoadStatus& out);

void convert_to_proto(const twinoaks::loadmodule::LoadStatusZGLD& in, loadmodule::LoadStatusZGLD& out);

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out);

void convert_to_proto(const twinoaks::metermodule::MeterReading& in, metermodule::MeterReading& out);

void convert_to_proto(const twinoaks::reclosermodule::Recloser& in, reclosermodule::Recloser& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserDiscreteControl& in, reclosermodule::RecloserDiscreteControl& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserDiscreteControlXCBR& in, reclosermodule::RecloserDiscreteControlXCBR& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserEvent& in, reclosermodule::RecloserEvent& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserReading& in, reclosermodule::RecloserReading& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserStatus& in, reclosermodule::RecloserStatus& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorDiscreteControl& in, regulatormodule::RegulatorDiscreteControl& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlATCC& in, regulatormodule::RegulatorControlATCC& out);

void convert_to_proto(const twinoaks::regulatormodule::DirectionalATCC& in, regulatormodule::DirectionalATCC& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseISC& in, commonmodule::PhaseISC& out);

void convert_to_proto(const twinoaks::commonmodule::ControlISC& in, commonmodule::ControlISC& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorSystem& in, regulatormodule::RegulatorSystem& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControl& in, regulatormodule::RegulatorControl& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlFSCC& in, regulatormodule::RegulatorControlFSCC& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlScheduleFSCH& in, regulatormodule::RegulatorControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorCSG& in, regulatormodule::RegulatorCSG& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorPoint& in, regulatormodule::RegulatorPoint& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEvent& in, regulatormodule::RegulatorEvent& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEventAndStatusANCR& in, regulatormodule::RegulatorEventAndStatusANCR& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEventAndStatusATCC& in, regulatormodule::RegulatorEventAndStatusATCC& out);

void convert_to_proto(const twinoaks::commonmodule::StatusINC& in, commonmodule::StatusINC& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseINS& in, commonmodule::PhaseINS& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorReading& in, regulatormodule::RegulatorReading& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorStatus& in, regulatormodule::RegulatorStatus& out);

void convert_to_proto(const twinoaks::reservemodule::AllocatedMargin& in, reservemodule::AllocatedMargin& out);

void convert_to_proto(const twinoaks::reservemodule::ReserveMargin& in, reservemodule::ReserveMargin& out);

void convert_to_proto(const twinoaks::commonmodule::PMG& in, commonmodule::PMG& out);

void convert_to_proto(const twinoaks::reservemodule::ReserveAvailability& in, reservemodule::ReserveAvailability& out);

void convert_to_proto(const twinoaks::reservemodule::ReserveRequest& in, reservemodule::ReserveRequest& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceDiscreteControl& in, resourcemodule::ResourceDiscreteControl& out);

void convert_to_proto(const twinoaks::resourcemodule::AnalogControlGGIO& in, resourcemodule::AnalogControlGGIO& out);

void convert_to_proto(const twinoaks::resourcemodule::BooleanControlGGIO& in, resourcemodule::BooleanControlGGIO& out);

void convert_to_proto(const twinoaks::resourcemodule::IntegerControlGGIO& in, resourcemodule::IntegerControlGGIO& out);

void convert_to_proto(const twinoaks::resourcemodule::StringControlGGIO& in, resourcemodule::StringControlGGIO& out);

void convert_to_proto(const twinoaks::commonmodule::VSC& in, commonmodule::VSC& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceEvent& in, resourcemodule::ResourceEvent& out);

void convert_to_proto(const twinoaks::commonmodule::AnalogEventAndStatusGGIO& in, commonmodule::AnalogEventAndStatusGGIO& out);

void convert_to_proto(const twinoaks::commonmodule::BooleanEventAndStatusGGIO& in, commonmodule::BooleanEventAndStatusGGIO& out);

void convert_to_proto(const twinoaks::commonmodule::IntegerEventAndStatusGGIO& in, commonmodule::IntegerEventAndStatusGGIO& out);

void convert_to_proto(const twinoaks::commonmodule::StringEventAndStatusGGIO& in, commonmodule::StringEventAndStatusGGIO& out);

void convert_to_proto(const twinoaks::commonmodule::VSS& in, commonmodule::VSS& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceStatus& in, resourcemodule::ResourceStatus& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityOverride& in, solarmodule::SolarCapabilityOverride& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityConfiguration& in, solarmodule::SolarCapabilityConfiguration& out);

void convert_to_proto(const twinoaks::solarmodule::SolarInverter& in, solarmodule::SolarInverter& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCapability& in, solarmodule::SolarCapability& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityRatings& in, solarmodule::SolarCapabilityRatings& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControl& in, solarmodule::SolarControl& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControlFSCC& in, solarmodule::SolarControlFSCC& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControlScheduleFSCH& in, solarmodule::SolarControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCSG& in, solarmodule::SolarCSG& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCurvePoint& in, solarmodule::SolarCurvePoint& out);

void convert_to_proto(const twinoaks::solarmodule::SolarPoint& in, solarmodule::SolarPoint& out);

void convert_to_proto(const twinoaks::solarmodule::SolarDiscreteControl& in, solarmodule::SolarDiscreteControl& out);

void convert_to_proto(const twinoaks::solarmodule::SolarDiscreteControlPV& in, solarmodule::SolarDiscreteControlPV& out);

void convert_to_proto(const twinoaks::solarmodule::SolarEvent& in, solarmodule::SolarEvent& out);

void convert_to_proto(const twinoaks::solarmodule::SolarEventZGEN& in, solarmodule::SolarEventZGEN& out);

void convert_to_proto(const twinoaks::solarmodule::SolarEventAndStatusZGEN& in, solarmodule::SolarEventAndStatusZGEN& out);

void convert_to_proto(const twinoaks::solarmodule::SolarPointStatus& in, solarmodule::SolarPointStatus& out);

void convert_to_proto(const twinoaks::solarmodule::SolarReading& in, solarmodule::SolarReading& out);

void convert_to_proto(const twinoaks::solarmodule::SolarStatus& in, solarmodule::SolarStatus& out);

void convert_to_proto(const twinoaks::solarmodule::SolarStatusZGEN& in, solarmodule::SolarStatusZGEN& out);

void convert_to_proto(const twinoaks::switchmodule::ProtectedSwitch& in, switchmodule::ProtectedSwitch& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchDiscreteControl& in, switchmodule::SwitchDiscreteControl& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchDiscreteControlXSWI& in, switchmodule::SwitchDiscreteControlXSWI& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchEvent& in, switchmodule::SwitchEvent& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchEventXSWI& in, switchmodule::SwitchEventXSWI& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchReading& in, switchmodule::SwitchReading& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchStatus& in, switchmodule::SwitchStatus& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusXSWI& in, switchmodule::SwitchStatusXSWI& out);

// ---- implement the top level profile conversion routines ---

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlProfile& in, breakermodule::BreakerDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerDiscreteControl, *out.mutable_breakerdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::breakermodule::BreakerEventProfile& in, breakermodule::BreakerEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerEvent, *out.mutable_breakerevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS

    for(decltype(in.breakerReading.length()) i = 0; i < in.breakerReading.length(); ++i)
    {
        convert_to_proto(in.breakerReading.at(i), *out.mutable_breakerreading()->Add());
    }
}

void convert_to_proto(const twinoaks::breakermodule::BreakerStatusProfile& in, breakermodule::BreakerStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerStatus, *out.mutable_breakerstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlProfile& in, capbankmodule::CapBankControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.capBankControl, *out.mutable_capbankcontrol()); // required field in DDS

    convert_to_proto(in.capBankSystem, *out.mutable_capbanksystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankDiscreteControlProfile& in, capbankmodule::CapBankDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.capBankControl, *out.mutable_capbankcontrol()); // required field in DDS

    convert_to_proto(in.capBankSystem, *out.mutable_capbanksystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankEventProfile& in, capbankmodule::CapBankEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.capBankEvent, *out.mutable_capbankevent()); // required field in DDS

    convert_to_proto(in.capBankSystem, *out.mutable_capbanksystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankReadingProfile& in, capbankmodule::CapBankReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.capBankReading, *out.mutable_capbankreading()); // required field in DDS

    convert_to_proto(in.capBankSystem, *out.mutable_capbanksystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankStatusProfile& in, capbankmodule::CapBankStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.capBankStatus, *out.mutable_capbankstatus()); // required field in DDS

    convert_to_proto(in.capBankSystem, *out.mutable_capbanksystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentControlProfile& in, circuitsegmentservicemodule::CircuitSegmentControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.applicationSystem, *out.mutable_applicationsystem()); // required field in DDS

    convert_to_proto(in.circuitSegmentControl, *out.mutable_circuitsegmentcontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentEventProfile& in, circuitsegmentservicemodule::CircuitSegmentEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.applicationSystem, *out.mutable_applicationsystem()); // required field in DDS

    convert_to_proto(in.circuitSegmentEvent, *out.mutable_circuitsegmentevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentStatusProfile& in, circuitsegmentservicemodule::CircuitSegmentStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.applicationSystem, *out.mutable_applicationsystem()); // required field in DDS

    convert_to_proto(in.circuitSegmentStatus, *out.mutable_circuitsegmentstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityOverrideProfile& in, essmodule::ESSCapabilityOverrideProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_capabilitymessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essCapabilityOverride, *out.mutable_esscapabilityoverride()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityProfile& in, essmodule::ESSCapabilityProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_capabilitymessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essCapability, *out.mutable_esscapability()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSControlProfile& in, essmodule::ESSControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essControl, *out.mutable_esscontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSDiscreteControlProfile& in, essmodule::ESSDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essDiscreteControl, *out.mutable_essdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSEventProfile& in, essmodule::ESSEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essEvent, *out.mutable_essevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSReadingProfile& in, essmodule::ESSReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essReading, *out.mutable_essreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSStatusProfile& in, essmodule::ESSStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essStatus, *out.mutable_essstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityOverrideProfile& in, generationmodule::GenerationCapabilityOverrideProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_capabilitymessageinfo()); // inherited type

    convert_to_proto(in.generationCapabilityOverride, *out.mutable_generationcapabilityoverride()); // required field in DDS

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityProfile& in, generationmodule::GenerationCapabilityProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_capabilitymessageinfo()); // inherited type

    convert_to_proto(in.generationCapability, *out.mutable_generationcapability()); // required field in DDS

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationControlProfile& in, generationmodule::GenerationControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationControl, *out.mutable_generationcontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationDiscreteControlProfile& in, generationmodule::GenerationDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationDiscreteControl, *out.mutable_generationdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationEventProfile& in, generationmodule::GenerationEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationEvent, *out.mutable_generationevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationReadingProfile& in, generationmodule::GenerationReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationReading, *out.mutable_generationreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationStatusProfile& in, generationmodule::GenerationStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.generatingUnit, *out.mutable_generatingunit()); // required field in DDS

    convert_to_proto(in.generationStatus, *out.mutable_generationstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionPlannedScheduleProfile& in, interconnectionmodule::InterconnectionPlannedScheduleProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.requesterCircuitSegmentService, *out.mutable_requestercircuitsegmentservice()); // required field in DDS

    convert_to_proto(in.interconnectionSchedule, *out.mutable_interconnectionschedule()); // required field in DDS

    convert_to_proto(in.tiePoint, *out.mutable_tiepoint()); // required field in DDS

    convert_to_proto(in.responderCircuitSegmentService, *out.mutable_respondercircuitsegmentservice()); // required field in DDS
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionRequestedScheduleProfile& in, interconnectionmodule::InterconnectionRequestedScheduleProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.requesterCircuitSegmentService, *out.mutable_requestercircuitsegmentservice()); // required field in DDS

    convert_to_proto(in.interconnectionSchedule, *out.mutable_interconnectionschedule()); // required field in DDS

    convert_to_proto(in.tiePoint, *out.mutable_tiepoint()); // required field in DDS

    convert_to_proto(in.responderCircuitSegmentService, *out.mutable_respondercircuitsegmentservice()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadControlProfile& in, loadmodule::LoadControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.loadControl, *out.mutable_loadcontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadEventProfile& in, loadmodule::LoadEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.loadEvent, *out.mutable_loadevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadReadingProfile& in, loadmodule::LoadReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.loadReading, *out.mutable_loadreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadStatusProfile& in, loadmodule::LoadStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.loadStatus, *out.mutable_loadstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::metermodule::MeterReadingProfile& in, metermodule::MeterReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.meter, *out.mutable_meter()); // required field in DDS

    convert_to_proto(in.meterReading, *out.mutable_meterreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserDiscreteControlProfile& in, reclosermodule::RecloserDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.recloser, *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserDiscreteControl, *out.mutable_recloserdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserEventProfile& in, reclosermodule::RecloserEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.recloser, *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserEvent, *out.mutable_recloserevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserReadingProfile& in, reclosermodule::RecloserReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.recloser, *out.mutable_recloser()); // required field in DDS

    for(decltype(in.recloserReading.length()) i = 0; i < in.recloserReading.length(); ++i)
    {
        convert_to_proto(in.recloserReading.at(i), *out.mutable_recloserreading()->Add());
    }
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserStatusProfile& in, reclosermodule::RecloserStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.recloser, *out.mutable_recloser()); // required field in DDS

    convert_to_proto(in.recloserStatus, *out.mutable_recloserstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorDiscreteControlProfile& in, regulatormodule::RegulatorDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.regulatorDiscreteControl, *out.mutable_regulatordiscretecontrol()); // required field in DDS

    convert_to_proto(in.regulatorSystem, *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlProfile& in, regulatormodule::RegulatorControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.regulatorControl, *out.mutable_regulatorcontrol()); // required field in DDS

    convert_to_proto(in.regulatorSystem, *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEventProfile& in, regulatormodule::RegulatorEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.regulatorEvent, *out.mutable_regulatorevent()); // required field in DDS

    convert_to_proto(in.regulatorSystem, *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorReadingProfile& in, regulatormodule::RegulatorReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    for(decltype(in.regulatorReading.length()) i = 0; i < in.regulatorReading.length(); ++i)
    {
        convert_to_proto(in.regulatorReading.at(i), *out.mutable_regulatorreading()->Add());
    }

    convert_to_proto(in.regulatorSystem, *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorStatusProfile& in, regulatormodule::RegulatorStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.regulatorStatus, *out.mutable_regulatorstatus()); // required field in DDS

    convert_to_proto(in.regulatorSystem, *out.mutable_regulatorsystem()); // required field in DDS
}

void convert_to_proto(const twinoaks::reservemodule::ReserveAvailabilityProfile& in, reservemodule::ReserveAvailabilityProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    if(in.allocatedMargin) convert_to_proto(*in.allocatedMargin, *out.mutable_allocatedmargin());

    convert_to_proto(in.requesterCircuitSegmentService, *out.mutable_requestercircuitsegmentservice()); // required field in DDS

    convert_to_proto(in.reserveAvailability, *out.mutable_reserveavailability()); // required field in DDS

    convert_to_proto(in.responderCircuitSegmentService, *out.mutable_respondercircuitsegmentservice()); // required field in DDS

    convert_to_proto(in.tiePoint, *out.mutable_tiepoint()); // required field in DDS
}

void convert_to_proto(const twinoaks::reservemodule::ReserveRequestProfile& in, reservemodule::ReserveRequestProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.requesterCircuitSegmentService, *out.mutable_requestercircuitsegmentservice()); // required field in DDS

    convert_to_proto(in.reserveRequest, *out.mutable_reserverequest()); // required field in DDS

    convert_to_proto(in.responderCircuitSegmentService, *out.mutable_respondercircuitsegmentservice()); // required field in DDS

    convert_to_proto(in.tiePoint, *out.mutable_tiepoint()); // required field in DDS
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceDiscreteControlProfile& in, resourcemodule::ResourceDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment, *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.resourceDiscreteControl, *out.mutable_resourcediscretecontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceEventProfile& in, resourcemodule::ResourceEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment, *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.resourceEvent, *out.mutable_resourceevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment, *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.resourceReading, *out.mutable_resourcereading()); // required field in DDS
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceStatusProfile& in, resourcemodule::ResourceStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.conductingEquipment, *out.mutable_conductingequipment()); // required field in DDS

    convert_to_proto(in.resourceStatus, *out.mutable_resourcestatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityOverrideProfile& in, solarmodule::SolarCapabilityOverrideProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_capabilitymessageinfo()); // inherited type

    convert_to_proto(in.solarCapabilityOverride, *out.mutable_solarcapabilityoverride()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityProfile& in, solarmodule::SolarCapabilityProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_capabilitymessageinfo()); // inherited type

    convert_to_proto(in.solarCapability, *out.mutable_solarcapability()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarControlProfile& in, solarmodule::SolarControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.solarControl, *out.mutable_solarcontrol()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarDiscreteControlProfile& in, solarmodule::SolarDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.solarDiscreteControl, *out.mutable_solardiscretecontrol()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarEventProfile& in, solarmodule::SolarEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.solarEvent, *out.mutable_solarevent()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarReadingProfile& in, solarmodule::SolarReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS

    convert_to_proto(in.solarReading, *out.mutable_solarreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarStatusProfile& in, solarmodule::SolarStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS

    convert_to_proto(in.solarStatus, *out.mutable_solarstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchDiscreteControlProfile& in, switchmodule::SwitchDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchDiscreteControl, *out.mutable_switchdiscretecontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchEventProfile& in, switchmodule::SwitchEventProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventmessageinfo()); // inherited type

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchEvent, *out.mutable_switchevent()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchReadingProfile& in, switchmodule::SwitchReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    for(decltype(in.switchReading.length()) i = 0; i < in.switchReading.length(); ++i)
    {
        convert_to_proto(in.switchReading.at(i), *out.mutable_switchreading()->Add());
    }
}

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusProfile& in, switchmodule::SwitchStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchStatus, *out.mutable_switchstatus()); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_to_proto(const twinoaks::commonmodule::ControlMessageInfo& in, commonmodule::ControlMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.messageTimeStamp, *out.mutable_messagetimestamp()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out)
{
    out.Clear();

    if(in.description) out.mutable_description()->set_value(in.description);

    if(in.mRID) out.mutable_mrid()->set_value(in.mRID);

    if(in.name) out.mutable_name()->set_value(in.name);
}

void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out)
{
    out.Clear();

    out.set_seconds(in.seconds);

    if(in.tq) convert_to_proto(*in.tq, *out.mutable_tq());

    out.set_nanoseconds(in.nanoseconds);
}

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out)
{
    out.Clear();

    out.set_clockfailure(in.clockFailure);

    out.set_clocknotsynchronized(in.clockNotSynchronized);

    out.set_leapsecondsknown(in.leapSecondsKnown);

    out.set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(in.timeAccuracy));
}

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_namedobject()); // inherited type

    if(in.mRID) out.set_mrid(convert_string(in.mRID));
}

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out)
{
    out.Clear();

    if(in.description) out.mutable_description()->set_value(in.description);

    if(in.name) out.mutable_name()->set_value(in.name);
}

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControl& in, breakermodule::BreakerDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.breakerDiscreteControlXCBR) convert_to_proto(*in.breakerDiscreteControlXCBR, *out.mutable_breakerdiscretecontrolxcbr());
}

void convert_to_proto(const twinoaks::commonmodule::ControlValue& in, commonmodule::ControlValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk) out.mutable_modblk()->set_value(*in.modBlk);

    if(in.reset) out.mutable_reset()->set_value(*in.reset);
}

void convert_to_proto(const twinoaks::commonmodule::CheckConditions& in, commonmodule::CheckConditions& out)
{
    out.Clear();

    if(in.interlockCheck) out.mutable_interlockcheck()->set_value(*in.interlockCheck);

    if(in.synchroCheck) out.mutable_synchrocheck()->set_value(*in.synchroCheck);
}

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlXCBR& in, breakermodule::BreakerDiscreteControlXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_discretecontrolxcbr()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::DiscreteControlXCBR& in, commonmodule::DiscreteControlXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());

    if(in.ProtectionMode) convert_to_proto(*in.ProtectionMode, *out.mutable_protectionmode());

    if(in.RecloseEnabled) convert_to_proto(*in.RecloseEnabled, *out.mutable_recloseenabled());

    if(in.ResetProtectionPickup) convert_to_proto(*in.ResetProtectionPickup, *out.mutable_resetprotectionpickup());
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForControl& in, commonmodule::LogicalNodeForControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::PhaseDPC& in, commonmodule::PhaseDPC& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::ControlDPC& in, commonmodule::ControlDPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);
}

void convert_to_proto(const twinoaks::commonmodule::ControlINC& in, commonmodule::ControlINC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);
}

void convert_to_proto(const twinoaks::commonmodule::ControlSPC& in, commonmodule::ControlSPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);
}

void convert_to_proto(const twinoaks::commonmodule::EventMessageInfo& in, commonmodule::EventMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::breakermodule::BreakerEvent& in, breakermodule::BreakerEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.statusAndEventXCBR) convert_to_proto(*in.statusAndEventXCBR, *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const twinoaks::commonmodule::EventValue& in, commonmodule::EventValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk) out.mutable_modblk()->set_value(*in.modBlk);
}

void convert_to_proto(const twinoaks::commonmodule::StatusAndEventXCBR& in, commonmodule::StatusAndEventXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());

    if(in.ProtectionPickup) convert_to_proto(*in.ProtectionPickup, *out.mutable_protectionpickup());

    if(in.ProtectionMode) convert_to_proto(*in.ProtectionMode, *out.mutable_protectionmode());

    if(in.RecloseEnabled) convert_to_proto(*in.RecloseEnabled, *out.mutable_recloseenabled());

    if(in.ReclosingAction) convert_to_proto(*in.ReclosingAction, *out.mutable_reclosingaction());
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForEventAndStatus& in, commonmodule::LogicalNodeForEventAndStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Beh) convert_to_proto(*in.Beh, *out.mutable_beh());

    if(in.EEHealth) convert_to_proto(*in.EEHealth, *out.mutable_eehealth());

    if(in.HotLineTag) convert_to_proto(*in.HotLineTag, *out.mutable_hotlinetag());

    if(in.RemoteBlk) convert_to_proto(*in.RemoteBlk, *out.mutable_remoteblk());
}

void convert_to_proto(const twinoaks::commonmodule::ENS_BehaviourModeKind& in, commonmodule::ENS_BehaviourModeKind& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(static_cast<commonmodule::BehaviourModeKind>(in.stVal));

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::Quality& in, commonmodule::Quality& out)
{
    out.Clear();

    convert_to_proto(in.detailQual, *out.mutable_detailqual()); // required field in DDS

    out.set_operatorblocked(in.operatorBlocked);

    out.set_source(static_cast<commonmodule::SourceKind>(in.source));

    out.set_test(in.test);

    out.set_validity(static_cast<commonmodule::ValidityKind>(in.validity));
}

void convert_to_proto(const twinoaks::commonmodule::DetailQual& in, commonmodule::DetailQual& out)
{
    out.Clear();

    out.set_badreference(in.badReference);

    out.set_failure(in.failure);

    out.set_inaccurate(in.inaccurate);

    out.set_inconsistent(in.inconsistent);

    out.set_olddata(in.oldData);

    out.set_oscillatory(in.oscillatory);

    out.set_outofrange(in.outOfRange);

    out.set_overflow(in.overflow);
}

void convert_to_proto(const twinoaks::commonmodule::ENS_HealthKind& in, commonmodule::ENS_HealthKind& out)
{
    out.Clear();

    if(in.d) out.mutable_d()->set_value(in.d);

    out.set_stval(static_cast<commonmodule::HealthKind>(in.stVal));
}

void convert_to_proto(const twinoaks::commonmodule::StatusSPS& in, commonmodule::StatusSPS& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(in.stVal);

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::ENS_DynamicTestKind& in, commonmodule::ENS_DynamicTestKind& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(static_cast<commonmodule::DynamicTestKind>(in.stVal));

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseDPS& in, commonmodule::PhaseDPS& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::StatusDPS& in, commonmodule::StatusDPS& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(static_cast<commonmodule::DbPosKind>(in.stVal));

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::ACD& in, commonmodule::ACD& out)
{
    out.Clear();

    out.set_dirgeneral(static_cast<commonmodule::FaultDirectionKind>(in.dirGeneral));

    if(in.dirNeut) out.mutable_dirneut()->set_value(static_cast<commonmodule::PhaseFaultDirectionKind>(*in.dirNeut));  // wrapped optional enum

    if(in.dirPhsA) out.mutable_dirphsa()->set_value(static_cast<commonmodule::PhaseFaultDirectionKind>(*in.dirPhsA));  // wrapped optional enum

    if(in.dirPhsB) out.mutable_dirphsb()->set_value(static_cast<commonmodule::PhaseFaultDirectionKind>(*in.dirPhsB));  // wrapped optional enum

    if(in.dirPhsC) out.mutable_dirphsc()->set_value(static_cast<commonmodule::PhaseFaultDirectionKind>(*in.dirPhsC));  // wrapped optional enum

    out.set_general(in.general);

    if(in.neut) out.mutable_neut()->set_value(*in.neut);

    if(in.phsA) out.mutable_phsa()->set_value(*in.phsA);

    if(in.phsB) out.mutable_phsb()->set_value(*in.phsB);

    if(in.phsC) out.mutable_phsc()->set_value(*in.phsC);
}

void convert_to_proto(const twinoaks::commonmodule::StatusINS& in, commonmodule::StatusINS& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(in.stVal);

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseSPS& in, commonmodule::PhaseSPS& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseRecloseAction& in, commonmodule::PhaseRecloseAction& out)
{
    out.Clear();

    if(in.phs3) out.mutable_phs3()->set_value(static_cast<commonmodule::RecloseActionKind>(*in.phs3));  // wrapped optional enum

    if(in.phsA) out.mutable_phsa()->set_value(static_cast<commonmodule::RecloseActionKind>(*in.phsA));  // wrapped optional enum

    if(in.phsB) out.mutable_phsb()->set_value(static_cast<commonmodule::RecloseActionKind>(*in.phsB));  // wrapped optional enum

    if(in.phsC) out.mutable_phsc()->set_value(static_cast<commonmodule::RecloseActionKind>(*in.phsC));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.diffReadingMMXU) convert_to_proto(*in.diffReadingMMXU, *out.mutable_diffreadingmmxu());

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.Clear();

    convert_to_proto(in.terminal, *out.mutable_terminal()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_acdcterminal()); // inherited type

    if(in.phases) out.mutable_phases()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.phases));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.connected) out.mutable_connected()->set_value(*in.connected);

    if(in.sequenceNumber) out.mutable_sequencenumber()->set_value(*in.sequenceNumber);
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.A) convert_to_proto(*in.A, *out.mutable_a());

    if(in.ClcMth) convert_to_proto(*in.ClcMth, *out.mutable_clcmth());

    if(in.Hz) convert_to_proto(*in.Hz, *out.mutable_hz());

    if(in.PF) convert_to_proto(*in.PF, *out.mutable_pf());

    if(in.PFSign) convert_to_proto(*in.PFSign, *out.mutable_pfsign());

    if(in.PhV) convert_to_proto(*in.PhV, *out.mutable_phv());

    if(in.PPV) convert_to_proto(*in.PPV, *out.mutable_ppv());

    if(in.VA) convert_to_proto(*in.VA, *out.mutable_va());

    if(in.VAr) convert_to_proto(*in.VAr, *out.mutable_var());

    if(in.W) convert_to_proto(*in.W, *out.mutable_w());
}

void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out)
{
    out.Clear();

    if(in.net) convert_to_proto(*in.net, *out.mutable_net());

    if(in.neut) convert_to_proto(*in.neut, *out.mutable_neut());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out)
{
    out.Clear();

    convert_to_proto(in.cVal, *out.mutable_cval()); // required field in DDS

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out)
{
    out.Clear();

    if(in.ang) out.mutable_ang()->set_value(*in.ang);

    out.set_mag(in.mag);
}

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::CalcMethodKind>(in.setVal));
}

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out)
{
    out.Clear();

    out.set_mag(in.mag);

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());

    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out)
{
    out.Clear();

    if(in.multiplier) out.mutable_multiplier()->set_value(static_cast<commonmodule::UnitMultiplierKind>(*in.multiplier));  // wrapped optional enum

    out.set_siunit(static_cast<commonmodule::UnitSymbolKind>(in.SIUnit));
}

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::PFSignKind>(in.setVal));
}

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out)
{
    out.Clear();

    if(in.phsAB) convert_to_proto(*in.phsAB, *out.mutable_phsab());

    if(in.phsBC) convert_to_proto(*in.phsBC, *out.mutable_phsbc());

    if(in.phsCA) convert_to_proto(*in.phsCA, *out.mutable_phsca());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out)
{
    out.Clear();

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsAB) convert_to_proto(*in.phsAB, *out.mutable_phsab());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsBC) convert_to_proto(*in.phsBC, *out.mutable_phsbc());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());

    if(in.phsCA) convert_to_proto(*in.phsCA, *out.mutable_phsca());
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.DmdVAh) convert_to_proto(*in.DmdVAh, *out.mutable_dmdvah());

    if(in.DmdVArh) convert_to_proto(*in.DmdVArh, *out.mutable_dmdvarh());

    if(in.DmdWh) convert_to_proto(*in.DmdWh, *out.mutable_dmdwh());

    if(in.SupVAh) convert_to_proto(*in.SupVAh, *out.mutable_supvah());

    if(in.SupVArh) convert_to_proto(*in.SupVArh, *out.mutable_supvarh());

    if(in.SupWh) convert_to_proto(*in.SupWh, *out.mutable_supwh());

    if(in.TotVAh) convert_to_proto(*in.TotVAh, *out.mutable_totvah());

    if(in.TotVArh) convert_to_proto(*in.TotVArh, *out.mutable_totvarh());

    if(in.TotWh) convert_to_proto(*in.TotWh, *out.mutable_totwh());
}

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out)
{
    out.Clear();

    out.set_actval(in.actVal);

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.DmdVAh) convert_to_proto(*in.DmdVAh, *out.mutable_dmdvah());

    if(in.DmdVArh) convert_to_proto(*in.DmdVArh, *out.mutable_dmdvarh());

    if(in.DmdWh) convert_to_proto(*in.DmdWh, *out.mutable_dmdwh());

    if(in.SupVAh) convert_to_proto(*in.SupVAh, *out.mutable_supvah());

    if(in.SupVArh) convert_to_proto(*in.SupVArh, *out.mutable_supvarh());

    if(in.SupWh) convert_to_proto(*in.SupWh, *out.mutable_supwh());

    if(in.TotVAh) convert_to_proto(*in.TotVAh, *out.mutable_totvah());

    if(in.TotVArh) convert_to_proto(*in.TotVArh, *out.mutable_totvarh());

    if(in.TotWh) convert_to_proto(*in.TotWh, *out.mutable_totwh());
}

void convert_to_proto(const twinoaks::commonmodule::StatusMessageInfo& in, commonmodule::StatusMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::breakermodule::BreakerStatus& in, breakermodule::BreakerStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.statusAndEventXCBR) convert_to_proto(*in.statusAndEventXCBR, *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const twinoaks::commonmodule::StatusValue& in, commonmodule::StatusValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk) out.mutable_modblk()->set_value(*in.modBlk);
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankControl& in, capbankmodule::CapBankControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.capBankControlFSCC) convert_to_proto(*in.capBankControlFSCC, *out.mutable_capbankcontrolfscc());
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlFSCC& in, capbankmodule::CapBankControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.capBankControlScheduleFSCH) convert_to_proto(*in.capBankControlScheduleFSCH, *out.mutable_capbankcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::commonmodule::ControlFSCC& in, commonmodule::ControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.controlScheduleFSCH) convert_to_proto(*in.controlScheduleFSCH, *out.mutable_controlschedulefsch());

    if(in.islandControlScheduleFSCH) convert_to_proto(*in.islandControlScheduleFSCH, *out.mutable_islandcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::commonmodule::ControlScheduleFSCH& in, commonmodule::ControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValACSG, *out.mutable_valacsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::ScheduleCSG& in, commonmodule::ScheduleCSG& out)
{
    out.Clear();

    for(decltype(in.schPts.length()) i = 0; i < in.schPts.length(); ++i)
    {
        convert_to_proto(in.schPts.at(i), *out.mutable_schpts()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::SchedulePoint& in, commonmodule::SchedulePoint& out)
{
    out.Clear();

    for(decltype(in.scheduleParameter.length()) i = 0; i < in.scheduleParameter.length(); ++i)
    {
        convert_to_proto(in.scheduleParameter.at(i), *out.mutable_scheduleparameter()->Add());
    }

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::ENG_ScheduleParameter& in, commonmodule::ENG_ScheduleParameter& out)
{
    out.Clear();

    out.set_scheduleparametertype(static_cast<commonmodule::ScheduleParameterKind>(in.scheduleParameterType));

    out.set_value(in.value);
}

void convert_to_proto(const twinoaks::commonmodule::ControlTimestamp& in, commonmodule::ControlTimestamp& out)
{
    out.Clear();

    out.set_seconds(in.seconds);

    out.set_nanoseconds(in.nanoseconds);
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlScheduleFSCH& in, capbankmodule::CapBankControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValCSG, *out.mutable_valcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankCSG& in, capbankmodule::CapBankCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankPoint& in, capbankmodule::CapBankPoint& out)
{
    out.Clear();

    if(in.control) convert_to_proto(*in.control, *out.mutable_control());

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlYPSH& in, capbankmodule::CapBankControlYPSH& out)
{
    out.Clear();

    if(in.AmpLmt) convert_to_proto(*in.AmpLmt, *out.mutable_amplmt());

    if(in.AmpThdHi) convert_to_proto(*in.AmpThdHi, *out.mutable_ampthdhi());

    if(in.AmpThdLo) convert_to_proto(*in.AmpThdLo, *out.mutable_ampthdlo());

    if(in.CtlModeAuto) convert_to_proto(*in.CtlModeAuto, *out.mutable_ctlmodeauto());

    if(in.CtlModeOvrRd) convert_to_proto(*in.CtlModeOvrRd, *out.mutable_ctlmodeovrrd());

    if(in.CtlModeRem) convert_to_proto(*in.CtlModeRem, *out.mutable_ctlmoderem());

    if(in.DirMode) out.mutable_dirmode()->set_value(static_cast<commonmodule::DirectionModeKind>(*in.DirMode));  // wrapped optional enum

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());

    if(in.TempLmt) convert_to_proto(*in.TempLmt, *out.mutable_templmt());

    if(in.TempThdHi) convert_to_proto(*in.TempThdHi, *out.mutable_tempthdhi());

    if(in.TempThdLo) convert_to_proto(*in.TempThdLo, *out.mutable_tempthdlo());

    if(in.VArLmt) convert_to_proto(*in.VArLmt, *out.mutable_varlmt());

    if(in.VArThdHi) convert_to_proto(*in.VArThdHi, *out.mutable_varthdhi());

    if(in.VArThdLo) convert_to_proto(*in.VArThdLo, *out.mutable_varthdlo());

    if(in.VolLmt) convert_to_proto(*in.VolLmt, *out.mutable_vollmt());

    if(in.VolThdHi) convert_to_proto(*in.VolThdHi, *out.mutable_volthdhi());

    if(in.VolThdLo) convert_to_proto(*in.VolThdLo, *out.mutable_volthdlo());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseSPC& in, commonmodule::PhaseSPC& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseAPC& in, commonmodule::PhaseAPC& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::ControlAPC& in, commonmodule::ControlAPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankSystem& in, capbankmodule::CapBankSystem& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankDiscreteControl& in, capbankmodule::CapBankDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.capBankDiscreteControlYPSH) convert_to_proto(*in.capBankDiscreteControlYPSH, *out.mutable_capbankdiscretecontrolypsh());
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankDiscreteControlYPSH& in, capbankmodule::CapBankDiscreteControlYPSH& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.control) convert_to_proto(*in.control, *out.mutable_control());
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankEvent& in, capbankmodule::CapBankEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.CapBankEventAndStatusYPSH) convert_to_proto(*in.CapBankEventAndStatusYPSH, *out.mutable_capbankeventandstatusypsh());
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankEventAndStatusYPSH& in, capbankmodule::CapBankEventAndStatusYPSH& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AmpLmt) convert_to_proto(*in.AmpLmt, *out.mutable_amplmt());

    if(in.CtlMode) out.mutable_ctlmode()->set_value(static_cast<commonmodule::ControlModeKind>(*in.CtlMode));  // wrapped optional enum

    if(in.DirRev) convert_to_proto(*in.DirRev, *out.mutable_dirrev());

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());

    if(in.TempLmt) convert_to_proto(*in.TempLmt, *out.mutable_templmt());

    if(in.VArLmt) convert_to_proto(*in.VArLmt, *out.mutable_varlmt());

    if(in.VolLmt) convert_to_proto(*in.VolLmt, *out.mutable_vollmt());
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankReading& in, capbankmodule::CapBankReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());

    if(in.secondaryReadingMMXU) convert_to_proto(*in.secondaryReadingMMXU, *out.mutable_secondaryreadingmmxu());
}

void convert_to_proto(const twinoaks::capbankmodule::CapBankStatus& in, capbankmodule::CapBankStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.capBankEventAndStatusYPSH) convert_to_proto(*in.capBankEventAndStatusYPSH, *out.mutable_capbankeventandstatusypsh());
}

void convert_to_proto(const twinoaks::commonmodule::ApplicationSystem& in, commonmodule::ApplicationSystem& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_namedobject()); // inherited type

    if(in.mRID) out.set_mrid(convert_string(in.mRID));
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentControl& in, circuitsegmentservicemodule::CircuitSegmentControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    convert_to_proto(in.circuitSegmentControlDCSC, *out.mutable_circuitsegmentcontroldcsc()); // required field in DDS
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentControlDCSC& in, circuitsegmentservicemodule::CircuitSegmentControlDCSC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.CircuitSegmentServiceMode) convert_to_proto(*in.CircuitSegmentServiceMode, *out.mutable_circuitsegmentservicemode());

    if(in.Island) convert_to_proto(*in.Island, *out.mutable_island());
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& in, circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind& out)
{
    out.Clear();

    out.set_setval(static_cast<circuitsegmentservicemodule::CircuitSegmentServiceModeKind>(in.setVal));

    if(in.setValExtension) out.mutable_setvalextension()->set_value(in.setValExtension);
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentEvent& in, circuitsegmentservicemodule::CircuitSegmentEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.circuitSegmentEventDCSC, *out.mutable_circuitsegmenteventdcsc()); // required field in DDS
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentEventDCSC& in, circuitsegmentservicemodule::CircuitSegmentEventDCSC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.CircuitSegmentServiceMode) convert_to_proto(*in.CircuitSegmentServiceMode, *out.mutable_circuitsegmentservicemode());

    if(in.Island) convert_to_proto(*in.Island, *out.mutable_island());

    if(in.PermissibleAuto) convert_to_proto(*in.PermissibleAuto, *out.mutable_permissibleauto());

    if(in.PermissibleManual) convert_to_proto(*in.PermissibleManual, *out.mutable_permissiblemanual());

    if(in.PermissibleNetzero) convert_to_proto(*in.PermissibleNetzero, *out.mutable_permissiblenetzero());

    if(in.PermissibleStart) convert_to_proto(*in.PermissibleStart, *out.mutable_permissiblestart());

    if(in.PermissibleStop) convert_to_proto(*in.PermissibleStop, *out.mutable_permissiblestop());
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentStatus& in, circuitsegmentservicemodule::CircuitSegmentStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.circuitSegmentStatusDCSC, *out.mutable_circuitsegmentstatusdcsc()); // required field in DDS
}

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentStatusDCSC& in, circuitsegmentservicemodule::CircuitSegmentStatusDCSC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.CircuitSegmentServiceMode) convert_to_proto(*in.CircuitSegmentServiceMode, *out.mutable_circuitsegmentservicemode());

    if(in.Island) convert_to_proto(*in.Island, *out.mutable_island());

    if(in.PermissibleAuto) convert_to_proto(*in.PermissibleAuto, *out.mutable_permissibleauto());

    if(in.PermissibleManual) convert_to_proto(*in.PermissibleManual, *out.mutable_permissiblemanual());

    if(in.PermissibleNetzero) convert_to_proto(*in.PermissibleNetzero, *out.mutable_permissiblenetzero());

    if(in.PermissibleStart) convert_to_proto(*in.PermissibleStart, *out.mutable_permissiblestart());

    if(in.PermissibleStop) convert_to_proto(*in.PermissibleStop, *out.mutable_permissiblestop());
}

void convert_to_proto(const twinoaks::commonmodule::CapabilityMessageInfo& in, commonmodule::CapabilityMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ESS& in, commonmodule::ESS& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityOverride& in, essmodule::ESSCapabilityOverride& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_nameplatevalue()); // inherited type

    convert_to_proto(in.essCapabilityConfiguration, *out.mutable_esscapabilityconfiguration()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::NameplateValue& in, commonmodule::NameplateValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.model) out.mutable_model()->set_value(in.model);

    if(in.sernum) out.mutable_sernum()->set_value(in.sernum);

    if(in.swRev) out.mutable_swrev()->set_value(in.swRev);

    if(in.vendor) out.mutable_vendor()->set_value(in.vendor);
}

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityConfiguration& in, essmodule::ESSCapabilityConfiguration& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_sourcecapabilityconfiguration()); // inherited type

    if(in.VAChaRteMax) convert_to_proto(*in.VAChaRteMax, *out.mutable_vachartemax());

    if(in.VADisChaRteMax) convert_to_proto(*in.VADisChaRteMax, *out.mutable_vadischartemax());

    if(in.WChaRteMax) convert_to_proto(*in.WChaRteMax, *out.mutable_wchartemax());

    if(in.WDisChaRteMax) convert_to_proto(*in.WDisChaRteMax, *out.mutable_wdischartemax());
}

void convert_to_proto(const twinoaks::commonmodule::SourceCapabilityConfiguration& in, commonmodule::SourceCapabilityConfiguration& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.AMax) convert_to_proto(*in.AMax, *out.mutable_amax());

    if(in.VAMax) convert_to_proto(*in.VAMax, *out.mutable_vamax());

    if(in.VarMaxAbs) convert_to_proto(*in.VarMaxAbs, *out.mutable_varmaxabs());

    if(in.VarMaxInj) convert_to_proto(*in.VarMaxInj, *out.mutable_varmaxinj());

    if(in.VMax) convert_to_proto(*in.VMax, *out.mutable_vmax());

    if(in.VMin) convert_to_proto(*in.VMin, *out.mutable_vmin());

    if(in.VNom) convert_to_proto(*in.VNom, *out.mutable_vnom());

    if(in.WMax) convert_to_proto(*in.WMax, *out.mutable_wmax());

    if(in.WOvrExt) convert_to_proto(*in.WOvrExt, *out.mutable_wovrext());

    if(in.WOvrExtPF) convert_to_proto(*in.WOvrExtPF, *out.mutable_wovrextpf());

    if(in.WUndExt) convert_to_proto(*in.WUndExt, *out.mutable_wundext());

    if(in.WUndExtPF) convert_to_proto(*in.WUndExtPF, *out.mutable_wundextpf());
}

void convert_to_proto(const twinoaks::commonmodule::ASG& in, commonmodule::ASG& out)
{
    out.Clear();

    out.set_setmag(in.setMag);
}

void convert_to_proto(const twinoaks::essmodule::ESSCapability& in, essmodule::ESSCapability& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_nameplatevalue()); // inherited type

    convert_to_proto(in.essCapabilityRatings, *out.mutable_esscapabilityratings()); // required field in DDS

    if(in.essCapabilityConfiguration) convert_to_proto(*in.essCapabilityConfiguration, *out.mutable_esscapabilityconfiguration());
}

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityRatings& in, essmodule::ESSCapabilityRatings& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_sourcecapabilityratings()); // inherited type

    convert_to_proto(in.VAChaRteMaxRtg, *out.mutable_vachartemaxrtg()); // required field in DDS

    convert_to_proto(in.VADisChaRteMaxRtg, *out.mutable_vadischartemaxrtg()); // required field in DDS

    convert_to_proto(in.WChaRteMaxRtg, *out.mutable_wchartemaxrtg()); // required field in DDS

    convert_to_proto(in.WDisChaRteMaxRtg, *out.mutable_wdischartemaxrtg()); // required field in DDS

    convert_to_proto(in.WHRtg, *out.mutable_whrtg()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::SourceCapabilityRatings& in, commonmodule::SourceCapabilityRatings& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    out.set_abnopcatrtg(static_cast<commonmodule::AbnOpCatKind>(in.AbnOpCatRtg));

    if(in.AMaxRtg) convert_to_proto(*in.AMaxRtg, *out.mutable_amaxrtg());

    convert_to_proto(in.FreqNomRtg, *out.mutable_freqnomrtg()); // required field in DDS

    out.set_noropcatrtg(static_cast<commonmodule::NorOpCatKind>(in.NorOpCatRtg));

    convert_to_proto(in.ReactSusceptRtg, *out.mutable_reactsusceptrtg()); // required field in DDS

    convert_to_proto(in.VAMaxRtg, *out.mutable_vamaxrtg()); // required field in DDS

    convert_to_proto(in.VarMaxAbsRtg, *out.mutable_varmaxabsrtg()); // required field in DDS

    convert_to_proto(in.VarMaxInjRtg, *out.mutable_varmaxinjrtg()); // required field in DDS

    convert_to_proto(in.VMaxRtg, *out.mutable_vmaxrtg()); // required field in DDS

    convert_to_proto(in.VMinRtg, *out.mutable_vminrtg()); // required field in DDS

    convert_to_proto(in.VNomRtg, *out.mutable_vnomrtg()); // required field in DDS

    convert_to_proto(in.WMaxRtg, *out.mutable_wmaxrtg()); // required field in DDS

    convert_to_proto(in.WOvrExtRtg, *out.mutable_wovrextrtg()); // required field in DDS

    convert_to_proto(in.WOvrExtRtgPF, *out.mutable_wovrextrtgpf()); // required field in DDS

    convert_to_proto(in.WUndExtRtg, *out.mutable_wundextrtg()); // required field in DDS

    convert_to_proto(in.WUndExtRtgPF, *out.mutable_wundextrtgpf()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSControl& in, essmodule::ESSControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.essControlFSCC) convert_to_proto(*in.essControlFSCC, *out.mutable_esscontrolfscc());
}

void convert_to_proto(const twinoaks::essmodule::EssControlFSCC& in, essmodule::EssControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.essControlScheduleFSCH) convert_to_proto(*in.essControlScheduleFSCH, *out.mutable_esscontrolschedulefsch());
}

void convert_to_proto(const twinoaks::essmodule::ESSControlScheduleFSCH& in, essmodule::ESSControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSCSG& in, essmodule::ESSCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::essmodule::ESSCurvePoint& in, essmodule::ESSCurvePoint& out)
{
    out.Clear();

    convert_to_proto(in.control, *out.mutable_control()); // required field in DDS

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSPoint& in, essmodule::ESSPoint& out)
{
    out.Clear();

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.function) convert_to_proto(*in.function, *out.mutable_function());

    if(in.mode) convert_to_proto(*in.mode, *out.mutable_mode());

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.transToIslndOnGridLossEnabled) convert_to_proto(*in.transToIslndOnGridLossEnabled, *out.mutable_transtoislndongridlossenabled());

    if(in.enterServiceOperation) convert_to_proto(*in.enterServiceOperation, *out.mutable_enterserviceoperation());

    if(in.hzWOperation) convert_to_proto(*in.hzWOperation, *out.mutable_hzwoperation());

    if(in.limitWOperation) convert_to_proto(*in.limitWOperation, *out.mutable_limitwoperation());

    if(in.pFOperation) convert_to_proto(*in.pFOperation, *out.mutable_pfoperation());

    if(in.tmHzTripOperation) convert_to_proto(*in.tmHzTripOperation, *out.mutable_tmhztripoperation());

    if(in.tmVoltTripOperation) convert_to_proto(*in.tmVoltTripOperation, *out.mutable_tmvolttripoperation());

    if(in.vArOperation) convert_to_proto(*in.vArOperation, *out.mutable_varoperation());

    if(in.voltVarOperation) convert_to_proto(*in.voltVarOperation, *out.mutable_voltvaroperation());

    if(in.voltWOperation) convert_to_proto(*in.voltWOperation, *out.mutable_voltwoperation());

    if(in.wVarOperation) convert_to_proto(*in.wVarOperation, *out.mutable_wvaroperation());

    if(in.wOperation) convert_to_proto(*in.wOperation, *out.mutable_woperation());
}

void convert_to_proto(const twinoaks::essmodule::ESSFunction& in, essmodule::ESSFunction& out)
{
    out.Clear();

    if(in.capacityFirming) convert_to_proto(*in.capacityFirming, *out.mutable_capacityfirming());

    if(in.frequencyRegulation) convert_to_proto(*in.frequencyRegulation, *out.mutable_frequencyregulation());

    if(in.peakShaving) convert_to_proto(*in.peakShaving, *out.mutable_peakshaving());

    if(in.socLimit) convert_to_proto(*in.socLimit, *out.mutable_soclimit());

    if(in.socManagement) convert_to_proto(*in.socManagement, *out.mutable_socmanagement());

    if(in.voltageDroop) convert_to_proto(*in.voltageDroop, *out.mutable_voltagedroop());

    if(in.voltagePI) convert_to_proto(*in.voltagePI, *out.mutable_voltagepi());
}

void convert_to_proto(const twinoaks::essmodule::CapacityFirming& in, essmodule::CapacityFirming& out)
{
    out.Clear();

    if(in.capacityFirmingCtl) out.mutable_capacityfirmingctl()->set_value(*in.capacityFirmingCtl);

    if(in.limitNegative_dp_dt) out.mutable_limitnegative_dp_dt()->set_value(*in.limitNegative_dp_dt);

    if(in.limitPositive_dp_dt) out.mutable_limitpositive_dp_dt()->set_value(*in.limitPositive_dp_dt);
}

void convert_to_proto(const twinoaks::essmodule::FrequencyRegulation& in, essmodule::FrequencyRegulation& out)
{
    out.Clear();

    if(in.frequencyDeadBandMinus) out.mutable_frequencydeadbandminus()->set_value(*in.frequencyDeadBandMinus);

    if(in.frequencyDeadBandPlus) out.mutable_frequencydeadbandplus()->set_value(*in.frequencyDeadBandPlus);

    if(in.frequencyRegulationCtl) out.mutable_frequencyregulationctl()->set_value(*in.frequencyRegulationCtl);

    if(in.frequencySetPoint) out.mutable_frequencysetpoint()->set_value(*in.frequencySetPoint);

    if(in.gridFrequencyStableBandMinus) out.mutable_gridfrequencystablebandminus()->set_value(*in.gridFrequencyStableBandMinus);

    if(in.gridFrequencyStableBandPlus) out.mutable_gridfrequencystablebandplus()->set_value(*in.gridFrequencyStableBandPlus);

    if(in.overFrequencyDroop) out.mutable_overfrequencydroop()->set_value(*in.overFrequencyDroop);

    if(in.underFrequencyDroop) out.mutable_underfrequencydroop()->set_value(*in.underFrequencyDroop);
}

void convert_to_proto(const twinoaks::essmodule::PeakShaving& in, essmodule::PeakShaving& out)
{
    out.Clear();

    if(in.baseShavingLimit) out.mutable_baseshavinglimit()->set_value(*in.baseShavingLimit);

    if(in.peakShavingCtl) out.mutable_peakshavingctl()->set_value(*in.peakShavingCtl);

    if(in.peakShavingLimit) out.mutable_peakshavinglimit()->set_value(*in.peakShavingLimit);

    if(in.socManagementAllowedHighLimit) out.mutable_socmanagementallowedhighlimit()->set_value(*in.socManagementAllowedHighLimit);

    if(in.socManagementAllowedLowLimit) out.mutable_socmanagementallowedlowlimit()->set_value(*in.socManagementAllowedLowLimit);
}

void convert_to_proto(const twinoaks::essmodule::SocLimit& in, essmodule::SocLimit& out)
{
    out.Clear();

    if(in.socHighLimit) out.mutable_sochighlimit()->set_value(*in.socHighLimit);

    if(in.socHighLimitHysteresis) out.mutable_sochighlimithysteresis()->set_value(*in.socHighLimitHysteresis);

    if(in.socLimitCtl) out.mutable_soclimitctl()->set_value(*in.socLimitCtl);

    if(in.socLowLimit) out.mutable_soclowlimit()->set_value(*in.socLowLimit);

    if(in.socLowLimitHysteresis) out.mutable_soclowlimithysteresis()->set_value(*in.socLowLimitHysteresis);
}

void convert_to_proto(const twinoaks::essmodule::SOCManagement& in, essmodule::SOCManagement& out)
{
    out.Clear();

    if(in.socDeadBandMinus) out.mutable_socdeadbandminus()->set_value(*in.socDeadBandMinus);

    if(in.socDeadBandPlus) out.mutable_socdeadbandplus()->set_value(*in.socDeadBandPlus);

    if(in.socManagementCtl) out.mutable_socmanagementctl()->set_value(*in.socManagementCtl);

    if(in.socPowerSetPoint) out.mutable_socpowersetpoint()->set_value(*in.socPowerSetPoint);

    if(in.socSetPoint) out.mutable_socsetpoint()->set_value(*in.socSetPoint);
}

void convert_to_proto(const twinoaks::essmodule::VoltageDroop& in, essmodule::VoltageDroop& out)
{
    out.Clear();

    if(in.voltageDroopCtl) out.mutable_voltagedroopctl()->set_value(*in.voltageDroopCtl);

    if(in.voltageRegulation) convert_to_proto(*in.voltageRegulation, *out.mutable_voltageregulation());
}

void convert_to_proto(const twinoaks::essmodule::VoltageRegulation& in, essmodule::VoltageRegulation& out)
{
    out.Clear();

    if(in.overVoltageDroop) out.mutable_overvoltagedroop()->set_value(*in.overVoltageDroop);

    if(in.underVoltageDroop) out.mutable_undervoltagedroop()->set_value(*in.underVoltageDroop);

    if(in.voltageDeadBandMinus) out.mutable_voltagedeadbandminus()->set_value(*in.voltageDeadBandMinus);

    if(in.voltageDeadBandPlus) out.mutable_voltagedeadbandplus()->set_value(*in.voltageDeadBandPlus);

    if(in.voltageSetPoint) out.mutable_voltagesetpoint()->set_value(*in.voltageSetPoint);
}

void convert_to_proto(const twinoaks::essmodule::VoltagePI& in, essmodule::VoltagePI& out)
{
    out.Clear();

    if(in.voltagePICtl) out.mutable_voltagepictl()->set_value(*in.voltagePICtl);

    if(in.voltageRegulation) convert_to_proto(*in.voltageRegulation, *out.mutable_voltageregulation());
}

void convert_to_proto(const twinoaks::commonmodule::ENG_GridConnectModeKind& in, commonmodule::ENG_GridConnectModeKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::GridConnectModeKind>(in.setVal));

    if(in.setValExtension) out.mutable_setvalextension()->set_value(in.setValExtension);
}

void convert_to_proto(const twinoaks::commonmodule::RampRate& in, commonmodule::RampRate& out)
{
    out.Clear();

    if(in.negativeReactivePowerKVArPerMin) out.mutable_negativereactivepowerkvarpermin()->set_value(*in.negativeReactivePowerKVArPerMin);

    if(in.negativeRealPowerKWPerMin) out.mutable_negativerealpowerkwpermin()->set_value(*in.negativeRealPowerKWPerMin);

    if(in.positiveReactivePowerKVArPerMin) out.mutable_positivereactivepowerkvarpermin()->set_value(*in.positiveReactivePowerKVArPerMin);

    if(in.positiveRealPowerKWPerMin) out.mutable_positiverealpowerkwpermin()->set_value(*in.positiveRealPowerKWPerMin);
}

void convert_to_proto(const twinoaks::commonmodule::EnterServiceAPC& in, commonmodule::EnterServiceAPC& out)
{
    out.Clear();

    convert_to_proto(in.enterServiceParameter, *out.mutable_enterserviceparameter()); // required field in DDS

    out.set_hzhilim(in.hzHiLim);

    out.set_hzlolim(in.hzLoLim);

    out.set_rtnsrvauto(in.rtnSrvAuto);

    out.set_vhilim(in.vHiLim);

    out.set_vlolim(in.vLoLim);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDCTE& in, commonmodule::OperationDCTE& out)
{
    out.Clear();

    convert_to_proto(in.rndDlTmms, *out.mutable_rnddltmms()); // required field in DDS

    convert_to_proto(in.rtnDlTmms, *out.mutable_rtndltmms()); // required field in DDS

    convert_to_proto(in.rtnRmpTmms, *out.mutable_rtnrmptmms()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::ControlING& in, commonmodule::ControlING& out)
{
    out.Clear();

    out.set_setval(in.setVal);

    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const twinoaks::commonmodule::HzWAPC& in, commonmodule::HzWAPC& out)
{
    out.Clear();

    convert_to_proto(in.overHzWPt, *out.mutable_overhzwpt()); // required field in DDS

    convert_to_proto(in.overHzWParameter, *out.mutable_overhzwparameter()); // required field in DDS

    convert_to_proto(in.underHzWPt, *out.mutable_underhzwpt()); // required field in DDS

    convert_to_proto(in.underHzWParameter, *out.mutable_underhzwparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::HzWPoint& in, commonmodule::HzWPoint& out)
{
    out.Clear();

    out.set_deadbandhzval(in.deadbandHzVal);

    out.set_slopeval(in.slopeVal);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDHFW& in, commonmodule::OperationDHFW& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    convert_to_proto(in.OplTmmsMax, *out.mutable_opltmmsmax()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::ClearingTime& in, commonmodule::ClearingTime& out)
{
    out.Clear();

    out.set_seconds(in.seconds);

    out.set_nanoseconds(in.nanoseconds);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDLFW& in, commonmodule::OperationDLFW& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    convert_to_proto(in.OplTmmsMax, *out.mutable_opltmmsmax()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::LimitWAPC& in, commonmodule::LimitWAPC& out)
{
    out.Clear();

    convert_to_proto(in.maxLimParameter, *out.mutable_maxlimparameter()); // required field in DDS

    convert_to_proto(in.minLimParameter, *out.mutable_minlimparameter()); // required field in DDS

    out.set_wmaxsptval(in.wMaxSptVal);

    out.set_wminsptval(in.wMinSptVal);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDWMX& in, commonmodule::OperationDWMX& out)
{
    out.Clear();

    out.set_modena(in.modEna);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDWMN& in, commonmodule::OperationDWMN& out)
{
    out.Clear();

    out.set_modena(in.modEna);
}

void convert_to_proto(const twinoaks::commonmodule::PFSPC& in, commonmodule::PFSPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);

    convert_to_proto(in.pFParameter, *out.mutable_pfparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::OperationDFPF& in, commonmodule::OperationDFPF& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    out.set_pfextset(in.pFExtSet);

    out.set_pfgntgtmxval(in.pFGnTgtMxVal);
}

void convert_to_proto(const twinoaks::commonmodule::TmHzCSG& in, commonmodule::TmHzCSG& out)
{
    out.Clear();

    for(decltype(in.overCrvPts.length()) i = 0; i < in.overCrvPts.length(); ++i)
    {
        convert_to_proto(in.overCrvPts.at(i), *out.mutable_overcrvpts()->Add());
    }

    for(decltype(in.underCrvPts.length()) i = 0; i < in.underCrvPts.length(); ++i)
    {
        convert_to_proto(in.underCrvPts.at(i), *out.mutable_undercrvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::TmHzPoint& in, commonmodule::TmHzPoint& out)
{
    out.Clear();

    out.set_hzval(in.hzVal);

    convert_to_proto(in.tmVal, *out.mutable_tmval()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::TmVoltCSG& in, commonmodule::TmVoltCSG& out)
{
    out.Clear();

    for(decltype(in.overCrvPts.length()) i = 0; i < in.overCrvPts.length(); ++i)
    {
        convert_to_proto(in.overCrvPts.at(i), *out.mutable_overcrvpts()->Add());
    }

    for(decltype(in.underCrvPts.length()) i = 0; i < in.underCrvPts.length(); ++i)
    {
        convert_to_proto(in.underCrvPts.at(i), *out.mutable_undercrvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::TmVoltPoint& in, commonmodule::TmVoltPoint& out)
{
    out.Clear();

    convert_to_proto(in.tmVal, *out.mutable_tmval()); // required field in DDS

    out.set_voltval(in.voltVal);
}

void convert_to_proto(const twinoaks::commonmodule::VarSPC& in, commonmodule::VarSPC& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    convert_to_proto(in.varParameter, *out.mutable_varparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::OperationDVAR& in, commonmodule::OperationDVAR& out)
{
    out.Clear();

    out.set_vartgtspt(in.varTgtSpt);
}

void convert_to_proto(const twinoaks::commonmodule::VoltVarCSG& in, commonmodule::VoltVarCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }

    convert_to_proto(in.vVarParameter, *out.mutable_vvarparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::VoltVarPoint& in, commonmodule::VoltVarPoint& out)
{
    out.Clear();

    out.set_varval(in.varVal);

    out.set_voltval(in.voltVal);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDVVR& in, commonmodule::OperationDVVR& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    convert_to_proto(in.OplTmmsMax, *out.mutable_opltmmsmax()); // required field in DDS

    out.set_vref(in.VRef);

    out.set_vrefadjena(in.VRefAdjEna);

    convert_to_proto(in.VRefTmms, *out.mutable_vreftmms()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::VoltWCSG& in, commonmodule::VoltWCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }

    convert_to_proto(in.voltWParameter, *out.mutable_voltwparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::VoltWPoint& in, commonmodule::VoltWPoint& out)
{
    out.Clear();

    out.set_voltval(in.voltVal);

    out.set_wval(in.wVal);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDVWC& in, commonmodule::OperationDVWC& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    convert_to_proto(in.OplTmmsMax, *out.mutable_opltmmsmax()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::WVarCSG& in, commonmodule::WVarCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }

    convert_to_proto(in.wVarParameter, *out.mutable_wvarparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::WVarPoint& in, commonmodule::WVarPoint& out)
{
    out.Clear();

    out.set_varval(in.varVal);

    out.set_wval(in.wVal);
}

void convert_to_proto(const twinoaks::commonmodule::OperationDWVR& in, commonmodule::OperationDWVR& out)
{
    out.Clear();

    out.set_modena(in.modEna);
}

void convert_to_proto(const twinoaks::commonmodule::WSPC& in, commonmodule::WSPC& out)
{
    out.Clear();

    out.set_modena(in.modEna);

    convert_to_proto(in.wParameter, *out.mutable_wparameter()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::OperationDWGC& in, commonmodule::OperationDWGC& out)
{
    out.Clear();

    out.set_wspt(in.wSpt);
}

void convert_to_proto(const twinoaks::essmodule::ESSDiscreteControl& in, essmodule::ESSDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.essDiscreteControlDBAT) convert_to_proto(*in.essDiscreteControlDBAT, *out.mutable_essdiscretecontroldbat());
}

void convert_to_proto(const twinoaks::essmodule::ESSDiscreteControlDBAT& in, essmodule::ESSDiscreteControlDBAT& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.control) convert_to_proto(*in.control, *out.mutable_control());
}

void convert_to_proto(const twinoaks::essmodule::ESSEvent& in, essmodule::ESSEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.essEventZBAT) convert_to_proto(*in.essEventZBAT, *out.mutable_esseventzbat());

    if(in.essEventZGEN) convert_to_proto(*in.essEventZGEN, *out.mutable_esseventzgen());
}

void convert_to_proto(const twinoaks::essmodule::EssEventZBAT& in, essmodule::EssEventZBAT& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.BatHi) convert_to_proto(*in.BatHi, *out.mutable_bathi());

    if(in.BatLo) convert_to_proto(*in.BatLo, *out.mutable_batlo());

    if(in.BatSt) convert_to_proto(*in.BatSt, *out.mutable_batst());

    if(in.Soc) convert_to_proto(*in.Soc, *out.mutable_soc());

    if(in.Stdby) convert_to_proto(*in.Stdby, *out.mutable_stdby());

    if(in.SoH) convert_to_proto(*in.SoH, *out.mutable_soh());

    if(in.WHAvail) convert_to_proto(*in.WHAvail, *out.mutable_whavail());
}

void convert_to_proto(const twinoaks::essmodule::ESSEventZGEN& in, essmodule::ESSEventZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_esseventandstatuszgen()); // inherited type
}

void convert_to_proto(const twinoaks::essmodule::ESSEventAndStatusZGEN& in, essmodule::ESSEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt) convert_to_proto(*in.AuxPwrSt, *out.mutable_auxpwrst());

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.EmgStop) convert_to_proto(*in.EmgStop, *out.mutable_emgstop());

    if(in.GnSynSt) convert_to_proto(*in.GnSynSt, *out.mutable_gnsynst());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());
}

void convert_to_proto(const twinoaks::essmodule::ESSPointStatus& in, essmodule::ESSPointStatus& out)
{
    out.Clear();

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled) convert_to_proto(*in.frequencySetPointEnabled, *out.mutable_frequencysetpointenabled());

    if(in.function) convert_to_proto(*in.function, *out.mutable_function());

    if(in.mode) convert_to_proto(*in.mode, *out.mutable_mode());

    if(in.pctHzDroop) out.mutable_pcthzdroop()->set_value(*in.pctHzDroop);

    if(in.pctVDroop) out.mutable_pctvdroop()->set_value(*in.pctVDroop);

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.syncBackToGrid) convert_to_proto(*in.syncBackToGrid, *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled) convert_to_proto(*in.transToIslndOnGridLossEnabled, *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    if(in.enterServiceOperation) convert_to_proto(*in.enterServiceOperation, *out.mutable_enterserviceoperation());

    if(in.hzWOperation) convert_to_proto(*in.hzWOperation, *out.mutable_hzwoperation());

    if(in.limitWOperation) convert_to_proto(*in.limitWOperation, *out.mutable_limitwoperation());

    if(in.pFOperation) convert_to_proto(*in.pFOperation, *out.mutable_pfoperation());

    if(in.tmHzTripOperation) convert_to_proto(*in.tmHzTripOperation, *out.mutable_tmhztripoperation());

    if(in.tmVoltTripOperation) convert_to_proto(*in.tmVoltTripOperation, *out.mutable_tmvolttripoperation());

    if(in.vArOperation) convert_to_proto(*in.vArOperation, *out.mutable_varoperation());

    if(in.voltVarOperation) convert_to_proto(*in.voltVarOperation, *out.mutable_voltvaroperation());

    if(in.voltWOperation) convert_to_proto(*in.voltWOperation, *out.mutable_voltwoperation());

    if(in.wVarOperation) convert_to_proto(*in.wVarOperation, *out.mutable_wvaroperation());
}

void convert_to_proto(const twinoaks::essmodule::ESSReading& in, essmodule::ESSReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::essmodule::ESSStatus& in, essmodule::ESSStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.essStatusZBAT) convert_to_proto(*in.essStatusZBAT, *out.mutable_essstatuszbat());

    if(in.essStatusZGEN) convert_to_proto(*in.essStatusZGEN, *out.mutable_essstatuszgen());
}

void convert_to_proto(const twinoaks::essmodule::EssStatusZBAT& in, essmodule::EssStatusZBAT& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.BatSt) convert_to_proto(*in.BatSt, *out.mutable_batst());

    if(in.GriMod) convert_to_proto(*in.GriMod, *out.mutable_grimod());

    if(in.Soc) convert_to_proto(*in.Soc, *out.mutable_soc());

    if(in.Stdby) convert_to_proto(*in.Stdby, *out.mutable_stdby());

    if(in.SoH) convert_to_proto(*in.SoH, *out.mutable_soh());

    if(in.WHAvail) convert_to_proto(*in.WHAvail, *out.mutable_whavail());
}

void convert_to_proto(const twinoaks::essmodule::ESSStatusZGEN& in, essmodule::ESSStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_esseventandstatuszgen()); // inherited type
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityOverride& in, generationmodule::GenerationCapabilityOverride& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.generationCapabilityConfiguration, *out.mutable_generationcapabilityconfiguration()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityConfiguration& in, generationmodule::GenerationCapabilityConfiguration& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_sourcecapabilityconfiguration()); // inherited type
}

void convert_to_proto(const twinoaks::generationmodule::GeneratingUnit& in, generationmodule::GeneratingUnit& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.maxOperatingP) convert_to_proto(*in.maxOperatingP, *out.mutable_maxoperatingp());
}

void convert_to_proto(const twinoaks::commonmodule::ActivePower& in, commonmodule::ActivePower& out)
{
    out.Clear();

    if(in.multiplier) out.mutable_multiplier()->set_value(static_cast<commonmodule::UnitMultiplierKind>(*in.multiplier));  // wrapped optional enum

    if(in.unit) out.mutable_unit()->set_value(static_cast<commonmodule::UnitSymbolKind>(*in.unit));  // wrapped optional enum

    if(in.value) out.mutable_value()->set_value(*in.value);
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCapability& in, generationmodule::GenerationCapability& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_nameplatevalue()); // inherited type

    convert_to_proto(in.generationCapabilityRatings, *out.mutable_generationcapabilityratings()); // required field in DDS

    if(in.generationCapabilityConfiguration) convert_to_proto(*in.generationCapabilityConfiguration, *out.mutable_generationcapabilityconfiguration());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityRatings& in, generationmodule::GenerationCapabilityRatings& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_sourcecapabilityratings()); // inherited type
}

void convert_to_proto(const twinoaks::generationmodule::GenerationControl& in, generationmodule::GenerationControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.generationControlFSCC) convert_to_proto(*in.generationControlFSCC, *out.mutable_generationcontrolfscc());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationControlFSCC& in, generationmodule::GenerationControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.GenerationControlScheduleFSCH) convert_to_proto(*in.GenerationControlScheduleFSCH, *out.mutable_generationcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationControlScheduleFSCH& in, generationmodule::GenerationControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::generationmodule::GenerationCSG& in, generationmodule::GenerationCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::generationmodule::GenerationPoint& in, generationmodule::GenerationPoint& out)
{
    out.Clear();

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled) convert_to_proto(*in.frequencySetPointEnabled, *out.mutable_frequencysetpointenabled());

    if(in.pctHzDroop) out.mutable_pcthzdroop()->set_value(*in.pctHzDroop);

    if(in.pctVDroop) out.mutable_pctvdroop()->set_value(*in.pctVDroop);

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.syncBackToGrid) convert_to_proto(*in.syncBackToGrid, *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled) convert_to_proto(*in.transToIslndOnGridLossEnabled, *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS

    if(in.enterServiceOperation) convert_to_proto(*in.enterServiceOperation, *out.mutable_enterserviceoperation());

    if(in.hzWOperation) convert_to_proto(*in.hzWOperation, *out.mutable_hzwoperation());

    if(in.limitWOperation) convert_to_proto(*in.limitWOperation, *out.mutable_limitwoperation());

    if(in.pFOperation) convert_to_proto(*in.pFOperation, *out.mutable_pfoperation());

    if(in.tmHzTripOperation) convert_to_proto(*in.tmHzTripOperation, *out.mutable_tmhztripoperation());

    if(in.tmVoltTripOperation) convert_to_proto(*in.tmVoltTripOperation, *out.mutable_tmvolttripoperation());

    if(in.vArOperation) convert_to_proto(*in.vArOperation, *out.mutable_varoperation());

    if(in.voltVarOperation) convert_to_proto(*in.voltVarOperation, *out.mutable_voltvaroperation());

    if(in.voltWOperation) convert_to_proto(*in.voltWOperation, *out.mutable_voltwoperation());

    if(in.wVarOperation) convert_to_proto(*in.wVarOperation, *out.mutable_wvaroperation());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationDiscreteControl& in, generationmodule::GenerationDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.ReactivePowerControl) convert_to_proto(*in.ReactivePowerControl, *out.mutable_reactivepowercontrol());

    if(in.RealPowerControl) convert_to_proto(*in.RealPowerControl, *out.mutable_realpowercontrol());
}

void convert_to_proto(const twinoaks::generationmodule::ReactivePowerControl& in, generationmodule::ReactivePowerControl& out)
{
    out.Clear();

    if(in.droopSetpoint) convert_to_proto(*in.droopSetpoint, *out.mutable_droopsetpoint());

    if(in.powerFactorSetpoint) out.mutable_powerfactorsetpoint()->set_value(*in.powerFactorSetpoint);

    if(in.reactivePowerControlMode) out.mutable_reactivepowercontrolmode()->set_value(static_cast<commonmodule::ReactivePowerControlKind>(*in.reactivePowerControlMode));  // wrapped optional enum

    if(in.reactivePowerSetpoint) out.mutable_reactivepowersetpoint()->set_value(*in.reactivePowerSetpoint);

    if(in.voltageSetpoint) out.mutable_voltagesetpoint()->set_value(*in.voltageSetpoint);
}

void convert_to_proto(const twinoaks::generationmodule::DroopParameter& in, generationmodule::DroopParameter& out)
{
    out.Clear();

    if(in.slope) out.mutable_slope()->set_value(*in.slope);

    if(in.unloadedOffset) out.mutable_unloadedoffset()->set_value(*in.unloadedOffset);
}

void convert_to_proto(const twinoaks::generationmodule::RealPowerControl& in, generationmodule::RealPowerControl& out)
{
    out.Clear();

    if(in.droopSetpoint) convert_to_proto(*in.droopSetpoint, *out.mutable_droopsetpoint());

    if(in.isochronousSetpoint) out.mutable_isochronoussetpoint()->set_value(*in.isochronousSetpoint);

    if(in.realPowerControlMode) out.mutable_realpowercontrolmode()->set_value(static_cast<commonmodule::RealPowerControlKind>(*in.realPowerControlMode));  // wrapped optional enum

    if(in.realPowerSetpoint) out.mutable_realpowersetpoint()->set_value(*in.realPowerSetpoint);
}

void convert_to_proto(const twinoaks::generationmodule::GenerationEvent& in, generationmodule::GenerationEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.generationEventZGEN) convert_to_proto(*in.generationEventZGEN, *out.mutable_generationeventzgen());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationEventZGEN& in, generationmodule::GenerationEventZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_generationeventandstatuszgen()); // inherited type
}

void convert_to_proto(const twinoaks::generationmodule::GenerationEventAndStatusZGEN& in, generationmodule::GenerationEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt) convert_to_proto(*in.AuxPwrSt, *out.mutable_auxpwrst());

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.EmgStop) convert_to_proto(*in.EmgStop, *out.mutable_emgstop());

    if(in.GnSynSt) convert_to_proto(*in.GnSynSt, *out.mutable_gnsynst());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());

    if(in.Alrm) out.mutable_alrm()->set_value(static_cast<commonmodule::AlrmKind>(*in.Alrm));  // wrapped optional enum

    if(in.GridConnectionState) out.mutable_gridconnectionstate()->set_value(static_cast<commonmodule::GridConnectionStateKind>(*in.GridConnectionState));  // wrapped optional enum

    if(in.ManAlrmInfo) out.mutable_manalrminfo()->set_value(in.ManAlrmInfo);

    if(in.OperatingState) out.mutable_operatingstate()->set_value(static_cast<commonmodule::OperatingStateKind>(*in.OperatingState));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::generationmodule::GenerationPointStatus& in, generationmodule::GenerationPointStatus& out)
{
    out.Clear();

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled) convert_to_proto(*in.frequencySetPointEnabled, *out.mutable_frequencysetpointenabled());

    if(in.pctHzDroop) out.mutable_pcthzdroop()->set_value(*in.pctHzDroop);

    if(in.pctVDroop) out.mutable_pctvdroop()->set_value(*in.pctVDroop);

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.syncBackToGrid) convert_to_proto(*in.syncBackToGrid, *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled) convert_to_proto(*in.transToIslndOnGridLossEnabled, *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    if(in.enterServiceOperation) convert_to_proto(*in.enterServiceOperation, *out.mutable_enterserviceoperation());

    if(in.hzWOperation) convert_to_proto(*in.hzWOperation, *out.mutable_hzwoperation());

    if(in.limitWOperation) convert_to_proto(*in.limitWOperation, *out.mutable_limitwoperation());

    if(in.pFOperation) convert_to_proto(*in.pFOperation, *out.mutable_pfoperation());

    if(in.tmHzTripOperation) convert_to_proto(*in.tmHzTripOperation, *out.mutable_tmhztripoperation());

    if(in.tmVoltTripOperation) convert_to_proto(*in.tmVoltTripOperation, *out.mutable_tmvolttripoperation());

    if(in.vArOperation) convert_to_proto(*in.vArOperation, *out.mutable_varoperation());

    if(in.voltVarOperation) convert_to_proto(*in.voltVarOperation, *out.mutable_voltvaroperation());

    if(in.voltWOperation) convert_to_proto(*in.voltWOperation, *out.mutable_voltwoperation());

    if(in.wVarOperation) convert_to_proto(*in.wVarOperation, *out.mutable_wvaroperation());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationReading& in, generationmodule::GenerationReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationStatus& in, generationmodule::GenerationStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.generationStatusZGEN) convert_to_proto(*in.generationStatusZGEN, *out.mutable_generationstatuszgen());
}

void convert_to_proto(const twinoaks::generationmodule::GenerationStatusZGEN& in, generationmodule::GenerationStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_generationeventandstatuszgen()); // inherited type
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionSchedule& in, interconnectionmodule::InterconnectionSchedule& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    convert_to_proto(in.interconnectionScheduleFSCC, *out.mutable_interconnectionschedulefscc()); // required field in DDS
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionScheduleFSCC& in, interconnectionmodule::InterconnectionScheduleFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    for(decltype(in.interconnectionControlScheduleFSCH.length()) i = 0; i < in.interconnectionControlScheduleFSCH.length(); ++i)
    {
        convert_to_proto(in.interconnectionControlScheduleFSCH.at(i), *out.mutable_interconnectioncontrolschedulefsch()->Add());
    }
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionControlScheduleFSCH& in, interconnectionmodule::InterconnectionControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionCSG& in, interconnectionmodule::InterconnectionCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::interconnectionmodule::InterconnectionPoint& in, interconnectionmodule::InterconnectionPoint& out)
{
    out.Clear();

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.frequencySetPointEnabled) convert_to_proto(*in.frequencySetPointEnabled, *out.mutable_frequencysetpointenabled());

    if(in.island) convert_to_proto(*in.island, *out.mutable_island());

    if(in.pctHzDroop) out.mutable_pcthzdroop()->set_value(*in.pctHzDroop);

    if(in.pctVDroop) out.mutable_pctvdroop()->set_value(*in.pctVDroop);

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::EnergyConsumer& in, commonmodule::EnergyConsumer& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.operatingLimit) out.mutable_operatinglimit()->set_value(in.operatingLimit);
}

void convert_to_proto(const twinoaks::loadmodule::LoadControl& in, loadmodule::LoadControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.loadControlFSCC) convert_to_proto(*in.loadControlFSCC, *out.mutable_loadcontrolfscc());
}

void convert_to_proto(const twinoaks::loadmodule::LoadControlFSCC& in, loadmodule::LoadControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.loadControlScheduleFSCH) convert_to_proto(*in.loadControlScheduleFSCH, *out.mutable_loadcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::loadmodule::LoadControlScheduleFSCH& in, loadmodule::LoadControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadCSG& in, loadmodule::LoadCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::loadmodule::LoadPoint& in, loadmodule::LoadPoint& out)
{
    out.Clear();

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadEvent& in, loadmodule::LoadEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.loadEventZGLD) convert_to_proto(*in.loadEventZGLD, *out.mutable_loadeventzgld());
}

void convert_to_proto(const twinoaks::loadmodule::LoadEventZGLD& in, loadmodule::LoadEventZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_loadeventandstatuszgld()); // inherited type
}

void convert_to_proto(const twinoaks::loadmodule::LoadEventAndStatusZGLD& in, loadmodule::LoadEventAndStatusZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.EmgStop) convert_to_proto(*in.EmgStop, *out.mutable_emgstop());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());
}

void convert_to_proto(const twinoaks::loadmodule::LoadPointStatus& in, loadmodule::LoadPointStatus& out)
{
    out.Clear();

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::loadmodule::LoadReading& in, loadmodule::LoadReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::loadmodule::LoadStatus& in, loadmodule::LoadStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.isUncontrollable) out.mutable_isuncontrollable()->set_value(*in.isUncontrollable);

    if(in.loadStatusZGLD) convert_to_proto(*in.loadStatusZGLD, *out.mutable_loadstatuszgld());
}

void convert_to_proto(const twinoaks::loadmodule::LoadStatusZGLD& in, loadmodule::LoadStatusZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_loadeventandstatuszgld()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::metermodule::MeterReading& in, metermodule::MeterReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::reclosermodule::Recloser& in, reclosermodule::Recloser& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.normalOpen) out.mutable_normalopen()->set_value(*in.normalOpen);
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserDiscreteControl& in, reclosermodule::RecloserDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.recloserDiscreteControlXCBR) convert_to_proto(*in.recloserDiscreteControlXCBR, *out.mutable_recloserdiscretecontrolxcbr());
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserDiscreteControlXCBR& in, reclosermodule::RecloserDiscreteControlXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_discretecontrolxcbr()); // inherited type
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserEvent& in, reclosermodule::RecloserEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.statusAndEventXCBR) convert_to_proto(*in.statusAndEventXCBR, *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserReading& in, reclosermodule::RecloserReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.diffReadingMMXU) convert_to_proto(*in.diffReadingMMXU, *out.mutable_diffreadingmmxu());

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::reclosermodule::RecloserStatus& in, reclosermodule::RecloserStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.statusAndEventXCBR) convert_to_proto(*in.statusAndEventXCBR, *out.mutable_statusandeventxcbr());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorDiscreteControl& in, regulatormodule::RegulatorDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.regulatorControlATCC) convert_to_proto(*in.regulatorControlATCC, *out.mutable_regulatorcontrolatcc());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlATCC& in, regulatormodule::RegulatorControlATCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.DirFwd) convert_to_proto(*in.DirFwd, *out.mutable_dirfwd());

    if(in.DirMode) out.mutable_dirmode()->set_value(static_cast<commonmodule::DirectionModeKind>(*in.DirMode));  // wrapped optional enum

    if(in.DirRev) convert_to_proto(*in.DirRev, *out.mutable_dirrev());

    if(in.DirThd) convert_to_proto(*in.DirThd, *out.mutable_dirthd());

    if(in.ParOp) convert_to_proto(*in.ParOp, *out.mutable_parop());

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.TapOpL) convert_to_proto(*in.TapOpL, *out.mutable_tapopl());

    if(in.TapOpR) convert_to_proto(*in.TapOpR, *out.mutable_tapopr());

    if(in.VolLmtHi) convert_to_proto(*in.VolLmtHi, *out.mutable_vollmthi());

    if(in.VolLmtLo) convert_to_proto(*in.VolLmtLo, *out.mutable_vollmtlo());

    if(in.VolLmtMode) out.mutable_vollmtmode()->set_value(static_cast<commonmodule::VoltLimitModeKind>(*in.VolLmtMode));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::regulatormodule::DirectionalATCC& in, regulatormodule::DirectionalATCC& out)
{
    out.Clear();

    if(in.BndWid) convert_to_proto(*in.BndWid, *out.mutable_bndwid());

    if(in.CtlDlTmms) convert_to_proto(*in.CtlDlTmms, *out.mutable_ctldltmms());

    if(in.LDCR) convert_to_proto(*in.LDCR, *out.mutable_ldcr());

    if(in.LDCX) convert_to_proto(*in.LDCX, *out.mutable_ldcx());

    if(in.VolSpt) convert_to_proto(*in.VolSpt, *out.mutable_volspt());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseISC& in, commonmodule::PhaseISC& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::ControlISC& in, commonmodule::ControlISC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorSystem& in, regulatormodule::RegulatorSystem& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControl& in, regulatormodule::RegulatorControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.regulatorControlFSCC) convert_to_proto(*in.regulatorControlFSCC, *out.mutable_regulatorcontrolfscc());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlFSCC& in, regulatormodule::RegulatorControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.regulatorControlScheduleFSCH) convert_to_proto(*in.regulatorControlScheduleFSCH, *out.mutable_regulatorcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlScheduleFSCH& in, regulatormodule::RegulatorControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorCSG& in, regulatormodule::RegulatorCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorPoint& in, regulatormodule::RegulatorPoint& out)
{
    out.Clear();

    if(in.control) convert_to_proto(*in.control, *out.mutable_control());

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEvent& in, regulatormodule::RegulatorEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.regulatorEventAndStatusANCR) convert_to_proto(*in.regulatorEventAndStatusANCR, *out.mutable_regulatoreventandstatusancr());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEventAndStatusANCR& in, regulatormodule::RegulatorEventAndStatusANCR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEventAndStatusATCC& in, regulatormodule::RegulatorEventAndStatusATCC& out)
{
    out.Clear();

    if(in.BndCtr) convert_to_proto(*in.BndCtr, *out.mutable_bndctr());

    if(in.BndWid) convert_to_proto(*in.BndWid, *out.mutable_bndwid());

    if(in.BndWidHi) convert_to_proto(*in.BndWidHi, *out.mutable_bndwidhi());

    if(in.BndWidLo) convert_to_proto(*in.BndWidLo, *out.mutable_bndwidlo());

    if(in.DirCtlRev) convert_to_proto(*in.DirCtlRev, *out.mutable_dirctlrev());

    if(in.DirIndt) convert_to_proto(*in.DirIndt, *out.mutable_dirindt());

    if(in.DirRev) convert_to_proto(*in.DirRev, *out.mutable_dirrev());

    if(in.LDCR) convert_to_proto(*in.LDCR, *out.mutable_ldcr());

    if(in.LDCX) convert_to_proto(*in.LDCX, *out.mutable_ldcx());

    if(in.ParOp) convert_to_proto(*in.ParOp, *out.mutable_parop());

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.StDlTmms) convert_to_proto(*in.StDlTmms, *out.mutable_stdltmms());

    if(in.TapOpErr) convert_to_proto(*in.TapOpErr, *out.mutable_tapoperr());

    if(in.TapPos) convert_to_proto(*in.TapPos, *out.mutable_tappos());

    if(in.VolLmtHi) convert_to_proto(*in.VolLmtHi, *out.mutable_vollmthi());

    if(in.VolLmtLo) convert_to_proto(*in.VolLmtLo, *out.mutable_vollmtlo());

    if(in.VolSpt) convert_to_proto(*in.VolSpt, *out.mutable_volspt());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());
}

void convert_to_proto(const twinoaks::commonmodule::StatusINC& in, commonmodule::StatusINC& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(in.stVal);

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::commonmodule::PhaseINS& in, commonmodule::PhaseINS& out)
{
    out.Clear();

    if(in.phs3) convert_to_proto(*in.phs3, *out.mutable_phs3());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorReading& in, regulatormodule::RegulatorReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());

    if(in.secondaryReadingMMXU) convert_to_proto(*in.secondaryReadingMMXU, *out.mutable_secondaryreadingmmxu());
}

void convert_to_proto(const twinoaks::regulatormodule::RegulatorStatus& in, regulatormodule::RegulatorStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.regulatorEventAndStatusANCR) convert_to_proto(*in.regulatorEventAndStatusANCR, *out.mutable_regulatoreventandstatusancr());
}

void convert_to_proto(const twinoaks::reservemodule::AllocatedMargin& in, reservemodule::AllocatedMargin& out)
{
    out.Clear();

    if(in.requestID) out.set_requestid(convert_string(in.requestID));

    if(in.allocatedMargin) convert_to_proto(*in.allocatedMargin, *out.mutable_allocatedmargin());

    if(in.allocatedStandbyMargin) convert_to_proto(*in.allocatedStandbyMargin, *out.mutable_allocatedstandbymargin());
}

void convert_to_proto(const twinoaks::reservemodule::ReserveMargin& in, reservemodule::ReserveMargin& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.A) convert_to_proto(*in.A, *out.mutable_a());

    if(in.VA) convert_to_proto(*in.VA, *out.mutable_va());

    if(in.VAr) convert_to_proto(*in.VAr, *out.mutable_var());

    if(in.W) convert_to_proto(*in.W, *out.mutable_w());
}

void convert_to_proto(const twinoaks::commonmodule::PMG& in, commonmodule::PMG& out)
{
    out.Clear();

    if(in.net) convert_to_proto(*in.net, *out.mutable_net());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::reservemodule::ReserveAvailability& in, reservemodule::ReserveAvailability& out)
{
    out.Clear();

    if(in.incrementalMargin) convert_to_proto(*in.incrementalMargin, *out.mutable_incrementalmargin());

    if(in.margin) convert_to_proto(*in.margin, *out.mutable_margin());

    if(in.standbyMargin) convert_to_proto(*in.standbyMargin, *out.mutable_standbymargin());
}

void convert_to_proto(const twinoaks::reservemodule::ReserveRequest& in, reservemodule::ReserveRequest& out)
{
    out.Clear();

    if(in.requestID) out.set_requestid(convert_string(in.requestID));

    if(in.margin) convert_to_proto(*in.margin, *out.mutable_margin());

    if(in.standbyMargin) convert_to_proto(*in.standbyMargin, *out.mutable_standbymargin());
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceDiscreteControl& in, resourcemodule::ResourceDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    for(decltype(in.analogControlGGIO.length()) i = 0; i < in.analogControlGGIO.length(); ++i)
    {
        convert_to_proto(in.analogControlGGIO.at(i), *out.mutable_analogcontrolggio()->Add());
    }

    for(decltype(in.booleanControlGGIO.length()) i = 0; i < in.booleanControlGGIO.length(); ++i)
    {
        convert_to_proto(in.booleanControlGGIO.at(i), *out.mutable_booleancontrolggio()->Add());
    }

    for(decltype(in.integerControlGGIO.length()) i = 0; i < in.integerControlGGIO.length(); ++i)
    {
        convert_to_proto(in.integerControlGGIO.at(i), *out.mutable_integercontrolggio()->Add());
    }

    for(decltype(in.stringControlGGIO.length()) i = 0; i < in.stringControlGGIO.length(); ++i)
    {
        convert_to_proto(in.stringControlGGIO.at(i), *out.mutable_stringcontrolggio()->Add());
    }
}

void convert_to_proto(const twinoaks::resourcemodule::AnalogControlGGIO& in, resourcemodule::AnalogControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.AnOut, *out.mutable_anout()); // required field in DDS

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::resourcemodule::BooleanControlGGIO& in, resourcemodule::BooleanControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum

    convert_to_proto(in.SPCSO, *out.mutable_spcso()); // required field in DDS
}

void convert_to_proto(const twinoaks::resourcemodule::IntegerControlGGIO& in, resourcemodule::IntegerControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.ISCSO, *out.mutable_iscso()); // required field in DDS

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::resourcemodule::StringControlGGIO& in, resourcemodule::StringControlGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum

    convert_to_proto(in.StrOut, *out.mutable_strout()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::VSC& in, commonmodule::VSC& out)
{
    out.Clear();

    if(in.ctlVal) out.set_ctlval(convert_string(in.ctlVal));
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceEvent& in, resourcemodule::ResourceEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    for(decltype(in.analogEventAndStatusGGIO.length()) i = 0; i < in.analogEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.analogEventAndStatusGGIO.at(i), *out.mutable_analogeventandstatusggio()->Add());
    }

    for(decltype(in.booleanEventAndStatusGGIO.length()) i = 0; i < in.booleanEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.booleanEventAndStatusGGIO.at(i), *out.mutable_booleaneventandstatusggio()->Add());
    }

    for(decltype(in.integerEventAndStatusGGIO.length()) i = 0; i < in.integerEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.integerEventAndStatusGGIO.at(i), *out.mutable_integereventandstatusggio()->Add());
    }

    for(decltype(in.stringEventAndStatusGGIO.length()) i = 0; i < in.stringEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.stringEventAndStatusGGIO.at(i), *out.mutable_stringeventandstatusggio()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::AnalogEventAndStatusGGIO& in, commonmodule::AnalogEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.AnIn, *out.mutable_anin()); // required field in DDS

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::commonmodule::BooleanEventAndStatusGGIO& in, commonmodule::BooleanEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.Ind, *out.mutable_ind()); // required field in DDS

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::commonmodule::IntegerEventAndStatusGGIO& in, commonmodule::IntegerEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    convert_to_proto(in.IntIn, *out.mutable_intin()); // required field in DDS

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::commonmodule::StringEventAndStatusGGIO& in, commonmodule::StringEventAndStatusGGIO& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Phase) out.mutable_phase()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.Phase));  // wrapped optional enum

    convert_to_proto(in.StrIn, *out.mutable_strin()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::VSS& in, commonmodule::VSS& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    if(in.stVal) out.set_stval(convert_string(in.stVal));

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceStatus& in, resourcemodule::ResourceStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    for(decltype(in.analogEventAndStatusGGIO.length()) i = 0; i < in.analogEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.analogEventAndStatusGGIO.at(i), *out.mutable_analogeventandstatusggio()->Add());
    }

    for(decltype(in.booleanEventAndStatusGGIO.length()) i = 0; i < in.booleanEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.booleanEventAndStatusGGIO.at(i), *out.mutable_booleaneventandstatusggio()->Add());
    }

    for(decltype(in.integerEventAndStatusGGIO.length()) i = 0; i < in.integerEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.integerEventAndStatusGGIO.at(i), *out.mutable_integereventandstatusggio()->Add());
    }

    for(decltype(in.stringEventAndStatusGGIO.length()) i = 0; i < in.stringEventAndStatusGGIO.length(); ++i)
    {
        convert_to_proto(in.stringEventAndStatusGGIO.at(i), *out.mutable_stringeventandstatusggio()->Add());
    }
}

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityOverride& in, solarmodule::SolarCapabilityOverride& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.solarCapabilityConfiguration, *out.mutable_solarcapabilityconfiguration()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityConfiguration& in, solarmodule::SolarCapabilityConfiguration& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_sourcecapabilityconfiguration()); // inherited type
}

void convert_to_proto(const twinoaks::solarmodule::SolarInverter& in, solarmodule::SolarInverter& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::solarmodule::SolarCapability& in, solarmodule::SolarCapability& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_nameplatevalue()); // inherited type

    if(in.solarCapabilityConfiguration) convert_to_proto(*in.solarCapabilityConfiguration, *out.mutable_solarcapabilityconfiguration());

    convert_to_proto(in.solarCapabilityRatings, *out.mutable_solarcapabilityratings()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityRatings& in, solarmodule::SolarCapabilityRatings& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_sourcecapabilityratings()); // inherited type
}

void convert_to_proto(const twinoaks::solarmodule::SolarControl& in, solarmodule::SolarControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.solarControlFSCC) convert_to_proto(*in.solarControlFSCC, *out.mutable_solarcontrolfscc());
}

void convert_to_proto(const twinoaks::solarmodule::SolarControlFSCC& in, solarmodule::SolarControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.SolarControlScheduleFSCH) convert_to_proto(*in.SolarControlScheduleFSCH, *out.mutable_solarcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::solarmodule::SolarControlScheduleFSCH& in, solarmodule::SolarControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarCSG& in, solarmodule::SolarCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::solarmodule::SolarCurvePoint& in, solarmodule::SolarCurvePoint& out)
{
    out.Clear();

    convert_to_proto(in.control, *out.mutable_control()); // required field in DDS

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarPoint& in, solarmodule::SolarPoint& out)
{
    out.Clear();

    if(in.mode) convert_to_proto(*in.mode, *out.mutable_mode());

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.enterServiceOperation) convert_to_proto(*in.enterServiceOperation, *out.mutable_enterserviceoperation());

    if(in.hzWOperation) convert_to_proto(*in.hzWOperation, *out.mutable_hzwoperation());

    if(in.limitWOperation) convert_to_proto(*in.limitWOperation, *out.mutable_limitwoperation());

    if(in.pFOperation) convert_to_proto(*in.pFOperation, *out.mutable_pfoperation());

    if(in.tmHzTripOperation) convert_to_proto(*in.tmHzTripOperation, *out.mutable_tmhztripoperation());

    if(in.tmVoltTripOperation) convert_to_proto(*in.tmVoltTripOperation, *out.mutable_tmvolttripoperation());

    if(in.vArOperation) convert_to_proto(*in.vArOperation, *out.mutable_varoperation());

    if(in.voltVarOperation) convert_to_proto(*in.voltVarOperation, *out.mutable_voltvaroperation());

    if(in.voltWOperation) convert_to_proto(*in.voltWOperation, *out.mutable_voltwoperation());

    if(in.wVarOperation) convert_to_proto(*in.wVarOperation, *out.mutable_wvaroperation());

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.wOperation) convert_to_proto(*in.wOperation, *out.mutable_woperation());
}

void convert_to_proto(const twinoaks::solarmodule::SolarDiscreteControl& in, solarmodule::SolarDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.solarDiscreteControlPV) convert_to_proto(*in.solarDiscreteControlPV, *out.mutable_solardiscretecontrolpv());
}

void convert_to_proto(const twinoaks::solarmodule::SolarDiscreteControlPV& in, solarmodule::SolarDiscreteControlPV& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.control) convert_to_proto(*in.control, *out.mutable_control());
}

void convert_to_proto(const twinoaks::solarmodule::SolarEvent& in, solarmodule::SolarEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.solarEventZGEN) convert_to_proto(*in.solarEventZGEN, *out.mutable_solareventzgen());
}

void convert_to_proto(const twinoaks::solarmodule::SolarEventZGEN& in, solarmodule::SolarEventZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_solareventandstatuszgen()); // inherited type

    if(in.GriMod) convert_to_proto(*in.GriMod, *out.mutable_grimod());
}

void convert_to_proto(const twinoaks::solarmodule::SolarEventAndStatusZGEN& in, solarmodule::SolarEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt) convert_to_proto(*in.AuxPwrSt, *out.mutable_auxpwrst());

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.EmgStop) convert_to_proto(*in.EmgStop, *out.mutable_emgstop());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());

    if(in.Alrm) out.mutable_alrm()->set_value(static_cast<commonmodule::AlrmKind>(*in.Alrm));  // wrapped optional enum

    if(in.GnSynSt) convert_to_proto(*in.GnSynSt, *out.mutable_gnsynst());

    if(in.GridConnectionState) out.mutable_gridconnectionstate()->set_value(static_cast<commonmodule::GridConnectionStateKind>(*in.GridConnectionState));  // wrapped optional enum

    if(in.ManAlrmInfo) out.mutable_manalrminfo()->set_value(in.ManAlrmInfo);

    if(in.OperatingState) out.mutable_operatingstate()->set_value(static_cast<commonmodule::OperatingStateKind>(*in.OperatingState));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::solarmodule::SolarPointStatus& in, solarmodule::SolarPointStatus& out)
{
    out.Clear();

    if(in.frequencySetPointEnabled) convert_to_proto(*in.frequencySetPointEnabled, *out.mutable_frequencysetpointenabled());

    if(in.mode) convert_to_proto(*in.mode, *out.mutable_mode());

    if(in.pctHzDroop) out.mutable_pcthzdroop()->set_value(*in.pctHzDroop);

    if(in.pctVDroop) out.mutable_pctvdroop()->set_value(*in.pctVDroop);

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    if(in.blackStartEnabled) convert_to_proto(*in.blackStartEnabled, *out.mutable_blackstartenabled());

    if(in.enterServiceOperation) convert_to_proto(*in.enterServiceOperation, *out.mutable_enterserviceoperation());

    if(in.hzWOperation) convert_to_proto(*in.hzWOperation, *out.mutable_hzwoperation());

    if(in.limitWOperation) convert_to_proto(*in.limitWOperation, *out.mutable_limitwoperation());

    if(in.pFOperation) convert_to_proto(*in.pFOperation, *out.mutable_pfoperation());

    if(in.syncBackToGrid) convert_to_proto(*in.syncBackToGrid, *out.mutable_syncbacktogrid());

    if(in.tmHzTripOperation) convert_to_proto(*in.tmHzTripOperation, *out.mutable_tmhztripoperation());

    if(in.tmVoltTripOperation) convert_to_proto(*in.tmVoltTripOperation, *out.mutable_tmvolttripoperation());

    if(in.vArOperation) convert_to_proto(*in.vArOperation, *out.mutable_varoperation());

    if(in.voltVarOperation) convert_to_proto(*in.voltVarOperation, *out.mutable_voltvaroperation());

    if(in.voltWOperation) convert_to_proto(*in.voltWOperation, *out.mutable_voltwoperation());

    if(in.wVarOperation) convert_to_proto(*in.wVarOperation, *out.mutable_wvaroperation());
}

void convert_to_proto(const twinoaks::solarmodule::SolarReading& in, solarmodule::SolarReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::solarmodule::SolarStatus& in, solarmodule::SolarStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.solarStatusZGEN) convert_to_proto(*in.solarStatusZGEN, *out.mutable_solarstatuszgen());
}

void convert_to_proto(const twinoaks::solarmodule::SolarStatusZGEN& in, solarmodule::SolarStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_solareventandstatuszgen()); // inherited type

    if(in.GriMod) convert_to_proto(*in.GriMod, *out.mutable_grimod());
}

void convert_to_proto(const twinoaks::switchmodule::ProtectedSwitch& in, switchmodule::ProtectedSwitch& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::switchmodule::SwitchDiscreteControl& in, switchmodule::SwitchDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.switchDiscreteControlXSWI) convert_to_proto(*in.switchDiscreteControlXSWI, *out.mutable_switchdiscretecontrolxswi());
}

void convert_to_proto(const twinoaks::switchmodule::SwitchDiscreteControlXSWI& in, switchmodule::SwitchDiscreteControlXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());

    if(in.ResetProtectionPickup) convert_to_proto(*in.ResetProtectionPickup, *out.mutable_resetprotectionpickup());
}

void convert_to_proto(const twinoaks::switchmodule::SwitchEvent& in, switchmodule::SwitchEvent& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_eventvalue()); // inherited type

    if(in.switchEventXSWI) convert_to_proto(*in.switchEventXSWI, *out.mutable_switcheventxswi());
}

void convert_to_proto(const twinoaks::switchmodule::SwitchEventXSWI& in, switchmodule::SwitchEventXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());
}

void convert_to_proto(const twinoaks::switchmodule::SwitchReading& in, switchmodule::SwitchReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.diffReadingMMXU) convert_to_proto(*in.diffReadingMMXU, *out.mutable_diffreadingmmxu());

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::switchmodule::SwitchStatus& in, switchmodule::SwitchStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.switchStatusXSWI) convert_to_proto(*in.switchStatusXSWI, *out.mutable_switchstatusxswi());
}

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusXSWI& in, switchmodule::SwitchStatusXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.Pos) convert_to_proto(*in.Pos, *out.mutable_pos());

    convert_to_proto(in.ProtectionPickup, *out.mutable_protectionpickup()); // required field in DDS
}

} // end namespace dds

} // end namespace adapter
