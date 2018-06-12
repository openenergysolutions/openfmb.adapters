#include "adapter-api/config/generated/ModelVisitors.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

void visit(IModelVisitor<resourcemodule::ResourceReadingProfile>& visitor)
{
    const auto mutable_context0 = [](resourcemodule::ResourceReadingProfile& profile) { return &profile; };
    const auto const_context0 = [](const resourcemodule::ResourceReadingProfile& profile) { return &profile; };
    visitor.start_message_field("readingMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); };
        const auto const_context1 = [context = const_context0](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmessageinfo()) ? &temp->readingmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, resourcemodule::ResourceReadingProfile>::build(
                [context = mutable_context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                [context = mutable_context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("meter");
    {
        const auto mutable_context1 = [context = mutable_context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_meter(); };
        const auto const_context1 = [context = const_context0](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_meter()) ? &temp->meter() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, resourcemodule::ResourceReadingProfile>::build(
                [context = mutable_context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("resourceReading");
    {
        const auto mutable_context1 = [context = mutable_context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_resourcereading(); };
        const auto const_context1 = [context = const_context0](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_resourcereading()) ? &temp->resourcereading() : nullptr; };
        visitor.start_message_field("phaseMMTN");
        {
            const auto mutable_context2 = [context = mutable_context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); };
            const auto const_context2 = [context = const_context1](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phasemmtn()) ? &temp->phasemmtn() : nullptr; };
            visitor.start_message_field("phsA");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                            [context = mutable_context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsab(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                            [context = mutable_context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsB");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                            [context = mutable_context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsbc(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                            [context = mutable_context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsC");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                            [context = mutable_context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsca(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                            [context = mutable_context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
        {
            const auto mutable_context2 = [context = mutable_context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); };
            const auto const_context2 = [context = const_context1](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmtr()) ? &temp->readingmmtr() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DmdVAh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                )
            );
            visitor.handle(
                "DmdVArh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                )
            );
            visitor.handle(
                "DmdWh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                )
            );
            visitor.handle(
                "SupVAh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                )
            );
            visitor.handle(
                "SupVArh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                )
            );
            visitor.handle(
                "SupWh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                )
            );
            visitor.handle(
                "TotVAh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                )
            );
            visitor.handle(
                "TotVArh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                )
            );
            visitor.handle(
                "TotWh",
                AccessorBuilder<commonmodule::BCR, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
        {
            const auto mutable_context2 = [context = mutable_context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); };
            const auto const_context2 = [context = const_context1](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmxu()) ? &temp->readingmmxu() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_a(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_a()) ? &temp->a() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "Hz",
                AccessorBuilder<commonmodule::MV, resourcemodule::ResourceReadingProfile>::build(
                    [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_hz(); },
                    [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_hz()) ? &temp->hz() : nullptr; }
                )
            );
            visitor.start_message_field("PF");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_pf(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pf()) ? &temp->pf() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PhV");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phv(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phv()) ? &temp->phv() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ppv()) ? &temp->ppv() : nullptr; };
                visitor.handle(
                    "phsAB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsab(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsBC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsbc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsCA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsca(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_va(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_va()) ? &temp->va() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_var(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_var()) ? &temp->var() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto mutable_context3 = [context = mutable_context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_w(); };
                const auto const_context3 = [context = const_context2](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_w()) ? &temp->w() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, resourcemodule::ResourceReadingProfile>::build(
                        [context = mutable_context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const resourcemodule::ResourceReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
}

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

void visit(IModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    const auto mutable_context0 = [](essmodule::ESSReadingProfile& profile) { return &profile; };
    const auto const_context0 = [](const essmodule::ESSReadingProfile& profile) { return &profile; };
    visitor.start_message_field("readingMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmessageinfo()) ? &temp->readingmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, essmodule::ESSReadingProfile>::build(
                [context = mutable_context1](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ess");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ess(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ess()) ? &temp->ess() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, essmodule::ESSReadingProfile>::build(
                [context = mutable_context1](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("essReading");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_essreading(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_essreading()) ? &temp->essreading() : nullptr; };
        visitor.start_message_field("phaseMMTN");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phasemmtn()) ? &temp->phasemmtn() : nullptr; };
            visitor.start_message_field("phsA");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                            [context = mutable_context4](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsab(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                            [context = mutable_context4](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsB");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                            [context = mutable_context4](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsbc(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                            [context = mutable_context4](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsC");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                            [context = mutable_context4](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsca(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                            [context = mutable_context4](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmtr()) ? &temp->readingmmtr() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DmdVAh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                )
            );
            visitor.handle(
                "DmdVArh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                )
            );
            visitor.handle(
                "DmdWh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                )
            );
            visitor.handle(
                "SupVAh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                )
            );
            visitor.handle(
                "SupVArh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                )
            );
            visitor.handle(
                "SupWh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                )
            );
            visitor.handle(
                "TotVAh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                )
            );
            visitor.handle(
                "TotVArh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                )
            );
            visitor.handle(
                "TotWh",
                AccessorBuilder<commonmodule::BCR, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmxu()) ? &temp->readingmmxu() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_a(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_a()) ? &temp->a() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "Hz",
                AccessorBuilder<commonmodule::MV, essmodule::ESSReadingProfile>::build(
                    [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_hz(); },
                    [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_hz()) ? &temp->hz() : nullptr; }
                )
            );
            visitor.start_message_field("PF");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_pf(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pf()) ? &temp->pf() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PhV");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phv(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phv()) ? &temp->phv() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ppv()) ? &temp->ppv() : nullptr; };
                visitor.handle(
                    "phsAB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsab(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsBC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsbc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsCA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsca(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_va(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_va()) ? &temp->va() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_var(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_var()) ? &temp->var() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_w(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_w()) ? &temp->w() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, essmodule::ESSReadingProfile>::build(
                        [context = mutable_context3](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSReadingProfile>::build(
                [context = mutable_context1](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const essmodule::ESSReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
}

void visit(IModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    const auto mutable_context0 = [](essmodule::ESSStatusProfile& profile) { return &profile; };
    const auto const_context0 = [](const essmodule::ESSStatusProfile& profile) { return &profile; };
    visitor.start_message_field("statusMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusmessageinfo()) ? &temp->statusmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, essmodule::ESSStatusProfile>::build(
                [context = mutable_context1](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ess");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ess(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ess()) ? &temp->ess() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, essmodule::ESSStatusProfile>::build(
                [context = mutable_context1](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("essStatus");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatus(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_essstatus()) ? &temp->essstatus() : nullptr; };
        visitor.start_message_field("statusValue");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_statusvalue(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusvalue()) ? &temp->statusvalue() : nullptr; };
            visitor.handle(
                "identifiedObject",
                AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSStatusProfile>::build(
                    [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                    [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("essStatusZBAT");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatuszbat(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_essstatuszbat()) ? &temp->essstatuszbat() : nullptr; };
            visitor.start_message_field("logicalNodeForEventAndStatus");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforeventandstatus()) ? &temp->logicalnodeforeventandstatus() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
            visitor.handle(
                "BatSt",
                AccessorBuilder<commonmodule::StatusSPS, essmodule::ESSStatusProfile>::build(
                    [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_batst(); },
                    [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_batst()) ? &temp->batst() : nullptr; }
                )
            );
            visitor.start_message_field("GriMod");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_grimod(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_grimod()) ? &temp->grimod() : nullptr; };
                visitor.handle(
                    "setVal",
                    PrimitiveAccessorBuilder<commonmodule::GridConnectModeKind, essmodule::ESSStatusProfile>::build(
                        [context = mutable_context3](essmodule::ESSStatusProfile& profile, commonmodule::GridConnectModeKind value) { return context(profile)->set_setval(value); },
                        [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->setval() : throw Exception("Primitive value parent(s) not present: essStatus.essStatusZBAT.GriMod.setVal "); },
                        [context = const_context3](const essmodule::ESSStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "Soc",
                AccessorBuilder<commonmodule::MV, essmodule::ESSStatusProfile>::build(
                    [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_soc(); },
                    [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_soc()) ? &temp->soc() : nullptr; }
                )
            );
            visitor.handle(
                "Stdby",
                AccessorBuilder<commonmodule::StatusSPS, essmodule::ESSStatusProfile>::build(
                    [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_stdby(); },
                    [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_stdby()) ? &temp->stdby() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("essStatusZGEN");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatuszgen(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_essstatuszgen()) ? &temp->essstatuszgen() : nullptr; };
            visitor.start_message_field("eSSEventAndStatusZGEN");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_esseventandstatuszgen(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_esseventandstatuszgen()) ? &temp->esseventandstatuszgen() : nullptr; };
                visitor.start_message_field("logicalNodeForEventAndStatus");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforeventandstatus()) ? &temp->logicalnodeforeventandstatus() : nullptr; };
                    visitor.start_message_field("logicalNode");
                    {
                        const auto mutable_context5 = [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnode(); };
                        const auto const_context5 = [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                        visitor.handle(
                            "identifiedObject",
                            AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                }
                visitor.end_message_field();
                visitor.handle(
                    "AuxPwrSt",
                    AccessorBuilder<commonmodule::StatusSPS, essmodule::ESSStatusProfile>::build(
                        [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_auxpwrst(); },
                        [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_auxpwrst()) ? &temp->auxpwrst() : nullptr; }
                    )
                );
                visitor.handle(
                    "EmgStop",
                    AccessorBuilder<commonmodule::StatusSPS, essmodule::ESSStatusProfile>::build(
                        [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_emgstop(); },
                        [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_emgstop()) ? &temp->emgstop() : nullptr; }
                    )
                );
                visitor.handle(
                    "GnSynSt",
                    AccessorBuilder<commonmodule::StatusSPS, essmodule::ESSStatusProfile>::build(
                        [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_gnsynst(); },
                        [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_gnsynst()) ? &temp->gnsynst() : nullptr; }
                    )
                );
                visitor.start_message_field("PointStatus");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pointstatus(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pointstatus()) ? &temp->pointstatus() : nullptr; };
                    visitor.handle(
                        "blackStartEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_blackstartenabled(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_blackstartenabled()) ? &temp->blackstartenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "frequencySetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_frequencysetpointenabled()) ? &temp->frequencysetpointenabled() : nullptr; }
                        )
                    );
                    visitor.start_message_field("mode");
                    {
                        const auto mutable_context5 = [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mode(); };
                        const auto const_context5 = [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_mode()) ? &temp->mode() : nullptr; };
                        visitor.handle(
                            "setVal",
                            PrimitiveAccessorBuilder<commonmodule::GridConnectModeKind, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile, commonmodule::GridConnectModeKind value) { return context(profile)->set_setval(value); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->setval() : throw Exception("Primitive value parent(s) not present: essStatus.essStatusZGEN.eSSEventAndStatusZGEN.PointStatus.mode.setVal "); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                    visitor.handle(
                        "pctHzDroop",
                        AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pcthzdroop(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pcthzdroop()) ? &temp->pcthzdroop() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "pctVDroop",
                        AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pctvdroop(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pctvdroop()) ? &temp->pctvdroop() : nullptr; }
                        )
                    );
                    visitor.start_message_field("rampRates");
                    {
                        const auto mutable_context5 = [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ramprates(); };
                        const auto const_context5 = [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ramprates()) ? &temp->ramprates() : nullptr; };
                        visitor.handle(
                            "negativeReactivePowerKVArPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativereactivepowerkvarpermin()) ? &temp->negativereactivepowerkvarpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "negativeRealPowerKWPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativerealpowerkwpermin()) ? &temp->negativerealpowerkwpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "positiveReactivePowerKVArPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positivereactivepowerkvarpermin()) ? &temp->positivereactivepowerkvarpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "positiveRealPowerKWPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positiverealpowerkwpermin()) ? &temp->positiverealpowerkwpermin() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                    visitor.handle(
                        "reactivePwrSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_reactivepwrsetpointenabled()) ? &temp->reactivepwrsetpointenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "realPwrSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_realpwrsetpointenabled()) ? &temp->realpwrsetpointenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "state",
                        PrimitiveAccessorBuilder<commonmodule::StateKind, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile, commonmodule::StateKind value) { return context(profile)->set_state(value); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->state() : throw Exception("Primitive value parent(s) not present: essStatus.essStatusZGEN.eSSEventAndStatusZGEN.PointStatus.state "); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                        )
                    );
                    visitor.handle(
                        "syncBackToGrid",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_syncbacktogrid(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_syncbacktogrid()) ? &temp->syncbacktogrid() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "transToIslndOnGridLossEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_transtoislndongridlossenabled(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_transtoislndongridlossenabled()) ? &temp->transtoislndongridlossenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "voltageSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_voltagesetpointenabled()) ? &temp->voltagesetpointenabled() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSStatusProfile>::build(
                [context = mutable_context1](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
}

void visit(IModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    const auto mutable_context0 = [](essmodule::ESSControlProfile& profile) { return &profile; };
    const auto const_context0 = [](const essmodule::ESSControlProfile& profile) { return &profile; };
    visitor.start_message_field("controlMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_controlmessageinfo()) ? &temp->controlmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, essmodule::ESSControlProfile>::build(
                [context = mutable_context1](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ess");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ess(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ess()) ? &temp->ess() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, essmodule::ESSControlProfile>::build(
                [context = mutable_context1](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("essControl");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_esscontrol(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_esscontrol()) ? &temp->esscontrol() : nullptr; };
        visitor.handle(
            "check",
            AccessorBuilder<commonmodule::CheckConditions, essmodule::ESSControlProfile>::build(
                [context = mutable_context1](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_check(); },
                [context = const_context1](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_check()) ? &temp->check() : nullptr; }
            )
        );
        visitor.start_message_field("essControlFSCC");
        {
            const auto mutable_context2 = [context = mutable_context1](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_esscontrolfscc(); };
            const auto const_context2 = [context = const_context1](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_esscontrolfscc()) ? &temp->esscontrolfscc() : nullptr; };
            visitor.start_message_field("controlFSCC");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_controlfscc(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_controlfscc()) ? &temp->controlfscc() : nullptr; };
                visitor.start_message_field("logicalNodeForControl");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforcontrol()) ? &temp->logicalnodeforcontrol() : nullptr; };
                    visitor.start_message_field("logicalNode");
                    {
                        const auto mutable_context5 = [context = mutable_context4](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_logicalnode(); };
                        const auto const_context5 = [context = const_context4](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                        visitor.handle(
                            "identifiedObject",
                            AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                }
                visitor.end_message_field();
                const auto max_count3 = visitor.start_repeated_message_field("controlScheduleFSCH");
                for(auto count3 = 0; count3 < max_count3; ++count3)
                {
                    visitor.start_iteration(count3);
                    const auto mutable_context4 = [context = mutable_context3, i = count3, max = max_count3](essmodule::ESSControlProfile& profile) {
                        const auto repeated = context(profile)->mutable_controlschedulefsch();
                        if(repeated->size() < max) {
                            repeated->Reserve(max);
                            // add items until we're at max requested capacity
                            for(auto j = repeated->size(); j < max; ++j) {
                                repeated->Add();
                            }
                        }
                        return repeated->Mutable(i);
                    };
                    const auto const_context4 = [context = const_context3, i = count3, max = max_count3](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *{
                        const auto temp = context(profile);
                        if(!temp) return nullptr;
                        return i < temp->controlschedulefsch_size() ? &temp->controlschedulefsch(i) : nullptr;
                    };
                    visitor.handle(
                        "ValACSG",
                        AccessorBuilder<commonmodule::ScheduleCSG, essmodule::ESSControlProfile>::build(
                            [context = mutable_context4](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_valacsg(); },
                            [context = const_context4](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_valacsg()) ? &temp->valacsg() : nullptr; }
                        )
                    );
                    visitor.end_iteration();
                }
                visitor.end_repeated_message_field();
            }
            visitor.end_message_field();
            visitor.start_message_field("essControlScheduleFSCH");
            {
                const auto mutable_context3 = [context = mutable_context2](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_esscontrolschedulefsch(); };
                const auto const_context3 = [context = const_context2](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_esscontrolschedulefsch()) ? &temp->esscontrolschedulefsch() : nullptr; };
                visitor.start_message_field("ValDCSG");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_valdcsg(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_valdcsg()) ? &temp->valdcsg() : nullptr; };
                    const auto max_count4 = visitor.start_repeated_message_field("crvPts");
                    for(auto count4 = 0; count4 < max_count4; ++count4)
                    {
                        visitor.start_iteration(count4);
                        const auto mutable_context5 = [context = mutable_context4, i = count4, max = max_count4](essmodule::ESSControlProfile& profile) {
                            const auto repeated = context(profile)->mutable_crvpts();
                            if(repeated->size() < max) {
                                repeated->Reserve(max);
                                // add items until we're at max requested capacity
                                for(auto j = repeated->size(); j < max; ++j) {
                                    repeated->Add();
                                }
                            }
                            return repeated->Mutable(i);
                        };
                        const auto const_context5 = [context = const_context4, i = count4, max = max_count4](const essmodule::ESSControlProfile& profile) -> essmodule::ESSPoint const *{
                            const auto temp = context(profile);
                            if(!temp) return nullptr;
                            return i < temp->crvpts_size() ? &temp->crvpts(i) : nullptr;
                        };
                        visitor.handle(
                            "blackStartEnabled",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_blackstartenabled(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_blackstartenabled()) ? &temp->blackstartenabled() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "frequencySetPointEnabled",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_frequencysetpointenabled()) ? &temp->frequencysetpointenabled() : nullptr; }
                            )
                        );
                        visitor.start_message_field("mode");
                        {
                            const auto mutable_context6 = [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_mode(); };
                            const auto const_context6 = [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_mode()) ? &temp->mode() : nullptr; };
                            visitor.handle(
                                "setVal",
                                PrimitiveAccessorBuilder<commonmodule::GridConnectModeKind, essmodule::ESSControlProfile>::build(
                                    [context = mutable_context6](essmodule::ESSControlProfile& profile, commonmodule::GridConnectModeKind value) { return context(profile)->set_setval(value); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return temp ? temp->setval() : throw Exception("Primitive value parent(s) not present: essControl.essControlFSCC.essControlScheduleFSCH.ValDCSG.crvPts.mode.setVal "); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) -> bool { return context(profile) != nullptr; }
                                )
                            );
                        }
                        visitor.end_message_field();
                        visitor.handle(
                            "pctHzDroop",
                            AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_pcthzdroop(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pcthzdroop()) ? &temp->pcthzdroop() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "pctVDroop",
                            AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_pctvdroop(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pctvdroop()) ? &temp->pctvdroop() : nullptr; }
                            )
                        );
                        visitor.start_message_field("rampRates");
                        {
                            const auto mutable_context6 = [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ramprates(); };
                            const auto const_context6 = [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ramprates()) ? &temp->ramprates() : nullptr; };
                            visitor.handle(
                                "negativeReactivePowerKVArPerMin",
                                AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSControlProfile>::build(
                                    [context = mutable_context6](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativereactivepowerkvarpermin()) ? &temp->negativereactivepowerkvarpermin() : nullptr; }
                                )
                            );
                            visitor.handle(
                                "negativeRealPowerKWPerMin",
                                AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSControlProfile>::build(
                                    [context = mutable_context6](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativerealpowerkwpermin()) ? &temp->negativerealpowerkwpermin() : nullptr; }
                                )
                            );
                            visitor.handle(
                                "positiveReactivePowerKVArPerMin",
                                AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSControlProfile>::build(
                                    [context = mutable_context6](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positivereactivepowerkvarpermin()) ? &temp->positivereactivepowerkvarpermin() : nullptr; }
                                )
                            );
                            visitor.handle(
                                "positiveRealPowerKWPerMin",
                                AccessorBuilder<google::protobuf::FloatValue, essmodule::ESSControlProfile>::build(
                                    [context = mutable_context6](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positiverealpowerkwpermin()) ? &temp->positiverealpowerkwpermin() : nullptr; }
                                )
                            );
                        }
                        visitor.end_message_field();
                        visitor.handle(
                            "reactivePwrSetPointEnabled",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_reactivepwrsetpointenabled()) ? &temp->reactivepwrsetpointenabled() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "realPwrSetPointEnabled",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_realpwrsetpointenabled()) ? &temp->realpwrsetpointenabled() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "reset",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_reset(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_reset()) ? &temp->reset() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "state",
                            PrimitiveAccessorBuilder<commonmodule::StateKind, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile, commonmodule::StateKind value) { return context(profile)->set_state(value); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return temp ? temp->state() : throw Exception("Primitive value parent(s) not present: essControl.essControlFSCC.essControlScheduleFSCH.ValDCSG.crvPts.state "); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) -> bool { return context(profile) != nullptr; }
                            )
                        );
                        visitor.handle(
                            "syncBackToGrid",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_syncbacktogrid(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_syncbacktogrid()) ? &temp->syncbacktogrid() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "transToIslndOnGridLossEnabled",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_transtoislndongridlossenabled(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_transtoislndongridlossenabled()) ? &temp->transtoislndongridlossenabled() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "voltageSetPointEnabled",
                            AccessorBuilder<commonmodule::ControlDPC, essmodule::ESSControlProfile>::build(
                                [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); },
                                [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_voltagesetpointenabled()) ? &temp->voltagesetpointenabled() : nullptr; }
                            )
                        );
                        visitor.end_iteration();
                    }
                    visitor.end_repeated_message_field();
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, essmodule::ESSControlProfile>::build(
                [context = mutable_context1](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
}

void visit(IModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    const auto mutable_context0 = [](solarmodule::SolarReadingProfile& profile) { return &profile; };
    const auto const_context0 = [](const solarmodule::SolarReadingProfile& profile) { return &profile; };
    visitor.start_message_field("readingMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmessageinfo()) ? &temp->readingmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, solarmodule::SolarReadingProfile>::build(
                [context = mutable_context1](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                [context = mutable_context1](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("solarInverter");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_solarinverter(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_solarinverter()) ? &temp->solarinverter() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, solarmodule::SolarReadingProfile>::build(
                [context = mutable_context1](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("solarReading");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_solarreading(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_solarreading()) ? &temp->solarreading() : nullptr; };
        visitor.start_message_field("phaseMMTN");
        {
            const auto mutable_context2 = [context = mutable_context1](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); };
            const auto const_context2 = [context = const_context1](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phasemmtn()) ? &temp->phasemmtn() : nullptr; };
            visitor.start_message_field("phsA");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                            [context = mutable_context4](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsab(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                            [context = mutable_context4](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsB");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                            [context = mutable_context4](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsbc(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                            [context = mutable_context4](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsC");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                            [context = mutable_context4](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsca(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; };
                visitor.start_message_field("logicalNode");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                    visitor.handle(
                        "identifiedObject",
                        AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                            [context = mutable_context4](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                            [context = const_context4](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "DmdWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "SupWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVAh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotVArh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                    )
                );
                visitor.handle(
                    "TotWh",
                    AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
        {
            const auto mutable_context2 = [context = mutable_context1](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); };
            const auto const_context2 = [context = const_context1](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmtr()) ? &temp->readingmmtr() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DmdVAh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvah()) ? &temp->dmdvah() : nullptr; }
                )
            );
            visitor.handle(
                "DmdVArh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdvarh()) ? &temp->dmdvarh() : nullptr; }
                )
            );
            visitor.handle(
                "DmdWh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dmdwh()) ? &temp->dmdwh() : nullptr; }
                )
            );
            visitor.handle(
                "SupVAh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvah()) ? &temp->supvah() : nullptr; }
                )
            );
            visitor.handle(
                "SupVArh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supvarh()) ? &temp->supvarh() : nullptr; }
                )
            );
            visitor.handle(
                "SupWh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_supwh()) ? &temp->supwh() : nullptr; }
                )
            );
            visitor.handle(
                "TotVAh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvah()) ? &temp->totvah() : nullptr; }
                )
            );
            visitor.handle(
                "TotVArh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totvarh()) ? &temp->totvarh() : nullptr; }
                )
            );
            visitor.handle(
                "TotWh",
                AccessorBuilder<commonmodule::BCR, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_totwh()) ? &temp->totwh() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
        {
            const auto mutable_context2 = [context = mutable_context1](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); };
            const auto const_context2 = [context = const_context1](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_readingmmxu()) ? &temp->readingmmxu() : nullptr; };
            visitor.start_message_field("logicalNode");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                visitor.handle(
                    "identifiedObject",
                    AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_a(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_a()) ? &temp->a() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "Hz",
                AccessorBuilder<commonmodule::MV, solarmodule::SolarReadingProfile>::build(
                    [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_hz(); },
                    [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_hz()) ? &temp->hz() : nullptr; }
                )
            );
            visitor.start_message_field("PF");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_pf(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pf()) ? &temp->pf() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PhV");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phv(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phv()) ? &temp->phv() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ppv()) ? &temp->ppv() : nullptr; };
                visitor.handle(
                    "phsAB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsab(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsab()) ? &temp->phsab() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsBC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsbc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsbc()) ? &temp->phsbc() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsCA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsca(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsca()) ? &temp->phsca() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_va(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_va()) ? &temp->va() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_var(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_var()) ? &temp->var() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
                    )
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_w(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_w()) ? &temp->w() : nullptr; };
                visitor.handle(
                    "net",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_net()) ? &temp->net() : nullptr; }
                    )
                );
                visitor.handle(
                    "neut",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_neut()) ? &temp->neut() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsA",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsa()) ? &temp->phsa() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsB",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsb()) ? &temp->phsb() : nullptr; }
                    )
                );
                visitor.handle(
                    "phsC",
                    AccessorBuilder<commonmodule::CMV, solarmodule::SolarReadingProfile>::build(
                        [context = mutable_context3](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); },
                        [context = const_context3](const solarmodule::SolarReadingProfile& profile) { const auto temp = context(profile); return (temp && temp->has_phsc()) ? &temp->phsc() : nullptr; }
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
