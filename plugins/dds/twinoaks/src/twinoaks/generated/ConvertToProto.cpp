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

void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out);

void convert_to_proto(const twinoaks::commonmodule::ControlTimestamp& in, commonmodule::ControlTimestamp& out);

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControlFSCC& in, loadmodule::LoadControlFSCC& out);

void convert_to_proto(const twinoaks::commonmodule::ScheduleCSG& in, commonmodule::ScheduleCSG& out);

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out);

void convert_to_proto(const twinoaks::commonmodule::ControlDPC& in, commonmodule::ControlDPC& out);

void convert_to_proto(const twinoaks::loadmodule::LoadPointStatus& in, loadmodule::LoadPointStatus& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchControl& in, switchmodule::SwitchControl& out);

void convert_to_proto(const twinoaks::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_GridConnectModeKind& in, commonmodule::ENG_GridConnectModeKind& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForEventAndStatus& in, commonmodule::LogicalNodeForEventAndStatus& out);

void convert_to_proto(const twinoaks::solarmodule::SolarReading& in, solarmodule::SolarReading& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out);

void convert_to_proto(const twinoaks::commonmodule::DetailQual& in, commonmodule::DetailQual& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_ScheduleParameter& in, commonmodule::ENG_ScheduleParameter& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControlScheduleFSCH& in, loadmodule::LoadControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::commonmodule::SwitchCSG& in, commonmodule::SwitchCSG& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForControl& in, commonmodule::LogicalNodeForControl& out);

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out);

void convert_to_proto(const twinoaks::essmodule::ESSPoint& in, essmodule::ESSPoint& out);

void convert_to_proto(const twinoaks::essmodule::SOCManagement& in, essmodule::SOCManagement& out);

void convert_to_proto(const twinoaks::loadmodule::LoadStatus& in, loadmodule::LoadStatus& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControlFSCC& in, solarmodule::SolarControlFSCC& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out);

void convert_to_proto(const twinoaks::solarmodule::SolarInverter& in, solarmodule::SolarInverter& out);

void convert_to_proto(const twinoaks::metermodule::MeterReading& in, metermodule::MeterReading& out);

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out);

void convert_to_proto(const twinoaks::essmodule::ESSPointStatus& in, essmodule::ESSPointStatus& out);

void convert_to_proto(const twinoaks::essmodule::ESSControlScheduleFSCH& in, essmodule::ESSControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::solarmodule::SolarStatus& in, solarmodule::SolarStatus& out);

void convert_to_proto(const twinoaks::essmodule::SocLimit& in, essmodule::SocLimit& out);

void convert_to_proto(const twinoaks::essmodule::ESSStatus& in, essmodule::ESSStatus& out);

void convert_to_proto(const twinoaks::essmodule::EssControlFSCC& in, essmodule::EssControlFSCC& out);

void convert_to_proto(const twinoaks::essmodule::PeakShaving& in, essmodule::PeakShaving& out);

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out);

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out);

void convert_to_proto(const twinoaks::commonmodule::StatusSPS& in, commonmodule::StatusSPS& out);

void convert_to_proto(const twinoaks::solarmodule::SolarPoint& in, solarmodule::SolarPoint& out);

void convert_to_proto(const twinoaks::essmodule::ESSFunction& in, essmodule::ESSFunction& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out);

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out);

void convert_to_proto(const twinoaks::commonmodule::CheckConditions& in, commonmodule::CheckConditions& out);

void convert_to_proto(const twinoaks::loadmodule::LoadEventAndStatusZGLD& in, loadmodule::LoadEventAndStatusZGLD& out);

void convert_to_proto(const twinoaks::commonmodule::ENS_DynamicTestKind& in, commonmodule::ENS_DynamicTestKind& out);

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out);

void convert_to_proto(const twinoaks::loadmodule::LoadPoint& in, loadmodule::LoadPoint& out);

