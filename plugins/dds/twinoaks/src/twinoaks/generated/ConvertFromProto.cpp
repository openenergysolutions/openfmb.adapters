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

void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out);

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, twinoaks::loadmodule::LoadControlScheduleFSCH& out);

void convert_from_proto(const commonmodule::WYE& in, twinoaks::commonmodule::WYE& out);

void convert_from_proto(const essmodule::EssControlFSCC& in, twinoaks::essmodule::EssControlFSCC& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::Quality& in, twinoaks::commonmodule::Quality& out);

void convert_from_proto(const loadmodule::LoadStatus& in, twinoaks::loadmodule::LoadStatus& out);

void convert_from_proto(const commonmodule::ENS_HealthKind& in, twinoaks::commonmodule::ENS_HealthKind& out);

void convert_from_proto(const commonmodule::CheckConditions& in, twinoaks::commonmodule::CheckConditions& out);

void convert_from_proto(const commonmodule::ScheduleCSG& in, twinoaks::commonmodule::ScheduleCSG& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, twinoaks::commonmodule::ACDCTerminal& out);

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out);

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, twinoaks::essmodule::ESSControlScheduleFSCH& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, twinoaks::resourcemodule::ResourceReading& out);

void convert_from_proto(const essmodule::ENG_ESSFunctionParameter& in, twinoaks::essmodule::ENG_ESSFunctionParameter& out);

void convert_from_proto(const commonmodule::IED& in, twinoaks::commonmodule::IED& out);

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, twinoaks::commonmodule::ENG_GridConnectModeKind& out);

void convert_from_proto(const commonmodule::LogicalNodeForEventAndStatus& in, twinoaks::commonmodule::LogicalNodeForEventAndStatus& out);

void convert_from_proto(const switchmodule::SwitchControlScheduleFSCH& in, twinoaks::switchmodule::SwitchControlScheduleFSCH& out);

void convert_from_proto(const essmodule::ESSEventAndStatusZGEN& in, twinoaks::essmodule::ESSEventAndStatusZGEN& out);

void convert_from_proto(const loadmodule::LoadPointStatus& in, twinoaks::loadmodule::LoadPointStatus& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, twinoaks::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::AnalogueValue& in, twinoaks::commonmodule::AnalogueValue& out);

void convert_from_proto(const commonmodule::ControlTimestamp& in, twinoaks::commonmodule::ControlTimestamp& out);

void convert_from_proto(const commonmodule::StatusMessageInfo& in, twinoaks::commonmodule::StatusMessageInfo& out);

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, twinoaks::solarmodule::SolarControlScheduleFSCH& out);

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, twinoaks::loadmodule::LoadStatusZGLD& out);

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out);

void convert_from_proto(const solarmodule::SolarStatus& in, twinoaks::solarmodule::SolarStatus& out);

void convert_from_proto(const essmodule::ESSControl& in, twinoaks::essmodule::ESSControl& out);

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, twinoaks::commonmodule::LogicalNodeForControl& out);

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out);

void convert_from_proto(const solarmodule::SolarInverter& in, twinoaks::solarmodule::SolarInverter& out);

void convert_from_proto(const essmodule::ESSReading& in, twinoaks::essmodule::ESSReading& out);

void convert_from_proto(const solarmodule::SolarStatusZGEN& in, twinoaks::solarmodule::SolarStatusZGEN& out);

void convert_from_proto(const essmodule::ESSStatusZGEN& in, twinoaks::essmodule::ESSStatusZGEN& out);

void convert_from_proto(const essmodule::ESSCSG& in, twinoaks::essmodule::ESSCSG& out);

void convert_from_proto(const loadmodule::LoadCSG& in, twinoaks::loadmodule::LoadCSG& out);

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out);

void convert_from_proto(const loadmodule::LoadEventAndStatusZGLD& in, twinoaks::loadmodule::LoadEventAndStatusZGLD& out);

void convert_from_proto(const essmodule::ESSPoint& in, twinoaks::essmodule::ESSPoint& out);

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out);

