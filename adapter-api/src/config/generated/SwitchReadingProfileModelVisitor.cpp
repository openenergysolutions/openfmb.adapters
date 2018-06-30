#include "adapter-api/config/generated/SwitchReadingProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

void visit(IModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    const auto mutable_context0 = [](switchmodule::SwitchReadingProfile& profile) { return &profile; };
    const auto const_context0 = [](const switchmodule::SwitchReadingProfile& profile) { return &profile; };
    visitor.start_message_field("readingMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmessageinfo()) ? &temp->readingmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, switchmodule::SwitchReadingProfile>::build(
                [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("protectedSwitch");
    {
        const auto mutable_context1 = [context = mutable_context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_protectedswitch(); };
        const auto const_context1 = [context = const_context0](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_protectedswitch()) ? &temp->protectedswitch() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, switchmodule::SwitchReadingProfile>::build(
                [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    const auto max_count0 = visitor.start_repeated_message_field("switchReading");
    for(auto count0 = 0; count0 < max_count0; ++count0)
    {
        visitor.start_iteration(count0);
        const auto mutable_context1 = [context = mutable_context0, i = count0, max = max_count0](switchmodule::SwitchReadingProfile& profile) {
            const auto repeated = context(profile)->mutable_switchreading();
            if(repeated->size() < max) {
                repeated->Reserve(max);
                // add items until we're at max requested capacity
                for(auto j = repeated->size(); j < max; ++j) {
                    repeated->Add();
                }
            }
            return repeated->Mutable(i);
        };
        const auto const_context1 = [context = const_context0, i = count0, max = max_count0](const switchmodule::SwitchReadingProfile& profile) -> switchmodule::SwitchReading const *{
            const auto temp = context(profile);
            if(!temp) return nullptr;
            return i < temp->switchreading_size() ? &temp->switchreading(i) : nullptr;
        };
        visitor.start_message_field("diffReadingMMXU");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_diffreadingmmxu(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_diffreadingmmxu()) ? &temp->diffreadingmmxu() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_a(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_a()) ? &temp->a() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "Hz",
                AccessorBuilder<commonmodule::MV, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_hz(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_hz()) ? &temp->hz() : nullptr; }
                )
            );
            visitor.start_message_field("PF");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_pf(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pf()) ? &temp->pf() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PhV");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phv(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phv()) ? &temp->phv() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ppv()) ? &temp->ppv() : nullptr; };
                visitor.handle(
                    "phsAB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsab(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsBC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsbc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsCA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsca(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_va(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_va()) ? &temp->va() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_var(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_var()) ? &temp->var() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_w(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_w()) ? &temp->w() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("phaseMMTN");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phasemmtn()) ? &temp->phasemmtn() : nullptr; };
            visitor.start_message_field("phsA");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsab(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsB");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsbc(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsC");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsca(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                            [context = mutable_context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmtr()) ? &temp->readingmmtr() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DmdVAh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                )
            );
            visitor.handle(
                "DmdVArh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                )
            );
            visitor.handle(
                "DmdWh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                )
            );
            visitor.handle(
                "SupVAh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                )
            );
            visitor.handle(
                "SupVArh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                )
            );
            visitor.handle(
                "SupWh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                )
            );
            visitor.handle(
                "TotVAh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                )
            );
            visitor.handle(
                "TotVArh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                )
            );
            visitor.handle(
                "TotWh",
                AccessorBuilder<commonmodule::BCR, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
        {
            const auto mutable_context2 = [context = mutable_context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); };
            const auto const_context2 = [context = const_context1](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmxu()) ? &temp->readingmmxu() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_a(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_a()) ? &temp->a() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "Hz",
                AccessorBuilder<commonmodule::MV, switchmodule::SwitchReadingProfile>::build(
                    [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_hz(); },
                    [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_hz()) ? &temp->hz() : nullptr; }
                )
            );
            visitor.start_message_field("PF");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_pf(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pf()) ? &temp->pf() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PhV");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phv(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phv()) ? &temp->phv() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ppv()) ? &temp->ppv() : nullptr; };
                visitor.handle(
                    "phsAB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsab(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsBC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsbc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsCA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsca(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_va(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_va()) ? &temp->va() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_var(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_var()) ? &temp->var() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto mutable_context3 = [context = mutable_context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_w(); };
                const auto const_context3 = [context = const_context2](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_w()) ? &temp->w() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, switchmodule::SwitchReadingProfile>::build(
                        [context = mutable_context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const switchmodule::SwitchReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.end_iteration();
    }
    visitor.end_repeated_message_field();
}

} // end namespace adapter