void convert_to_proto(const twinoaks::commonmodule::ENS_BehaviourModeKind& in, commonmodule::ENS_BehaviourModeKind& out);

void convert_to_proto(const twinoaks::essmodule::ESSReading& in, essmodule::ESSReading& out);

void convert_to_proto(const twinoaks::essmodule::VoltageRegulation& in, essmodule::VoltageRegulation& out);

void convert_to_proto(const twinoaks::commonmodule::ESS& in, commonmodule::ESS& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControl& in, breakermodule::BreakerDiscreteControl& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusXSWI& in, switchmodule::SwitchStatusXSWI& out);

void convert_to_proto(const twinoaks::essmodule::EssStatusZBAT& in, essmodule::EssStatusZBAT& out);

void convert_to_proto(const twinoaks::solarmodule::SolarStatusZGEN& in, solarmodule::SolarStatusZGEN& out);

void convert_to_proto(const twinoaks::essmodule::CapacityFirming& in, essmodule::CapacityFirming& out);

void convert_to_proto(const twinoaks::switchmodule::ProtectedSwitch& in, switchmodule::ProtectedSwitch& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchControlFSCC& in, switchmodule::SwitchControlFSCC& out);

void convert_to_proto(const twinoaks::loadmodule::LoadStatusZGLD& in, loadmodule::LoadStatusZGLD& out);

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out);

void convert_to_proto(const twinoaks::solarmodule::SolarEventAndStatusZGEN& in, solarmodule::SolarEventAndStatusZGEN& out);

void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out);

void convert_to_proto(const twinoaks::commonmodule::ENS_HealthKind& in, commonmodule::ENS_HealthKind& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControlScheduleFSCH& in, solarmodule::SolarControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::commonmodule::IED& in, commonmodule::IED& out);

void convert_to_proto(const twinoaks::loadmodule::LoadReading& in, loadmodule::LoadReading& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchReading& in, switchmodule::SwitchReading& out);

void convert_to_proto(const twinoaks::commonmodule::StatusMessageInfo& in, commonmodule::StatusMessageInfo& out);

void convert_to_proto(const twinoaks::essmodule::ESSStatusZGEN& in, essmodule::ESSStatusZGEN& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControl& in, solarmodule::SolarControl& out);

void convert_to_proto(const twinoaks::essmodule::VoltagePI& in, essmodule::VoltagePI& out);

void convert_to_proto(const twinoaks::essmodule::ESSEventAndStatusZGEN& in, essmodule::ESSEventAndStatusZGEN& out);

void convert_to_proto(const twinoaks::solarmodule::SolarPointStatus& in, solarmodule::SolarPointStatus& out);

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::StatusAndEventXCBR& in, commonmodule::StatusAndEventXCBR& out);

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out);

void convert_to_proto(const twinoaks::commonmodule::StatusValue& in, commonmodule::StatusValue& out);

void convert_to_proto(const twinoaks::commonmodule::ControlValue& in, commonmodule::ControlValue& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControl& in, loadmodule::LoadControl& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchStatus& in, switchmodule::SwitchStatus& out);

void convert_to_proto(const twinoaks::commonmodule::EnergyConsumer& in, commonmodule::EnergyConsumer& out);

void convert_to_proto(const twinoaks::essmodule::FrequencyRegulation& in, essmodule::FrequencyRegulation& out);

void convert_to_proto(const twinoaks::loadmodule::LoadCSG& in, loadmodule::LoadCSG& out);

void convert_to_proto(const twinoaks::essmodule::ESSCSG& in, essmodule::ESSCSG& out);

void convert_to_proto(const twinoaks::commonmodule::ControlMessageInfo& in, commonmodule::ControlMessageInfo& out);

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out);

void convert_to_proto(const twinoaks::commonmodule::ControlScheduleFSCH& in, commonmodule::ControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::commonmodule::RampRate& in, commonmodule::RampRate& out);

void convert_to_proto(const twinoaks::commonmodule::ControlFSCC& in, commonmodule::ControlFSCC& out);