void convert_from_proto(const solarmodule::SolarPointStatus& in, twinoaks::solarmodule::SolarPointStatus& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const loadmodule::LoadPoint& in, twinoaks::loadmodule::LoadPoint& out);

void convert_from_proto(const solarmodule::SolarControlFSCC& in, twinoaks::solarmodule::SolarControlFSCC& out);

void convert_from_proto(const commonmodule::StatusValue& in, twinoaks::commonmodule::StatusValue& out);

void convert_from_proto(const solarmodule::SolarEventAndStatusZGEN& in, twinoaks::solarmodule::SolarEventAndStatusZGEN& out);

void convert_from_proto(const commonmodule::ControlValue& in, twinoaks::commonmodule::ControlValue& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, twinoaks::commonmodule::ReadingMMTN& out);

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const switchmodule::SwitchStatus& in, twinoaks::switchmodule::SwitchStatus& out);

void convert_from_proto(const commonmodule::TimeQuality& in, twinoaks::commonmodule::TimeQuality& out);

void convert_from_proto(const loadmodule::LoadControl& in, twinoaks::loadmodule::LoadControl& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, twinoaks::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::EnergyConsumer& in, twinoaks::commonmodule::EnergyConsumer& out);

void convert_from_proto(const switchmodule::SwitchPoint& in, twinoaks::switchmodule::SwitchPoint& out);

void convert_from_proto(const switchmodule::SwitchControl& in, twinoaks::switchmodule::SwitchControl& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, twinoaks::commonmodule::PhaseMMTN& out);

void convert_from_proto(const commonmodule::StatusSPS& in, twinoaks::commonmodule::StatusSPS& out);

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out);

void convert_from_proto(const switchmodule::SwitchControlFSCC& in, twinoaks::switchmodule::SwitchControlFSCC& out);

void convert_from_proto(const commonmodule::ControlMessageInfo& in, twinoaks::commonmodule::ControlMessageInfo& out);

void convert_from_proto(const commonmodule::ControlDPC& in, twinoaks::commonmodule::ControlDPC& out);

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, twinoaks::commonmodule::ENS_DynamicTestKind& out);

void convert_from_proto(const loadmodule::LoadReading& in, twinoaks::loadmodule::LoadReading& out);

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, twinoaks::commonmodule::ControlScheduleFSCH& out);

void convert_from_proto(const commonmodule::RampRate& in, twinoaks::commonmodule::RampRate& out);

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, twinoaks::commonmodule::ENS_BehaviourModeKind& out);

void convert_from_proto(const commonmodule::ControlFSCC& in, twinoaks::commonmodule::ControlFSCC& out);

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out);

void convert_from_proto(const solarmodule::SolarPoint& in, twinoaks::solarmodule::SolarPoint& out);

void convert_from_proto(const essmodule::ENG_ESSFunctionKind& in, twinoaks::essmodule::ENG_ESSFunctionKind& out);

void convert_from_proto(const solarmodule::SolarControl& in, twinoaks::solarmodule::SolarControl& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::ESS& in, twinoaks::commonmodule::ESS& out);

void convert_from_proto(const switchmodule::SwitchReading& in, twinoaks::switchmodule::SwitchReading& out);

void convert_from_proto(const commonmodule::SchedulePoint& in, twinoaks::commonmodule::SchedulePoint& out);

void convert_from_proto(const switchmodule::ProtectedSwitch& in, twinoaks::switchmodule::ProtectedSwitch& out);

void convert_from_proto(const solarmodule::SolarCSG& in, twinoaks::solarmodule::SolarCSG& out);

void convert_from_proto(const switchmodule::SwitchStatusXSWI& in, twinoaks::switchmodule::SwitchStatusXSWI& out);

void convert_from_proto(const commonmodule::DetailQual& in, twinoaks::commonmodule::DetailQual& out);

void convert_from_proto(const essmodule::ESSStatus& in, twinoaks::essmodule::ESSStatus& out);

void convert_from_proto(const solarmodule::SolarReading& in, twinoaks::solarmodule::SolarReading& out);

void convert_from_proto(const essmodule::ESSPointStatus& in, twinoaks::essmodule::ESSPointStatus& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const switchmodule::SwitchCSG& in, twinoaks::switchmodule::SwitchCSG& out);

