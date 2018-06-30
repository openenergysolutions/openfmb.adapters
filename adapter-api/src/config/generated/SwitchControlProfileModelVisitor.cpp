#include "adapter-api/config/generated/SwitchControlProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

void visit(IModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    const auto mutable_context0 = [](switchmodule::SwitchControlProfile& profile) { return &profile; };
    const auto const_context0 = [](const switchmodule::SwitchControlProfile& profile) { return &profile; };
    visitor.start_message_field("controlMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_controlmessageinfo()) ? &temp->controlmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, switchmodule::SwitchControlProfile>::build(
                [context = mutable_context1](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchControlProfile>::build(
                [context = mutable_context1](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("protectedSwitch");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_protectedswitch(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_protectedswitch()) ? &temp->protectedswitch() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, switchmodule::SwitchControlProfile>::build(
                [context = mutable_context1](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("switchControl");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrol(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_switchcontrol()) ? &temp->switchcontrol() : nullptr; };
        visitor.handle(
            "check",
            AccessorBuilder<commonmodule::CheckConditions, switchmodule::SwitchControlProfile>::build(
                [context = mutable_context1](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_check(); },
                [context = const_context1](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_check()) ? &temp->check() : nullptr; }
            )
        );
        visitor.start_message_field("SwitchControlFSCC");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrolfscc(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_switchcontrolfscc()) ? &temp->switchcontrolfscc() : nullptr; };
            visitor.start_message_field("logicalNodeForControl");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforcontrol()) ? &temp->logicalnodeforcontrol() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchControlProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
            visitor.start_message_field("switchControlScheduleFSCH");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrolschedulefsch(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_switchcontrolschedulefsch()) ? &temp->switchcontrolschedulefsch() : nullptr; };
                visitor.handle(
                    "ValDCSG",
                    AccessorBuilder<switchmodule::SwitchCSG, switchmodule::SwitchControlProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_valdcsg(); },
                        [context = const_context3](const switchmodule::SwitchControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_valdcsg()) ? &temp->valdcsg() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
}

} // end namespace adapter
