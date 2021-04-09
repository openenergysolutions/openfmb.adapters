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

#include "adapter-util/config/generated/TypedModelVisitors.h"
#include "../AccessorImpl.h"

namespace adapter {

namespace util {

template <class V>
using set_t = setter_t<capbankmodule::CapBankControlProfile, V>;

template <class V>
using get_t = getter_t<capbankmodule::CapBankControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_capbankmodule_CapBankCSG(const set_t<capbankmodule::CapBankCSG>& setter, const get_t<capbankmodule::CapBankCSG>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_capbankmodule_CapBankControl(const set_t<capbankmodule::CapBankControl>& setter, const get_t<capbankmodule::CapBankControl>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_capbankmodule_CapBankControlFSCC(const set_t<capbankmodule::CapBankControlFSCC>& setter, const get_t<capbankmodule::CapBankControlFSCC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_capbankmodule_CapBankControlScheduleFSCH(const set_t<capbankmodule::CapBankControlScheduleFSCH>& setter, const get_t<capbankmodule::CapBankControlScheduleFSCH>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_capbankmodule_CapBankControlYPSH(const set_t<capbankmodule::CapBankControlYPSH>& setter, const get_t<capbankmodule::CapBankControlYPSH>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_capbankmodule_CapBankPoint(const set_t<capbankmodule::CapBankPoint>& setter, const get_t<capbankmodule::CapBankPoint>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_Optional_DirectionModeKind(const set_t<commonmodule::Optional_DirectionModeKind>& setter, const get_t<commonmodule::Optional_DirectionModeKind>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_PhaseSPC(const set_t<commonmodule::PhaseSPC>& setter, const get_t<commonmodule::PhaseSPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](capbankmodule::CapBankControlProfile& profile) { return &profile; };
    const auto getter = [](const capbankmodule::CapBankControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlmessageinfo() ? &value->controlmessageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControl", capbankmodule::CapBankControl::descriptor()))
    {
        visit_capbankmodule_CapBankControl(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_capbankcontrol();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankcontrol() ? &value->capbankcontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_capbanksystem();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbanksystem() ? &value->capbanksystem() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

// ---- template definitions for child types ----

void visit_capbankmodule_CapBankCSG(const set_t<capbankmodule::CapBankCSG>& setter, const get_t<capbankmodule::CapBankCSG>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", capbankmodule::CapBankPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](capbankmodule::CapBankControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_crvpts();
                if(repeated->size() < max)
                {
                    repeated->Reserve(max);
                    // add items until we're at max requested capacity
                    for(auto j = repeated->size(); j < max; ++j)
                    {
                        repeated->Add();
                    }
                }
                return repeated->Mutable(i);
            };
            const auto get = [getter, i](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->crvpts_size()) ? &value->crvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_capbankmodule_CapBankPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_capbankmodule_CapBankControl(const set_t<capbankmodule::CapBankControl>& setter, const get_t<capbankmodule::CapBankControl>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlvalue() ? &value->controlvalue() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::CheckConditions const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_check() ? &value->check() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControlFSCC", capbankmodule::CapBankControlFSCC::descriptor()))
    {
        visit_capbankmodule_CapBankControlFSCC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_capbankcontrolfscc();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankcontrolfscc() ? &value->capbankcontrolfscc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankControlFSCC(const set_t<capbankmodule::CapBankControlFSCC>& setter, const get_t<capbankmodule::CapBankControlFSCC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlfscc() ? &value->controlfscc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankControlScheduleFSCH", capbankmodule::CapBankControlScheduleFSCH::descriptor()))
    {
        visit_capbankmodule_CapBankControlScheduleFSCH(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_capbankcontrolschedulefsch();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankcontrolschedulefsch() ? &value->capbankcontrolschedulefsch() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankControlScheduleFSCH(const set_t<capbankmodule::CapBankControlScheduleFSCH>& setter, const get_t<capbankmodule::CapBankControlScheduleFSCH>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("ValCSG", capbankmodule::CapBankCSG::descriptor()))
    {
        visit_capbankmodule_CapBankCSG(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_valcsg();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valcsg() ? &value->valcsg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankControlYPSH(const set_t<capbankmodule::CapBankControlYPSH>& setter, const get_t<capbankmodule::CapBankControlYPSH>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("AmpLmt", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_amplmt();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_amplmt() ? &value->amplmt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AmpThdHi", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_ampthdhi();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ampthdhi() ? &value->ampthdhi() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AmpThdLo", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_ampthdlo();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ampthdlo() ? &value->ampthdlo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("CtlModeAuto", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_ctlmodeauto();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctlmodeauto() ? &value->ctlmodeauto() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("CtlModeOvrRd", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_ctlmodeovrrd();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctlmodeovrrd() ? &value->ctlmodeovrrd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("CtlModeRem", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_ctlmoderem();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctlmoderem() ? &value->ctlmoderem() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DirMode", commonmodule::Optional_DirectionModeKind::descriptor()))
    {
        visit_commonmodule_Optional_DirectionModeKind(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_dirmode();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::Optional_DirectionModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirmode() ? &value->dirmode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Pos", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pos() ? &value->pos() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TempLmt", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_templmt();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_templmt() ? &value->templmt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TempThdHi", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_tempthdhi();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tempthdhi() ? &value->tempthdhi() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TempThdLo", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_tempthdlo();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tempthdlo() ? &value->tempthdlo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VArLmt", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_varlmt();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varlmt() ? &value->varlmt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VArThdHi", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_varthdhi();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varthdhi() ? &value->varthdhi() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VArThdLo", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_varthdlo();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varthdlo() ? &value->varthdlo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolLmt", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_vollmt();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vollmt() ? &value->vollmt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolThdHi", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_volthdhi();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_volthdhi() ? &value->volthdhi() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolThdLo", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_volthdlo();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_volthdlo() ? &value->volthdlo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_capbankmodule_CapBankPoint(const set_t<capbankmodule::CapBankPoint>& setter, const get_t<capbankmodule::CapBankPoint>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("control", capbankmodule::CapBankControlYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankControlYPSH(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_control();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> capbankmodule::CapBankControlYPSH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_control() ? &value->control() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    visitor.handle(
        "startTime",
        MessageAccessorBuilder<capbankmodule::CapBankControlProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ConductingEquipment const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_conductingequipment() ? &value->conductingequipment() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_interlockcheck() ? &value->interlockcheck() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_synchrocheck() ? &value->synchrocheck() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::NamedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_namedobject() ? &value->namedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    visitor.handle(
        "mRID",
        AccessorBuilder<capbankmodule::CapBankControlProfile,std::string>::build(
            [setter](capbankmodule::CapBankControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<capbankmodule::CapBankControlProfile,double>::build(
            [setter](capbankmodule::CapBankControlProfile& profile, const double& value) { setter(profile)->set_ctlval(value); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforcontrol() ? &value->logicalnodeforcontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("controlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlschedulefsch() ? &value->controlschedulefsch() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("islandControlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_islandcontrolschedulefsch() ? &value->islandcontrolschedulefsch() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::MessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_messageinfo() ? &value->messageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<capbankmodule::CapBankControlProfile,bool>::build(
            [setter](capbankmodule::CapBankControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ScheduleCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valacsg() ? &value->valacsg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_modblk() ? &value->modblk() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reset() ? &value->reset() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_description() ? &value->description() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mrid() ? &value->mrid() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_name() ? &value->name() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::LogicalNode const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnode() ? &value->logicalnode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    visitor.handle(
        "messageTimeStamp",
        MessageAccessorBuilder<capbankmodule::CapBankControlProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_description() ? &value->description() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_name() ? &value->name() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_Optional_DirectionModeKind(const set_t<commonmodule::Optional_DirectionModeKind>& setter, const get_t<commonmodule::Optional_DirectionModeKind>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankControlProfile,int>::build(
            [setter](capbankmodule::CapBankControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::DirectionModeKind>(value)); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::DirectionModeKind_descriptor()
    );
}

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phs3() ? &value->phs3() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsa() ? &value->phsa() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsb() ? &value->phsb() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsc() ? &value->phsc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_PhaseSPC(const set_t<commonmodule::PhaseSPC>& setter, const get_t<commonmodule::PhaseSPC>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phs3() ? &value->phs3() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsa() ? &value->phsa() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsb() ? &value->phsb() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](capbankmodule::CapBankControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsc() ? &value->phsc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](capbankmodule::CapBankControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_schpts();
                if(repeated->size() < max)
                {
                    repeated->Reserve(max);
                    // add items until we're at max requested capacity
                    for(auto j = repeated->size(); j < max; ++j)
                    {
                        repeated->Add();
                    }
                }
                return repeated->Mutable(i);
            };
            const auto get = [getter, i](const capbankmodule::CapBankControlProfile& profile) -> commonmodule::SchedulePoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->schpts_size()) ? &value->schpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_SchedulePoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const capbankmodule::CapBankControlProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
        {
            const auto value = getter(profile);
            if(value)
            {
                return &value->scheduleparameter();
            }
            else
            {
                return nullptr;
            }
        }
    );

    visitor.handle(
        "startTime",
        MessageAccessorBuilder<capbankmodule::CapBankControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](capbankmodule::CapBankControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankControlProfile,bool>::build(
            [setter](capbankmodule::CapBankControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankControlProfile,std::string>::build(
            [setter](capbankmodule::CapBankControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

} // end namespace util

} // end namespace adapter