void convert_to_proto(const twinoaks::essmodule::ESSControl& in, essmodule::ESSControl& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out);

void convert_to_proto(const twinoaks::commonmodule::SwitchControlScheduleFSCH& in, commonmodule::SwitchControlScheduleFSCH& out);

void convert_to_proto(const twinoaks::commonmodule::SwitchPoint& in, commonmodule::SwitchPoint& out);

void convert_to_proto(const twinoaks::commonmodule::SchedulePoint& in, commonmodule::SchedulePoint& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerStatus& in, breakermodule::BreakerStatus& out);

void convert_to_proto(const twinoaks::commonmodule::Quality& in, commonmodule::Quality& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCSG& in, solarmodule::SolarCSG& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlXCBR& in, breakermodule::BreakerDiscreteControlXCBR& out);

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out);

void convert_to_proto(const twinoaks::essmodule::VoltageDroop& in, essmodule::VoltageDroop& out);

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out);

void convert_to_proto(const twinoaks::commonmodule::StatusDPS& in, commonmodule::StatusDPS& out);

// ---- implement the top level profile conversion routines ---

void convert_to_proto(const twinoaks::essmodule::ESSControlProfile& in, essmodule::ESSControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essControl, *out.mutable_esscontrol()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSReadingProfile& in, essmodule::ESSReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essReading, *out.mutable_essreading()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadStatusProfile& in, loadmodule::LoadStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadStatus, *out.mutable_loadstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusProfile& in, switchmodule::SwitchStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchStatus, *out.mutable_switchstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::breakermodule::BreakerStatusProfile& in, breakermodule::BreakerStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerStatus, *out.mutable_breakerstatus()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSStatusProfile& in, essmodule::ESSStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ess, *out.mutable_ess()); // required field in DDS

    convert_to_proto(in.essStatus, *out.mutable_essstatus()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarStatusProfile& in, solarmodule::SolarStatusProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS

    convert_to_proto(in.solarStatus, *out.mutable_solarstatus()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadReadingProfile& in, loadmodule::LoadReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadReading, *out.mutable_loadreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarReadingProfile& in, solarmodule::SolarReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS

    convert_to_proto(in.solarReading, *out.mutable_solarreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlProfile& in, breakermodule::BreakerDiscreteControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS

    convert_to_proto(in.breakerDiscreteControl, *out.mutable_breakerdiscretecontrol()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const twinoaks::loadmodule::LoadControlProfile& in, loadmodule::LoadControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.energyConsumer, *out.mutable_energyconsumer()); // required field in DDS

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.loadControl, *out.mutable_loadcontrol()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchReadingProfile& in, switchmodule::SwitchReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    for(decltype(in.switchReading.length()) i = 0; i < in.switchReading.length(); ++i)
    {
        convert_to_proto(in.switchReading.at(i), *out.mutable_switchreading()->Add());
    }
}

void convert_to_proto(const twinoaks::metermodule::MeterReadingProfile& in, metermodule::MeterReadingProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.meter, *out.mutable_meter()); // required field in DDS

    convert_to_proto(in.meterReading, *out.mutable_meterreading()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarControlProfile& in, solarmodule::SolarControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.solarControl, *out.mutable_solarcontrol()); // required field in DDS

    convert_to_proto(in.solarInverter, *out.mutable_solarinverter()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchControlProfile& in, switchmodule::SwitchControlProfile& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlmessageinfo()); // inherited type

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS

    convert_to_proto(in.protectedSwitch, *out.mutable_protectedswitch()); // required field in DDS

    convert_to_proto(in.switchControl, *out.mutable_switchcontrol()); // required field in DDS
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

    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out)
{
    out.Clear();

    if(in.net) convert_to_proto(*in.net, *out.mutable_net());

    if(in.neut) convert_to_proto(*in.neut, *out.mutable_neut());

    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());

    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());

    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::ControlTimestamp& in, commonmodule::ControlTimestamp& out)
{
    out.Clear();

    out.set_fraction(in.fraction);

    out.set_seconds(in.seconds);
}

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out)
{
    out.Clear();

    out.set_clockfailure(in.clockFailure);

    out.set_clocknotsynchronized(in.clockNotSynchronized);

    out.set_leapsecondsknown(in.leapSecondsKnown);

    out.set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(in.timeAccuracy));
}

