#include "adapter-api/config/generated/MessageVisitors.h"

namespace adapter {

void visit(const commonmodule::ACDCTerminal& message, IMessageVisitor& visitor);

void visit(const commonmodule::AnalogueValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::BCR& message, IMessageVisitor& visitor);

void visit(const commonmodule::CMV& message, IMessageVisitor& visitor);

void visit(const commonmodule::CheckConditions& message, IMessageVisitor& visitor);

void visit(const commonmodule::ConductingEquipment& message, IMessageVisitor& visitor);

void visit(const commonmodule::ConductingEquipmentTerminalReading& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlDPC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlFSCC& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlTimestamp& message, IMessageVisitor& visitor);

void visit(const commonmodule::ControlValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::DEL& message, IMessageVisitor& visitor);

void visit(const commonmodule::DetailQual& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_CalcMethodKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_GridConnectModeKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENG_PFSignKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENS_BehaviourModeKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENS_DynamicTestKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ENS_HealthKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::ESS& message, IMessageVisitor& visitor);

void visit(const commonmodule::EnergyConsumer& message, IMessageVisitor& visitor);

void visit(const commonmodule::IED& message, IMessageVisitor& visitor);

void visit(const commonmodule::IdentifiedObject& message, IMessageVisitor& visitor);

void visit(const commonmodule::LogicalNode& message, IMessageVisitor& visitor);

void visit(const commonmodule::LogicalNodeForControl& message, IMessageVisitor& visitor);

void visit(const commonmodule::LogicalNodeForEventAndStatus& message, IMessageVisitor& visitor);

void visit(const commonmodule::MV& message, IMessageVisitor& visitor);

void visit(const commonmodule::MessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::Meter& message, IMessageVisitor& visitor);

void visit(const commonmodule::NamedObject& message, IMessageVisitor& visitor);

void visit(const commonmodule::Optional_StateKind& message, IMessageVisitor& visitor);

void visit(const commonmodule::PhaseMMTN& message, IMessageVisitor& visitor);

void visit(const commonmodule::Quality& message, IMessageVisitor& visitor);

void visit(const commonmodule::RampRate& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMMTN& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMMTR& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMMXU& message, IMessageVisitor& visitor);

void visit(const commonmodule::ReadingMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::ScheduleCSG& message, IMessageVisitor& visitor);

void visit(const commonmodule::SchedulePoint& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusDPS& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusMessageInfo& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusSPS& message, IMessageVisitor& visitor);

void visit(const commonmodule::StatusValue& message, IMessageVisitor& visitor);

void visit(const commonmodule::Terminal& message, IMessageVisitor& visitor);

void visit(const commonmodule::TimeQuality& message, IMessageVisitor& visitor);

void visit(const commonmodule::Timestamp& message, IMessageVisitor& visitor);

void visit(const commonmodule::Unit& message, IMessageVisitor& visitor);

void visit(const commonmodule::Vector& message, IMessageVisitor& visitor);

void visit(const commonmodule::WYE& message, IMessageVisitor& visitor);

void visit(const essmodule::ENG_ESSFunctionKind& message, IMessageVisitor& visitor);

void visit(const essmodule::ENG_ESSFunctionParameter& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSCSG& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSControl& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSEventAndStatusZGEN& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSPoint& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSPointStatus& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSReading& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSStatus& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSStatusZGEN& message, IMessageVisitor& visitor);

void visit(const essmodule::EssControlFSCC& message, IMessageVisitor& visitor);

void visit(const essmodule::EssStatusZBAT& message, IMessageVisitor& visitor);

void visit(const google::protobuf::BoolValue& message, IMessageVisitor& visitor);

void visit(const google::protobuf::FloatValue& message, IMessageVisitor& visitor);

void visit(const google::protobuf::Int32Value& message, IMessageVisitor& visitor);

void visit(const google::protobuf::StringValue& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadCSG& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControl& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControlFSCC& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadEventAndStatusZGLD& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadPoint& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadPointStatus& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadReading& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadStatus& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadStatusZGLD& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceReading& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarCSG& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControl& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControlFSCC& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarEventAndStatusZGEN& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarInverter& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarPoint& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarPointStatus& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarReading& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarStatus& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarStatusZGEN& message, IMessageVisitor& visitor);

void visit(const switchmodule::ProtectedSwitch& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchCSG& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchControl& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchControlFSCC& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchControlScheduleFSCH& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchPoint& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchReading& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchStatus& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchStatusXSWI& message, IMessageVisitor& visitor);

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
    visitor.handle("units", static_cast<int>(message.units()), *commonmodule::UnitSymbolKind_descriptor());
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
    if(message.has_units())
    {
        visitor.start_message_field("units");
        visit(message.units(), visitor);
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
    visitor.start_message_field("controlschedulefsch");
    for(decltype(message.controlschedulefsch_size()) i = 0; i < message.controlschedulefsch_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.controlschedulefsch(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
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
    visitor.handle("fraction", message.fraction());
    visitor.handle("seconds", message.seconds());
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

void visit(const commonmodule::IED& message, IMessageVisitor& visitor)
{
    if(message.has_identifiedobject())
    {
        visitor.start_message_field("identifiedObject");
        visit(message.identifiedobject(), visitor);
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

void visit(const commonmodule::Optional_StateKind& message, IMessageVisitor& visitor)
{
    visitor.handle("value", static_cast<int>(message.value()), *commonmodule::StateKind_descriptor());
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
    visitor.start_message_field("crvpts");
    for(decltype(message.crvpts_size()) i = 0; i < message.crvpts_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.crvpts(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
    if(message.has_xd())
    {
        visitor.start_message_field("xD");
        visit(message.xd(), visitor);
        visitor.end_message_field();
    }
    if(message.has_xdu())
    {
        visitor.start_message_field("xDU");
        visit(message.xdu(), visitor);
        visitor.end_message_field();
    }
    if(message.has_yd())
    {
        visitor.start_message_field("yD");
        visit(message.yd(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ydu())
    {
        visitor.start_message_field("yDU");
        visit(message.ydu(), visitor);
        visitor.end_message_field();
    }
    if(message.has_yunits())
    {
        visitor.start_message_field("yUnits");
        visit(message.yunits(), visitor);
        visitor.end_message_field();
    }
    if(message.has_zd())
    {
        visitor.start_message_field("zD");
        visit(message.zd(), visitor);
        visitor.end_message_field();
    }
    if(message.has_zdu())
    {
        visitor.start_message_field("zDU");
        visit(message.zdu(), visitor);
        visitor.end_message_field();
    }
    if(message.has_zunits())
    {
        visitor.start_message_field("zUnits");
        visit(message.zunits(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::SchedulePoint& message, IMessageVisitor& visitor)
{
    if(message.has_xval())
    {
        visitor.start_message_field("xVal");
        visit(message.xval(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("yVal", message.yval());
    if(message.has_zval())
    {
        visitor.start_message_field("zVal");
        visit(message.zval(), visitor);
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

void visit(const commonmodule::StatusMessageInfo& message, IMessageVisitor& visitor)
{
    if(message.has_messageinfo())
    {
        visitor.start_message_field("messageInfo");
        visit(message.messageinfo(), visitor);
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
}

void visit(const commonmodule::Terminal& message, IMessageVisitor& visitor)
{
    if(message.has_acdcterminal())
    {
        visitor.start_message_field("aCDCTerminal");
        visit(message.acdcterminal(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("phases", static_cast<int>(message.phases()), *commonmodule::PhaseCodeKind_descriptor());
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
    visitor.handle("fraction", message.fraction());
    visitor.handle("seconds", message.seconds());
    if(message.has_tq())
    {
        visitor.start_message_field("tq");
        visit(message.tq(), visitor);
        visitor.end_message_field();
    }
}

void visit(const commonmodule::Unit& message, IMessageVisitor& visitor)
{
    visitor.handle("multiplier", static_cast<int>(message.multiplier()), *commonmodule::UnitMultiplierKind_descriptor());
    visitor.handle("SIUnit", static_cast<int>(message.siunit()), *commonmodule::UnitSymbolKind_descriptor());
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

void visit(const essmodule::ENG_ESSFunctionKind& message, IMessageVisitor& visitor)
{
    visitor.handle("setVal", static_cast<int>(message.setval()), *essmodule::ESSFunctionKind_descriptor());
    if(message.has_setvalextension())
    {
        visitor.start_message_field("setValExtension");
        visit(message.setvalextension(), visitor);
        visitor.end_message_field();
    }
}

void visit(const essmodule::ENG_ESSFunctionParameter& message, IMessageVisitor& visitor)
{
    visitor.handle("name", static_cast<int>(message.name()), *essmodule::ESSFunctionParameterKind_descriptor());
    if(message.has_unit())
    {
        visitor.start_message_field("unit");
        visit(message.unit(), visitor);
        visitor.end_message_field();
    }
    visitor.handle("value", message.value());
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
    visitor.start_message_field("functionparameter");
    for(decltype(message.functionparameter_size()) i = 0; i < message.functionparameter_size(); ++i)
    {
        visitor.start_iteration(i);
        visit(message.functionparameter(i), visitor);
        visitor.end_iteration();
    }
    visitor.end_message_field();
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
    if(message.has_xval())
    {
        visitor.start_message_field("xVal");
        visit(message.xval(), visitor);
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
    if(message.has_functionparameter())
    {
        visitor.start_message_field("functionParameter");
        visit(message.functionparameter(), visitor);
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
    if(message.has_xval())
    {
        visitor.start_message_field("xVal");
        visit(message.xval(), visitor);
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
    if(message.has_xval())
    {
        visitor.start_message_field("xVal");
        visit(message.xval(), visitor);
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

void visit(const switchmodule::SwitchCSG& message, IMessageVisitor& visitor)
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

void visit(const switchmodule::SwitchControl& message, IMessageVisitor& visitor)
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
    if(message.has_switchcontrolfscc())
    {
        visitor.start_message_field("SwitchControlFSCC");
        visit(message.switchcontrolfscc(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchControlFSCC& message, IMessageVisitor& visitor)
{
    if(message.has_logicalnodeforcontrol())
    {
        visitor.start_message_field("logicalNodeForControl");
        visit(message.logicalnodeforcontrol(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchcontrolschedulefsch())
    {
        visitor.start_message_field("switchControlScheduleFSCH");
        visit(message.switchcontrolschedulefsch(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchControlScheduleFSCH& message, IMessageVisitor& visitor)
{
    if(message.has_valdcsg())
    {
        visitor.start_message_field("ValDCSG");
        visit(message.valdcsg(), visitor);
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchPoint& message, IMessageVisitor& visitor)
{
    if(message.has_pos())
    {
        visitor.start_message_field("Pos");
        visit(message.pos(), visitor);
        visitor.end_message_field();
    }
    if(message.has_xval())
    {
        visitor.start_message_field("xVal");
        visit(message.xval(), visitor);
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
}
void visit(const resourcemodule::ResourceReadingProfile& message, IMessageVisitor& visitor)
{
    if(message.has_readingmessageinfo())
    {
        visitor.start_message_field("readingMessageInfo");
        visit(message.readingmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
        visitor.end_message_field();
    }
    if(message.has_meter())
    {
        visitor.start_message_field("meter");
        visit(message.meter(), visitor);
        visitor.end_message_field();
    }
    if(message.has_resourcereading())
    {
        visitor.start_message_field("resourceReading");
        visit(message.resourcereading(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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

void visit(const switchmodule::SwitchControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
        visitor.end_message_field();
    }
    if(message.has_protectedswitch())
    {
        visitor.start_message_field("protectedSwitch");
        visit(message.protectedswitch(), visitor);
        visitor.end_message_field();
    }
    if(message.has_switchcontrol())
    {
        visitor.start_message_field("switchControl");
        visit(message.switchcontrol(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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

void visit(const solarmodule::SolarControlProfile& message, IMessageVisitor& visitor)
{
    if(message.has_controlmessageinfo())
    {
        visitor.start_message_field("controlMessageInfo");
        visit(message.controlmessageinfo(), visitor);
        visitor.end_message_field();
    }
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadstatus())
    {
        visitor.start_message_field("loadStatus");
        visit(message.loadstatus(), visitor);
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
    if(message.has_ied())
    {
        visitor.start_message_field("ied");
        visit(message.ied(), visitor);
        visitor.end_message_field();
    }
    if(message.has_loadcontrol())
    {
        visitor.start_message_field("loadControl");
        visit(message.loadcontrol(), visitor);
        visitor.end_message_field();
    }
}

} // end namespace adapter
