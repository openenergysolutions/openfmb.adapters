#include "adapter-api/config/generated/LoadStatusProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

void visit(IModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    const auto mutable_context0 = [](loadmodule::LoadStatusProfile& profile) { return &profile; };
    const auto const_context0 = [](const loadmodule::LoadStatusProfile& profile) { return &profile; };
    visitor.start_message_field("statusMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); };
        const auto const_context1 = [context = const_context0](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusmessageinfo()) ? &temp->statusmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, loadmodule::LoadStatusProfile>::build(
                [context = mutable_context1](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("energyConsumer");
    {
        const auto mutable_context1 = [context = mutable_context0](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_energyconsumer(); };
        const auto const_context1 = [context = const_context0](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_energyconsumer()) ? &temp->energyconsumer() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, loadmodule::LoadStatusProfile>::build(
                [context = mutable_context1](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, loadmodule::LoadStatusProfile>::build(
                [context = mutable_context1](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("loadStatus");
    {
        const auto mutable_context1 = [context = mutable_context0](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_loadstatus(); };
        const auto const_context1 = [context = const_context0](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_loadstatus()) ? &temp->loadstatus() : nullptr; };
        visitor.start_message_field("statusValue");
        {
            const auto mutable_context2 = [context = mutable_context1](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_statusvalue(); };
            const auto const_context2 = [context = const_context1](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusvalue()) ? &temp->statusvalue() : nullptr; };
            visitor.handle(
                "identifiedObject",
                AccessorBuilder<commonmodule::IdentifiedObject, loadmodule::LoadStatusProfile>::build(
                    [context = mutable_context2](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                    [context = const_context2](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("loadStatusZGLD");
        {
            const auto mutable_context2 = [context = mutable_context1](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_loadstatuszgld(); };
            const auto const_context2 = [context = const_context1](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_loadstatuszgld()) ? &temp->loadstatuszgld() : nullptr; };
            visitor.start_message_field("loadEventAndStatusZGLD");
            {
                const auto mutable_context3 = [context = mutable_context2](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_loadeventandstatuszgld(); };
                const auto const_context3 = [context = const_context2](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_loadeventandstatuszgld()) ? &temp->loadeventandstatuszgld() : nullptr; };
                visitor.start_message_field("logicalNodeForEventAndStatus");
                {
                    const auto mutable_context4 = [context = mutable_context3](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); };
                    const auto const_context4 = [context = const_context3](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforeventandstatus()) ? &temp->logicalnodeforeventandstatus() : nullptr; };
                    visitor.start_message_field("logicalNode");
                    {
                        const auto mutable_context5 = [context = mutable_context4](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_logicalnode(); };
                        const auto const_context5 = [context = const_context4](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                        visitor.handle(
                            "identifiedObject",
                            AccessorBuilder<commonmodule::IdentifiedObject, loadmodule::LoadStatusProfile>::build(
                                [context = mutable_context5](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                                [context = const_context5](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                }
                visitor.end_message_field();
                visitor.handle(
                    "EmgStop",
                    AccessorBuilder<commonmodule::StatusSPS, loadmodule::LoadStatusProfile>::build(
                        [context = mutable_context3](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_emgstop(); },
                        [context = const_context3](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_emgstop()) ? &temp->emgstop() : nullptr; }
                    )
                );
                visitor.start_message_field("PointStatus");
                {
                    const auto mutable_context4 = [context = mutable_context3](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_pointstatus(); };
                    const auto const_context4 = [context = const_context3](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pointstatus()) ? &temp->pointstatus() : nullptr; };
                    visitor.start_message_field("rampRates");
                    {
                        const auto mutable_context5 = [context = mutable_context4](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_ramprates(); };
                        const auto const_context5 = [context = const_context4](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ramprates()) ? &temp->ramprates() : nullptr; };
                        visitor.handle(
                            "negativeReactivePowerKVArPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, loadmodule::LoadStatusProfile>::build(
                                [context = mutable_context5](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); },
                                [context = const_context5](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativereactivepowerkvarpermin()) ? &temp->negativereactivepowerkvarpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "negativeRealPowerKWPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, loadmodule::LoadStatusProfile>::build(
                                [context = mutable_context5](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); },
                                [context = const_context5](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativerealpowerkwpermin()) ? &temp->negativerealpowerkwpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "positiveReactivePowerKVArPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, loadmodule::LoadStatusProfile>::build(
                                [context = mutable_context5](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); },
                                [context = const_context5](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positivereactivepowerkvarpermin()) ? &temp->positivereactivepowerkvarpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "positiveRealPowerKWPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, loadmodule::LoadStatusProfile>::build(
                                [context = mutable_context5](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); },
                                [context = const_context5](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positiverealpowerkwpermin()) ? &temp->positiverealpowerkwpermin() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                    visitor.handle(
                        "reactivePwrSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, loadmodule::LoadStatusProfile>::build(
                            [context = mutable_context4](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); },
                            [context = const_context4](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_reactivepwrsetpointenabled()) ? &temp->reactivepwrsetpointenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "realPwrSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, loadmodule::LoadStatusProfile>::build(
                            [context = mutable_context4](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); },
                            [context = const_context4](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_realpwrsetpointenabled()) ? &temp->realpwrsetpointenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "reset",
                        AccessorBuilder<commonmodule::ControlDPC, loadmodule::LoadStatusProfile>::build(
                            [context = mutable_context4](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_reset(); },
                            [context = const_context4](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_reset()) ? &temp->reset() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "state",
                        PrimitiveAccessorBuilder<commonmodule::StateKind, loadmodule::LoadStatusProfile>::build(
                            [context = mutable_context4](loadmodule::LoadStatusProfile& profile, commonmodule::StateKind value) { return context(profile)->set_state(value); },
                            [context = const_context4](const loadmodule::LoadStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->state() : throw Exception("Primitive value parent(s) not present: loadStatus.loadStatusZGLD.loadEventAndStatusZGLD.PointStatus.state "); },
                            [context = const_context4](const loadmodule::LoadStatusProfile& profile) -> bool { return context(profile) != nullptr; }
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
}

} // end namespace adapter
