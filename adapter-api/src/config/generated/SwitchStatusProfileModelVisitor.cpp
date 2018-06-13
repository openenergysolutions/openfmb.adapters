#include "adapter-api/config/generated/SwitchStatusProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

void visit(IModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    const auto mutable_context0 = [](switchmodule::SwitchStatusProfile& profile) { return &profile; };
    const auto const_context0 = [](const switchmodule::SwitchStatusProfile& profile) { return &profile; };
    visitor.start_message_field("statusMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusmessageinfo()) ? &temp->statusmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, switchmodule::SwitchStatusProfile>::build(
                [context = mutable_context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchStatusProfile>::build(
                [context = mutable_context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("protectedSwitch");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_protectedswitch(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_protectedswitch()) ? &temp->protectedswitch() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, switchmodule::SwitchStatusProfile>::build(
                [context = mutable_context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("switchStatus");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatus(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_switchstatus()) ? &temp->switchstatus() : nullptr; };
        visitor.start_message_field("statusValue");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusvalue(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusvalue()) ? &temp->statusvalue() : nullptr; };
            visitor.handle(
                "identifiedObject",
                AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchStatusProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                    [context = const_context2](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("switchStatusXSWI");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatusxswi(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_switchstatusxswi()) ? &temp->switchstatusxswi() : nullptr; };
            visitor.start_message_field("logicalNodeForEventAndStatus");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforeventandstatus()) ? &temp->logicalnodeforeventandstatus() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchStatusProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
            visitor.handle(
                "Pos",
                AccessorBuilder<commonmodule::StatusDPS, switchmodule::SwitchStatusProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_pos(); },
                    [context = const_context2](const switchmodule::SwitchStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pos()) ? &temp->pos() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
}

} // end namespace adapter
