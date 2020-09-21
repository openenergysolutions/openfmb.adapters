#include "adapter-util/config/generated/MessageVisitors.h"

namespace adapter {

namespace util {

void visit(const breakermodule::Breaker& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerDiscreteControl& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerDiscreteControlXCBR& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerEvent& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerReading& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerStatus& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankCSG& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankControl& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankControlFSCC& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankControlYPSH& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankDiscreteControl& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankDiscreteControlYPSH& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankEvent& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankEventAndStatusYPSH& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankPoint& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankReading& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankStatus& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankSystem& message, IMessageVisitor& visitor);

void visit(const commonmodule::ACD& message, IMessageVisitor& visitor);

void visit(const commonmodule::ACDCTerminal& message, IMessageVisitor& visitor);

void visit(const commonmodule::ASG& message, IMessageVisitor& visitor);

void visit(const commonmodule::ActivePower& message, IMessageVisitor& visitor);

void visit(const commonmodule::AnalogEventAndStatusGGIO& message, IMessageVisitor& visitor);

void visit(const commonmodule::AnalogueValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::AnalogueValueCtl& message, IMessageVisitor& visitor);

void visit(const commonmodule::BCR& message, IMessageVisitor& visitor);

void visit(const commonmodule::BooleanEventAndStatusGGIO& message, IMessageVisitor& visitor);

void visit(const commonmodule::CMV& message, IMessageVisitor& visitor);

void visit(const commonmodule::CheckConditions& message, IMessageVisitor& visitor);

void visit(const commonmodule::ConductingEquipment& message, IMessageVisitor& visitor);

void visit(const commonmodule::ConductingEquipmentTerminalReading& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlAPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlDPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlFSCC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlINC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlING& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlISC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlSPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlTimestamp& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::DEL& message, IMessageVisitor& visitor);

void visit(const commonmodule::DetailQual& message, IMessageVisitor& visitor);

void visit(const commonmodule::DiscreteControlXCBR& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_CalcMethodKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_GridConnectModeKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_PFSignKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_ScheduleParameter& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENS_BehaviourModeKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENS_DynamicTestKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENS_HealthKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ESS& message, IMessageVisitor& visitor);

void visit(const commonmodule::EnergyConsumer& message, IMessageVisitor& visitor);

void visit(const commonmodule::EventMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::EventValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::IdentifiedObject& message, IMessageVisitor& visitor);

void visit(const commonmodule::IntegerEventAndStatusGGIO& message, IMessageVisitor& visitor);

void visit(const commonmodule::LogicalNode& message, IMessageVisitor& visitor);

void visit(const commonmodule::LogicalNodeForControl& message, IMessageVisitor& visitor);

void visit(const commonmodule::LogicalNodeForEventAndStatus& message, IMessageVisitor& visitor);

void visit(const commonmodule::MV& message, IMessageVisitor& visitor);

void visit(const commonmodule::MessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::Meter& message, IMessageVisitor& visitor);

void visit(const commonmodule::NamedObject& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_PhaseCodeKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_PhaseFaultDirectionKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_RecloseActionKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_StateKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_UnitMultiplierKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_UnitSymbolKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseAPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseDPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseDPS& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseINS& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseISC& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseMMTN& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseRecloseAction& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseSPS& message, IMessageVisitor& visitor);

void visit(const commonmodule::Quality& message, IMessageVisitor& visitor);

void visit(const commonmodule::RampRate& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMMTN& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMMTR& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMMXU& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::ScheduleCSG& message, IMessageVisitor& visitor);

void visit(const commonmodule::SchedulePoint& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusAndEventXCBR& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusDPS& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusINC& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusINS& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusSPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusSPS& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::StringEventAndStatusGGIO& message, IMessageVisitor& visitor);

void visit(const commonmodule::Terminal& message, IMessageVisitor& visitor);

void visit(const commonmodule::TimeQuality& message, IMessageVisitor& visitor);

void visit(const commonmodule::Timestamp& message, IMessageVisitor& visitor);

void visit(const commonmodule::Unit& message, IMessageVisitor& visitor);

void visit(const commonmodule::VSC& message, IMessageVisitor& visitor);

void visit(const commonmodule::VSS& message, IMessageVisitor& visitor);

void visit(const commonmodule::Vector& message, IMessageVisitor& visitor);

void visit(const commonmodule::WYE& message, IMessageVisitor& visitor);

void visit(const essmodule::CapacityFirming& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSCSG& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSControl& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSEvent& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSEventAndStatusZGEN& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSEventZGEN& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSFunction& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSPoint& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSPointStatus& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSReading& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSStatus& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSStatusZGEN& message, IMessageVisitor& visitor);

void visit(const essmodule::EssControlFSCC& message, IMessageVisitor& visitor);

void visit(const essmodule::EssEventZBAT& message, IMessageVisitor& visitor);

void visit(const essmodule::EssStatusZBAT& message, IMessageVisitor& visitor);

void visit(const essmodule::FrequencyRegulation& message, IMessageVisitor& visitor);

void visit(const essmodule::PeakShaving& message, IMessageVisitor& visitor);

void visit(const essmodule::SOCManagement& message, IMessageVisitor& visitor);

void visit(const essmodule::SocLimit& message, IMessageVisitor& visitor);

void visit(const essmodule::VoltageDroop& message, IMessageVisitor& visitor);

void visit(const essmodule::VoltagePI& message, IMessageVisitor& visitor);

void visit(const essmodule::VoltageRegulation& message, IMessageVisitor& visitor);

void visit(const generationmodule::DroopParameter& message, IMessageVisitor& visitor);

void visit(const generationmodule::GeneratingUnit& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationCSG& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationControl& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationControlFSCC& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationDiscreteControl& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationEvent& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationEventAndStatusZGEN& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationEventZGEN& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationPoint& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationPointStatus& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationReading& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationStatus& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationStatusZGEN& message, IMessageVisitor& visitor);

void visit(const generationmodule::Optional_ReactivePowerControlKind& message, IMessageVisitor& visitor);

void visit(const generationmodule::Optional_RealPowerControlKind& message, IMessageVisitor& visitor);

void visit(const generationmodule::ReactivePowerControl& message, IMessageVisitor& visitor);

void visit(const generationmodule::RealPowerControl& message, IMessageVisitor& visitor);

void visit(const google::protobuf::BoolValue& message, IMessageVisitor& visitor);

void visit(const google::protobuf::FloatValue& message, IMessageVisitor& visitor);

void visit(const google::protobuf::Int32Value& message, IMessageVisitor& visitor);

void visit(const google::protobuf::StringValue& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadCSG& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControl& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControlFSCC& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadEvent& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadEventAndStatusZGLD& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadEventZGLD& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadPoint& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadPointStatus& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadReading& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadStatus& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadStatusZGLD& message, IMessageVisitor& visitor);

void visit(const metermodule::MeterReading& message, IMessageVisitor& visitor);

void visit(const reclosermodule::Recloser& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserDiscreteControl& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserDiscreteControlXCBR& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserEvent& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserReading& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserStatus& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorCSG& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorControl& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorControlATCC& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorControlFSCC& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorDiscreteControl& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorEvent& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorEventAndStatusANCR& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorEventAndStatusATCC& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorPoint& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorReading& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorStatus& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorSystem& message, IMessageVisitor& visitor);

void visit(const resourcemodule::AnalogControlGGIO& message, IMessageVisitor& visitor);

void visit(const resourcemodule::BooleanControlGGIO& message, IMessageVisitor& visitor);

void visit(const resourcemodule::IntegerControlGGIO& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceDiscreteControl& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceEvent& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceReading& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceStatus& message, IMessageVisitor& visitor);

void visit(const resourcemodule::StringControlGGIO& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarCSG& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControl& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControlFSCC& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarEvent& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarEventAndStatusZGEN& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarEventZGEN& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarInverter& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarPoint& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarPointStatus& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarReading& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarStatus& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarStatusZGEN& message, IMessageVisitor& visitor);

void visit(const switchmodule::ProtectedSwitch& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchDiscreteControl& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchDiscreteControlXSWI& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchEvent& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchEventXSWI& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchReading& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchStatus& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchStatusXSWI& message, IMessageVisitor& visitor);

void visit(const breakermodule::Breaker& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breakerdiscretecontrolxcbr())
    {
        visitor.start_message_field("breakerDiscreteControlXCBR");
        visit(message.breakerdiscretecontrolxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerDiscreteControlXCBR& message, IMessageVisitor& visitor)
{
    if(message.has_discretecontrolxcbr())
    {
        visitor.start_message_field("discreteControlXCBR");
        visit(message.discretecontrolxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_statusandeventxcbr())
    {
        visitor.start_message_field("statusAndEventXCBR");
        visit(message.statusandeventxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_diffreadingmmxu())
    {
        visitor.start_message_field("diffReadingMMXU");
        visit(message.diffreadingmmxu(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_statusandeventxcbr())
    {
        visitor.start_message_field("statusAndEventXCBR");
        visit(message.statusandeventxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const capbankmodule::CapBankControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankcontrolfscc())
    {
        visitor.start_message_field("capBankControlFSCC");
        visit(message.capbankcontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_controlfscc())
    {
        visitor.start_message_field("controlFSCC");
        visit(message.controlfscc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankcontrolschedulefsch())
    {
        visitor.start_message_field("capBankControlScheduleFSCH");
        visit(message.capbankcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valcsg())
    {
        visitor.start_message_field("ValCSG");
        visit(message.valcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankControlYPSH& message, IMessageVisitor& visitor)
{
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankdiscretecontrolypsh())
    {
        visitor.start_message_field("capBankDiscreteControlYPSH");
        visit(message.capbankdiscretecontrolypsh(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankDiscreteControlYPSH& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforcontrol())
    {
        visitor.start_message_field("logicalNodeForControl");
        visit(message.logicalnodeforcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankeventandstatusypsh())
    {
        visitor.start_message_field("CapBankEventAndStatusYPSH");
        visit(message.capbankeventandstatusypsh(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankEventAndStatusYPSH& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankPoint& message, IMessageVisitor& visitor)
{
    if(message.has_control())
    {
        visitor.start_message_field("control");
        visit(message.control(), visitor);
        visitor.end_message_field();
    }
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankeventandstatusypsh())
    {
        visitor.start_message_field("capBankEventAndStatusYPSH");
        visit(message.capbankeventandstatusypsh(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankSystem& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ACD& message, IMessageVisitor& visitor)
{
    visitor.handle("dirGeneral", static_cast<int>(message.dirgeneral()), *commonmodule::FaultDirectionKind_descriptor());
    if(message.has_dirneut())
    {
        visitor.start_message_field("dirNeut");
        visit(message.dirneut(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dirphsa())
    {
        visitor.start_message_field("dirPhsA");
        visit(message.dirphsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dirphsb())
    {
        visitor.start_message_field("dirPhsB");
        visit(message.dirphsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dirphsc())
    {
        visitor.start_message_field("dirPhsC");
        visit(message.dirphsc(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("general", message.general());
    if(message.has_neut())
    {
        visitor.start_message_field("neut");
        visit(message.neut(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ACDCTerminal& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    if(message.has_connected())
    {
        visitor.start_message_field("connected");
        visit(message.connected(), visitor);
        visitor.end_message_field();
    }
    if(message.has_sequencenumber())
    {
        visitor.start_message_field("sequenceNumber");
        visit(message.sequencenumber(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ASG& message, IMessageVisitor& visitor)
{
    if(message.has_setmag())
    {
        visitor.start_message_field("setMag");
        visit(message.setmag(), visitor);
        visitor.end_message_field();
    }
    if(message.has_units())
    {
        visitor.start_message_field("units");
        visit(message.units(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ActivePower& message, IMessageVisitor& visitor)
{
    if(message.has_multiplier())
    {
        visitor.start_message_field("multiplier");
        visit(message.multiplier(), visitor);
        visitor.end_message_field();
    }
    if(message.has_unit())
    {
        visitor.start_message_field("unit");
        visit(message.unit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_value())
    {
        visitor.start_message_field("value");
        visit(message.value(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::AnalogEventAndStatusGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_anin())
    {
        visitor.start_message_field("AnIn");
        visit(message.anin(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::AnalogueValue& message, IMessageVisitor& visitor)
{
    if(message.has_f())
    {
        visitor.start_message_field("f");
        visit(message.f(), visitor);
        visitor.end_message_field();
    }
    if(message.has_i())
    {
        visitor.start_message_field("i");
        visit(message.i(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::AnalogueValueCtl& message, IMessageVisitor& visitor)
{
    if(message.has_f())
    {
        visitor.start_message_field("f");
        visit(message.f(), visitor);
        visitor.end_message_field();
    }
    if(message.has_i())
    {
        visitor.start_message_field("i");
        visit(message.i(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::BCR& message, IMessageVisitor& visitor)
{
    visitor.handle("actVal", message.actval());
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::BooleanEventAndStatusGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ind())
    {
        visitor.start_message_field("Ind");
        visit(message.ind(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::CMV& message, IMessageVisitor& visitor)
{
    if(message.has_cval())
    {
        visitor.start_message_field("cVal");
        visit(message.cval(), visitor);
        visitor.end_message_field();
    }
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::CheckConditions& message, IMessageVisitor& visitor)
{
    if(message.has_interlockcheck())
    {
        visitor.start_message_field("interlockCheck");
        visit(message.interlockcheck(), visitor);
        visitor.end_message_field();
    }
    if(message.has_synchrocheck())
    {
        visitor.start_message_field("synchroCheck");
        visit(message.synchrocheck(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ConductingEquipment& message, IMessageVisitor& visitor)
{
    if(message.has_namedobject())
    {
        visitor.start_message_field("namedObject");
        visit(message.namedobject(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("mRID", message.mrid());
}

void visit(const commonmodule::ConductingEquipmentTerminalReading& message, IMessageVisitor& visitor)
{
    if(message.has_terminal())
    {
        visitor.start_message_field("terminal");
        visit(message.terminal(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ControlAPC& message, IMessageVisitor& visitor)
{
    if(message.has_ctlval())
    {
        visitor.start_message_field("ctlVal");
        visit(message.ctlval(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ControlDPC& message, IMessageVisitor& visitor)
{
    visitor.handle("ctlVal", message.ctlval());
}

void visit(const commonmodule::ControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforcontrol())
    {
        visitor.start_message_field("logicalNodeForControl");
        visit(message.logicalnodeforcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_controlschedulefsch())
    {
        visitor.start_message_field("controlScheduleFSCH");
        visit(message.controlschedulefsch(), visitor);
        visitor.end_message_field();
    }
    if(message.has_islandcontrolschedulefsch())
    {
        visitor.start_message_field("islandControlScheduleFSCH");
        visit(message.islandcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ControlINC& message, IMessageVisitor& visitor)
{
    visitor.handle("ctlVal", message.ctlval());
}

void visit(const commonmodule::ControlING& message, IMessageVisitor& visitor)
{
    visitor.handle("setVal", message.setval());
    if(message.has_units())
    {
        visitor.start_message_field("units");
        visit(message.units(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ControlISC& message, IMessageVisitor& visitor)
{
    visitor.handle("ctlVal", message.ctlval());
}

void visit(const commonmodule::ControlMessageInfo& message, IMessageVisitor& visitor)
{
    if(message.has_messageinfo())
    {
        visitor.start_message_field("messageInfo");
        visit(message.messageinfo(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ControlSPC& message, IMessageVisitor& visitor)
{
    visitor.handle("ctlVal", message.ctlval());
}

void visit(const commonmodule::ControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valacsg())
    {
        visitor.start_message_field("ValACSG");
        visit(message.valacsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ControlTimestamp& message, IMessageVisitor& visitor)
{
    visitor.handle("seconds", message.seconds());
    visitor.handle("nanoseconds", message.nanoseconds());
}

void visit(const commonmodule::ControlValue& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    if(message.has_modblk())
    {
        visitor.start_message_field("modBlk");
        visit(message.modblk(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reset())
    {
        visitor.start_message_field("reset");
        visit(message.reset(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::DEL& message, IMessageVisitor& visitor)
{
    if(message.has_phsab())
    {
        visitor.start_message_field("phsAB");
        visit(message.phsab(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsbc())
    {
        visitor.start_message_field("phsBC");
        visit(message.phsbc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsca())
    {
        visitor.start_message_field("phsCA");
        visit(message.phsca(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::DetailQual& message, IMessageVisitor& visitor)
{
    visitor.handle("badReference", message.badreference());
    visitor.handle("failure", message.failure());
    visitor.handle("inaccurate", message.inaccurate());
    visitor.handle("inconsistent", message.inconsistent());
    visitor.handle("oldData", message.olddata());
    visitor.handle("oscillatory", message.oscillatory());
    visitor.handle("outOfRange", message.outofrange());
    visitor.handle("overflow", message.overflow());
}

void visit(const commonmodule::DiscreteControlXCBR& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforcontrol())
    {
        visitor.start_message_field("logicalNodeForControl");
        visit(message.logicalnodeforcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectionmode())
    {
        visitor.start_message_field("ProtectionMode");
        visit(message.protectionmode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloseenabled())
    {
        visitor.start_message_field("RecloseEnabled");
        visit(message.recloseenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resetprotectionpickup())
    {
        visitor.start_message_field("ResetProtectionPickup");
        visit(message.resetprotectionpickup(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ENG_CalcMethodKind& message, IMessageVisitor& visitor)
{
    visitor.handle("setVal", static_cast<int>(message.setval()), *commonmodule::CalcMethodKind_descriptor());
}

void visit(const commonmodule::ENG_GridConnectModeKind& message, IMessageVisitor& visitor)
{
    visitor.handle("setVal", static_cast<int>(message.setval()), *commonmodule::GridConnectModeKind_descriptor());
    if(message.has_setvalextension())
    {
        visitor.start_message_field("setValExtension");
        visit(message.setvalextension(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ENG_PFSignKind& message, IMessageVisitor& visitor)
{
    visitor.handle("setVal", static_cast<int>(message.setval()), *commonmodule::PFSignKind_descriptor());
}

void visit(const commonmodule::ENG_ScheduleParameter& message, IMessageVisitor& visitor)
{
    visitor.handle("scheduleParameterType", static_cast<int>(message.scheduleparametertype()), *commonmodule::ScheduleParameterKind_descriptor());
    visitor.handle("value", message.value());
}

void visit(const commonmodule::ENS_BehaviourModeKind& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", static_cast<int>(message.stval()), *commonmodule::BehaviourModeKind_descriptor());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ENS_DynamicTestKind& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", static_cast<int>(message.stval()), *commonmodule::DynamicTestKind_descriptor());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ENS_HealthKind& message, IMessageVisitor& visitor)
{
    if(message.has_d())
    {
        visitor.start_message_field("d");
        visit(message.d(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", static_cast<int>(message.stval()), *commonmodule::HealthKind_descriptor());
}

void visit(const commonmodule::ESS& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::EnergyConsumer& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_operatinglimit())
    {
        visitor.start_message_field("operatingLimit");
        visit(message.operatinglimit(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::EventMessageInfo& message, IMessageVisitor& visitor)
{
    if(message.has_messageinfo())
    {
        visitor.start_message_field("messageInfo");
        visit(message.messageinfo(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::EventValue& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    if(message.has_modblk())
    {
        visitor.start_message_field("modBlk");
        visit(message.modblk(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::IdentifiedObject& message, IMessageVisitor& visitor)
{
    if(message.has_description())
    {
        visitor.start_message_field("description");
        visit(message.description(), visitor);
        visitor.end_message_field();
    }
    if(message.has_mrid())
    {
        visitor.start_message_field("mRID");
        visit(message.mrid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_name())
    {
        visitor.start_message_field("name");
        visit(message.name(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::IntegerEventAndStatusGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_intin())
    {
        visitor.start_message_field("IntIn");
        visit(message.intin(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::LogicalNode& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::LogicalNodeForControl& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::LogicalNodeForEventAndStatus& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_beh())
    {
        visitor.start_message_field("Beh");
        visit(message.beh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_eehealth())
    {
        visitor.start_message_field("EEHealth");
        visit(message.eehealth(), visitor);
        visitor.end_message_field();
    }
    if(message.has_hotlinetag())
    {
        visitor.start_message_field("HotLineTag");
        visit(message.hotlinetag(), visitor);
        visitor.end_message_field();
    }
    if(message.has_remoteblk())
    {
        visitor.start_message_field("RemoteBlk");
        visit(message.remoteblk(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::MV& message, IMessageVisitor& visitor)
{
    if(message.has_mag())
    {
        visitor.start_message_field("mag");
        visit(message.mag(), visitor);
        visitor.end_message_field();
    }
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
    if(message.has_units())
    {
        visitor.start_message_field("units");
        visit(message.units(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::MessageInfo& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    if(message.has_messagetimestamp())
    {
        visitor.start_message_field("messageTimeStamp");
        visit(message.messagetimestamp(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::Meter& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::NamedObject& message, IMessageVisitor& visitor)
{
    if(message.has_description())
    {
        visitor.start_message_field("description");
        visit(message.description(), visitor);
        visitor.end_message_field();
    }
    if(message.has_name())
    {
        visitor.start_message_field("name");
        visit(message.name(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::Optional_PhaseCodeKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::PhaseCodeKind_descriptor());
}

void visit(const commonmodule::Optional_PhaseFaultDirectionKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::PhaseFaultDirectionKind_descriptor());
}

void visit(const commonmodule::Optional_RecloseActionKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::RecloseActionKind_descriptor());
}

void visit(const commonmodule::Optional_StateKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::StateKind_descriptor());
}

void visit(const commonmodule::Optional_UnitMultiplierKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::UnitMultiplierKind_descriptor());
}

void visit(const commonmodule::Optional_UnitSymbolKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::UnitSymbolKind_descriptor());
}

void visit(const commonmodule::PhaseAPC& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseDPC& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseDPS& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseINS& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseISC& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseMMTN& message, IMessageVisitor& visitor)
{
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsab())
    {
        visitor.start_message_field("phsAB");
        visit(message.phsab(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsbc())
    {
        visitor.start_message_field("phsBC");
        visit(message.phsbc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsca())
    {
        visitor.start_message_field("phsCA");
        visit(message.phsca(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseRecloseAction& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::PhaseSPS& message, IMessageVisitor& visitor)
{
    if(message.has_phs3())
    {
        visitor.start_message_field("phs3");
        visit(message.phs3(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::Quality& message, IMessageVisitor& visitor)
{
    if(message.has_detailqual())
    {
        visitor.start_message_field("detailQual");
        visit(message.detailqual(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("operatorBlocked", message.operatorblocked());
    visitor.handle("source", static_cast<int>(message.source()), *commonmodule::SourceKind_descriptor());
    visitor.handle("test", message.test());
    visitor.handle("validity", static_cast<int>(message.validity()), *commonmodule::ValidityKind_descriptor());
}

void visit(const commonmodule::RampRate& message, IMessageVisitor& visitor)
{
    if(message.has_negativereactivepowerkvarpermin())
    {
        visitor.start_message_field("negativeReactivePowerKVArPerMin");
        visit(message.negativereactivepowerkvarpermin(), visitor);
        visitor.end_message_field();
    }
    if(message.has_negativerealpowerkwpermin())
    {
        visitor.start_message_field("negativeRealPowerKWPerMin");
        visit(message.negativerealpowerkwpermin(), visitor);
        visitor.end_message_field();
    }
    if(message.has_positivereactivepowerkvarpermin())
    {
        visitor.start_message_field("positiveReactivePowerKVArPerMin");
        visit(message.positivereactivepowerkvarpermin(), visitor);
        visitor.end_message_field();
    }
    if(message.has_positiverealpowerkwpermin())
    {
        visitor.start_message_field("positiveRealPowerKWPerMin");
        visit(message.positiverealpowerkwpermin(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ReadingMMTN& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dmdvah())
    {
        visitor.start_message_field("DmdVAh");
        visit(message.dmdvah(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dmdvarh())
    {
        visitor.start_message_field("DmdVArh");
        visit(message.dmdvarh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dmdwh())
    {
        visitor.start_message_field("DmdWh");
        visit(message.dmdwh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_supvah())
    {
        visitor.start_message_field("SupVAh");
        visit(message.supvah(), visitor);
        visitor.end_message_field();
    }
    if(message.has_supvarh())
    {
        visitor.start_message_field("SupVArh");
        visit(message.supvarh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_supwh())
    {
        visitor.start_message_field("SupWh");
        visit(message.supwh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_totvah())
    {
        visitor.start_message_field("TotVAh");
        visit(message.totvah(), visitor);
        visitor.end_message_field();
    }
    if(message.has_totvarh())
    {
        visitor.start_message_field("TotVArh");
        visit(message.totvarh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_totwh())
    {
        visitor.start_message_field("TotWh");
        visit(message.totwh(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ReadingMMTR& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dmdvah())
    {
        visitor.start_message_field("DmdVAh");
        visit(message.dmdvah(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dmdvarh())
    {
        visitor.start_message_field("DmdVArh");
        visit(message.dmdvarh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dmdwh())
    {
        visitor.start_message_field("DmdWh");
        visit(message.dmdwh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_supvah())
    {
        visitor.start_message_field("SupVAh");
        visit(message.supvah(), visitor);
        visitor.end_message_field();
    }
    if(message.has_supvarh())
    {
        visitor.start_message_field("SupVArh");
        visit(message.supvarh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_supwh())
    {
        visitor.start_message_field("SupWh");
        visit(message.supwh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_totvah())
    {
        visitor.start_message_field("TotVAh");
        visit(message.totvah(), visitor);
        visitor.end_message_field();
    }
    if(message.has_totvarh())
    {
        visitor.start_message_field("TotVArh");
        visit(message.totvarh(), visitor);
        visitor.end_message_field();
    }
    if(message.has_totwh())
    {
        visitor.start_message_field("TotWh");
        visit(message.totwh(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ReadingMMXU& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_a())
    {
        visitor.start_message_field("A");
        visit(message.a(), visitor);
        visitor.end_message_field();
    }
    if(message.has_clcmth())
    {
        visitor.start_message_field("ClcMth");
        visit(message.clcmth(), visitor);
        visitor.end_message_field();
    }
    if(message.has_hz())
    {
        visitor.start_message_field("Hz");
        visit(message.hz(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pf())
    {
        visitor.start_message_field("PF");
        visit(message.pf(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pfsign())
    {
        visitor.start_message_field("PFSign");
        visit(message.pfsign(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phv())
    {
        visitor.start_message_field("PhV");
        visit(message.phv(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ppv())
    {
        visitor.start_message_field("PPV");
        visit(message.ppv(), visitor);
        visitor.end_message_field();
    }
    if(message.has_va())
    {
        visitor.start_message_field("VA");
        visit(message.va(), visitor);
        visitor.end_message_field();
    }
    if(message.has_var())
    {
        visitor.start_message_field("VAr");
        visit(message.var(), visitor);
        visitor.end_message_field();
    }
    if(message.has_w())
    {
        visitor.start_message_field("W");
        visit(message.w(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ReadingMessageInfo& message, IMessageVisitor& visitor)
{
    if(message.has_messageinfo())
    {
        visitor.start_message_field("messageInfo");
        visit(message.messageinfo(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::ScheduleCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("schpts");
    for(decltype(message.schpts_size()) i = 0; i < message.schpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.schpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const commonmodule::SchedulePoint& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("scheduleparameter");
    for(decltype(message.scheduleparameter_size()) i = 0; i < message.scheduleparameter_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.scheduleparameter(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusAndEventXCBR& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectionpickup())
    {
        visitor.start_message_field("ProtectionPickup");
        visit(message.protectionpickup(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectionmode())
    {
        visitor.start_message_field("ProtectionMode");
        visit(message.protectionmode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloseenabled())
    {
        visitor.start_message_field("RecloseEnabled");
        visit(message.recloseenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reclosingaction())
    {
        visitor.start_message_field("ReclosingAction");
        visit(message.reclosingaction(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusDPS& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", static_cast<int>(message.stval()), *commonmodule::DbPosKind_descriptor());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusINC& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", message.stval());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusINS& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", message.stval());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusMessageInfo& message, IMessageVisitor& visitor)
{
    if(message.has_messageinfo())
    {
        visitor.start_message_field("messageInfo");
        visit(message.messageinfo(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusSPC& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", message.stval());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusSPS& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", message.stval());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StatusValue& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    if(message.has_modblk())
    {
        visitor.start_message_field("modBlk");
        visit(message.modblk(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::StringEventAndStatusGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
    if(message.has_strin())
    {
        visitor.start_message_field("StrIn");
        visit(message.strin(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::Terminal& message, IMessageVisitor& visitor)
{
    if(message.has_acdcterminal())
    {
        visitor.start_message_field("aCDCTerminal");
        visit(message.acdcterminal(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phases())
    {
        visitor.start_message_field("phases");
        visit(message.phases(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::TimeQuality& message, IMessageVisitor& visitor)
{
    visitor.handle("clockFailure", message.clockfailure());
    visitor.handle("clockNotSynchronized", message.clocknotsynchronized());
    visitor.handle("leapSecondsKnown", message.leapsecondsknown());
    visitor.handle("timeAccuracy", static_cast<int>(message.timeaccuracy()), *commonmodule::TimeAccuracyKind_descriptor());
}

void visit(const commonmodule::Timestamp& message, IMessageVisitor& visitor)
{
    visitor.handle("seconds", message.seconds());
    if(message.has_tq())
    {
        visitor.start_message_field("tq");
        visit(message.tq(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("nanoseconds", message.nanoseconds());
}

void visit(const commonmodule::Unit& message, IMessageVisitor& visitor)
{
    if(message.has_multiplier())
    {
        visitor.start_message_field("multiplier");
        visit(message.multiplier(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("SIUnit", static_cast<int>(message.siunit()), *commonmodule::UnitSymbolKind_descriptor());
}

void visit(const commonmodule::VSC& message, IMessageVisitor& visitor)
{
    visitor.handle("ctlVal", message.ctlval());
}

void visit(const commonmodule::VSS& message, IMessageVisitor& visitor)
{
    if(message.has_q())
    {
        visitor.start_message_field("q");
        visit(message.q(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("stVal", message.stval());
    if(message.has_t())
    {
        visitor.start_message_field("t");
        visit(message.t(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::Vector& message, IMessageVisitor& visitor)
{
    if(message.has_ang())
    {
        visitor.start_message_field("ang");
        visit(message.ang(), visitor);
        visitor.end_message_field();
    }
    if(message.has_mag())
    {
        visitor.start_message_field("mag");
        visit(message.mag(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::WYE& message, IMessageVisitor& visitor)
{
    if(message.has_net())
    {
        visitor.start_message_field("net");
        visit(message.net(), visitor);
        visitor.end_message_field();
    }
    if(message.has_neut())
    {
        visitor.start_message_field("neut");
        visit(message.neut(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsa())
    {
        visitor.start_message_field("phsA");
        visit(message.phsa(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsb())
    {
        visitor.start_message_field("phsB");
        visit(message.phsb(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phsc())
    {
        visitor.start_message_field("phsC");
        visit(message.phsc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::CapacityFirming& message, IMessageVisitor& visitor)
{
    if(message.has_capacityfirmingctl())
    {
        visitor.start_message_field("capacityFirmingCtl");
        visit(message.capacityfirmingctl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_limitnegative_dp_dt())
    {
        visitor.start_message_field("limitNegative_dp_dt");
        visit(message.limitnegative_dp_dt(), visitor);
        visitor.end_message_field();
    }
    if(message.has_limitpositive_dp_dt())
    {
        visitor.start_message_field("limitPositive_dp_dt");
        visit(message.limitpositive_dp_dt(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const essmodule::ESSControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_esscontrolfscc())
    {
        visitor.start_message_field("essControlFSCC");
        visit(message.esscontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valdcsg())
    {
        visitor.start_message_field("ValDCSG");
        visit(message.valdcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_esseventzbat())
    {
        visitor.start_message_field("essEventZBAT");
        visit(message.esseventzbat(), visitor);
        visitor.end_message_field();
    }
    if(message.has_esseventzgen())
    {
        visitor.start_message_field("essEventZGEN");
        visit(message.esseventzgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSEventAndStatusZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_auxpwrst())
    {
        visitor.start_message_field("AuxPwrSt");
        visit(message.auxpwrst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_emgstop())
    {
        visitor.start_message_field("EmgStop");
        visit(message.emgstop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_gnsynst())
    {
        visitor.start_message_field("GnSynSt");
        visit(message.gnsynst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pointstatus())
    {
        visitor.start_message_field("PointStatus");
        visit(message.pointstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSEventZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_esseventandstatuszgen())
    {
        visitor.start_message_field("eSSEventAndStatusZGEN");
        visit(message.esseventandstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSFunction& message, IMessageVisitor& visitor)
{
    if(message.has_capacityfirming())
    {
        visitor.start_message_field("capacityFirming");
        visit(message.capacityfirming(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencyregulation())
    {
        visitor.start_message_field("frequencyRegulation");
        visit(message.frequencyregulation(), visitor);
        visitor.end_message_field();
    }
    if(message.has_peakshaving())
    {
        visitor.start_message_field("peakShaving");
        visit(message.peakshaving(), visitor);
        visitor.end_message_field();
    }
    if(message.has_soclimit())
    {
        visitor.start_message_field("socLimit");
        visit(message.soclimit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socmanagement())
    {
        visitor.start_message_field("socManagement");
        visit(message.socmanagement(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagedroop())
    {
        visitor.start_message_field("voltageDroop");
        visit(message.voltagedroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagepi())
    {
        visitor.start_message_field("voltagePI");
        visit(message.voltagepi(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSPoint& message, IMessageVisitor& visitor)
{
    if(message.has_blackstartenabled())
    {
        visitor.start_message_field("blackStartEnabled");
        visit(message.blackstartenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencysetpointenabled())
    {
        visitor.start_message_field("frequencySetPointEnabled");
        visit(message.frequencysetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_function())
    {
        visitor.start_message_field("function");
        visit(message.function(), visitor);
        visitor.end_message_field();
    }
    if(message.has_mode())
    {
        visitor.start_message_field("mode");
        visit(message.mode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pcthzdroop())
    {
        visitor.start_message_field("pctHzDroop");
        visit(message.pcthzdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pctvdroop())
    {
        visitor.start_message_field("pctVDroop");
        visit(message.pctvdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reset())
    {
        visitor.start_message_field("reset");
        visit(message.reset(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_syncbacktogrid())
    {
        visitor.start_message_field("syncBackToGrid");
        visit(message.syncbacktogrid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_transtoislndongridlossenabled())
    {
        visitor.start_message_field("transToIslndOnGridLossEnabled");
        visit(message.transtoislndongridlossenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSPointStatus& message, IMessageVisitor& visitor)
{
    if(message.has_blackstartenabled())
    {
        visitor.start_message_field("blackStartEnabled");
        visit(message.blackstartenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencysetpointenabled())
    {
        visitor.start_message_field("frequencySetPointEnabled");
        visit(message.frequencysetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_function())
    {
        visitor.start_message_field("function");
        visit(message.function(), visitor);
        visitor.end_message_field();
    }
    if(message.has_mode())
    {
        visitor.start_message_field("mode");
        visit(message.mode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pcthzdroop())
    {
        visitor.start_message_field("pctHzDroop");
        visit(message.pcthzdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pctvdroop())
    {
        visitor.start_message_field("pctVDroop");
        visit(message.pctvdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_syncbacktogrid())
    {
        visitor.start_message_field("syncBackToGrid");
        visit(message.syncbacktogrid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_transtoislndongridlossenabled())
    {
        visitor.start_message_field("transToIslndOnGridLossEnabled");
        visit(message.transtoislndongridlossenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_essstatuszbat())
    {
        visitor.start_message_field("essStatusZBAT");
        visit(message.essstatuszbat(), visitor);
        visitor.end_message_field();
    }
    if(message.has_essstatuszgen())
    {
        visitor.start_message_field("essStatusZGEN");
        visit(message.essstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSStatusZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_esseventandstatuszgen())
    {
        visitor.start_message_field("eSSEventAndStatusZGEN");
        visit(message.esseventandstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::EssControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_controlfscc())
    {
        visitor.start_message_field("controlFSCC");
        visit(message.controlfscc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_esscontrolschedulefsch())
    {
        visitor.start_message_field("essControlScheduleFSCH");
        visit(message.esscontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::EssEventZBAT& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_bathi())
    {
        visitor.start_message_field("BatHi");
        visit(message.bathi(), visitor);
        visitor.end_message_field();
    }
    if(message.has_batlo())
    {
        visitor.start_message_field("BatLo");
        visit(message.batlo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_batst())
    {
        visitor.start_message_field("BatSt");
        visit(message.batst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_soc())
    {
        visitor.start_message_field("Soc");
        visit(message.soc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_stdby())
    {
        visitor.start_message_field("Stdby");
        visit(message.stdby(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::EssStatusZBAT& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_batst())
    {
        visitor.start_message_field("BatSt");
        visit(message.batst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_grimod())
    {
        visitor.start_message_field("GriMod");
        visit(message.grimod(), visitor);
        visitor.end_message_field();
    }
    if(message.has_soc())
    {
        visitor.start_message_field("Soc");
        visit(message.soc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_stdby())
    {
        visitor.start_message_field("Stdby");
        visit(message.stdby(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::FrequencyRegulation& message, IMessageVisitor& visitor)
{
    if(message.has_frequencydeadbandminus())
    {
        visitor.start_message_field("frequencyDeadBandMinus");
        visit(message.frequencydeadbandminus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencydeadbandplus())
    {
        visitor.start_message_field("frequencyDeadBandPlus");
        visit(message.frequencydeadbandplus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencyregulationctl())
    {
        visitor.start_message_field("frequencyRegulationCtl");
        visit(message.frequencyregulationctl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencysetpoint())
    {
        visitor.start_message_field("frequencySetPoint");
        visit(message.frequencysetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_gridfrequencystablebandminus())
    {
        visitor.start_message_field("gridFrequencyStableBandMinus");
        visit(message.gridfrequencystablebandminus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_gridfrequencystablebandplus())
    {
        visitor.start_message_field("gridFrequencyStableBandPlus");
        visit(message.gridfrequencystablebandplus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_overfrequencydroop())
    {
        visitor.start_message_field("overFrequencyDroop");
        visit(message.overfrequencydroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_underfrequencydroop())
    {
        visitor.start_message_field("underFrequencyDroop");
        visit(message.underfrequencydroop(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::PeakShaving& message, IMessageVisitor& visitor)
{
    if(message.has_baseshavinglimit())
    {
        visitor.start_message_field("baseShavingLimit");
        visit(message.baseshavinglimit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_peakshavingctl())
    {
        visitor.start_message_field("peakShavingCtl");
        visit(message.peakshavingctl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_peakshavinglimit())
    {
        visitor.start_message_field("peakShavingLimit");
        visit(message.peakshavinglimit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socmanagementallowedhighlimit())
    {
        visitor.start_message_field("socManagementAllowedHighLimit");
        visit(message.socmanagementallowedhighlimit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socmanagementallowedlowlimit())
    {
        visitor.start_message_field("socManagementAllowedLowLimit");
        visit(message.socmanagementallowedlowlimit(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::SOCManagement& message, IMessageVisitor& visitor)
{
    if(message.has_socdeadbandminus())
    {
        visitor.start_message_field("socDeadBandMinus");
        visit(message.socdeadbandminus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socdeadbandplus())
    {
        visitor.start_message_field("socDeadBandPlus");
        visit(message.socdeadbandplus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socmanagementctl())
    {
        visitor.start_message_field("socManagementCtl");
        visit(message.socmanagementctl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socpowersetpoint())
    {
        visitor.start_message_field("socPowerSetPoint");
        visit(message.socpowersetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_socsetpoint())
    {
        visitor.start_message_field("socSetPoint");
        visit(message.socsetpoint(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::SocLimit& message, IMessageVisitor& visitor)
{
    if(message.has_sochighlimit())
    {
        visitor.start_message_field("socHighLimit");
        visit(message.sochighlimit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_sochighlimithysteresis())
    {
        visitor.start_message_field("socHighLimitHysteresis");
        visit(message.sochighlimithysteresis(), visitor);
        visitor.end_message_field();
    }
    if(message.has_soclimitctl())
    {
        visitor.start_message_field("socLimitCtl");
        visit(message.soclimitctl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_soclowlimit())
    {
        visitor.start_message_field("socLowLimit");
        visit(message.soclowlimit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_soclowlimithysteresis())
    {
        visitor.start_message_field("socLowLimitHysteresis");
        visit(message.soclowlimithysteresis(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::VoltageDroop& message, IMessageVisitor& visitor)
{
    if(message.has_voltagedroopctl())
    {
        visitor.start_message_field("voltageDroopCtl");
        visit(message.voltagedroopctl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltageregulation())
    {
        visitor.start_message_field("voltageRegulation");
        visit(message.voltageregulation(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::VoltagePI& message, IMessageVisitor& visitor)
{
    if(message.has_voltagepictl())
    {
        visitor.start_message_field("voltagePICtl");
        visit(message.voltagepictl(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltageregulation())
    {
        visitor.start_message_field("voltageRegulation");
        visit(message.voltageregulation(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::VoltageRegulation& message, IMessageVisitor& visitor)
{
    if(message.has_overvoltagedroop())
    {
        visitor.start_message_field("overVoltageDroop");
        visit(message.overvoltagedroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_undervoltagedroop())
    {
        visitor.start_message_field("underVoltageDroop");
        visit(message.undervoltagedroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagedeadbandminus())
    {
        visitor.start_message_field("voltageDeadBandMinus");
        visit(message.voltagedeadbandminus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagedeadbandplus())
    {
        visitor.start_message_field("voltageDeadBandPlus");
        visit(message.voltagedeadbandplus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpoint())
    {
        visitor.start_message_field("voltageSetPoint");
        visit(message.voltagesetpoint(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::DroopParameter& message, IMessageVisitor& visitor)
{
    if(message.has_slope())
    {
        visitor.start_message_field("slope");
        visit(message.slope(), visitor);
        visitor.end_message_field();
    }
    if(message.has_unloadedoffset())
    {
        visitor.start_message_field("unloadedOffset");
        visit(message.unloadedoffset(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GeneratingUnit& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_maxoperatingp())
    {
        visitor.start_message_field("maxOperatingP");
        visit(message.maxoperatingp(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const generationmodule::GenerationControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationcontrolfscc())
    {
        visitor.start_message_field("generationControlFSCC");
        visit(message.generationcontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_controlfscc())
    {
        visitor.start_message_field("controlFSCC");
        visit(message.controlfscc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationcontrolschedulefsch())
    {
        visitor.start_message_field("GenerationControlScheduleFSCH");
        visit(message.generationcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valdcsg())
    {
        visitor.start_message_field("ValDCSG");
        visit(message.valdcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepowercontrol())
    {
        visitor.start_message_field("ReactivePowerControl");
        visit(message.reactivepowercontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpowercontrol())
    {
        visitor.start_message_field("RealPowerControl");
        visit(message.realpowercontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationeventzgen())
    {
        visitor.start_message_field("generationEventZGEN");
        visit(message.generationeventzgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationEventAndStatusZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_auxpwrst())
    {
        visitor.start_message_field("AuxPwrSt");
        visit(message.auxpwrst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_emgstop())
    {
        visitor.start_message_field("EmgStop");
        visit(message.emgstop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_gnsynst())
    {
        visitor.start_message_field("GnSynSt");
        visit(message.gnsynst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pointstatus())
    {
        visitor.start_message_field("PointStatus");
        visit(message.pointstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationEventZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_generationeventandstatuszgen())
    {
        visitor.start_message_field("generationEventAndStatusZGEN");
        visit(message.generationeventandstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationPoint& message, IMessageVisitor& visitor)
{
    if(message.has_blackstartenabled())
    {
        visitor.start_message_field("blackStartEnabled");
        visit(message.blackstartenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencysetpointenabled())
    {
        visitor.start_message_field("frequencySetPointEnabled");
        visit(message.frequencysetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pcthzdroop())
    {
        visitor.start_message_field("pctHzDroop");
        visit(message.pcthzdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pctvdroop())
    {
        visitor.start_message_field("pctVDroop");
        visit(message.pctvdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reset())
    {
        visitor.start_message_field("reset");
        visit(message.reset(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_syncbacktogrid())
    {
        visitor.start_message_field("syncBackToGrid");
        visit(message.syncbacktogrid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_transtoislndongridlossenabled())
    {
        visitor.start_message_field("transToIslndOnGridLossEnabled");
        visit(message.transtoislndongridlossenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationPointStatus& message, IMessageVisitor& visitor)
{
    if(message.has_blackstartenabled())
    {
        visitor.start_message_field("blackStartEnabled");
        visit(message.blackstartenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_frequencysetpointenabled())
    {
        visitor.start_message_field("frequencySetPointEnabled");
        visit(message.frequencysetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pcthzdroop())
    {
        visitor.start_message_field("pctHzDroop");
        visit(message.pcthzdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pctvdroop())
    {
        visitor.start_message_field("pctVDroop");
        visit(message.pctvdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_syncbacktogrid())
    {
        visitor.start_message_field("syncBackToGrid");
        visit(message.syncbacktogrid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_transtoislndongridlossenabled())
    {
        visitor.start_message_field("transToIslndOnGridLossEnabled");
        visit(message.transtoislndongridlossenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationstatuszgen())
    {
        visitor.start_message_field("generationStatusZGEN");
        visit(message.generationstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationStatusZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_generationeventandstatuszgen())
    {
        visitor.start_message_field("generationEventAndStatusZGEN");
        visit(message.generationeventandstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::Optional_ReactivePowerControlKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *generationmodule::ReactivePowerControlKind_descriptor());
}

void visit(const generationmodule::Optional_RealPowerControlKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *generationmodule::RealPowerControlKind_descriptor());
}

void visit(const generationmodule::ReactivePowerControl& message, IMessageVisitor& visitor)
{
    if(message.has_droopsetpoint())
    {
        visitor.start_message_field("droopSetpoint");
        visit(message.droopsetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_powerfactorsetpoint())
    {
        visitor.start_message_field("powerFactorSetpoint");
        visit(message.powerfactorsetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepowercontrolmode())
    {
        visitor.start_message_field("reactivePowerControlMode");
        visit(message.reactivepowercontrolmode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepowersetpoint())
    {
        visitor.start_message_field("reactivePowerSetpoint");
        visit(message.reactivepowersetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpoint())
    {
        visitor.start_message_field("voltageSetpoint");
        visit(message.voltagesetpoint(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::RealPowerControl& message, IMessageVisitor& visitor)
{
    if(message.has_droopsetpoint())
    {
        visitor.start_message_field("droopSetpoint");
        visit(message.droopsetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_isochronoussetpoint())
    {
        visitor.start_message_field("isochronousSetpoint");
        visit(message.isochronoussetpoint(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpowercontrolmode())
    {
        visitor.start_message_field("realPowerControlMode");
        visit(message.realpowercontrolmode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpowersetpoint())
    {
        visitor.start_message_field("realPowerSetpoint");
        visit(message.realpowersetpoint(), visitor);
        visitor.end_message_field();
    }
}

void visit(const google::protobuf::BoolValue& message, IMessageVisitor& visitor)
{
    visitor.handle("value", message.value());
}

void visit(const google::protobuf::FloatValue& message, IMessageVisitor& visitor)
{
    visitor.handle("value", message.value());
}

void visit(const google::protobuf::Int32Value& message, IMessageVisitor& visitor)
{
    visitor.handle("value", message.value());
}

void visit(const google::protobuf::StringValue& message, IMessageVisitor& visitor)
{
    visitor.handle("value", message.value());
}

void visit(const loadmodule::LoadCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const loadmodule::LoadControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadcontrolfscc())
    {
        visitor.start_message_field("loadControlFSCC");
        visit(message.loadcontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_controlfscc())
    {
        visitor.start_message_field("controlFSCC");
        visit(message.controlfscc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadcontrolschedulefsch())
    {
        visitor.start_message_field("loadControlScheduleFSCH");
        visit(message.loadcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valdcsg())
    {
        visitor.start_message_field("ValDCSG");
        visit(message.valdcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadeventzgld())
    {
        visitor.start_message_field("loadEventZGLD");
        visit(message.loadeventzgld(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadEventAndStatusZGLD& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_emgstop())
    {
        visitor.start_message_field("EmgStop");
        visit(message.emgstop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pointstatus())
    {
        visitor.start_message_field("PointStatus");
        visit(message.pointstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadEventZGLD& message, IMessageVisitor& visitor)
{
    if(message.has_loadeventandstatuszgld())
    {
        visitor.start_message_field("loadEventAndStatusZGLD");
        visit(message.loadeventandstatuszgld(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadPoint& message, IMessageVisitor& visitor)
{
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reset())
    {
        visitor.start_message_field("reset");
        visit(message.reset(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadPointStatus& message, IMessageVisitor& visitor)
{
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reset())
    {
        visitor.start_message_field("reset");
        visit(message.reset(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadstatuszgld())
    {
        visitor.start_message_field("loadStatusZGLD");
        visit(message.loadstatuszgld(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadStatusZGLD& message, IMessageVisitor& visitor)
{
    if(message.has_loadeventandstatuszgld())
    {
        visitor.start_message_field("loadEventAndStatusZGLD");
        visit(message.loadeventandstatuszgld(), visitor);
        visitor.end_message_field();
    }
}

void visit(const metermodule::MeterReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::Recloser& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_normalopen())
    {
        visitor.start_message_field("normalOpen");
        visit(message.normalopen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloserdiscretecontrolxcbr())
    {
        visitor.start_message_field("recloserDiscreteControlXCBR");
        visit(message.recloserdiscretecontrolxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserDiscreteControlXCBR& message, IMessageVisitor& visitor)
{
    if(message.has_discretecontrolxcbr())
    {
        visitor.start_message_field("discreteControlXCBR");
        visit(message.discretecontrolxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_statusandeventxcbr())
    {
        visitor.start_message_field("statusAndEventXCBR");
        visit(message.statusandeventxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_diffreadingmmxu())
    {
        visitor.start_message_field("diffReadingMMXU");
        visit(message.diffreadingmmxu(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_statusandeventxcbr())
    {
        visitor.start_message_field("statusAndEventXCBR");
        visit(message.statusandeventxcbr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const regulatormodule::RegulatorControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorcontrolfscc())
    {
        visitor.start_message_field("regulatorControlFSCC");
        visit(message.regulatorcontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorControlATCC& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforcontrol())
    {
        visitor.start_message_field("logicalNodeForControl");
        visit(message.logicalnodeforcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_bndctr())
    {
        visitor.start_message_field("BndCtr");
        visit(message.bndctr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_bndwid())
    {
        visitor.start_message_field("BndWid");
        visit(message.bndwid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ctldltmms())
    {
        visitor.start_message_field("CtlDlTmms");
        visit(message.ctldltmms(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ldcr())
    {
        visitor.start_message_field("LDCR");
        visit(message.ldcr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ldcx())
    {
        visitor.start_message_field("LDCX");
        visit(message.ldcx(), visitor);
        visitor.end_message_field();
    }
    if(message.has_parop())
    {
        visitor.start_message_field("ParOp");
        visit(message.parop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_tappos())
    {
        visitor.start_message_field("TapPos");
        visit(message.tappos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_volspt())
    {
        visitor.start_message_field("VolSpt");
        visit(message.volspt(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_controlfscc())
    {
        visitor.start_message_field("controlFSCC");
        visit(message.controlfscc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorcontrolschedulefsch())
    {
        visitor.start_message_field("regulatorControlScheduleFSCH");
        visit(message.regulatorcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valdcsg())
    {
        visitor.start_message_field("ValDCSG");
        visit(message.valdcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorcontrolatcc())
    {
        visitor.start_message_field("regulatorControlATCC");
        visit(message.regulatorcontrolatcc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatoreventandstatusancr())
    {
        visitor.start_message_field("regulatorEventAndStatusANCR");
        visit(message.regulatoreventandstatusancr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorEventAndStatusANCR& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pointstatus())
    {
        visitor.start_message_field("PointStatus");
        visit(message.pointstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorEventAndStatusATCC& message, IMessageVisitor& visitor)
{
    if(message.has_bndctr())
    {
        visitor.start_message_field("BndCtr");
        visit(message.bndctr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_bndwid())
    {
        visitor.start_message_field("BndWid");
        visit(message.bndwid(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ldcr())
    {
        visitor.start_message_field("LDCR");
        visit(message.ldcr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ldcx())
    {
        visitor.start_message_field("LDCX");
        visit(message.ldcx(), visitor);
        visitor.end_message_field();
    }
    if(message.has_parop())
    {
        visitor.start_message_field("ParOp");
        visit(message.parop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_stdltmms())
    {
        visitor.start_message_field("StDlTmms");
        visit(message.stdltmms(), visitor);
        visitor.end_message_field();
    }
    if(message.has_tapoperr())
    {
        visitor.start_message_field("TapOpErr");
        visit(message.tapoperr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_tappos())
    {
        visitor.start_message_field("TapPos");
        visit(message.tappos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_volspt())
    {
        visitor.start_message_field("VolSpt");
        visit(message.volspt(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorPoint& message, IMessageVisitor& visitor)
{
    if(message.has_control())
    {
        visitor.start_message_field("control");
        visit(message.control(), visitor);
        visitor.end_message_field();
    }
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatoreventandstatusancr())
    {
        visitor.start_message_field("regulatorEventAndStatusANCR");
        visit(message.regulatoreventandstatusancr(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorSystem& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::AnalogControlGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_anout())
    {
        visitor.start_message_field("AnOut");
        visit(message.anout(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::BooleanControlGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
    if(message.has_spcso())
    {
        visitor.start_message_field("SPCSO");
        visit(message.spcso(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::IntegerControlGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_iscso())
    {
        visitor.start_message_field("ISCSO");
        visit(message.iscso(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::ResourceDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("analogcontrolggio");
    for(decltype(message.analogcontrolggio_size()) i = 0; i < message.analogcontrolggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.analogcontrolggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("booleancontrolggio");
    for(decltype(message.booleancontrolggio_size()) i = 0; i < message.booleancontrolggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.booleancontrolggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("integercontrolggio");
    for(decltype(message.integercontrolggio_size()) i = 0; i < message.integercontrolggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.integercontrolggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("stringcontrolggio");
    for(decltype(message.stringcontrolggio_size()) i = 0; i < message.stringcontrolggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.stringcontrolggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const resourcemodule::ResourceEvent& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("analogeventandstatusggio");
    for(decltype(message.analogeventandstatusggio_size()) i = 0; i < message.analogeventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.analogeventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("booleaneventandstatusggio");
    for(decltype(message.booleaneventandstatusggio_size()) i = 0; i < message.booleaneventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.booleaneventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("integereventandstatusggio");
    for(decltype(message.integereventandstatusggio_size()) i = 0; i < message.integereventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.integereventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("stringeventandstatusggio");
    for(decltype(message.stringeventandstatusggio_size()) i = 0; i < message.stringeventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.stringeventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const resourcemodule::ResourceReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::ResourceStatus& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("analogeventandstatusggio");
    for(decltype(message.analogeventandstatusggio_size()) i = 0; i < message.analogeventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.analogeventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("booleaneventandstatusggio");
    for(decltype(message.booleaneventandstatusggio_size()) i = 0; i < message.booleaneventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.booleaneventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("integereventandstatusggio");
    for(decltype(message.integereventandstatusggio_size()) i = 0; i < message.integereventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.integereventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    visitor.start_message_field("stringeventandstatusggio");
    for(decltype(message.stringeventandstatusggio_size()) i = 0; i < message.stringeventandstatusggio_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.stringeventandstatusggio(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const resourcemodule::StringControlGGIO& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnode())
    {
        visitor.start_message_field("logicalNode");
        visit(message.logicalnode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phase())
    {
        visitor.start_message_field("Phase");
        visit(message.phase(), visitor);
        visitor.end_message_field();
    }
    if(message.has_strout())
    {
        visitor.start_message_field("StrOut");
        visit(message.strout(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarCSG& message, IMessageVisitor& visitor)
{
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const solarmodule::SolarControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarcontrolfscc())
    {
        visitor.start_message_field("solarControlFSCC");
        visit(message.solarcontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_controlfscc())
    {
        visitor.start_message_field("controlFSCC");
        visit(message.controlfscc(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarcontrolschedulefsch())
    {
        visitor.start_message_field("SolarControlScheduleFSCH");
        visit(message.solarcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valdcsg())
    {
        visitor.start_message_field("ValDCSG");
        visit(message.valdcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solareventzgen())
    {
        visitor.start_message_field("solarEventZGEN");
        visit(message.solareventzgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarEventAndStatusZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_auxpwrst())
    {
        visitor.start_message_field("AuxPwrSt");
        visit(message.auxpwrst(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_emgstop())
    {
        visitor.start_message_field("EmgStop");
        visit(message.emgstop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pointstatus())
    {
        visitor.start_message_field("PointStatus");
        visit(message.pointstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarEventZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_solareventandstatuszgen())
    {
        visitor.start_message_field("solarEventAndStatusZGEN");
        visit(message.solareventandstatuszgen(), visitor);
        visitor.end_message_field();
    }
    if(message.has_grimod())
    {
        visitor.start_message_field("GriMod");
        visit(message.grimod(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarInverter& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarPoint& message, IMessageVisitor& visitor)
{
    if(message.has_frequencysetpointenabled())
    {
        visitor.start_message_field("frequencySetPointEnabled");
        visit(message.frequencysetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_mode())
    {
        visitor.start_message_field("mode");
        visit(message.mode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pcthzdroop())
    {
        visitor.start_message_field("pctHzDroop");
        visit(message.pcthzdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pctvdroop())
    {
        visitor.start_message_field("pctVDroop");
        visit(message.pctvdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reset())
    {
        visitor.start_message_field("reset");
        visit(message.reset(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_starttime())
    {
        visitor.start_message_field("startTime");
        visit(message.starttime(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarPointStatus& message, IMessageVisitor& visitor)
{
    if(message.has_frequencysetpointenabled())
    {
        visitor.start_message_field("frequencySetPointEnabled");
        visit(message.frequencysetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_mode())
    {
        visitor.start_message_field("mode");
        visit(message.mode(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pcthzdroop())
    {
        visitor.start_message_field("pctHzDroop");
        visit(message.pcthzdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pctvdroop())
    {
        visitor.start_message_field("pctVDroop");
        visit(message.pctvdroop(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ramprates())
    {
        visitor.start_message_field("rampRates");
        visit(message.ramprates(), visitor);
        visitor.end_message_field();
    }
    if(message.has_reactivepwrsetpointenabled())
    {
        visitor.start_message_field("reactivePwrSetPointEnabled");
        visit(message.reactivepwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_realpwrsetpointenabled())
    {
        visitor.start_message_field("realPwrSetPointEnabled");
        visit(message.realpwrsetpointenabled(), visitor);
        visitor.end_message_field();
    }
    if(message.has_state())
    {
        visitor.start_message_field("state");
        visit(message.state(), visitor);
        visitor.end_message_field();
    }
    if(message.has_voltagesetpointenabled())
    {
        visitor.start_message_field("voltageSetPointEnabled");
        visit(message.voltagesetpointenabled(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarstatuszgen())
    {
        visitor.start_message_field("solarStatusZGEN");
        visit(message.solarstatuszgen(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarStatusZGEN& message, IMessageVisitor& visitor)
{
    if(message.has_solareventandstatuszgen())
    {
        visitor.start_message_field("solarEventAndStatusZGEN");
        visit(message.solareventandstatuszgen(), visitor);
        visitor.end_message_field();
    }
    if(message.has_grimod())
    {
        visitor.start_message_field("GriMod");
        visit(message.grimod(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::ProtectedSwitch& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchDiscreteControl& message, IMessageVisitor& visitor)
{
    if(message.has_controlvalue())
    {
        visitor.start_message_field("controlValue");
        visit(message.controlvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_check())
    {
        visitor.start_message_field("check");
        visit(message.check(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchdiscretecontrolxswi())
    {
        visitor.start_message_field("switchDiscreteControlXSWI");
        visit(message.switchdiscretecontrolxswi(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchDiscreteControlXSWI& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforcontrol())
    {
        visitor.start_message_field("logicalNodeForControl");
        visit(message.logicalnodeforcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resetprotectionpickup())
    {
        visitor.start_message_field("ResetProtectionPickup");
        visit(message.resetprotectionpickup(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchEvent& message, IMessageVisitor& visitor)
{
    if(message.has_eventvalue())
    {
        visitor.start_message_field("eventValue");
        visit(message.eventvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switcheventxswi())
    {
        visitor.start_message_field("switchEventXSWI");
        visit(message.switcheventxswi(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchEventXSWI& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchReading& message, IMessageVisitor& visitor)
{
    if(message.has_conductingequipmentterminalreading())
    {
        visitor.start_message_field("conductingEquipmentTerminalReading");
        visit(message.conductingequipmentterminalreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_diffreadingmmxu())
    {
        visitor.start_message_field("diffReadingMMXU");
        visit(message.diffreadingmmxu(), visitor);
        visitor.end_message_field();
    }
    if(message.has_phasemmtn())
    {
        visitor.start_message_field("phaseMMTN");
        visit(message.phasemmtn(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmtr())
    {
        visitor.start_message_field("readingMMTR");
        visit(message.readingmmtr(), visitor);
        visitor.end_message_field();
    }
    if(message.has_readingmmxu())
    {
        visitor.start_message_field("readingMMXU");
        visit(message.readingmmxu(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchStatus& message, IMessageVisitor& visitor)
{
    if(message.has_statusvalue())
    {
        visitor.start_message_field("statusValue");
        visit(message.statusvalue(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchstatusxswi())
    {
        visitor.start_message_field("switchStatusXSWI");
        visit(message.switchstatusxswi(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchStatusXSWI& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforeventandstatus())
    {
        visitor.start_message_field("logicalNodeForEventAndStatus");
        visit(message.logicalnodeforeventandstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_dynamictest())
    {
        visitor.start_message_field("DynamicTest");
        visit(message.dynamictest(), visitor);
        visitor.end_message_field();
    }
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectionpickup())
    {
        visitor.start_message_field("ProtectionPickup");
        visit(message.protectionpickup(), visitor);
        visitor.end_message_field();
    }
}
void visit(const breakermodule::BreakerDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breaker())
    {
        visitor.start_message_field("breaker");
        visit(message.breaker(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breakerdiscretecontrol())
    {
        visitor.start_message_field("breakerDiscreteControl");
        visit(message.breakerdiscretecontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breaker())
    {
        visitor.start_message_field("breaker");
        visit(message.breaker(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breakerevent())
    {
        visitor.start_message_field("breakerEvent");
        visit(message.breakerevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const breakermodule::BreakerReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breaker())
    {
        visitor.start_message_field("breaker");
        visit(message.breaker(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("breakerreading");
    for(decltype(message.breakerreading_size()) i = 0; i < message.breakerreading_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.breakerreading(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const breakermodule::BreakerStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breaker())
    {
        visitor.start_message_field("breaker");
        visit(message.breaker(), visitor);
        visitor.end_message_field();
    }
    if(message.has_breakerstatus())
    {
        visitor.start_message_field("breakerStatus");
        visit(message.breakerstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankcontrol())
    {
        visitor.start_message_field("capBankControl");
        visit(message.capbankcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbanksystem())
    {
        visitor.start_message_field("capBankSystem");
        visit(message.capbanksystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankcontrol())
    {
        visitor.start_message_field("capBankControl");
        visit(message.capbankcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbanksystem())
    {
        visitor.start_message_field("capBankSystem");
        visit(message.capbanksystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankevent())
    {
        visitor.start_message_field("capBankEvent");
        visit(message.capbankevent(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbanksystem())
    {
        visitor.start_message_field("capBankSystem");
        visit(message.capbanksystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankreading())
    {
        visitor.start_message_field("capBankReading");
        visit(message.capbankreading(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbanksystem())
    {
        visitor.start_message_field("capBankSystem");
        visit(message.capbanksystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const capbankmodule::CapBankStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbankstatus())
    {
        visitor.start_message_field("capBankStatus");
        visit(message.capbankstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_capbanksystem())
    {
        visitor.start_message_field("capBankSystem");
        visit(message.capbanksystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ess())
    {
        visitor.start_message_field("ess");
        visit(message.ess(), visitor);
        visitor.end_message_field();
    }
    if(message.has_esscontrol())
    {
        visitor.start_message_field("essControl");
        visit(message.esscontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ess())
    {
        visitor.start_message_field("ess");
        visit(message.ess(), visitor);
        visitor.end_message_field();
    }
    if(message.has_essevent())
    {
        visitor.start_message_field("essEvent");
        visit(message.essevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ess())
    {
        visitor.start_message_field("ess");
        visit(message.ess(), visitor);
        visitor.end_message_field();
    }
    if(message.has_essreading())
    {
        visitor.start_message_field("essReading");
        visit(message.essreading(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ess())
    {
        visitor.start_message_field("ess");
        visit(message.ess(), visitor);
        visitor.end_message_field();
    }
    if(message.has_essstatus())
    {
        visitor.start_message_field("essStatus");
        visit(message.essstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generatingunit())
    {
        visitor.start_message_field("generatingUnit");
        visit(message.generatingunit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationcontrol())
    {
        visitor.start_message_field("generationControl");
        visit(message.generationcontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generatingunit())
    {
        visitor.start_message_field("generatingUnit");
        visit(message.generatingunit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationdiscretecontrol())
    {
        visitor.start_message_field("generationDiscreteControl");
        visit(message.generationdiscretecontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generatingunit())
    {
        visitor.start_message_field("generatingUnit");
        visit(message.generatingunit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationevent())
    {
        visitor.start_message_field("generationEvent");
        visit(message.generationevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generatingunit())
    {
        visitor.start_message_field("generatingUnit");
        visit(message.generatingunit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationreading())
    {
        visitor.start_message_field("generationReading");
        visit(message.generationreading(), visitor);
        visitor.end_message_field();
    }
}

void visit(const generationmodule::GenerationStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generatingunit())
    {
        visitor.start_message_field("generatingUnit");
        visit(message.generatingunit(), visitor);
        visitor.end_message_field();
    }
    if(message.has_generationstatus())
    {
        visitor.start_message_field("generationStatus");
        visit(message.generationstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_energyconsumer())
    {
        visitor.start_message_field("energyConsumer");
        visit(message.energyconsumer(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadcontrol())
    {
        visitor.start_message_field("loadControl");
        visit(message.loadcontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_energyconsumer())
    {
        visitor.start_message_field("energyConsumer");
        visit(message.energyconsumer(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadevent())
    {
        visitor.start_message_field("loadEvent");
        visit(message.loadevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_energyconsumer())
    {
        visitor.start_message_field("energyConsumer");
        visit(message.energyconsumer(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadreading())
    {
        visitor.start_message_field("loadReading");
        visit(message.loadreading(), visitor);
        visitor.end_message_field();
    }
}

void visit(const loadmodule::LoadStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_energyconsumer())
    {
        visitor.start_message_field("energyConsumer");
        visit(message.energyconsumer(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadstatus())
    {
        visitor.start_message_field("loadStatus");
        visit(message.loadstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const metermodule::MeterReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_meter())
    {
        visitor.start_message_field("meter");
        visit(message.meter(), visitor);
        visitor.end_message_field();
    }
    if(message.has_meterreading())
    {
        visitor.start_message_field("meterReading");
        visit(message.meterreading(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloser())
    {
        visitor.start_message_field("recloser");
        visit(message.recloser(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloserdiscretecontrol())
    {
        visitor.start_message_field("recloserDiscreteControl");
        visit(message.recloserdiscretecontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloser())
    {
        visitor.start_message_field("recloser");
        visit(message.recloser(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloserevent())
    {
        visitor.start_message_field("recloserEvent");
        visit(message.recloserevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const reclosermodule::RecloserReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloser())
    {
        visitor.start_message_field("recloser");
        visit(message.recloser(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("recloserreading");
    for(decltype(message.recloserreading_size()) i = 0; i < message.recloserreading_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.recloserreading(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const reclosermodule::RecloserStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloser())
    {
        visitor.start_message_field("recloser");
        visit(message.recloser(), visitor);
        visitor.end_message_field();
    }
    if(message.has_recloserstatus())
    {
        visitor.start_message_field("recloserStatus");
        visit(message.recloserstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatordiscretecontrol())
    {
        visitor.start_message_field("regulatorDiscreteControl");
        visit(message.regulatordiscretecontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorsystem())
    {
        visitor.start_message_field("regulatorSystem");
        visit(message.regulatorsystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorcontrol())
    {
        visitor.start_message_field("regulatorControl");
        visit(message.regulatorcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorsystem())
    {
        visitor.start_message_field("regulatorSystem");
        visit(message.regulatorsystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorevent())
    {
        visitor.start_message_field("regulatorEvent");
        visit(message.regulatorevent(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorsystem())
    {
        visitor.start_message_field("regulatorSystem");
        visit(message.regulatorsystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("regulatorreading");
    for(decltype(message.regulatorreading_size()) i = 0; i < message.regulatorreading_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.regulatorreading(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    if(message.has_regulatorsystem())
    {
        visitor.start_message_field("regulatorSystem");
        visit(message.regulatorsystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const regulatormodule::RegulatorStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorstatus())
    {
        visitor.start_message_field("regulatorStatus");
        visit(message.regulatorstatus(), visitor);
        visitor.end_message_field();
    }
    if(message.has_regulatorsystem())
    {
        visitor.start_message_field("regulatorSystem");
        visit(message.regulatorsystem(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::ResourceDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resourcediscretecontrol())
    {
        visitor.start_message_field("resourceDiscreteControl");
        visit(message.resourcediscretecontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::ResourceEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resourceevent())
    {
        visitor.start_message_field("resourceEvent");
        visit(message.resourceevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::ResourceReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resourcereading())
    {
        visitor.start_message_field("resourceReading");
        visit(message.resourcereading(), visitor);
        visitor.end_message_field();
    }
}

void visit(const resourcemodule::ResourceStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_conductingequipment())
    {
        visitor.start_message_field("conductingEquipment");
        visit(message.conductingequipment(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resourcestatus())
    {
        visitor.start_message_field("resourceStatus");
        visit(message.resourcestatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarcontrol())
    {
        visitor.start_message_field("solarControl");
        visit(message.solarcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarinverter())
    {
        visitor.start_message_field("solarInverter");
        visit(message.solarinverter(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarevent())
    {
        visitor.start_message_field("solarEvent");
        visit(message.solarevent(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarinverter())
    {
        visitor.start_message_field("solarInverter");
        visit(message.solarinverter(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarinverter())
    {
        visitor.start_message_field("solarInverter");
        visit(message.solarinverter(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarreading())
    {
        visitor.start_message_field("solarReading");
        visit(message.solarreading(), visitor);
        visitor.end_message_field();
    }
}

void visit(const solarmodule::SolarStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarinverter())
    {
        visitor.start_message_field("solarInverter");
        visit(message.solarinverter(), visitor);
        visitor.end_message_field();
    }
    if(message.has_solarstatus())
    {
        visitor.start_message_field("solarStatus");
        visit(message.solarstatus(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchDiscreteControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectedswitch())
    {
        visitor.start_message_field("protectedSwitch");
        visit(message.protectedswitch(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchdiscretecontrol())
    {
        visitor.start_message_field("switchDiscreteControl");
        visit(message.switchdiscretecontrol(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchEventProfile& message, IMessageVisitor& visitor)
{
    if(message.has_eventmessageinfo())
    {
        visitor.start_message_field("eventMessageInfo");
        visit(message.eventmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectedswitch())
    {
        visitor.start_message_field("protectedSwitch");
        visit(message.protectedswitch(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchevent())
    {
        visitor.start_message_field("switchEvent");
        visit(message.switchevent(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectedswitch())
    {
        visitor.start_message_field("protectedSwitch");
        visit(message.protectedswitch(), visitor);
        visitor.end_message_field();
    }
    visitor.start_message_field("switchreading");
    for(decltype(message.switchreading_size()) i = 0; i < message.switchreading_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.switchreading(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const switchmodule::SwitchStatusProfile& message, IMessageVisitor& visitor)
{
    if(message.has_statusmessageinfo())
    {
        visitor.start_message_field("statusMessageInfo");
        visit(message.statusmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectedswitch())
    {
        visitor.start_message_field("protectedSwitch");
        visit(message.protectedswitch(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchstatus())
    {
        visitor.start_message_field("switchStatus");
        visit(message.switchstatus(), visitor);
        visitor.end_message_field();
    }
}

} // end namespace util

} // end namespace adapter