void convert_to_proto(const twinoaks::loadmodule::LoadControlFSCC& in, loadmodule::LoadControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.loadControlScheduleFSCH) convert_to_proto(*in.loadControlScheduleFSCH, *out.mutable_loadcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::commonmodule::ScheduleCSG& in, commonmodule::ScheduleCSG& out)
{
    out.Clear();

    for(decltype(in.schPts.length()) i = 0; i < in.schPts.length(); ++i)
    {
        convert_to_proto(in.schPts.at(i), *out.mutable_schpts()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out)
{
    out.Clear();

    convert_to_proto(in.cVal, *out.mutable_cval()); // required field in DDS

    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS

    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS

    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const twinoaks::commonmodule::ControlDPC& in, commonmodule::ControlDPC& out)
{
    out.Clear();

    out.set_ctlval(in.ctlVal);
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

void convert_to_proto(const twinoaks::switchmodule::SwitchControl& in, switchmodule::SwitchControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    convert_to_proto(in.SwitchControlFSCC, *out.mutable_switchcontrolfscc()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out)
{
    out.Clear();

    if(in.f) out.mutable_f()->set_value(*in.f);

    if(in.i) out.mutable_i()->set_value(*in.i);
}

void convert_to_proto(const twinoaks::commonmodule::ENG_GridConnectModeKind& in, commonmodule::ENG_GridConnectModeKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::GridConnectModeKind>(in.setVal));

    if(in.setValExtension) out.mutable_setvalextension()->set_value(in.setValExtension);
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForEventAndStatus& in, commonmodule::LogicalNodeForEventAndStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type

    if(in.Beh) convert_to_proto(*in.Beh, *out.mutable_beh());

    if(in.EEHealth) convert_to_proto(*in.EEHealth, *out.mutable_eehealth());
}

void convert_to_proto(const twinoaks::solarmodule::SolarReading& in, solarmodule::SolarReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
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

void convert_to_proto(const twinoaks::commonmodule::ENG_ScheduleParameter& in, commonmodule::ENG_ScheduleParameter& out)
{
    out.Clear();

    out.set_scheduleparametertype(static_cast<commonmodule::ScheduleParameterKind>(in.scheduleParameterType));

    out.set_value(in.value);
}

void convert_to_proto(const twinoaks::loadmodule::LoadControlScheduleFSCH& in, loadmodule::LoadControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::SwitchCSG& in, commonmodule::SwitchCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNodeForControl& in, commonmodule::LogicalNodeForControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    convert_to_proto(in.messageTimeStamp, *out.mutable_messagetimestamp()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSPoint& in, essmodule::ESSPoint& out)
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

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.syncBackToGrid) convert_to_proto(*in.syncBackToGrid, *out.mutable_syncbacktogrid());

    if(in.transToIslndOnGridLossEnabled) convert_to_proto(*in.transToIslndOnGridLossEnabled, *out.mutable_transtoislndongridlossenabled());

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
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

void convert_to_proto(const twinoaks::loadmodule::LoadStatus& in, loadmodule::LoadStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    convert_to_proto(in.loadStatusZGLD, *out.mutable_loadstatuszgld()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarControlFSCC& in, solarmodule::SolarControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.SolarControlScheduleFSCH) convert_to_proto(*in.SolarControlScheduleFSCH, *out.mutable_solarcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const twinoaks::solarmodule::SolarInverter& in, solarmodule::SolarInverter& out)
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

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out)
{
    out.Clear();

    out.set_actval(in.actVal);

    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS

    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS

    if(in.units) out.mutable_units()->set_value(static_cast<commonmodule::UnitSymbolKind>(*in.units));  // wrapped optional enum
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
}

void convert_to_proto(const twinoaks::essmodule::ESSControlScheduleFSCH& in, essmodule::ESSControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::solarmodule::SolarStatus& in, solarmodule::SolarStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    convert_to_proto(in.solarStatusZGEN, *out.mutable_solarstatuszgen()); // required field in DDS
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

void convert_to_proto(const twinoaks::essmodule::ESSStatus& in, essmodule::ESSStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    if(in.essStatusZBAT) convert_to_proto(*in.essStatusZBAT, *out.mutable_essstatuszbat());

    if(in.essStatusZGEN) convert_to_proto(*in.essStatusZGEN, *out.mutable_essstatuszgen());
}

void convert_to_proto(const twinoaks::essmodule::EssControlFSCC& in, essmodule::EssControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlfscc()); // inherited type

    if(in.essControlScheduleFSCH) convert_to_proto(*in.essControlScheduleFSCH, *out.mutable_esscontrolschedulefsch());
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

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out)
{
    out.Clear();

    if(in.ang) convert_to_proto(*in.ang, *out.mutable_ang());

    convert_to_proto(in.mag, *out.mutable_mag()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_acdcterminal()); // inherited type

    if(in.phases) out.mutable_phases()->set_value(static_cast<commonmodule::PhaseCodeKind>(*in.phases));  // wrapped optional enum
}

void convert_to_proto(const twinoaks::commonmodule::StatusSPS& in, commonmodule::StatusSPS& out)
{
    out.Clear();

    if(in.q) convert_to_proto(*in.q, *out.mutable_q());

    out.set_stval(in.stVal);

    if(in.t) convert_to_proto(*in.t, *out.mutable_t());
}

void convert_to_proto(const twinoaks::solarmodule::SolarPoint& in, solarmodule::SolarPoint& out)
{
    out.Clear();

    if(in.frequencySetPointEnabled) convert_to_proto(*in.frequencySetPointEnabled, *out.mutable_frequencysetpointenabled());

    if(in.mode) convert_to_proto(*in.mode, *out.mutable_mode());

    if(in.pctHzDroop) out.mutable_pcthzdroop()->set_value(*in.pctHzDroop);

    if(in.pctVDroop) out.mutable_pctvdroop()->set_value(*in.pctVDroop);

    if(in.rampRates) convert_to_proto(*in.rampRates, *out.mutable_ramprates());

    if(in.reactivePwrSetPointEnabled) convert_to_proto(*in.reactivePwrSetPointEnabled, *out.mutable_reactivepwrsetpointenabled());

    if(in.realPwrSetPointEnabled) convert_to_proto(*in.realPwrSetPointEnabled, *out.mutable_realpwrsetpointenabled());

    if(in.reset) convert_to_proto(*in.reset, *out.mutable_reset());

    if(in.state) out.mutable_state()->set_value(static_cast<commonmodule::StateKind>(*in.state));  // wrapped optional enum

    if(in.voltageSetPointEnabled) convert_to_proto(*in.voltageSetPointEnabled, *out.mutable_voltagesetpointenabled());

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
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

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::CalcMethodKind>(in.setVal));
}

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out)
{
    out.Clear();

    if(in.multiplier) out.mutable_multiplier()->set_value(static_cast<commonmodule::UnitMultiplierKind>(*in.multiplier));  // wrapped optional enum

    out.set_siunit(static_cast<commonmodule::UnitSymbolKind>(in.SIUnit));
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

void convert_to_proto(const twinoaks::commonmodule::CheckConditions& in, commonmodule::CheckConditions& out)
{
    out.Clear();

    if(in.interlockCheck) out.mutable_interlockcheck()->set_value(*in.interlockCheck);

    if(in.synchroCheck) out.mutable_synchrocheck()->set_value(*in.synchroCheck);
}

void convert_to_proto(const twinoaks::loadmodule::LoadEventAndStatusZGLD& in, loadmodule::LoadEventAndStatusZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.EmgStop) convert_to_proto(*in.EmgStop, *out.mutable_emgstop());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());
}

void convert_to_proto(const twinoaks::commonmodule::ENS_DynamicTestKind& in, commonmodule::ENS_DynamicTestKind& out)
{
    out.Clear();

    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS

    out.set_stval(static_cast<commonmodule::DynamicTestKind>(in.stVal));

    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.connected) out.mutable_connected()->set_value(*in.connected);

    if(in.sequenceNumber) out.mutable_sequencenumber()->set_value(*in.sequenceNumber);
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

void convert_to_proto(const twinoaks::commonmodule::ENS_BehaviourModeKind& in, commonmodule::ENS_BehaviourModeKind& out)
{
    out.Clear();

    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS

    out.set_stval(static_cast<commonmodule::BehaviourModeKind>(in.stVal));

    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::ESSReading& in, essmodule::ESSReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
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

void convert_to_proto(const twinoaks::commonmodule::ESS& in, commonmodule::ESS& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
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

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControl& in, breakermodule::BreakerDiscreteControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    convert_to_proto(in.breakerDiscreteControlXCBR, *out.mutable_breakerdiscretecontrolxcbr()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusXSWI& in, switchmodule::SwitchStatusXSWI& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    convert_to_proto(in.Pos, *out.mutable_pos()); // required field in DDS
}

void convert_to_proto(const twinoaks::essmodule::EssStatusZBAT& in, essmodule::EssStatusZBAT& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    convert_to_proto(in.BatSt, *out.mutable_batst()); // required field in DDS

    if(in.GriMod) convert_to_proto(*in.GriMod, *out.mutable_grimod());

    if(in.Soc) convert_to_proto(*in.Soc, *out.mutable_soc());

    if(in.Stdby) convert_to_proto(*in.Stdby, *out.mutable_stdby());
}

void convert_to_proto(const twinoaks::solarmodule::SolarStatusZGEN& in, solarmodule::SolarStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_solareventandstatuszgen()); // inherited type

    if(in.GriMod) convert_to_proto(*in.GriMod, *out.mutable_grimod());
}

void convert_to_proto(const twinoaks::essmodule::CapacityFirming& in, essmodule::CapacityFirming& out)
{
    out.Clear();

    if(in.capacityFirmingCtl) out.mutable_capacityfirmingctl()->set_value(*in.capacityFirmingCtl);

    if(in.limitNegative_dp_dt) out.mutable_limitnegative_dp_dt()->set_value(*in.limitNegative_dp_dt);

    if(in.limitPositive_dp_dt) out.mutable_limitpositive_dp_dt()->set_value(*in.limitPositive_dp_dt);
}

void convert_to_proto(const twinoaks::switchmodule::ProtectedSwitch& in, switchmodule::ProtectedSwitch& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::switchmodule::SwitchControlFSCC& in, switchmodule::SwitchControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.switchControlScheduleFSCH) convert_to_proto(*in.switchControlScheduleFSCH, *out.mutable_switchcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::loadmodule::LoadStatusZGLD& in, loadmodule::LoadStatusZGLD& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_loadeventandstatuszgld()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out)
{
    out.Clear();

    convert_to_proto(in.mag, *out.mutable_mag()); // required field in DDS

    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS

    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS

    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const twinoaks::solarmodule::SolarEventAndStatusZGEN& in, solarmodule::SolarEventAndStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.AuxPwrSt) convert_to_proto(*in.AuxPwrSt, *out.mutable_auxpwrst());

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    if(in.EmgStop) convert_to_proto(*in.EmgStop, *out.mutable_emgstop());

    if(in.PointStatus) convert_to_proto(*in.PointStatus, *out.mutable_pointstatus());
}

void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out)
{
    out.Clear();

    out.set_fraction(in.fraction);

    out.set_seconds(in.seconds);

    if(in.tq) convert_to_proto(*in.tq, *out.mutable_tq());
}