void convert_from_proto(const essmodule::EssStatusZBAT& in, twinoaks::essmodule::EssStatusZBAT& out);

void convert_from_proto(const loadmodule::LoadControlFSCC& in, twinoaks::loadmodule::LoadControlFSCC& out);

void convert_from_proto(const commonmodule::DEL& in, twinoaks::commonmodule::DEL& out);

void convert_from_proto(const commonmodule::StatusDPS& in, twinoaks::commonmodule::StatusDPS& out);

// ---- implement the top level profile conversion routines ---

void convert_from_proto(const essmodule::ESSControlProfile& in, twinoaks::essmodule::ESSControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.esscontrol(), out.essControl); // required field in DDS

    convert_from_proto(in.ied(), out.ied); // required field in DDS
}

void convert_from_proto(const essmodule::ESSStatusProfile& in, twinoaks::essmodule::ESSStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.essstatus(), out.essStatus); // required field in DDS

    convert_from_proto(in.ied(), out.ied); // required field in DDS
}

void convert_from_proto(const essmodule::ESSReadingProfile& in, twinoaks::essmodule::ESSReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ess(), out.ess); // required field in DDS

    convert_from_proto(in.essreading(), out.essReading); // required field in DDS

    convert_from_proto(in.ied(), out.ied); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarReadingProfile& in, twinoaks::solarmodule::SolarReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS

    convert_from_proto(in.solarreading(), out.solarReading); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarStatusProfile& in, twinoaks::solarmodule::SolarStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS

    convert_from_proto(in.solarstatus(), out.solarStatus); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadReadingProfile& in, twinoaks::loadmodule::LoadReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.loadreading(), out.loadReading); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarControlProfile& in, twinoaks::solarmodule::SolarControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.solarcontrol(), out.solarControl); // required field in DDS

    convert_from_proto(in.solarinverter(), out.solarInverter); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchControlProfile& in, twinoaks::switchmodule::SwitchControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    convert_from_proto(in.switchcontrol(), out.switchControl); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, twinoaks::switchmodule::SwitchReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    for(const auto& input : in.switchreading())
    {
        twinoaks::switchmodule::SwitchReading ouput;
        convert_from_proto(input, ouput);
        out.switchReading.push_back(ouput);
    }
}

void convert_from_proto(const loadmodule::LoadControlProfile& in, twinoaks::loadmodule::LoadControlProfile& out)
{
    out.clear();

    if(in.has_controlmessageinfo()) convert_from_proto(in.controlmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.loadcontrol(), out.loadControl); // required field in DDS
}

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, twinoaks::resourcemodule::ResourceReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.meter(), out.meter); // required field in DDS

    convert_from_proto(in.resourcereading(), out.resourceReading); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchStatusProfile& in, twinoaks::switchmodule::SwitchStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.protectedswitch(), out.protectedSwitch); // required field in DDS

    convert_from_proto(in.switchstatus(), out.switchStatus); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadStatusProfile& in, twinoaks::loadmodule::LoadStatusProfile& out)
{
    out.clear();

    if(in.has_statusmessageinfo()) convert_from_proto(in.statusmessageinfo(), out); // inherited type

    convert_from_proto(in.energyconsumer(), out.energyConsumer); // required field in DDS

    convert_from_proto(in.ied(), out.ied); // required field in DDS

    convert_from_proto(in.loadstatus(), out.loadStatus); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out)
{
    out.clear();

    out.fraction = in.fraction(); // required UINT32 primitive

    out.seconds = in.seconds(); // required UINT64 primitive

    if(in.has_tq()) // optional field in DDS
    {
        out.tq = new twinoaks::commonmodule::TimeQuality();
        convert_from_proto(in.tq(), *out.tq);
    }
}

void convert_from_proto(const loadmodule::LoadControlScheduleFSCH& in, twinoaks::loadmodule::LoadControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
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

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.clear();

    convert_from_proto(in.terminal(), out.terminal); // required field in DDS
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

void convert_from_proto(const loadmodule::LoadStatus& in, twinoaks::loadmodule::LoadStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.loadstatuszgld(), out.loadStatusZGLD); // required field in DDS
}

