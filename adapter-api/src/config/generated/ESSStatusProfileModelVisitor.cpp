#include "adapter-api/config/generated/ESSStatusProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

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
                visitor.start_message_field("DynamicTest");
                {
                    const auto mutable_context4 = [context = mutable_context3](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_dynamictest(); };
                    const auto const_context4 = [context = const_context3](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dynamictest()) ? &temp->dynamictest() : nullptr; };
                    visitor.handle(
                        "stVal",
                        PrimitiveAccessorBuilder<commonmodule::DynamicTestKind, essmodule::ESSStatusProfile>::build(
                            [context = mutable_context4](essmodule::ESSStatusProfile& profile, commonmodule::DynamicTestKind value) { return context(profile)->set_stval(value); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->stval() : throw Exception("Primitive value parent(s) not present: essStatus.essStatusZGEN.eSSEventAndStatusZGEN.DynamicTest.stVal "); },
                            [context = const_context4](const essmodule::ESSStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
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
                    visitor.start_message_field("state");
                    {
                        const auto mutable_context5 = [context = mutable_context4](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_state(); };
                        const auto const_context5 = [context = const_context4](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_state()) ? &temp->state() : nullptr; };
                        visitor.handle(
                            "value",
                            PrimitiveAccessorBuilder<commonmodule::StateKind, essmodule::ESSStatusProfile>::build(
                                [context = mutable_context5](essmodule::ESSStatusProfile& profile, commonmodule::StateKind value) { return context(profile)->set_value(value); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->value() : throw Exception("Primitive value parent(s) not present: essStatus.essStatusZGEN.eSSEventAndStatusZGEN.PointStatus.state.value "); },
                                [context = const_context5](const essmodule::ESSStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
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

} // end namespace adapter
