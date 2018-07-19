#include "adapter-api/config/generated/ESSControlProfileModelVisitor.h"
#include "adapter-api/util/Exception.h"
#include "../AccessorImpl.h"

namespace adapter {

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
                        visitor.start_message_field("state");
                        {
                            const auto mutable_context6 = [context = mutable_context5](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_state(); };
                            const auto const_context6 = [context = const_context5](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return (temp && temp->has_state()) ? &temp->state() : nullptr; };
                            visitor.handle(
                                "value",
                                PrimitiveAccessorBuilder<commonmodule::StateKind, essmodule::ESSControlProfile>::build(
                                    [context = mutable_context6](essmodule::ESSControlProfile& profile, commonmodule::StateKind value) { return context(profile)->set_value(value); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) { const auto temp = context(profile); return temp ? temp->value() : throw Exception("Primitive value parent(s) not present: essControl.essControlFSCC.essControlScheduleFSCH.ValDCSG.crvPts.state.value "); },
                                    [context = const_context6](const essmodule::ESSControlProfile& profile) -> bool { return context(profile) != nullptr; }
                                )
                            );
                        }
                        visitor.end_message_field();
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

} // end namespace adapter