void convert_from_proto(const commonmodule::ENS_HealthKind& in, twinoaks::commonmodule::ENS_HealthKind& out)
{
    out.clear();

    if(in.has_d()) out.d = allocate_cstring(in.d().value()); // optional string

    out.stVal = static_cast<twinoaks::commonmodule::HealthKind>(in.stval());
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

void convert_from_proto(const commonmodule::ScheduleCSG& in, twinoaks::commonmodule::ScheduleCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::commonmodule::SchedulePoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }

    if(in.has_xd()) out.xD = allocate_cstring(in.xd().value()); // optional string

    if(in.has_xdu()) out.xDU = allocate_cstring(in.xdu().value()); // optional string

    if(in.has_yd()) out.yD = allocate_cstring(in.yd().value()); // optional string

    if(in.has_ydu()) out.yDU = allocate_cstring(in.ydu().value()); // optional string

    convert_from_proto(in.yunits(), out.yUnits); // required field in DDS

    if(in.has_zd()) out.zD = allocate_cstring(in.zd().value()); // optional string

    if(in.has_zdu()) out.zDU = allocate_cstring(in.zdu().value()); // optional string

    if(in.has_zunits()) // optional field in DDS
    {
        out.zUnits = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.zunits(), *out.zUnits);
    }
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

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out)
{
    out.clear();

    if(in.has_acdcterminal()) convert_from_proto(in.acdcterminal(), out); // inherited type

//    out.phases = static_cast<twinoaks::commonmodule::PhaseCodeKind>(in.phases());
}

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out)
{
    out.clear();

    out.actVal = in.actval(); // required INT64 primitive

    convert_from_proto(in.q(), out.q); // required field in DDS

    convert_from_proto(in.t(), out.t); // required field in DDS

//    out.units = static_cast<twinoaks::commonmodule::UnitSymbolKind>(in.units());
}

void convert_from_proto(const essmodule::ESSControlScheduleFSCH& in, twinoaks::essmodule::ESSControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
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

void convert_from_proto(const essmodule::ENG_ESSFunctionParameter& in, twinoaks::essmodule::ENG_ESSFunctionParameter& out)
{
    out.clear();

    out.functionParameterType = static_cast<twinoaks::essmodule::ESSFunctionParameterKind>(in.name());

    convert_from_proto(in.unit(), out.unit); // required field in DDS

    out.value = in.value(); // required INT32 primitive
}

void convert_from_proto(const commonmodule::IED& in, twinoaks::commonmodule::IED& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::ENG_GridConnectModeKind& in, twinoaks::commonmodule::ENG_GridConnectModeKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::commonmodule::GridConnectModeKind>(in.setval());

    if(in.has_setvalextension()) out.setValExtension = allocate_cstring(in.setvalextension().value()); // optional string
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
}

void convert_from_proto(const switchmodule::SwitchControlScheduleFSCH& in, twinoaks::switchmodule::SwitchControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
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

void convert_from_proto(const commonmodule::AnalogueValue& in, twinoaks::commonmodule::AnalogueValue& out)
{
    out.clear();

    if(in.has_f())
    {
        out.f = allocate_from_wrapper_type(in.f());
    }

    if(in.has_i())
    {
        out.i = allocate_from_wrapper_type(in.i());
    }
}

void convert_from_proto(const commonmodule::ControlTimestamp& in, twinoaks::commonmodule::ControlTimestamp& out)
{
    out.clear();

    out.fraction = in.fraction(); // required UINT32 primitive

    out.seconds = in.seconds(); // required UINT64 primitive
}

void convert_from_proto(const commonmodule::StatusMessageInfo& in, twinoaks::commonmodule::StatusMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const solarmodule::SolarControlScheduleFSCH& in, twinoaks::solarmodule::SolarControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valdcsg(), out.ValDCSG); // required field in DDS
}

void convert_from_proto(const loadmodule::LoadStatusZGLD& in, twinoaks::loadmodule::LoadStatusZGLD& out)
{
    out.clear();

    if(in.has_loadeventandstatuszgld()) convert_from_proto(in.loadeventandstatuszgld(), out); // inherited type
}

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out)
{
    out.clear();

    if(in.has_ang()) // optional field in DDS
    {
        out.ang = new twinoaks::commonmodule::AnalogueValue();
        convert_from_proto(in.ang(), *out.ang);
    }

    convert_from_proto(in.mag(), out.mag); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarStatus& in, twinoaks::solarmodule::SolarStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.solarstatuszgen(), out.solarStatusZGEN); // required field in DDS
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

    convert_from_proto(in.esscontrolfscc(), out.essControlFSCC); // required field in DDS
}