void convert_to_proto(const twinoaks::commonmodule::ENS_HealthKind& in, commonmodule::ENS_HealthKind& out)
{
    out.Clear();

    if(in.d) out.mutable_d()->set_value(in.d);

    out.set_stval(static_cast<commonmodule::HealthKind>(in.stVal));
}

void convert_to_proto(const twinoaks::solarmodule::SolarControlScheduleFSCH& in, solarmodule::SolarControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::IED& in, commonmodule::IED& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const twinoaks::loadmodule::LoadReading& in, loadmodule::LoadReading& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type

    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());

    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());

    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
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

void convert_to_proto(const twinoaks::commonmodule::StatusMessageInfo& in, commonmodule::StatusMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::essmodule::ESSStatusZGEN& in, essmodule::ESSStatusZGEN& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_esseventandstatuszgen()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_namedobject()); // inherited type

    if(in.mRID) out.set_mrid(convert_string(in.mRID));
}

void convert_to_proto(const twinoaks::solarmodule::SolarControl& in, solarmodule::SolarControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    if(in.solarControlFSCC) convert_to_proto(*in.solarControlFSCC, *out.mutable_solarcontrolfscc());
}

void convert_to_proto(const twinoaks::essmodule::VoltagePI& in, essmodule::VoltagePI& out)
{
    out.Clear();

    if(in.voltagePICtl) out.mutable_voltagepictl()->set_value(*in.voltagePICtl);

    if(in.voltageRegulation) convert_to_proto(*in.voltageRegulation, *out.mutable_voltageregulation());
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
}

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::StatusAndEventXCBR& in, commonmodule::StatusAndEventXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforeventandstatus()); // inherited type

    if(in.DynamicTest) convert_to_proto(*in.DynamicTest, *out.mutable_dynamictest());

    convert_to_proto(in.Pos, *out.mutable_pos()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out)
{
    out.Clear();

    if(in.description) out.mutable_description()->set_value(in.description);

    if(in.name) out.mutable_name()->set_value(in.name);
}

