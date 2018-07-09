#include "adapter-api/config/generated/ModelVisitors.h"

#include "solarmodule/solarmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

namespace adapter {

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ACDCTerminal(IModelVisitor& visitor);

void visit_commonmodule_AnalogueValue(IModelVisitor& visitor);

void visit_commonmodule_BCR(IModelVisitor& visitor);

void visit_commonmodule_CMV(IModelVisitor& visitor);

void visit_commonmodule_CheckConditions(IModelVisitor& visitor);

void visit_commonmodule_ConductingEquipment(IModelVisitor& visitor);

void visit_commonmodule_ConductingEquipmentTerminalReading(IModelVisitor& visitor);

void visit_commonmodule_ControlDPC(IModelVisitor& visitor);

void visit_commonmodule_ControlFSCC(IModelVisitor& visitor);

void visit_commonmodule_ControlMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_ControlScheduleFSCH(IModelVisitor& visitor);

void visit_commonmodule_ControlTimestamp(IModelVisitor& visitor);

void visit_commonmodule_ControlValue(IModelVisitor& visitor);

void visit_commonmodule_DEL(IModelVisitor& visitor);

void visit_commonmodule_DetailQual(IModelVisitor& visitor);

void visit_commonmodule_ENG_CalcMethodKind(IModelVisitor& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(IModelVisitor& visitor);

void visit_commonmodule_ENG_PFSignKind(IModelVisitor& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(IModelVisitor& visitor);

void visit_commonmodule_ENS_DynamicTestKind(IModelVisitor& visitor);

void visit_commonmodule_ENS_HealthKind(IModelVisitor& visitor);

void visit_commonmodule_ESS(IModelVisitor& visitor);

void visit_commonmodule_EnergyConsumer(IModelVisitor& visitor);

void visit_commonmodule_IED(IModelVisitor& visitor);

void visit_commonmodule_IdentifiedObject(IModelVisitor& visitor);

void visit_commonmodule_LogicalNode(IModelVisitor& visitor);

void visit_commonmodule_LogicalNodeForControl(IModelVisitor& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(IModelVisitor& visitor);

void visit_commonmodule_MV(IModelVisitor& visitor);

void visit_commonmodule_MessageInfo(IModelVisitor& visitor);

void visit_commonmodule_Meter(IModelVisitor& visitor);

void visit_commonmodule_NamedObject(IModelVisitor& visitor);

void visit_commonmodule_Optional_StateKind(IModelVisitor& visitor);

void visit_commonmodule_PhaseMMTN(IModelVisitor& visitor);

void visit_commonmodule_Quality(IModelVisitor& visitor);

void visit_commonmodule_RampRate(IModelVisitor& visitor);

void visit_commonmodule_ReadingMMTN(IModelVisitor& visitor);

void visit_commonmodule_ReadingMMTR(IModelVisitor& visitor);

void visit_commonmodule_ReadingMMXU(IModelVisitor& visitor);

void visit_commonmodule_ReadingMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_ScheduleCSG(IModelVisitor& visitor);

void visit_commonmodule_SchedulePoint(IModelVisitor& visitor);

void visit_commonmodule_StatusDPS(IModelVisitor& visitor);

void visit_commonmodule_StatusMessageInfo(IModelVisitor& visitor);

void visit_commonmodule_StatusSPS(IModelVisitor& visitor);

void visit_commonmodule_StatusValue(IModelVisitor& visitor);

void visit_commonmodule_Terminal(IModelVisitor& visitor);

void visit_commonmodule_TimeQuality(IModelVisitor& visitor);

void visit_commonmodule_Timestamp(IModelVisitor& visitor);

void visit_commonmodule_Unit(IModelVisitor& visitor);

void visit_commonmodule_Vector(IModelVisitor& visitor);

void visit_commonmodule_WYE(IModelVisitor& visitor);

void visit_essmodule_ENG_ESSFunctionKind(IModelVisitor& visitor);

void visit_essmodule_ENG_ESSFunctionParameter(IModelVisitor& visitor);

void visit_essmodule_ESSCSG(IModelVisitor& visitor);

void visit_essmodule_ESSControl(IModelVisitor& visitor);

void visit_essmodule_ESSControlScheduleFSCH(IModelVisitor& visitor);

void visit_essmodule_ESSEventAndStatusZGEN(IModelVisitor& visitor);

void visit_essmodule_ESSPoint(IModelVisitor& visitor);

void visit_essmodule_ESSPointStatus(IModelVisitor& visitor);

void visit_essmodule_ESSReading(IModelVisitor& visitor);

void visit_essmodule_ESSStatus(IModelVisitor& visitor);

void visit_essmodule_ESSStatusZGEN(IModelVisitor& visitor);

void visit_essmodule_EssControlFSCC(IModelVisitor& visitor);

void visit_essmodule_EssStatusZBAT(IModelVisitor& visitor);

void visit_google_protobuf_BoolValue(IModelVisitor& visitor);

void visit_google_protobuf_FloatValue(IModelVisitor& visitor);

void visit_google_protobuf_Int32Value(IModelVisitor& visitor);

void visit_google_protobuf_StringValue(IModelVisitor& visitor);

void visit_loadmodule_LoadCSG(IModelVisitor& visitor);

void visit_loadmodule_LoadControl(IModelVisitor& visitor);

void visit_loadmodule_LoadControlFSCC(IModelVisitor& visitor);

void visit_loadmodule_LoadControlScheduleFSCH(IModelVisitor& visitor);

void visit_loadmodule_LoadEventAndStatusZGLD(IModelVisitor& visitor);

void visit_loadmodule_LoadPoint(IModelVisitor& visitor);

void visit_loadmodule_LoadPointStatus(IModelVisitor& visitor);

void visit_loadmodule_LoadReading(IModelVisitor& visitor);

void visit_loadmodule_LoadStatus(IModelVisitor& visitor);

void visit_loadmodule_LoadStatusZGLD(IModelVisitor& visitor);

void visit_resourcemodule_ResourceReading(IModelVisitor& visitor);

void visit_solarmodule_SolarCSG(IModelVisitor& visitor);

void visit_solarmodule_SolarControl(IModelVisitor& visitor);

void visit_solarmodule_SolarControlFSCC(IModelVisitor& visitor);

void visit_solarmodule_SolarControlScheduleFSCH(IModelVisitor& visitor);

void visit_solarmodule_SolarEventAndStatusZGEN(IModelVisitor& visitor);

void visit_solarmodule_SolarInverter(IModelVisitor& visitor);

void visit_solarmodule_SolarPoint(IModelVisitor& visitor);

void visit_solarmodule_SolarPointStatus(IModelVisitor& visitor);

void visit_solarmodule_SolarReading(IModelVisitor& visitor);

void visit_solarmodule_SolarStatus(IModelVisitor& visitor);

void visit_solarmodule_SolarStatusZGEN(IModelVisitor& visitor);

void visit_switchmodule_ProtectedSwitch(IModelVisitor& visitor);

void visit_switchmodule_SwitchCSG(IModelVisitor& visitor);

void visit_switchmodule_SwitchControl(IModelVisitor& visitor);

void visit_switchmodule_SwitchControlFSCC(IModelVisitor& visitor);

void visit_switchmodule_SwitchControlScheduleFSCH(IModelVisitor& visitor);

void visit_switchmodule_SwitchPoint(IModelVisitor& visitor);

void visit_switchmodule_SwitchReading(IModelVisitor& visitor);

void visit_switchmodule_SwitchStatus(IModelVisitor& visitor);

void visit_switchmodule_SwitchStatusXSWI(IModelVisitor& visitor);

// ---- specializations for profile types ----

template <>
void visit<resourcemodule::ResourceReadingProfile>(IModelVisitor& visitor)
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

    if(visitor.start_message_field("resourceReading", resourcemodule::ResourceReading::descriptor()))
    {
        visit_resourcemodule_ResourceReading(visitor);
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
        visitor.end_message_field();
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

template <>
void visit<switchmodule::SwitchControlProfile>(IModelVisitor& visitor)
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

    if(visitor.start_message_field("switchControl", switchmodule::SwitchControl::descriptor()))
    {
        visit_switchmodule_SwitchControl(visitor);
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

// ---- template definitions for child types ----

void visit_commonmodule_ACDCTerminal(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("connected", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("sequenceNumber", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_AnalogueValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_BCR(IModelVisitor& visitor)
{
    visitor.handle_int64("actVal");

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }

    visitor.handle_enum("units", commonmodule::UnitSymbolKind_descriptor());
}

void visit_commonmodule_CMV(IModelVisitor& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_CheckConditions(IModelVisitor& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(visitor);
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

    visitor.handle_string("mRID");
}

void visit_commonmodule_ConductingEquipmentTerminalReading(IModelVisitor& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlDPC(IModelVisitor& visitor)
{
    visitor.handle_bool("ctlVal");
}

void visit_commonmodule_ControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("controlschedulefsch", commonmodule::ControlScheduleFSCH::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_ControlScheduleFSCH(visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlMessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlTimestamp(IModelVisitor& visitor)
{
    visitor.handle_uint32("fraction");

    visitor.handle_uint64("seconds");
}

void visit_commonmodule_ControlValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(visitor);
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

void visit_commonmodule_DetailQual(IModelVisitor& visitor)
{
    visitor.handle_bool("badReference");

    visitor.handle_bool("failure");

    visitor.handle_bool("inaccurate");

    visitor.handle_bool("inconsistent");

    visitor.handle_bool("oldData");

    visitor.handle_bool("oscillatory");

    visitor.handle_bool("outOfRange");

    visitor.handle_bool("overflow");
}

void visit_commonmodule_ENG_CalcMethodKind(IModelVisitor& visitor)
{
    visitor.handle_enum("setVal", commonmodule::CalcMethodKind_descriptor());
}

void visit_commonmodule_ENG_GridConnectModeKind(IModelVisitor& visitor)
{
    visitor.handle_enum("setVal", commonmodule::GridConnectModeKind_descriptor());

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ENG_PFSignKind(IModelVisitor& visitor)
{
    visitor.handle_enum("setVal", commonmodule::PFSignKind_descriptor());
}

void visit_commonmodule_ENS_BehaviourModeKind(IModelVisitor& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    visitor.handle_enum("stVal", commonmodule::BehaviourModeKind_descriptor());

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ENS_DynamicTestKind(IModelVisitor& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    visitor.handle_enum("stVal", commonmodule::DynamicTestKind_descriptor());

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_ENS_HealthKind(IModelVisitor& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    visitor.handle_enum("stVal", commonmodule::HealthKind_descriptor());
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
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_IED(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_IdentifiedObject(IModelVisitor& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNode(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(visitor);
        visitor.end_message_field();
    }
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
}

void visit_commonmodule_MV(IModelVisitor& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }

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
        visit_commonmodule_IdentifiedObject(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }
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
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_Optional_StateKind(IModelVisitor& visitor)
{
    visitor.handle_enum("value", commonmodule::StateKind_descriptor());
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

void visit_commonmodule_Quality(IModelVisitor& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual(visitor);
        visitor.end_message_field();
    }

    visitor.handle_bool("operatorBlocked");

    visitor.handle_enum("source", commonmodule::SourceKind_descriptor());

    visitor.handle_bool("test");

    visitor.handle_enum("validity", commonmodule::ValidityKind_descriptor());
}

void visit_commonmodule_RampRate(IModelVisitor& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
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
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_SchedulePoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_SchedulePoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(visitor);
        visitor.end_message_field();
    }

    visitor.handle_float("yVal");

    if(visitor.start_message_field("zVal", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StatusDPS(IModelVisitor& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    visitor.handle_enum("stVal", commonmodule::DbPosKind_descriptor());

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StatusMessageInfo(IModelVisitor& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StatusSPS(IModelVisitor& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(visitor);
        visitor.end_message_field();
    }

    visitor.handle_bool("stVal");

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_StatusValue(IModelVisitor& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(visitor);
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

    visitor.handle_enum("phases", commonmodule::PhaseCodeKind_descriptor());
}

void visit_commonmodule_TimeQuality(IModelVisitor& visitor)
{
    visitor.handle_bool("clockFailure");

    visitor.handle_bool("clockNotSynchronized");

    visitor.handle_bool("leapSecondsKnown");

    visitor.handle_enum("timeAccuracy", commonmodule::TimeAccuracyKind_descriptor());
}

void visit_commonmodule_Timestamp(IModelVisitor& visitor)
{
    visitor.handle_uint32("fraction");

    visitor.handle_uint64("seconds");

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality(visitor);
        visitor.end_message_field();
    }
}

void visit_commonmodule_Unit(IModelVisitor& visitor)
{
    visitor.handle_enum("multiplier", commonmodule::UnitMultiplierKind_descriptor());

    visitor.handle_enum("SIUnit", commonmodule::UnitSymbolKind_descriptor());
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

void visit_essmodule_ENG_ESSFunctionKind(IModelVisitor& visitor)
{
    visitor.handle_enum("setVal", essmodule::ESSFunctionKind_descriptor());

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ENG_ESSFunctionParameter(IModelVisitor& visitor)
{
    visitor.handle_enum("name", essmodule::ESSFunctionParameterKind_descriptor());

    if(visitor.start_message_field("unit", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(visitor);
        visitor.end_message_field();
    }

    visitor.handle_int32("value");
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
        visitor.end_message_field();
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

    if(visitor.start_message_field("function", essmodule::ENG_ESSFunctionKind::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionKind(visitor);
        visitor.end_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("functionparameter", essmodule::ENG_ESSFunctionParameter::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_essmodule_ENG_ESSFunctionParameter(visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
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

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSPointStatus(IModelVisitor& visitor)
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

    if(visitor.start_message_field("function", essmodule::ENG_ESSFunctionKind::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("functionParameter", essmodule::ENG_ESSFunctionParameter::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionParameter(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
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

void visit_google_protobuf_BoolValue(IModelVisitor& visitor)
{
    visitor.handle_bool("value");
}

void visit_google_protobuf_FloatValue(IModelVisitor& visitor)
{
    visitor.handle_float("value");
}

void visit_google_protobuf_Int32Value(IModelVisitor& visitor)
{
    visitor.handle_int32("value");
}

void visit_google_protobuf_StringValue(IModelVisitor& visitor)
{
    visitor.handle_string("value");
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
        visitor.end_message_field();
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

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_loadmodule_LoadPointStatus(IModelVisitor& visitor)
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
        visitor.end_message_field();
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
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
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

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(visitor);
        visitor.end_message_field();
    }
}

void visit_solarmodule_SolarPointStatus(IModelVisitor& visitor)
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
        visit_google_protobuf_FloatValue(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(visitor);
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

void visit_switchmodule_SwitchCSG(IModelVisitor& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", switchmodule::SwitchPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_switchmodule_SwitchPoint(visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchControl(IModelVisitor& visitor)
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

    if(visitor.start_message_field("SwitchControlFSCC", switchmodule::SwitchControlFSCC::descriptor()))
    {
        visit_switchmodule_SwitchControlFSCC(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchControlFSCC(IModelVisitor& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchControlScheduleFSCH", switchmodule::SwitchControlScheduleFSCH::descriptor()))
    {
        visit_switchmodule_SwitchControlScheduleFSCH(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchControlScheduleFSCH(IModelVisitor& visitor)
{
    if(visitor.start_message_field("ValDCSG", switchmodule::SwitchCSG::descriptor()))
    {
        visit_switchmodule_SwitchCSG(visitor);
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchPoint(IModelVisitor& visitor)
{
    if(visitor.start_message_field("Pos", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(visitor);
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(visitor);
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

    if(visitor.start_message_field("Pos", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(visitor);
        visitor.end_message_field();
    }
}

} // end namespace adapter