void convert_from_proto(const commonmodule::LogicalNodeForControl& in, twinoaks::commonmodule::LogicalNodeForControl& out)
{
    out.clear();

    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
}

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    convert_from_proto(in.messagetimestamp(), out.messageTimeStamp); // required field in DDS
}

void convert_from_proto(const solarmodule::SolarInverter& in, twinoaks::solarmodule::SolarInverter& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
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

void convert_from_proto(const essmodule::ESSStatusZGEN& in, twinoaks::essmodule::ESSStatusZGEN& out)
{
    out.clear();

    if(in.has_esseventandstatuszgen()) convert_from_proto(in.esseventandstatuszgen(), out); // inherited type
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

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out)
{
    out.clear();

//    out.multiplier = static_cast<twinoaks::commonmodule::UnitMultiplierKind>(in.multiplier());

    out.SIUnit = static_cast<twinoaks::commonmodule::UnitSymbolKind>(in.siunit());
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
        out.function = new twinoaks::essmodule::ENG_ESSFunctionKind();
        convert_from_proto(in.function(), *out.function);
    }

    for(const auto& input : in.functionparameter())
    {
        twinoaks::essmodule::ENG_ESSFunctionParameter ouput;
        convert_from_proto(input, ouput);
        out.functionParameter.push_back(ouput);
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

    convert_from_proto(in.xval(), out.xVal); // required field in DDS
}

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const solarmodule::SolarPointStatus& in, twinoaks::solarmodule::SolarPointStatus& out)
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

    out.state = new twinoaks::commonmodule::StateKind(static_cast<twinoaks::commonmodule::StateKind>(in.state().value())); // optional enum

    if(in.has_voltagesetpointenabled()) // optional field in DDS
    {
        out.voltageSetPointEnabled = new twinoaks::commonmodule::ControlDPC();
        convert_from_proto(in.voltagesetpointenabled(), *out.voltageSetPointEnabled);
    }
}

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
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

    convert_from_proto(in.xval(), out.xVal); // required field in DDS
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

void convert_from_proto(const commonmodule::StatusValue& in, twinoaks::commonmodule::StatusValue& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
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

void convert_from_proto(const commonmodule::ControlValue& in, twinoaks::commonmodule::ControlValue& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type

    if(in.has_modblk())
    {
        out.modBlk = allocate_from_wrapper_type(in.modblk());
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

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out)
{
    out.clear();

    convert_from_proto(in.cval(), out.cVal); // required field in DDS

    convert_from_proto(in.q(), out.q); // required field in DDS

    convert_from_proto(in.t(), out.t); // required field in DDS

    if(in.has_units()) // optional field in DDS
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
    }
}

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::commonmodule::CalcMethodKind>(in.setval());
}