void convert_to_proto(const twinoaks::commonmodule::StatusValue& in, commonmodule::StatusValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ControlValue& in, commonmodule::ControlValue& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type

    if(in.modBlk) out.mutable_modblk()->set_value(*in.modBlk);
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

void convert_to_proto(const twinoaks::loadmodule::LoadControl& in, loadmodule::LoadControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    convert_to_proto(in.loadControlFSCC, *out.mutable_loadcontrolfscc()); // required field in DDS
}

void convert_to_proto(const twinoaks::switchmodule::SwitchStatus& in, switchmodule::SwitchStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    convert_to_proto(in.switchStatusXSWI, *out.mutable_switchstatusxswi()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::EnergyConsumer& in, commonmodule::EnergyConsumer& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type

    if(in.operatingLimit) out.mutable_operatinglimit()->set_value(in.operatingLimit);
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

void convert_to_proto(const twinoaks::loadmodule::LoadCSG& in, loadmodule::LoadCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::essmodule::ESSCSG& in, essmodule::ESSCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::commonmodule::ControlMessageInfo& in, commonmodule::ControlMessageInfo& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ControlScheduleFSCH& in, commonmodule::ControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValACSG, *out.mutable_valacsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::RampRate& in, commonmodule::RampRate& out)
{
    out.Clear();

    if(in.negativeReactivePowerKVArPerMin) out.mutable_negativereactivepowerkvarpermin()->set_value(*in.negativeReactivePowerKVArPerMin);

    if(in.negativeRealPowerKWPerMin) out.mutable_negativerealpowerkwpermin()->set_value(*in.negativeRealPowerKWPerMin);

    if(in.positiveReactivePowerKVArPerMin) out.mutable_positivereactivepowerkvarpermin()->set_value(*in.positiveReactivePowerKVArPerMin);

    if(in.positiveRealPowerKWPerMin) out.mutable_positiverealpowerkwpermin()->set_value(*in.positiveRealPowerKWPerMin);
}

void convert_to_proto(const twinoaks::commonmodule::ControlFSCC& in, commonmodule::ControlFSCC& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    if(in.controlScheduleFSCH) convert_to_proto(*in.controlScheduleFSCH, *out.mutable_controlschedulefsch());

    if(in.islandControlScheduleFSCH) convert_to_proto(*in.islandControlScheduleFSCH, *out.mutable_islandcontrolschedulefsch());
}

void convert_to_proto(const twinoaks::essmodule::ESSControl& in, essmodule::ESSControl& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_controlvalue()); // inherited type

    if(in.check) convert_to_proto(*in.check, *out.mutable_check());

    convert_to_proto(in.essControlFSCC, *out.mutable_esscontrolfscc()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.Clear();

    convert_to_proto(in.terminal, *out.mutable_terminal()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::SwitchControlScheduleFSCH& in, commonmodule::SwitchControlScheduleFSCH& out)
{
    out.Clear();

    convert_to_proto(in.ValDCSG, *out.mutable_valdcsg()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::SwitchPoint& in, commonmodule::SwitchPoint& out)
{
    out.Clear();

    convert_to_proto(in.Pos, *out.mutable_pos()); // required field in DDS

    convert_to_proto(in.startTime, *out.mutable_starttime()); // required field in DDS
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

void convert_to_proto(const twinoaks::breakermodule::BreakerStatus& in, breakermodule::BreakerStatus& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_statusvalue()); // inherited type

    convert_to_proto(in.statusAndEventXCBR, *out.mutable_statusandeventxcbr()); // required field in DDS
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

void convert_to_proto(const twinoaks::solarmodule::SolarCSG& in, solarmodule::SolarCSG& out)
{
    out.Clear();

    for(decltype(in.crvPts.length()) i = 0; i < in.crvPts.length(); ++i)
    {
        convert_to_proto(in.crvPts.at(i), *out.mutable_crvpts()->Add());
    }
}

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlXCBR& in, breakermodule::BreakerDiscreteControlXCBR& out)
{
    out.Clear();

    convert_to_proto(in, *out.mutable_logicalnodeforcontrol()); // inherited type

    convert_to_proto(in.Pos, *out.mutable_pos()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out)
{
    out.Clear();

    if(in.description) out.mutable_description()->set_value(in.description);

    if(in.mRID) out.mutable_mrid()->set_value(in.mRID);

    if(in.name) out.mutable_name()->set_value(in.name);
}

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out)
{
    out.Clear();

    out.set_setval(static_cast<commonmodule::PFSignKind>(in.setVal));
}

void convert_to_proto(const twinoaks::essmodule::VoltageDroop& in, essmodule::VoltageDroop& out)
{
    out.Clear();

    if(in.voltageDroopCtl) out.mutable_voltagedroopctl()->set_value(*in.voltageDroopCtl);

    if(in.voltageRegulation) convert_to_proto(*in.voltageRegulation, *out.mutable_voltageregulation());
}

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out)
{
    out.Clear();

    if(in.phsAB) convert_to_proto(*in.phsAB, *out.mutable_phsab());

    if(in.phsBC) convert_to_proto(*in.phsBC, *out.mutable_phsbc());

    if(in.phsCA) convert_to_proto(*in.phsCA, *out.mutable_phsca());
}

void convert_to_proto(const twinoaks::commonmodule::StatusDPS& in, commonmodule::StatusDPS& out)
{
    out.Clear();

    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS

    out.set_stval(static_cast<commonmodule::DbPosKind>(in.stVal));

    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
}

} // end namespace dds

} // end namespace adapter
