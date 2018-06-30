#include "adapter-api/config/generated/SolarStatusProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

void visit(IModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    const auto mutable_context0 = [](solarmodule::SolarStatusProfile& profile) { return &profile; };
    const auto const_context0 = [](const solarmodule::SolarStatusProfile& profile) { return &profile; };
    visitor.start_message_field("statusMessageInfo");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusmessageinfo()) ? &temp->statusmessageinfo() : nullptr; };
        visitor.handle(
            "messageInfo",
            AccessorBuilder<commonmodule::MessageInfo, solarmodule::SolarStatusProfile>::build(
                [context = mutable_context1](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_messageinfo(); },
                [context = const_context1](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_messageinfo()) ? &temp->messageinfo() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_ied(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ied()) ? &temp->ied() : nullptr; };
        visitor.handle(
            "identifiedObject",
            AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarStatusProfile>::build(
                [context = mutable_context1](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                [context = const_context1](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("solarInverter");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarinverter(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_solarinverter()) ? &temp->solarinverter() : nullptr; };
        visitor.handle(
            "conductingEquipment",
            AccessorBuilder<commonmodule::ConductingEquipment, solarmodule::SolarStatusProfile>::build(
                [context = mutable_context1](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); },
                [context = const_context1](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_conductingequipment()) ? &temp->conductingequipment() : nullptr; }
            )
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("solarStatus");
    {
        const auto mutable_context1 = [context = mutable_context0](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarstatus(); };
        const auto const_context1 = [context = const_context0](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_solarstatus()) ? &temp->solarstatus() : nullptr; };
        visitor.start_message_field("statusValue");
        {
            const auto mutable_context2 = [context = mutable_context1](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_statusvalue(); };
            const auto const_context2 = [context = const_context1](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_statusvalue()) ? &temp->statusvalue() : nullptr; };
            visitor.handle(
                "identifiedObject",
                AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarStatusProfile>::build(
                    [context = mutable_context2](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                    [context = const_context2](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                )
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("solarStatusZGEN");
        {
            const auto mutable_context2 = [context = mutable_context1](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarstatuszgen(); };
            const auto const_context2 = [context = const_context1](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_solarstatuszgen()) ? &temp->solarstatuszgen() : nullptr; };
            visitor.start_message_field("solarEventAndStatusZGEN");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solareventandstatuszgen(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_solareventandstatuszgen()) ? &temp->solareventandstatuszgen() : nullptr; };
                visitor.start_message_field("logicalNodeForEventAndStatus");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnodeforeventandstatus()) ? &temp->logicalnodeforeventandstatus() : nullptr; };
                    visitor.start_message_field("logicalNode");
                    {
                        const auto mutable_context5 = [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_logicalnode(); };
                        const auto const_context5 = [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_logicalnode()) ? &temp->logicalnode() : nullptr; };
                        visitor.handle(
                            "identifiedObject",
                            AccessorBuilder<commonmodule::IdentifiedObject, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_identifiedobject()) ? &temp->identifiedobject() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                }
                visitor.end_message_field();
                visitor.handle(
                    "AuxPwrSt",
                    AccessorBuilder<commonmodule::StatusSPS, solarmodule::SolarStatusProfile>::build(
                        [context = mutable_context3](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_auxpwrst(); },
                        [context = const_context3](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_auxpwrst()) ? &temp->auxpwrst() : nullptr; }
                    )
                );
                visitor.start_message_field("DynamicTest");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_dynamictest(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_dynamictest()) ? &temp->dynamictest() : nullptr; };
                    visitor.handle(
                        "stVal",
                        PrimitiveAccessorBuilder<commonmodule::DynamicTestKind, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile, commonmodule::DynamicTestKind value) { return context(profile)->set_stval(value); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->stval() : throw Exception("Primitive value parent(s) not present: solarStatus.solarStatusZGEN.solarEventAndStatusZGEN.DynamicTest.stVal "); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "EmgStop",
                    AccessorBuilder<commonmodule::StatusSPS, solarmodule::SolarStatusProfile>::build(
                        [context = mutable_context3](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_emgstop(); },
                        [context = const_context3](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_emgstop()) ? &temp->emgstop() : nullptr; }
                    )
                );
                visitor.start_message_field("PointStatus");
                {
                    const auto mutable_context4 = [context = mutable_context3](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pointstatus(); };
                    const auto const_context4 = [context = const_context3](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pointstatus()) ? &temp->pointstatus() : nullptr; };
                    visitor.handle(
                        "frequencySetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_frequencysetpointenabled()) ? &temp->frequencysetpointenabled() : nullptr; }
                        )
                    );
                    visitor.start_message_field("mode");
                    {
                        const auto mutable_context5 = [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_mode(); };
                        const auto const_context5 = [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_mode()) ? &temp->mode() : nullptr; };
                        visitor.handle(
                            "setVal",
                            PrimitiveAccessorBuilder<commonmodule::GridConnectModeKind, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile, commonmodule::GridConnectModeKind value) { return context(profile)->set_setval(value); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->setval() : throw Exception("Primitive value parent(s) not present: solarStatus.solarStatusZGEN.solarEventAndStatusZGEN.PointStatus.mode.setVal "); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                    visitor.handle(
                        "pctHzDroop",
                        AccessorBuilder<google::protobuf::FloatValue, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pcthzdroop(); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pcthzdroop()) ? &temp->pcthzdroop() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "pctVDroop",
                        AccessorBuilder<google::protobuf::FloatValue, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pctvdroop(); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_pctvdroop()) ? &temp->pctvdroop() : nullptr; }
                        )
                    );
                    visitor.start_message_field("rampRates");
                    {
                        const auto mutable_context5 = [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_ramprates(); };
                        const auto const_context5 = [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_ramprates()) ? &temp->ramprates() : nullptr; };
                        visitor.handle(
                            "negativeReactivePowerKVArPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativereactivepowerkvarpermin()) ? &temp->negativereactivepowerkvarpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "negativeRealPowerKWPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_negativerealpowerkwpermin()) ? &temp->negativerealpowerkwpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "positiveReactivePowerKVArPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positivereactivepowerkvarpermin()) ? &temp->positivereactivepowerkvarpermin() : nullptr; }
                            )
                        );
                        visitor.handle(
                            "positiveRealPowerKWPerMin",
                            AccessorBuilder<google::protobuf::FloatValue, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_positiverealpowerkwpermin()) ? &temp->positiverealpowerkwpermin() : nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                    visitor.handle(
                        "reactivePwrSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_reactivepwrsetpointenabled()) ? &temp->reactivepwrsetpointenabled() : nullptr; }
                        )
                    );
                    visitor.handle(
                        "realPwrSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_realpwrsetpointenabled()) ? &temp->realpwrsetpointenabled() : nullptr; }
                        )
                    );
                    visitor.start_message_field("state");
                    {
                        const auto mutable_context5 = [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_state(); };
                        const auto const_context5 = [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_state()) ? &temp->state() : nullptr; };
                        visitor.handle(
                            "value",
                            PrimitiveAccessorBuilder<commonmodule::StateKind, solarmodule::SolarStatusProfile>::build(
                                [context = mutable_context5](solarmodule::SolarStatusProfile& profile, commonmodule::StateKind value) { return context(profile)->set_value(value); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->value() : throw Exception("Primitive value parent(s) not present: solarStatus.solarStatusZGEN.solarEventAndStatusZGEN.PointStatus.state.value "); },
                                [context = const_context5](const solarmodule::SolarStatusProfile& profile) -> bool { return context(profile) != nullptr; }
                            )
                        );
                    }
                    visitor.end_message_field();
                    visitor.handle(
                        "voltageSetPointEnabled",
                        AccessorBuilder<commonmodule::ControlDPC, solarmodule::SolarStatusProfile>::build(
                            [context = mutable_context4](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); },
                            [context = const_context4](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_voltagesetpointenabled()) ? &temp->voltagesetpointenabled() : nullptr; }
                        )
                    );
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
            visitor.start_message_field("GriMod");
            {
                const auto mutable_context3 = [context = mutable_context2](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_grimod(); };
                const auto const_context3 = [context = const_context2](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return (temp && temp->has_grimod()) ? &temp->grimod() : nullptr; };
                visitor.handle(
                    "setVal",
                    PrimitiveAccessorBuilder<commonmodule::GridConnectModeKind, solarmodule::SolarStatusProfile>::build(
                        [context = mutable_context3](solarmodule::SolarStatusProfile& profile, commonmodule::GridConnectModeKind value) { return context(profile)->set_setval(value); },
                        [context = const_context3](const solarmodule::SolarStatusProfile& profile) { const auto temp = context(profile); return temp ? temp->setval() : throw Exception("Primitive value parent(s) not present: solarStatus.solarStatusZGEN.GriMod.setVal "); },
                        [context = const_context3](const solarmodule::SolarStatusProfile& profile) -> bool { return context(profile) != nullptr; }
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