void convert_from_proto(const switchmodule::SwitchStatus& in, twinoaks::switchmodule::SwitchStatus& out)
{
    out.clear();

    if(in.has_statusvalue()) convert_from_proto(in.statusvalue(), out); // inherited type

    convert_from_proto(in.switchstatusxswi(), out.switchStatusXSWI); // required field in DDS
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

void convert_from_proto(const loadmodule::LoadControl& in, twinoaks::loadmodule::LoadControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    convert_from_proto(in.loadcontrolfscc(), out.loadControlFSCC); // required field in DDS
}

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out)
{
    out.clear();

    if(in.has_description()) out.description = allocate_cstring(in.description().value()); // optional string

    if(in.has_mrid()) out.mRID = allocate_cstring(in.mrid().value()); // optional string

    if(in.has_name()) out.name = allocate_cstring(in.name().value()); // optional string
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

void convert_from_proto(const commonmodule::EnergyConsumer& in, twinoaks::commonmodule::EnergyConsumer& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type

    if(in.has_operatinglimit()) out.operatingLimit = allocate_cstring(in.operatinglimit().value()); // optional string
}

void convert_from_proto(const switchmodule::SwitchPoint& in, twinoaks::switchmodule::SwitchPoint& out)
{
    out.clear();

    convert_from_proto(in.pos(), out.Pos); // required field in DDS

    convert_from_proto(in.xval(), out.xVal); // required field in DDS
}

void convert_from_proto(const switchmodule::SwitchControl& in, twinoaks::switchmodule::SwitchControl& out)
{
    out.clear();

    if(in.has_controlvalue()) convert_from_proto(in.controlvalue(), out); // inherited type

    if(in.has_check()) // optional field in DDS
    {
        out.check = new twinoaks::commonmodule::CheckConditions();
        convert_from_proto(in.check(), *out.check);
    }

    convert_from_proto(in.switchcontrolfscc(), out.SwitchControlFSCC); // required field in DDS
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

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out)
{
    out.clear();

    if(in.has_description()) out.description = allocate_cstring(in.description().value()); // optional string

    if(in.has_name()) out.name = allocate_cstring(in.name().value()); // optional string
}

void convert_from_proto(const switchmodule::SwitchControlFSCC& in, twinoaks::switchmodule::SwitchControlFSCC& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    if(in.has_switchcontrolschedulefsch()) // optional field in DDS
    {
        out.switchControlScheduleFSCH = new twinoaks::switchmodule::SwitchControlScheduleFSCH();
        convert_from_proto(in.switchcontrolschedulefsch(), *out.switchControlScheduleFSCH);
    }
}

void convert_from_proto(const commonmodule::ControlMessageInfo& in, twinoaks::commonmodule::ControlMessageInfo& out)
{
    out.clear();

    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::ControlDPC& in, twinoaks::commonmodule::ControlDPC& out)
{
    out.clear();

    static_assert(std::is_same<decltype(out.ctlVal), unsigned char>::value, "unexpected type");
    out.ctlVal = static_cast<unsigned char>(in.ctlval()); // required bool
}

void convert_from_proto(const commonmodule::ENS_DynamicTestKind& in, twinoaks::commonmodule::ENS_DynamicTestKind& out)
{
    out.clear();

    convert_from_proto(in.q(), out.q); // required field in DDS

    out.stVal = static_cast<twinoaks::commonmodule::DynamicTestKind>(in.stval());

    convert_from_proto(in.t(), out.t); // required field in DDS
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

void convert_from_proto(const commonmodule::ControlScheduleFSCH& in, twinoaks::commonmodule::ControlScheduleFSCH& out)
{
    out.clear();

    convert_from_proto(in.valacsg(), out.ValACSG); // required field in DDS
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

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out)
{
    out.clear();

    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::ENS_BehaviourModeKind& in, twinoaks::commonmodule::ENS_BehaviourModeKind& out)
{
    out.clear();

    convert_from_proto(in.q(), out.q); // required field in DDS

    out.stVal = static_cast<twinoaks::commonmodule::BehaviourModeKind>(in.stval());

    convert_from_proto(in.t(), out.t); // required field in DDS
}

void convert_from_proto(const commonmodule::ControlFSCC& in, twinoaks::commonmodule::ControlFSCC& out)
{
    out.clear();

    if(in.has_logicalnodeforcontrol()) convert_from_proto(in.logicalnodeforcontrol(), out); // inherited type

    for(const auto& input : in.controlschedulefsch())
    {
        twinoaks::commonmodule::ControlScheduleFSCH ouput;
        convert_from_proto(input, ouput);
        out.controlScheduleFSCH.push_back(ouput);
    }
}

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out)
{
    out.clear();

    convert_from_proto(in.mag(), out.mag); // required field in DDS

    convert_from_proto(in.q(), out.q); // required field in DDS

    convert_from_proto(in.t(), out.t); // required field in DDS

    if(in.has_units()) // optional field in DDS
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
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

    convert_from_proto(in.xval(), out.xVal); // required field in DDS
}

void convert_from_proto(const essmodule::ENG_ESSFunctionKind& in, twinoaks::essmodule::ENG_ESSFunctionKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::essmodule::ESSFunctionKind>(in.setval());

    if(in.has_setvalextension()) out.setValExtension = allocate_cstring(in.setvalextension().value()); // optional string
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

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out)
{
    out.clear();

    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type

    out.mRID = allocate_cstring(in.mrid()); // required string
}

void convert_from_proto(const commonmodule::ESS& in, twinoaks::commonmodule::ESS& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
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

void convert_from_proto(const commonmodule::SchedulePoint& in, twinoaks::commonmodule::SchedulePoint& out)
{
    out.clear();

    convert_from_proto(in.xval(), out.xVal); // required field in DDS

    out.yVal = in.yval(); // required FLOAT primitive

    if(in.has_zval())
    {
        out.zVal = allocate_from_wrapper_type(in.zval());
    }
}

void convert_from_proto(const switchmodule::ProtectedSwitch& in, twinoaks::switchmodule::ProtectedSwitch& out)
{
    out.clear();

    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
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

void convert_from_proto(const switchmodule::SwitchStatusXSWI& in, twinoaks::switchmodule::SwitchStatusXSWI& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    if(in.has_dynamictest()) // optional field in DDS
    {
        out.DynamicTest = new twinoaks::commonmodule::ENS_DynamicTestKind();
        convert_from_proto(in.dynamictest(), *out.DynamicTest);
    }

    convert_from_proto(in.pos(), out.Pos); // required field in DDS
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

void convert_from_proto(const essmodule::ESSPointStatus& in, twinoaks::essmodule::ESSPointStatus& out)
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
        out.function = new twinoaks::essmodule::ENG_ESSFunctionKind();
        convert_from_proto(in.function(), *out.function);
    }

    if(in.has_functionparameter()) // optional field in DDS
    {
        out.functionParameter = new twinoaks::essmodule::ENG_ESSFunctionParameter();
        convert_from_proto(in.functionparameter(), *out.functionParameter);
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
}

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out)
{
    out.clear();

    out.setVal = static_cast<twinoaks::commonmodule::PFSignKind>(in.setval());
}

void convert_from_proto(const switchmodule::SwitchCSG& in, twinoaks::switchmodule::SwitchCSG& out)
{
    out.clear();

    for(const auto& input : in.crvpts())
    {
        twinoaks::switchmodule::SwitchPoint ouput;
        convert_from_proto(input, ouput);
        out.crvPts.push_back(ouput);
    }
}

void convert_from_proto(const essmodule::EssStatusZBAT& in, twinoaks::essmodule::EssStatusZBAT& out)
{
    out.clear();

    if(in.has_logicalnodeforeventandstatus()) convert_from_proto(in.logicalnodeforeventandstatus(), out); // inherited type

    convert_from_proto(in.batst(), out.BatSt); // required field in DDS

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

void convert_from_proto(const commonmodule::StatusDPS& in, twinoaks::commonmodule::StatusDPS& out)
{
    out.clear();

    convert_from_proto(in.q(), out.q); // required field in DDS

//    out.stVal = static_cast<twinoaks::commonmodule::DbPosKind>(in.stval());

    convert_from_proto(in.t(), out.t); // required field in DDS
}

// ---- static assertions related to enums
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_DIFF) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_DIFF), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_none) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_OK) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_OK), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_Warning) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_Warning), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::HealthKind::HealthKind_Alarm) == static_cast<int>(twinoaks::commonmodule::HealthKind::HealthKind_Alarm), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_CSI) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_CSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VC_VSI) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VC_VSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_CC_VSI) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_CC_VSI), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_none) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_other) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_PQ) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_PQ), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_VF) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_VF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_ISO) == static_cast<int>(twinoaks::commonmodule::GridConnectModeKind::GridConnectModeKind_VSI_ISO), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_good) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_good), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_invalid) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_invalid), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_reserved) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_reserved), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_questionable) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_questionable), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_IEC) == static_cast<int>(twinoaks::commonmodule::PFSignKind::PFSignKind_IEC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_EEI) == static_cast<int>(twinoaks::commonmodule::PFSignKind::PFSignKind_EEI), "mismatched enum values");

