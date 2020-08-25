#include "adapter-util/config/generated/ModelVisitors.h"

#include "reclosermodule/reclosermodule.pb.h"
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
#include "capbankmodule/capbankmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "generationmodule/generationmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "regulatormodule/regulatormodule.pb.h"
#include "metermodule/metermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

namespace adapter {

namespace util {

// ---- forward declare all the child visit method names ----

void visit_breakermodule_Breaker(IModelVisitor& visitor);

void visit_breakermodule_BreakerDiscreteControl(IModelVisitor& visitor);

void visit_breakermodule_BreakerDiscreteControlXCBR(IModelVisitor& visitor);

void visit_breakermodule_BreakerEvent(IModelVisitor& visitor);

void visit_breakermodule_BreakerReading(IModelVisitor& visitor);

void visit_breakermodule_BreakerStatus(IModelVisitor& visitor);

void visit_capbankmodule_CapBankCSG(IModelVisitor& visitor);

void visit_capbankmodule_CapBankControl(IModelVisitor& visitor);

void visit_capbankmodule_CapBankControlFSCC(IModelVisitor& visitor);

void visit_capbankmodule_CapBankControlScheduleFSCH(IModelVisitor& visitor);

void visit_capbankmodule_CapBankControlYPSH(IModelVisitor& visitor);

void visit_capbankmodule_CapBankDiscreteControl(IModelVisitor& visitor);

void visit_capbankmodule_CapBankDiscreteControlYPSH(IModelVisitor& visitor);

void visit_capbankmodule_CapBankEvent(IModelVisitor& visitor);

void visit_capbankmodule_CapBankEventAndStatusYPSH(IModelVisitor& visitor);

void visit_capbankmodule_CapBankPoint(IModelVisitor& visitor);

void visit_capbankmodule_CapBankReading(IModelVisitor& visitor);

void visit_capbankmodule_CapBankStatus(IModelVisitor& visitor);

void visit_capbankmodule_CapBankSystem(IModelVisitor& visitor);

void visit_commonmodule_ACD(IModelVisitor& visitor);

void visit_commonmodule_ACDCTerminal(IModelVisitor& visitor);

void visit_commonmodule_ASG(IModelVisitor& visitor);

void visit_commonmodule_ActivePower(IModelVisitor& visitor);

void visit_commonmodule_AnalogEventAndStatusGGIO(IModelVisitor& visitor);

void visit_commonmodule_AnalogueValue(IModelVisitor& visitor);

void visit_commonmodule_AnalogueValueCtl(IModelVisitor& visitor);

void visit_commonmodule_BCR(IModelVisitor& visitor);

void visit_commonmodule_BooleanEventAndStatusGGIO(IModelVisitor& visitor);

void visit_commonmodule_CMV(IModelVisitor& visitor);

void visit_commonmodule_CheckConditions(IModelVisitor& visitor);

void visit_commonmodule_ConductingEquipment(IModelVisitor& visitor);

void visit_commonmodule_ConductingEquipmentTerminalReading(IModelVisitor& visitor);

void visit_commonmodule_ControlAPC(IModelVisitor& visitor);

void visit_commonmodule_ControlDPC(IModelVisitor& visitor);

void visit_commonmodule_ControlFSCC(IModelVisitor& visitor);

void visit_commonmodule_ControlINC(IModelVisitor& visitor);

void visit_commonmodule_ControlING(IModelVisitor& visitor);

void visit_commonmodule_ControlISC(IModelVisitor& visitor);

void visit_commonmodule_ControlMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_ControlSPC(IModelVisitor& visitor);

void visit_commonmodule_ControlScheduleFSCH(IModelVisitor& visitor);

void visit_commonmodule_ControlValue(IModelVisitor& visitor);

void visit_commonmodule_DEL(IModelVisitor& visitor);

void visit_commonmodule_DiscreteControlXCBR(IModelVisitor& visitor);

void visit_commonmodule_ENG_CalcMethodKind(IModelVisitor& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(IModelVisitor& visitor);

void visit_commonmodule_ENG_PFSignKind(IModelVisitor& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(IModelVisitor& visitor);

void visit_commonmodule_ENS_DynamicTestKind(IModelVisitor& visitor);

void visit_commonmodule_ENS_HealthKind(IModelVisitor& visitor);

void visit_commonmodule_ESS(IModelVisitor& visitor);

void visit_commonmodule_EnergyConsumer(IModelVisitor& visitor);

void visit_commonmodule_EventMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_EventValue(IModelVisitor& visitor);

void visit_commonmodule_IED(IModelVisitor& visitor);

void visit_commonmodule_IntegerEventAndStatusGGIO(IModelVisitor& visitor);

void visit_commonmodule_LogicalNode(IModelVisitor& visitor);

void visit_commonmodule_LogicalNodeForControl(IModelVisitor& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(IModelVisitor& visitor);

void visit_commonmodule_MV(IModelVisitor& visitor);

void visit_commonmodule_MessageInfo(IModelVisitor& visitor);

void visit_commonmodule_Meter(IModelVisitor& visitor);

void visit_commonmodule_NamedObject(IModelVisitor& visitor);

void visit_commonmodule_Optional_PhaseCodeKind(IModelVisitor& visitor);

void visit_commonmodule_Optional_PhaseFaultDirectionKind(IModelVisitor& visitor);

void visit_commonmodule_Optional_RecloseActionKind(IModelVisitor& visitor);

void visit_commonmodule_Optional_StateKind(IModelVisitor& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(IModelVisitor& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(IModelVisitor& visitor);

void visit_commonmodule_PhaseAPC(IModelVisitor& visitor);

void visit_commonmodule_PhaseDPC(IModelVisitor& visitor);

void visit_commonmodule_PhaseDPS(IModelVisitor& visitor);

void visit_commonmodule_PhaseINS(IModelVisitor& visitor);

void visit_commonmodule_PhaseISC(IModelVisitor& visitor);

void visit_commonmodule_PhaseMMTN(IModelVisitor& visitor);

void visit_commonmodule_PhaseRecloseAction(IModelVisitor& visitor);

void visit_commonmodule_PhaseSPS(IModelVisitor& visitor);

void visit_commonmodule_RampRate(IModelVisitor& visitor);

void visit_commonmodule_ReadingMMTN(IModelVisitor& visitor);

void visit_commonmodule_ReadingMMTR(IModelVisitor& visitor);

void visit_commonmodule_ReadingMMXU(IModelVisitor& visitor);

void visit_commonmodule_ReadingMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_ScheduleCSG(IModelVisitor& visitor);

void visit_commonmodule_SchedulePoint(IModelVisitor& visitor);

void visit_commonmodule_StatusAndEventXCBR(IModelVisitor& visitor);

void visit_commonmodule_StatusDPS(IModelVisitor& visitor);

void visit_commonmodule_StatusINC(IModelVisitor& visitor);

void visit_commonmodule_StatusINS(IModelVisitor& visitor);

void visit_commonmodule_StatusMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_StatusSPC(IModelVisitor& visitor);

void visit_commonmodule_StatusSPS(IModelVisitor& visitor);

void visit_commonmodule_StatusValue(IModelVisitor& visitor);

void visit_commonmodule_StringEventAndStatusGGIO(IModelVisitor& visitor);

void visit_commonmodule_Terminal(IModelVisitor& visitor);

void visit_commonmodule_Unit(IModelVisitor& visitor);

void visit_commonmodule_VSC(IModelVisitor& visitor);

void visit_commonmodule_VSS(IModelVisitor& visitor);

void visit_commonmodule_Vector(IModelVisitor& visitor);

void visit_commonmodule_WYE(IModelVisitor& visitor);

void visit_essmodule_CapacityFirming(IModelVisitor& visitor);

void visit_essmodule_ESSCSG(IModelVisitor& visitor);

void visit_essmodule_ESSControl(IModelVisitor& visitor);

void visit_essmodule_ESSControlScheduleFSCH(IModelVisitor& visitor);

void visit_essmodule_ESSEvent(IModelVisitor& visitor);

void visit_essmodule_ESSEventAndStatusZGEN(IModelVisitor& visitor);

void visit_essmodule_ESSEventZGEN(IModelVisitor& visitor);

void visit_essmodule_ESSFunction(IModelVisitor& visitor);

void visit_essmodule_ESSPoint(IModelVisitor& visitor);

void visit_essmodule_ESSPointStatus(IModelVisitor& visitor);

void visit_essmodule_ESSReading(IModelVisitor& visitor);

void visit_essmodule_ESSStatus(IModelVisitor& visitor);

void visit_essmodule_ESSStatusZGEN(IModelVisitor& visitor);

void visit_essmodule_EssControlFSCC(IModelVisitor& visitor);

void visit_essmodule_EssEventZBAT(IModelVisitor& visitor);

void visit_essmodule_EssStatusZBAT(IModelVisitor& visitor);

void visit_essmodule_FrequencyRegulation(IModelVisitor& visitor);

void visit_essmodule_PeakShaving(IModelVisitor& visitor);

void visit_essmodule_SOCManagement(IModelVisitor& visitor);

void visit_essmodule_SocLimit(IModelVisitor& visitor);

void visit_essmodule_VoltageDroop(IModelVisitor& visitor);

void visit_essmodule_VoltagePI(IModelVisitor& visitor);

void visit_essmodule_VoltageRegulation(IModelVisitor& visitor);

void visit_generationmodule_DroopParameter(IModelVisitor& visitor);

void visit_generationmodule_GeneratingUnit(IModelVisitor& visitor);

void visit_generationmodule_GenerationCSG(IModelVisitor& visitor);

void visit_generationmodule_GenerationControl(IModelVisitor& visitor);

void visit_generationmodule_GenerationControlFSCC(IModelVisitor& visitor);

void visit_generationmodule_GenerationControlScheduleFSCH(IModelVisitor& visitor);

void visit_generationmodule_GenerationDiscreteControl(IModelVisitor& visitor);

void visit_generationmodule_GenerationEvent(IModelVisitor& visitor);

void visit_generationmodule_GenerationEventAndStatusZGEN(IModelVisitor& visitor);

void visit_generationmodule_GenerationEventZGEN(IModelVisitor& visitor);

void visit_generationmodule_GenerationPoint(IModelVisitor& visitor);

void visit_generationmodule_GenerationPointStatus(IModelVisitor& visitor);

void visit_generationmodule_GenerationReading(IModelVisitor& visitor);

void visit_generationmodule_GenerationStatus(IModelVisitor& visitor);

void visit_generationmodule_GenerationStatusZGEN(IModelVisitor& visitor);

void visit_generationmodule_Optional_ReactivePowerControlKind(IModelVisitor& visitor);

void visit_generationmodule_Optional_RealPowerControlKind(IModelVisitor& visitor);

void visit_generationmodule_ReactivePowerControl(IModelVisitor& visitor);

void visit_generationmodule_RealPowerControl(IModelVisitor& visitor);

void visit_loadmodule_LoadCSG(IModelVisitor& visitor);

void visit_loadmodule_LoadControl(IModelVisitor& visitor);

void visit_loadmodule_LoadControlFSCC(IModelVisitor& visitor);

void visit_loadmodule_LoadControlScheduleFSCH(IModelVisitor& visitor);

void visit_loadmodule_LoadEvent(IModelVisitor& visitor);

void visit_loadmodule_LoadEventAndStatusZGLD(IModelVisitor& visitor);

void visit_loadmodule_LoadEventZGLD(IModelVisitor& visitor);

void visit_loadmodule_LoadPoint(IModelVisitor& visitor);

void visit_loadmodule_LoadPointStatus(IModelVisitor& visitor);

void visit_loadmodule_LoadReading(IModelVisitor& visitor);

void visit_loadmodule_LoadStatus(IModelVisitor& visitor);

void visit_loadmodule_LoadStatusZGLD(IModelVisitor& visitor);

void visit_metermodule_MeterReading(IModelVisitor& visitor);

void visit_reclosermodule_Recloser(IModelVisitor& visitor);

void visit_reclosermodule_RecloserDiscreteControl(IModelVisitor& visitor);

void visit_reclosermodule_RecloserDiscreteControlXCBR(IModelVisitor& visitor);

void visit_reclosermodule_RecloserEvent(IModelVisitor& visitor);

void visit_reclosermodule_RecloserReading(IModelVisitor& visitor);

void visit_reclosermodule_RecloserStatus(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorCSG(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorControl(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorControlATCC(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorControlFSCC(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorControlScheduleFSCH(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorDiscreteControl(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorEvent(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorEventAndStatusANCR(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorEventAndStatusATCC(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorPoint(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorReading(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorStatus(IModelVisitor& visitor);

void visit_regulatormodule_RegulatorSystem(IModelVisitor& visitor);

void visit_resourcemodule_AnalogControlGGIO(IModelVisitor& visitor);

void visit_resourcemodule_BooleanControlGGIO(IModelVisitor& visitor);

void visit_resourcemodule_IntegerControlGGIO(IModelVisitor& visitor);

void visit_resourcemodule_ResourceDiscreteControl(IModelVisitor& visitor);

void visit_resourcemodule_ResourceEvent(IModelVisitor& visitor);

void visit_resourcemodule_ResourceReading(IModelVisitor& visitor);

void visit_resourcemodule_ResourceStatus(IModelVisitor& visitor);

void visit_resourcemodule_StringControlGGIO(IModelVisitor& visitor);

void visit_solarmodule_SolarCSG(IModelVisitor& visitor);

void visit_solarmodule_SolarControl(IModelVisitor& visitor);

void visit_solarmodule_SolarControlFSCC(IModelVisitor& visitor);

void visit_solarmodule_SolarControlScheduleFSCH(IModelVisitor& visitor);

void visit_solarmodule_SolarEvent(IModelVisitor& visitor);

void visit_solarmodule_SolarEventAndStatusZGEN(IModelVisitor& visitor);

void visit_solarmodule_SolarEventZGEN(IModelVisitor& visitor);

void visit_solarmodule_SolarInverter(IModelVisitor& visitor);

void visit_solarmodule_SolarPoint(IModelVisitor& visitor);

void visit_solarmodule_SolarPointStatus(IModelVisitor& visitor);

void visit_solarmodule_SolarReading(IModelVisitor& visitor);

void visit_solarmodule_SolarStatus(IModelVisitor& visitor);

void visit_solarmodule_SolarStatusZGEN(IModelVisitor& visitor);

void visit_switchmodule_ProtectedSwitch(IModelVisitor& visitor);

void visit_switchmodule_SwitchDiscreteControl(IModelVisitor& visitor);

void visit_switchmodule_SwitchDiscreteControlXSWI(IModelVisitor& visitor);

void visit_switchmodule_SwitchEvent(IModelVisitor& visitor);

void visit_switchmodule_SwitchEventXSWI(IModelVisitor& visitor);

void visit_switchmodule_SwitchReading(IModelVisitor& visitor);

void visit_switchmodule_SwitchStatus(IModelVisitor& visitor);

void visit_switchmodule_SwitchStatusXSWI(IModelVisitor& visitor);

// ---- specializations for profile types ----

template <>
void visit<breakermodule::BreakerDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breaker", breakermodule::Breaker::descriptor()))
    {
        visit_breakermodule_Breaker(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breakerDiscreteControl", breakermodule::BreakerDiscreteControl::descriptor()))
    {
        visit_breakermodule_BreakerDiscreteControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<breakermodule::BreakerEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breaker", breakermodule::Breaker::descriptor()))
    {
        visit_breakermodule_Breaker(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breakerEvent", breakermodule::BreakerEvent::descriptor()))
    {
        visit_breakermodule_BreakerEvent(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<breakermodule::BreakerReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breaker", breakermodule::Breaker::descriptor()))
    {
        visit_breakermodule_Breaker(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("breakerreading", breakermodule::BreakerReading::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_breakermodule_BreakerReading(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<breakermodule::BreakerStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breaker", breakermodule::Breaker::descriptor()))
    {
        visit_breakermodule_Breaker(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breakerStatus", breakermodule::BreakerStatus::descriptor()))
    {
        visit_breakermodule_BreakerStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<capbankmodule::CapBankControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControl", capbankmodule::CapBankControl::descriptor()))
    {
        visit_capbankmodule_CapBankControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<capbankmodule::CapBankDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControl", capbankmodule::CapBankDiscreteControl::descriptor()))
    {
        visit_capbankmodule_CapBankDiscreteControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<capbankmodule::CapBankEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankEvent", capbankmodule::CapBankEvent::descriptor()))
    {
        visit_capbankmodule_CapBankEvent(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<capbankmodule::CapBankReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankReading", capbankmodule::CapBankReading::descriptor()))
    {
        visit_capbankmodule_CapBankReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<capbankmodule::CapBankStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankStatus", capbankmodule::CapBankStatus::descriptor()))
    {
        visit_capbankmodule_CapBankStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<essmodule::ESSControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essControl", essmodule::ESSControl::descriptor()))
    {
        visit_essmodule_ESSControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<essmodule::ESSEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essEvent", essmodule::ESSEvent::descriptor()))
    {
        visit_essmodule_ESSEvent(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<essmodule::ESSReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essReading", essmodule::ESSReading::descriptor()))
    {
        visit_essmodule_ESSReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<essmodule::ESSStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essStatus", essmodule::ESSStatus::descriptor()))
    {
        visit_essmodule_ESSStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<generationmodule::GenerationControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationControl", generationmodule::GenerationControl::descriptor()))
    {
        visit_generationmodule_GenerationControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<generationmodule::GenerationDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationDiscreteControl", generationmodule::GenerationDiscreteControl::descriptor()))
    {
        visit_generationmodule_GenerationDiscreteControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<generationmodule::GenerationEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationEvent", generationmodule::GenerationEvent::descriptor()))
    {
        visit_generationmodule_GenerationEvent(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<generationmodule::GenerationReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationReading", generationmodule::GenerationReading::descriptor()))
    {
        visit_generationmodule_GenerationReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<generationmodule::GenerationStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationStatus", generationmodule::GenerationStatus::descriptor()))
    {
        visit_generationmodule_GenerationStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<loadmodule::LoadControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadControl", loadmodule::LoadControl::descriptor()))
    {
        visit_loadmodule_LoadControl(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<loadmodule::LoadEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadEvent", loadmodule::LoadEvent::descriptor()))
    {
        visit_loadmodule_LoadEvent(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<loadmodule::LoadReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadReading", loadmodule::LoadReading::descriptor()))
    {
        visit_loadmodule_LoadReading(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<loadmodule::LoadStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadStatus", loadmodule::LoadStatus::descriptor()))
    {
        visit_loadmodule_LoadStatus(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<metermodule::MeterReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("meter", commonmodule::Meter::descriptor()))
    {
        visit_commonmodule_Meter(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("meterReading", metermodule::MeterReading::descriptor()))
    {
        visit_metermodule_MeterReading(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<reclosermodule::RecloserDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloser", reclosermodule::Recloser::descriptor()))
    {
        visit_reclosermodule_Recloser(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloserDiscreteControl", reclosermodule::RecloserDiscreteControl::descriptor()))
    {
        visit_reclosermodule_RecloserDiscreteControl(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<reclosermodule::RecloserEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloser", reclosermodule::Recloser::descriptor()))
    {
        visit_reclosermodule_Recloser(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloserEvent", reclosermodule::RecloserEvent::descriptor()))
    {
        visit_reclosermodule_RecloserEvent(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<reclosermodule::RecloserReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloser", reclosermodule::Recloser::descriptor()))
    {
        visit_reclosermodule_Recloser(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("recloserreading", reclosermodule::RecloserReading::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_reclosermodule_RecloserReading(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

template <>
void visit<reclosermodule::RecloserStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloser", reclosermodule::Recloser::descriptor()))
    {
        visit_reclosermodule_Recloser(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloserStatus", reclosermodule::RecloserStatus::descriptor()))
    {
        visit_reclosermodule_RecloserStatus(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<regulatormodule::RegulatorDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorDiscreteControl", regulatormodule::RegulatorDiscreteControl::descriptor()))
    {
        visit_regulatormodule_RegulatorDiscreteControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<regulatormodule::RegulatorControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorControl", regulatormodule::RegulatorControl::descriptor()))
    {
        visit_regulatormodule_RegulatorControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<regulatormodule::RegulatorEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorEvent", regulatormodule::RegulatorEvent::descriptor()))
    {
        visit_regulatormodule_RegulatorEvent(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<regulatormodule::RegulatorReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("regulatorreading", regulatormodule::RegulatorReading::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_regulatormodule_RegulatorReading(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<regulatormodule::RegulatorStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorStatus", regulatormodule::RegulatorStatus::descriptor()))
    {
        visit_regulatormodule_RegulatorStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<resourcemodule::ResourceDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("resourceDiscreteControl", resourcemodule::ResourceDiscreteControl::descriptor()))
    {
        visit_resourcemodule_ResourceDiscreteControl(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<resourcemodule::ResourceEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("resourceEvent", resourcemodule::ResourceEvent::descriptor()))
    {
        visit_resourcemodule_ResourceEvent(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<resourcemodule::ResourceReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("resourceReading", resourcemodule::ResourceReading::descriptor()))
    {
        visit_resourcemodule_ResourceReading(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<resourcemodule::ResourceStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("resourceStatus", resourcemodule::ResourceStatus::descriptor()))
    {
        visit_resourcemodule_ResourceStatus(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<solarmodule::SolarControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarControl", solarmodule::SolarControl::descriptor()))
    {
        visit_solarmodule_SolarControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<solarmodule::SolarEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarEvent", solarmodule::SolarEvent::descriptor()))
    {
        visit_solarmodule_SolarEvent(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<solarmodule::SolarReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarReading", solarmodule::SolarReading::descriptor()))
    {
        visit_solarmodule_SolarReading(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<solarmodule::SolarStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarStatus", solarmodule::SolarStatus::descriptor()))
    {
        visit_solarmodule_SolarStatus(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<switchmodule::SwitchDiscreteControlProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchDiscreteControl", switchmodule::SwitchDiscreteControl::descriptor()))
    {
        visit_switchmodule_SwitchDiscreteControl(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<switchmodule::SwitchEventProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchEvent", switchmodule::SwitchEvent::descriptor()))
    {
        visit_switchmodule_SwitchEvent(visitor);
        visitor.end_message_field();
    }
}

template <>
void visit<switchmodule::SwitchReadingProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("switchreading", switchmodule::SwitchReading::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_switchmodule_SwitchReading(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

template <>
void visit<switchmodule::SwitchStatusProfile>(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchStatus", switchmodule::SwitchStatus::descriptor()))
    {
        visit_switchmodule_SwitchStatus(visitor);
        visitor.end_message_field();
    }
}

// ---- template definitions for child types ----

void visit_breakermodule_Breaker(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_breakermodule_BreakerDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breakerDiscreteControlXCBR", breakermodule::BreakerDiscreteControlXCBR::descriptor()))
    {
        visit_breakermodule_BreakerDiscreteControlXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_breakermodule_BreakerDiscreteControlXCBR(IModelVisitor& visitor)
{
    if(visitor.start_message_field("discreteControlXCBR", commonmodule::DiscreteControlXCBR::descriptor()))
    {
        visit_commonmodule_DiscreteControlXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_breakermodule_BreakerEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("statusAndEventXCBR", commonmodule::StatusAndEventXCBR::descriptor()))
    {
        visit_commonmodule_StatusAndEventXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_breakermodule_BreakerReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("diffReadingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_breakermodule_BreakerStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("statusAndEventXCBR", commonmodule::StatusAndEventXCBR::descriptor()))
    {
        visit_commonmodule_StatusAndEventXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", capbankmodule::CapBankPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_capbankmodule_CapBankPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_capbankmodule_CapBankControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControlFSCC", capbankmodule::CapBankControlFSCC::descriptor()))
    {
        visit_capbankmodule_CapBankControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControlScheduleFSCH", capbankmodule::CapBankControlScheduleFSCH::descriptor()))
    {
        visit_capbankmodule_CapBankControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValCSG", capbankmodule::CapBankCSG::descriptor()))
    {
        visit_capbankmodule_CapBankCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankControlYPSH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("Pos", commonmodule::PhaseDPC::descriptor()))
    {
        visit_commonmodule_PhaseDPC(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankDiscreteControlYPSH", capbankmodule::CapBankDiscreteControlYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankDiscreteControlYPSH(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankDiscreteControlYPSH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPC::descriptor()))
    {
        visit_commonmodule_PhaseDPC(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("CapBankEventAndStatusYPSH", capbankmodule::CapBankEventAndStatusYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankEventAndStatusYPSH(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankEventAndStatusYPSH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("control", capbankmodule::CapBankControlYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankControlYPSH(visitor);
        visitor.end_message_field();
    }

    visitor.handle("startTime", TimestampFieldType::Value::ignored);
}

void visit_capbankmodule_CapBankReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankEventAndStatusYPSH", capbankmodule::CapBankEventAndStatusYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankEventAndStatusYPSH(visitor);
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankSystem(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ACD(IModelVisitor& visitor)
{
    visitor.handle("dirGeneral", commonmodule::FaultDirectionKind_descriptor(), EnumFieldType::Value::constant);

    if(visitor.start_message_field("dirNeut", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("dirPhsA", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("dirPhsB", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("dirPhsC", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(visitor);
        visitor.end_message_field();
    }

    visitor.handle("general", BoolFieldType::Value::mapped);

    if(visitor.start_message_field("neut", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ACDCTerminal(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    if(visitor.start_message_field("connected", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::ignored);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("sequenceNumber", google::protobuf::Int32Value::descriptor()))
    {
        visitor.handle("value", Int32FieldType::Value::ignored);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ASG(IModelVisitor& visitor)
{
    if(visitor.start_message_field("setMag", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ActivePower(IModelVisitor& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("unit", commonmodule::Optional_UnitSymbolKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitSymbolKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("value", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_AnalogEventAndStatusGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AnIn", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_AnalogueValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visitor.handle("value", Int32FieldType::Value::ignored);
        visitor.end_message_field();
    }
}

void visit_commonmodule_AnalogueValueCtl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visitor.handle("value", Int32FieldType::Value::ignored);
        visitor.end_message_field();
    }
}

void visit_commonmodule_BCR(IModelVisitor& visitor)
{
    visitor.handle("actVal", Int64FieldType::Value::mapped);

    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_BooleanEventAndStatusGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Ind", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_CMV(IModelVisitor& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector(visitor);
        visitor.end_message_field();
    }

    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_CheckConditions(IModelVisitor& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ConductingEquipment(IModelVisitor& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(visitor);
        visitor.end_message_field();
    }

    visitor.handle("mRID", StringFieldType::Value::primary_uuid);
}

void visit_commonmodule_ConductingEquipmentTerminalReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlAPC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ctlVal", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlDPC(IModelVisitor& visitor)
{
    visitor.handle("ctlVal", BoolFieldType::Value::mapped);
}

void visit_commonmodule_ControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("controlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("islandControlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlINC(IModelVisitor& visitor)
{
    visitor.handle("ctlVal", Int32FieldType::Value::mapped);
}

void visit_commonmodule_ControlING(IModelVisitor& visitor)
{
    visitor.handle("setVal", Int32FieldType::Value::mapped);

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlISC(IModelVisitor& visitor)
{
    visitor.handle("ctlVal", Int32FieldType::Value::mapped);
}

void visit_commonmodule_ControlMessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlSPC(IModelVisitor& visitor)
{
    visitor.handle("ctlVal", BoolFieldType::Value::mapped);
}

void visit_commonmodule_ControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::ignored);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_DEL(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phsAB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsBC", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsCA", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_DiscreteControlXCBR(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPC::descriptor()))
    {
        visit_commonmodule_PhaseDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ProtectionMode", commonmodule::ControlINC::descriptor()))
    {
        visit_commonmodule_ControlINC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("RecloseEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ResetProtectionPickup", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ENG_CalcMethodKind(IModelVisitor& visitor)
{
    visitor.handle("setVal", commonmodule::CalcMethodKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_ENG_GridConnectModeKind(IModelVisitor& visitor)
{
    visitor.handle("setVal", commonmodule::GridConnectModeKind_descriptor(), EnumFieldType::Value::mapped);

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visitor.handle("value", StringFieldType::Value::ignored);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ENG_PFSignKind(IModelVisitor& visitor)
{
    visitor.handle("setVal", commonmodule::PFSignKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_ENS_BehaviourModeKind(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", commonmodule::BehaviourModeKind_descriptor(), EnumFieldType::Value::constant);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_ENS_DynamicTestKind(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", commonmodule::DynamicTestKind_descriptor(), EnumFieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_ENS_HealthKind(IModelVisitor& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visitor.handle("value", StringFieldType::Value::ignored);
        visitor.end_message_field();
    }

    visitor.handle("stVal", commonmodule::HealthKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_ESS(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_EnergyConsumer(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("operatingLimit", google::protobuf::StringValue::descriptor()))
    {
        visitor.handle("value", StringFieldType::Value::ignored);
        visitor.end_message_field();
    }
}

void visit_commonmodule_EventMessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_EventValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_IED(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();
}

void visit_commonmodule_IntegerEventAndStatusGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("IntIn", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNode(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();
}

void visit_commonmodule_LogicalNodeForControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNodeForEventAndStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("HotLineTag", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("RemoteBlk", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_MV(IModelVisitor& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(visitor);
        visitor.end_message_field();
    }

    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("t", TimestampFieldType::Value::ignored);

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_MessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::generated_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    visitor.handle("messageTimeStamp", TimestampFieldType::Value::message);
}

void visit_commonmodule_Meter(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_NamedObject(IModelVisitor& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visitor.handle("value", StringFieldType::Value::constant);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visitor.handle("value", StringFieldType::Value::constant);
        visitor.end_message_field();
    }
}

void visit_commonmodule_Optional_PhaseCodeKind(IModelVisitor& visitor)
{
    visitor.handle("value", commonmodule::PhaseCodeKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_Optional_PhaseFaultDirectionKind(IModelVisitor& visitor)
{
    visitor.handle("value", commonmodule::PhaseFaultDirectionKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_Optional_RecloseActionKind(IModelVisitor& visitor)
{
    visitor.handle("value", commonmodule::RecloseActionKind_descriptor(), EnumFieldType::Value::mapped);
}

void visit_commonmodule_Optional_StateKind(IModelVisitor& visitor)
{
    visitor.handle("value", commonmodule::StateKind_descriptor(), EnumFieldType::Value::mapped);
}

void visit_commonmodule_Optional_UnitMultiplierKind(IModelVisitor& visitor)
{
    visitor.handle("value", commonmodule::UnitMultiplierKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_Optional_UnitSymbolKind(IModelVisitor& visitor)
{
    visitor.handle("value", commonmodule::UnitSymbolKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_PhaseAPC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseDPC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseDPS(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseINS(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseISC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseMMTN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phsA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsAB", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsBC", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsCA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseRecloseAction(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseSPS(IModelVisitor& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_RampRate(IModelVisitor& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ReadingMMTN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ReadingMMTR(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ReadingMMXU(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("A", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ClcMth", commonmodule::ENG_CalcMethodKind::descriptor()))
    {
        visit_commonmodule_ENG_CalcMethodKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Hz", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PF", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PFSign", commonmodule::ENG_PFSignKind::descriptor()))
    {
        visit_commonmodule_ENG_PFSignKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PhV", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PPV", commonmodule::DEL::descriptor()))
    {
        visit_commonmodule_DEL(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VA", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VAr", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("W", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ReadingMessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ScheduleCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_SchedulePoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_SchedulePoint(IModelVisitor& visitor)
{
    // repeated schedule parameter
    visitor.handle_repeated_schedule_parameter("scheduleParameter");

    visitor.handle("startTime", ControlTimestampFieldType::Value::ignored);
}

void visit_commonmodule_StatusAndEventXCBR(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ProtectionPickup", commonmodule::ACD::descriptor()))
    {
        visit_commonmodule_ACD(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ProtectionMode", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("RecloseEnabled", commonmodule::PhaseSPS::descriptor()))
    {
        visit_commonmodule_PhaseSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ReclosingAction", commonmodule::PhaseRecloseAction::descriptor()))
    {
        visit_commonmodule_PhaseRecloseAction(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StatusDPS(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", commonmodule::DbPosKind_descriptor(), EnumFieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_StatusINC(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", Int32FieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_StatusINS(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", Int32FieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_StatusMessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StatusSPC(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", BoolFieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_StatusSPS(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", BoolFieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_StatusValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StringEventAndStatusGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("StrIn", commonmodule::VSS::descriptor()))
    {
        visit_commonmodule_VSS(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_Terminal(IModelVisitor& visitor)
{
    if(visitor.start_message_field("aCDCTerminal", commonmodule::ACDCTerminal::descriptor()))
    {
        visit_commonmodule_ACDCTerminal(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phases", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_Unit(IModelVisitor& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(visitor);
        visitor.end_message_field();
    }

    visitor.handle("SIUnit", commonmodule::UnitSymbolKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_commonmodule_VSC(IModelVisitor& visitor)
{
    visitor.handle("ctlVal", StringFieldType::Value::mapped);
}

void visit_commonmodule_VSS(IModelVisitor& visitor)
{
    visitor.handle("q", QualityFieldType::Value::ignored);

    visitor.handle("stVal", StringFieldType::Value::mapped);

    visitor.handle("t", TimestampFieldType::Value::ignored);
}

void visit_commonmodule_Vector(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ang", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_WYE(IModelVisitor& visitor)
{
    if(visitor.start_message_field("net", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("neut", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_CapacityFirming(IModelVisitor& visitor)
{
    if(visitor.start_message_field("capacityFirmingCtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("limitNegative_dp_dt", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("limitPositive_dp_dt", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", essmodule::ESSPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_essmodule_ESSPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_essmodule_ESSControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essControlFSCC", essmodule::EssControlFSCC::descriptor()))
    {
        visit_essmodule_EssControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValDCSG", essmodule::ESSCSG::descriptor()))
    {
        visit_essmodule_ESSCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essEventZBAT", essmodule::EssEventZBAT::descriptor()))
    {
        visit_essmodule_EssEventZBAT(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essEventZGEN", essmodule::ESSEventZGEN::descriptor()))
    {
        visit_essmodule_ESSEventZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSEventAndStatusZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GnSynSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", essmodule::ESSPointStatus::descriptor()))
    {
        visit_essmodule_ESSPointStatus(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSEventZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eSSEventAndStatusZGEN", essmodule::ESSEventAndStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSEventAndStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSFunction(IModelVisitor& visitor)
{
    if(visitor.start_message_field("capacityFirming", essmodule::CapacityFirming::descriptor()))
    {
        visit_essmodule_CapacityFirming(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencyRegulation", essmodule::FrequencyRegulation::descriptor()))
    {
        visit_essmodule_FrequencyRegulation(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("peakShaving", essmodule::PeakShaving::descriptor()))
    {
        visit_essmodule_PeakShaving(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLimit", essmodule::SocLimit::descriptor()))
    {
        visit_essmodule_SocLimit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagement", essmodule::SOCManagement::descriptor()))
    {
        visit_essmodule_SOCManagement(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageDroop", essmodule::VoltageDroop::descriptor()))
    {
        visit_essmodule_VoltageDroop(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltagePI", essmodule::VoltagePI::descriptor()))
    {
        visit_essmodule_VoltagePI(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("function", essmodule::ESSFunction::descriptor()))
    {
        visit_essmodule_ESSFunction(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    visitor.handle("startTime", ControlTimestampFieldType::Value::ignored);
}

void visit_essmodule_ESSPointStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("function", essmodule::ESSFunction::descriptor()))
    {
        visit_essmodule_ESSFunction(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("syncBackToGrid", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essStatusZBAT", essmodule::EssStatusZBAT::descriptor()))
    {
        visit_essmodule_EssStatusZBAT(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essStatusZGEN", essmodule::ESSStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSStatusZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eSSEventAndStatusZGEN", essmodule::ESSEventAndStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSEventAndStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_EssControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essControlScheduleFSCH", essmodule::ESSControlScheduleFSCH::descriptor()))
    {
        visit_essmodule_ESSControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_EssEventZBAT(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatHi", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatLo", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Soc", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Stdby", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_EssStatusZBAT(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Soc", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Stdby", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_FrequencyRegulation(IModelVisitor& visitor)
{
    if(visitor.start_message_field("frequencyDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencyDeadBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencyRegulationCtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("gridFrequencyStableBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("gridFrequencyStableBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("overFrequencyDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("underFrequencyDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_essmodule_PeakShaving(IModelVisitor& visitor)
{
    if(visitor.start_message_field("baseShavingLimit", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("peakShavingCtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("peakShavingLimit", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagementAllowedHighLimit", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagementAllowedLowLimit", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_essmodule_SOCManagement(IModelVisitor& visitor)
{
    if(visitor.start_message_field("socDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socDeadBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagementCtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socPowerSetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socSetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_essmodule_SocLimit(IModelVisitor& visitor)
{
    if(visitor.start_message_field("socHighLimit", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socHighLimitHysteresis", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLimitCtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLowLimit", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLowLimitHysteresis", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_essmodule_VoltageDroop(IModelVisitor& visitor)
{
    if(visitor.start_message_field("voltageDroopCtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageRegulation", essmodule::VoltageRegulation::descriptor()))
    {
        visit_essmodule_VoltageRegulation(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_VoltagePI(IModelVisitor& visitor)
{
    if(visitor.start_message_field("voltagePICtl", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageRegulation", essmodule::VoltageRegulation::descriptor()))
    {
        visit_essmodule_VoltageRegulation(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_VoltageRegulation(IModelVisitor& visitor)
{
    if(visitor.start_message_field("overVoltageDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("underVoltageDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageDeadBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_generationmodule_DroopParameter(IModelVisitor& visitor)
{
    if(visitor.start_message_field("slope", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("unloadedOffset", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GeneratingUnit(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("maxOperatingP", commonmodule::ActivePower::descriptor()))
    {
        visit_commonmodule_ActivePower(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", generationmodule::GenerationPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_generationmodule_GenerationPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_generationmodule_GenerationControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationControlFSCC", generationmodule::GenerationControlFSCC::descriptor()))
    {
        visit_generationmodule_GenerationControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GenerationControlScheduleFSCH", generationmodule::GenerationControlScheduleFSCH::descriptor()))
    {
        visit_generationmodule_GenerationControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValDCSG", generationmodule::GenerationCSG::descriptor()))
    {
        visit_generationmodule_GenerationCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ReactivePowerControl", generationmodule::ReactivePowerControl::descriptor()))
    {
        visit_generationmodule_ReactivePowerControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("RealPowerControl", generationmodule::RealPowerControl::descriptor()))
    {
        visit_generationmodule_RealPowerControl(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationEventZGEN", generationmodule::GenerationEventZGEN::descriptor()))
    {
        visit_generationmodule_GenerationEventZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationEventAndStatusZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GnSynSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", generationmodule::GenerationPointStatus::descriptor()))
    {
        visit_generationmodule_GenerationPointStatus(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationEventZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("generationEventAndStatusZGEN", generationmodule::GenerationEventAndStatusZGEN::descriptor()))
    {
        visit_generationmodule_GenerationEventAndStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    visitor.handle("startTime", ControlTimestampFieldType::Value::ignored);
}

void visit_generationmodule_GenerationPointStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("syncBackToGrid", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationStatusZGEN", generationmodule::GenerationStatusZGEN::descriptor()))
    {
        visit_generationmodule_GenerationStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_GenerationStatusZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("generationEventAndStatusZGEN", generationmodule::GenerationEventAndStatusZGEN::descriptor()))
    {
        visit_generationmodule_GenerationEventAndStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_generationmodule_Optional_ReactivePowerControlKind(IModelVisitor& visitor)
{
    visitor.handle("value", generationmodule::ReactivePowerControlKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_generationmodule_Optional_RealPowerControlKind(IModelVisitor& visitor)
{
    visitor.handle("value", generationmodule::RealPowerControlKind_descriptor(), EnumFieldType::Value::constant);
}

void visit_generationmodule_ReactivePowerControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("droopSetpoint", generationmodule::DroopParameter::descriptor()))
    {
        visit_generationmodule_DroopParameter(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("powerFactorSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePowerControlMode", generationmodule::Optional_ReactivePowerControlKind::descriptor()))
    {
        visit_generationmodule_Optional_ReactivePowerControlKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePowerSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_generationmodule_RealPowerControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("droopSetpoint", generationmodule::DroopParameter::descriptor()))
    {
        visit_generationmodule_DroopParameter(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("isochronousSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPowerControlMode", generationmodule::Optional_RealPowerControlKind::descriptor()))
    {
        visit_generationmodule_Optional_RealPowerControlKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPowerSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", loadmodule::LoadPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_loadmodule_LoadPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_loadmodule_LoadControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadControlFSCC", loadmodule::LoadControlFSCC::descriptor()))
    {
        visit_loadmodule_LoadControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadControlScheduleFSCH", loadmodule::LoadControlScheduleFSCH::descriptor()))
    {
        visit_loadmodule_LoadControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValDCSG", loadmodule::LoadCSG::descriptor()))
    {
        visit_loadmodule_LoadCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadEventZGLD", loadmodule::LoadEventZGLD::descriptor()))
    {
        visit_loadmodule_LoadEventZGLD(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadEventAndStatusZGLD(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", loadmodule::LoadPointStatus::descriptor()))
    {
        visit_loadmodule_LoadPointStatus(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadEventZGLD(IModelVisitor& visitor)
{
    if(visitor.start_message_field("loadEventAndStatusZGLD", loadmodule::LoadEventAndStatusZGLD::descriptor()))
    {
        visit_loadmodule_LoadEventAndStatusZGLD(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    visitor.handle("startTime", ControlTimestampFieldType::Value::ignored);
}

void visit_loadmodule_LoadPointStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("loadStatusZGLD", loadmodule::LoadStatusZGLD::descriptor()))
    {
        visit_loadmodule_LoadStatusZGLD(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadStatusZGLD(IModelVisitor& visitor)
{
    if(visitor.start_message_field("loadEventAndStatusZGLD", loadmodule::LoadEventAndStatusZGLD::descriptor()))
    {
        visit_loadmodule_LoadEventAndStatusZGLD(visitor);
        visitor.end_message_field();
    }
}

void visit_metermodule_MeterReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_reclosermodule_Recloser(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("normalOpen", google::protobuf::BoolValue::descriptor()))
    {
        visitor.handle("value", BoolFieldType::Value::mapped);
        visitor.end_message_field();
    }
}

void visit_reclosermodule_RecloserDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloserDiscreteControlXCBR", reclosermodule::RecloserDiscreteControlXCBR::descriptor()))
    {
        visit_reclosermodule_RecloserDiscreteControlXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_reclosermodule_RecloserDiscreteControlXCBR(IModelVisitor& visitor)
{
    if(visitor.start_message_field("discreteControlXCBR", commonmodule::DiscreteControlXCBR::descriptor()))
    {
        visit_commonmodule_DiscreteControlXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_reclosermodule_RecloserEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("statusAndEventXCBR", commonmodule::StatusAndEventXCBR::descriptor()))
    {
        visit_commonmodule_StatusAndEventXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_reclosermodule_RecloserReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("diffReadingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_reclosermodule_RecloserStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("statusAndEventXCBR", commonmodule::StatusAndEventXCBR::descriptor()))
    {
        visit_commonmodule_StatusAndEventXCBR(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", regulatormodule::RegulatorPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_regulatormodule_RegulatorPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_regulatormodule_RegulatorControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorControlFSCC", regulatormodule::RegulatorControlFSCC::descriptor()))
    {
        visit_regulatormodule_RegulatorControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorControlATCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BndCtr", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BndWid", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("CtlDlTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCR", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCX", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ParOp", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TapPos", commonmodule::PhaseISC::descriptor()))
    {
        visit_commonmodule_PhaseISC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolSpt", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorControlScheduleFSCH", regulatormodule::RegulatorControlScheduleFSCH::descriptor()))
    {
        visit_regulatormodule_RegulatorControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValDCSG", regulatormodule::RegulatorCSG::descriptor()))
    {
        visit_regulatormodule_RegulatorCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorControlATCC", regulatormodule::RegulatorControlATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorControlATCC(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorEventAndStatusANCR", regulatormodule::RegulatorEventAndStatusANCR::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusANCR(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorEventAndStatusANCR(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", regulatormodule::RegulatorEventAndStatusATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusATCC(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorEventAndStatusATCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("BndCtr", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BndWid", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCR", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCX", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ParOp", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("StDlTmms", commonmodule::StatusINC::descriptor()))
    {
        visit_commonmodule_StatusINC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TapOpErr", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TapPos", commonmodule::PhaseINS::descriptor()))
    {
        visit_commonmodule_PhaseINS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolSpt", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusSPC::descriptor()))
    {
        visit_commonmodule_StatusSPC(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("control", regulatormodule::RegulatorControlATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorControlATCC(visitor);
        visitor.end_message_field();
    }

    visitor.handle("startTime", TimestampFieldType::Value::ignored);
}

void visit_regulatormodule_RegulatorReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorEventAndStatusANCR", regulatormodule::RegulatorEventAndStatusANCR::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusANCR(visitor);
        visitor.end_message_field();
    }
}

void visit_regulatormodule_RegulatorSystem(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_resourcemodule_AnalogControlGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AnOut", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_resourcemodule_BooleanControlGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SPCSO", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(visitor);
        visitor.end_message_field();
    }
}

void visit_resourcemodule_IntegerControlGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ISCSO", commonmodule::ControlINC::descriptor()))
    {
        visit_commonmodule_ControlINC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_resourcemodule_ResourceDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("analogcontrolggio", resourcemodule::AnalogControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_resourcemodule_AnalogControlGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("booleancontrolggio", resourcemodule::BooleanControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_resourcemodule_BooleanControlGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("integercontrolggio", resourcemodule::IntegerControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_resourcemodule_IntegerControlGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("stringcontrolggio", resourcemodule::StringControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_resourcemodule_StringControlGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_resourcemodule_ResourceEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    {
        const auto count = visitor.start_repeated_message_field("analogeventandstatusggio", commonmodule::AnalogEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_AnalogEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("booleaneventandstatusggio", commonmodule::BooleanEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_BooleanEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("integereventandstatusggio", commonmodule::IntegerEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_IntegerEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("stringeventandstatusggio", commonmodule::StringEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_StringEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_resourcemodule_ResourceReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_resourcemodule_ResourceStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant_uuid);
            visitor.end_message_field();
        }
        if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
        {
            visitor.handle("value", StringFieldType::Value::constant);
            visitor.end_message_field();
        }
    }
    visitor.end_message_field();

    {
        const auto count = visitor.start_repeated_message_field("analogeventandstatusggio", commonmodule::AnalogEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_AnalogEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("booleaneventandstatusggio", commonmodule::BooleanEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_BooleanEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("integereventandstatusggio", commonmodule::IntegerEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_IntegerEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("stringeventandstatusggio", commonmodule::StringEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_StringEventAndStatusGGIO(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_resourcemodule_StringControlGGIO(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("StrOut", commonmodule::VSC::descriptor()))
    {
        visit_commonmodule_VSC(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", solarmodule::SolarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_solarmodule_SolarPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_solarmodule_SolarControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarControlFSCC", solarmodule::SolarControlFSCC::descriptor()))
    {
        visit_solarmodule_SolarControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SolarControlScheduleFSCH", solarmodule::SolarControlScheduleFSCH::descriptor()))
    {
        visit_solarmodule_SolarControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValDCSG", solarmodule::SolarCSG::descriptor()))
    {
        visit_solarmodule_SolarCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarEventZGEN", solarmodule::SolarEventZGEN::descriptor()))
    {
        visit_solarmodule_SolarEventZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarEventAndStatusZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", solarmodule::SolarPointStatus::descriptor()))
    {
        visit_solarmodule_SolarPointStatus(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarEventZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("solarEventAndStatusZGEN", solarmodule::SolarEventAndStatusZGEN::descriptor()))
    {
        visit_solarmodule_SolarEventAndStatusZGEN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarInverter(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    visitor.handle("startTime", ControlTimestampFieldType::Value::ignored);
}

void visit_solarmodule_SolarPointStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visitor.handle("value", FloatFieldType::Value::mapped);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarStatusZGEN", solarmodule::SolarStatusZGEN::descriptor()))
    {
        visit_solarmodule_SolarStatusZGEN(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarStatusZGEN(IModelVisitor& visitor)
{
    if(visitor.start_message_field("solarEventAndStatusZGEN", solarmodule::SolarEventAndStatusZGEN::descriptor()))
    {
        visit_solarmodule_SolarEventAndStatusZGEN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_ProtectedSwitch(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchDiscreteControl(IModelVisitor& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchDiscreteControlXSWI", switchmodule::SwitchDiscreteControlXSWI::descriptor()))
    {
        visit_switchmodule_SwitchDiscreteControlXSWI(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchDiscreteControlXSWI(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPC::descriptor()))
    {
        visit_commonmodule_PhaseDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ResetProtectionPickup", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchEvent(IModelVisitor& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchEventXSWI", switchmodule::SwitchEventXSWI::descriptor()))
    {
        visit_switchmodule_SwitchEventXSWI(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchEventXSWI(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("diffReadingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchStatus(IModelVisitor& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchStatusXSWI", switchmodule::SwitchStatusXSWI::descriptor()))
    {
        visit_switchmodule_SwitchStatusXSWI(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchStatusXSWI(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ProtectionPickup", commonmodule::PhaseSPS::descriptor()))
    {
        visit_commonmodule_PhaseSPS(visitor);
        visitor.end_message_field();
    }
}

} // end namespace util

} // end namespace adapter
