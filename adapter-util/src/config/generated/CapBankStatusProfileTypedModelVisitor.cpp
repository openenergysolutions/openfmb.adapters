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
using set_t = setter_t<capbankmodule::CapBankStatusProfile, V>;

template <class V>
using get_t = getter_t<capbankmodule::CapBankStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_capbankmodule_CapBankEventAndStatusPoint(const set_t<capbankmodule::CapBankEventAndStatusPoint>& setter, const get_t<capbankmodule::CapBankEventAndStatusPoint>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_capbankmodule_CapBankEventAndStatusYPSH(const set_t<capbankmodule::CapBankEventAndStatusYPSH>& setter, const get_t<capbankmodule::CapBankEventAndStatusYPSH>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_capbankmodule_CapBankEventAndStatusZCAP(const set_t<capbankmodule::CapBankEventAndStatusZCAP>& setter, const get_t<capbankmodule::CapBankEventAndStatusZCAP>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_capbankmodule_CapBankStatus(const set_t<capbankmodule::CapBankStatus>& setter, const get_t<capbankmodule::CapBankStatus>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_PhaseDPS(const set_t<commonmodule::PhaseDPS>& setter, const get_t<commonmodule::PhaseDPS>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](capbankmodule::CapBankStatusProfile& profile) { return &profile; };
    const auto getter = [](const capbankmodule::CapBankStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusmessageinfo() ? &value->statusmessageinfo() : nullptr;
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

    if(visitor.start_message_field("capBankStatus", capbankmodule::CapBankStatus::descriptor()))
    {
        visit_capbankmodule_CapBankStatus(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_capbankstatus();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> capbankmodule::CapBankStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankstatus() ? &value->capbankstatus() : nullptr;
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
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_capbanksystem();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> capbankmodule::CapBankSystem const *
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

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::IED const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ied() ? &value->ied() : nullptr;
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

void visit_capbankmodule_CapBankEventAndStatusPoint(const set_t<capbankmodule::CapBankEventAndStatusPoint>& setter, const get_t<capbankmodule::CapBankEventAndStatusPoint>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("eventAndStatus", capbankmodule::CapBankEventAndStatusYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankEventAndStatusYPSH(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_eventandstatus();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> capbankmodule::CapBankEventAndStatusYPSH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eventandstatus() ? &value->eventandstatus() : nullptr;
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

void visit_capbankmodule_CapBankEventAndStatusYPSH(const set_t<capbankmodule::CapBankEventAndStatusYPSH>& setter, const get_t<capbankmodule::CapBankEventAndStatusYPSH>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("BlkCls", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_blkcls();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blkcls() ? &value->blkcls() : nullptr;
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

    if(visitor.start_message_field("BlkOpn", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_blkopn();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blkopn() ? &value->blkopn() : nullptr;
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

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::PhaseDPS const *
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
}

void visit_capbankmodule_CapBankEventAndStatusZCAP(const set_t<capbankmodule::CapBankEventAndStatusZCAP>& setter, const get_t<capbankmodule::CapBankEventAndStatusZCAP>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforeventandstatus() ? &value->logicalnodeforeventandstatus() : nullptr;
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

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dynamictest() ? &value->dynamictest() : nullptr;
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

    if(visitor.start_message_field("PointStatus", capbankmodule::CapBankEventAndStatusPoint::descriptor()))
    {
        visit_capbankmodule_CapBankEventAndStatusPoint(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> capbankmodule::CapBankEventAndStatusPoint const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pointstatus() ? &value->pointstatus() : nullptr;
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

void visit_capbankmodule_CapBankStatus(const set_t<capbankmodule::CapBankStatus>& setter, const get_t<capbankmodule::CapBankStatus>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusvalue() ? &value->statusvalue() : nullptr;
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

    if(visitor.start_message_field("capBankEventAndStatusZCAP", capbankmodule::CapBankEventAndStatusZCAP::descriptor()))
    {
        visit_capbankmodule_CapBankEventAndStatusZCAP(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_capbankeventandstatuszcap();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> capbankmodule::CapBankEventAndStatusZCAP const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankeventandstatuszcap() ? &value->capbankeventandstatuszcap() : nullptr;
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

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<capbankmodule::CapBankStatusProfile,std::string>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_q()) return false;
                handler(parent->q());
                return true;
            }
        )
    );

    visitor.handle(
        "stVal",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,int>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::BehaviourModeKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_q()) return false;
                handler(parent->q());
                return true;
            }
        )
    );

    visitor.handle(
        "stVal",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,int>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::DynamicTestKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_d() ? &value->d() : nullptr;
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
        "stVal",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,int>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::HealthKind_descriptor()
    );
}

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_beh() ? &value->beh() : nullptr;
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

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eehealth() ? &value->eehealth() : nullptr;
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

    if(visitor.start_message_field("HotLineTag", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_hotlinetag() ? &value->hotlinetag() : nullptr;
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

    if(visitor.start_message_field("RemoteBlk", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_remoteblk() ? &value->remoteblk() : nullptr;
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_PhaseDPS(const set_t<commonmodule::PhaseDPS>& setter, const get_t<commonmodule::PhaseDPS>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("phsA", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("phsB", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("phsC", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::StatusDPS const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_q()) return false;
                handler(parent->q());
                return true;
            }
        )
    );

    visitor.handle(
        "stVal",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,int>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::DbPosKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_q()) return false;
                handler(parent->q());
                return true;
            }
        )
    );

    visitor.handle(
        "stVal",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,bool>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        )
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<capbankmodule::CapBankStatusProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](capbankmodule::CapBankStatusProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const capbankmodule::CapBankStatusProfile& profile) -> google::protobuf::BoolValue const *
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
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,bool>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankStatusProfile,std::string>::build(
            [setter](capbankmodule::CapBankStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankStatusProfile& profile, const handler_t<std::string>& handler)
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