static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_none) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_none), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_other) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_other), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_capacityFirming) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_capacityFirming), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_frequencyRegulation) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_frequencyRegulation), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_peakShaving) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_peakShaving), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_socLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_socLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_socManagement) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_socManagement), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_voltageDroop) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_voltageDroop), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionKind::ESSFunctionKind_voltagePI) == static_cast<int>(twinoaks::essmodule::ESSFunctionKind::ESSFunctionKind_voltagePI), "mismatched enum values");

static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_none) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_none), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_other) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_other), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socHighLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socHighLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socLowLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socLowLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socHighLimitHysteresis) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socHighLimitHysteresis), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socLowLimitHysteresis) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socLowLimitHysteresis), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_frequencySetPoint) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_frequencySetPoint), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_frequencyDeadBandPlus) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_frequencyDeadBandPlus), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_frequencyDeadBandMinus) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_frequencyDeadBandMinus), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_overFrequencyDroop) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_overFrequencyDroop), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_underFrequencyDroop) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_underFrequencyDroop), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_gridFrequencyStableBandPlus) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_gridFrequencyStableBandPlus), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_gridFrequencyStableBandMinus) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_gridFrequencyStableBandMinus), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageSetPointHighWord) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageSetPointHighWord), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageSetPointLowWord) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageSetPointLowWord), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandPlusHighWord) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandPlusHighWord), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandPlusLowWord) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandPlusLowWord), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandMinusHighWord) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandMinusHighWord), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandMinusLowWord) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_voltageDeadBandMinusLowWord), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_overVoltageDroop) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_overVoltageDroop), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_underVoltageDroop) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_underVoltageDroop), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_peakShavingLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_peakShavingLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_baseShavingLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_baseShavingLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socManagementAllowedHighLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socManagementAllowedHighLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socManagementAllowedLowLimit) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socManagementAllowedLowLimit), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_limitPositive_dp_dt) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_limitPositive_dp_dt), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_limitNegative_dp_dt) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_limitNegative_dp_dt), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socSetPoint) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socSetPoint), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socDeadBandPlus) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socDeadBandPlus), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socDeadBandMinus) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socDeadBandMinus), "mismatched enum values");
static_assert(static_cast<int>(essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socPowerSetPoint) == static_cast<int>(twinoaks::essmodule::ESSFunctionParameterKind::ESSFunctionParameterKind_socPowerSetPoint), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_on) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_blocked) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_test) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_test), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_test_blocked) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_test_blocked), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::BehaviourModeKind::BehaviourModeKind_off) == static_cast<int>(twinoaks::commonmodule::BehaviourModeKind::BehaviourModeKind_off), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_transient) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_transient), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_closed) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_closed), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_open) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_open), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DbPosKind::DbPosKind_invalid) == static_cast<int>(twinoaks::commonmodule::DbPosKind::DbPosKind_invalid), "mismatched enum values");

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

static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_none) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_testing) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_testing), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_operating) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_operating), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::DynamicTestKind::DynamicTestKind_failed) == static_cast<int>(twinoaks::commonmodule::DynamicTestKind::DynamicTestKind_failed), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::StateKind::StateKind_off) == static_cast<int>(twinoaks::commonmodule::StateKind::StateKind_off), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_on) == static_cast<int>(twinoaks::commonmodule::StateKind::StateKind_on), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::StateKind::StateKind_standby) == static_cast<int>(twinoaks::commonmodule::StateKind::StateKind_standby), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_process) == static_cast<int>(twinoaks::commonmodule::SourceKind::SourceKind_process), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_substituted) == static_cast<int>(twinoaks::commonmodule::SourceKind::SourceKind_substituted), "mismatched enum values");

} // end namespace dds

} // end namespace adapter
