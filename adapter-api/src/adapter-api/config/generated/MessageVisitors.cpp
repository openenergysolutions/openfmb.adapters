#include "MessageVisitors.h"

namespace adapter {

void visit(IProtoVisitor<resourcemodule::ResourceReadingProfile>& visitor)
{
    const auto context0 = [](resourcemodule::ResourceReadingProfile& profile) { return &profile; };
    visitor.start_message_field("readingMessageInfo");
    {
        const auto context1 = [context = context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); };
        visitor.handle(
            "messageInfo",
            [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_messageinfo(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto context1 = [context = context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_ied(); };
        visitor.handle(
            "identifiedObject",
            [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("meter");
    {
        const auto context1 = [context = context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_meter(); };
        visitor.handle(
            "conductingEquipment",
            [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("resourceReading");
    {
        const auto context1 = [context = context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_resourcereading(); };
        visitor.handle(
            "conductingEquipmentTerminalReading",
            [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_conductingequipmentterminalreading(); }
        );
        visitor.start_message_field("phaseMMTN");
        {
            const auto context2 = [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); };
            visitor.start_message_field("phsA");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsab(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsB");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsbc(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsC");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsca(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
        {
            const auto context2 = [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); };
            visitor.start_message_field("logicalNode");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                visitor.handle(
                    "identifiedObject",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DmdVAh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
            );
            visitor.handle(
                "DmdVArh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
            );
            visitor.handle(
                "DmdWh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
            );
            visitor.handle(
                "SupVAh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvah(); }
            );
            visitor.handle(
                "SupVArh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
            );
            visitor.handle(
                "SupWh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_supwh(); }
            );
            visitor.handle(
                "TotVAh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvah(); }
            );
            visitor.handle(
                "TotVArh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
            );
            visitor.handle(
                "TotWh",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_totwh(); }
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
        {
            const auto context2 = [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); };
            visitor.start_message_field("logicalNode");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                visitor.handle(
                    "identifiedObject",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_a(); };
                visitor.handle(
                    "net",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "ClcMth",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_clcmth(); }
            );
            visitor.handle(
                "Hz",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_hz(); }
            );
            visitor.start_message_field("PF");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_pf(); };
                visitor.handle(
                    "net",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "PFSign",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_pfsign(); }
            );
            visitor.start_message_field("PhV");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phv(); };
                visitor.handle(
                    "net",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                visitor.handle(
                    "phsAB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsab(); }
                );
                visitor.handle(
                    "phsBC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsbc(); }
                );
                visitor.handle(
                    "phsCA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsca(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_va(); };
                visitor.handle(
                    "net",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_var(); };
                visitor.handle(
                    "net",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto context3 = [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_w(); };
                visitor.handle(
                    "net",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
}

void visit(IProtoVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    const auto context0 = [](switchmodule::SwitchReadingProfile& profile) { return &profile; };
    visitor.start_message_field("readingMessageInfo");
    {
        const auto context1 = [context = context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); };
        visitor.handle(
            "messageInfo",
            [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_messageinfo(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto context1 = [context = context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_ied(); };
        visitor.handle(
            "identifiedObject",
            [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("protectedSwitch");
    {
        const auto context1 = [context = context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_protectedswitch(); };
        visitor.handle(
            "conductingEquipment",
            [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("switchReading");
    {
        const auto context1 = [context = context0](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_switchreading(); };
        visitor.handle(
            "conductingEquipmentTerminalReading",
            [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_conductingequipmentterminalreading(); }
        );
        visitor.start_message_field("diffReadingMMXU");
        {
            const auto context2 = [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_diffreadingmmxu(); };
            visitor.start_message_field("logicalNode");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                visitor.handle(
                    "identifiedObject",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_a(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "ClcMth",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_clcmth(); }
            );
            visitor.handle(
                "Hz",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_hz(); }
            );
            visitor.start_message_field("PF");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_pf(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "PFSign",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_pfsign(); }
            );
            visitor.start_message_field("PhV");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phv(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                visitor.handle(
                    "phsAB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsab(); }
                );
                visitor.handle(
                    "phsBC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsbc(); }
                );
                visitor.handle(
                    "phsCA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsca(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_va(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_var(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_w(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("phaseMMTN");
        {
            const auto context2 = [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); };
            visitor.start_message_field("phsA");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsab(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsB");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsbc(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsC");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsca(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "DmdVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
                );
                visitor.handle(
                    "DmdVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
                );
                visitor.handle(
                    "DmdWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
                );
                visitor.handle(
                    "SupVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
                );
                visitor.handle(
                    "SupVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
                );
                visitor.handle(
                    "SupWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
                );
                visitor.handle(
                    "TotVAh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
                );
                visitor.handle(
                    "TotVArh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
                );
                visitor.handle(
                    "TotWh",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
        {
            const auto context2 = [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); };
            visitor.start_message_field("logicalNode");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                visitor.handle(
                    "identifiedObject",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DmdVAh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }
            );
            visitor.handle(
                "DmdVArh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }
            );
            visitor.handle(
                "DmdWh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }
            );
            visitor.handle(
                "SupVAh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvah(); }
            );
            visitor.handle(
                "SupVArh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supvarh(); }
            );
            visitor.handle(
                "SupWh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_supwh(); }
            );
            visitor.handle(
                "TotVAh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvah(); }
            );
            visitor.handle(
                "TotVArh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totvarh(); }
            );
            visitor.handle(
                "TotWh",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_totwh(); }
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
        {
            const auto context2 = [context = context1](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); };
            visitor.start_message_field("logicalNode");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_logicalnode(); };
                visitor.handle(
                    "identifiedObject",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("A");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_a(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "ClcMth",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_clcmth(); }
            );
            visitor.handle(
                "Hz",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_hz(); }
            );
            visitor.start_message_field("PF");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_pf(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "PFSign",
                [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_pfsign(); }
            );
            visitor.start_message_field("PhV");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phv(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("PPV");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_ppv(); };
                visitor.handle(
                    "phsAB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsab(); }
                );
                visitor.handle(
                    "phsBC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsbc(); }
                );
                visitor.handle(
                    "phsCA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsca(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VA");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_va(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("VAr");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_var(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
            visitor.start_message_field("W");
            {
                const auto context3 = [context = context2](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_w(); };
                visitor.handle(
                    "net",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_net(); }
                );
                visitor.handle(
                    "neut",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_neut(); }
                );
                visitor.handle(
                    "phsA",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsa(); }
                );
                visitor.handle(
                    "phsB",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsb(); }
                );
                visitor.handle(
                    "phsC",
                    [context = context3](switchmodule::SwitchReadingProfile& profile) { return context(profile)->mutable_phsc(); }
                );
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
}

void visit(IProtoVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    const auto context0 = [](switchmodule::SwitchStatusProfile& profile) { return &profile; };
    visitor.start_message_field("statusMessageInfo");
    {
        const auto context1 = [context = context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); };
        visitor.handle(
            "messageInfo",
            [context = context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("ied");
    {
        const auto context1 = [context = context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_ied(); };
        visitor.handle(
            "identifiedObject",
            [context = context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("protectedSwitch");
    {
        const auto context1 = [context = context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_protectedswitch(); };
        visitor.handle(
            "conductingEquipment",
            [context = context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }
        );
    }
    visitor.end_message_field();
    visitor.start_message_field("switchStatus");
    {
        const auto context1 = [context = context0](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatus(); };
        visitor.start_message_field("statusValue");
        {
            const auto context2 = [context = context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusvalue(); };
            visitor.handle(
                "identifiedObject",
                [context = context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }
            );
        }
        visitor.end_message_field();
        visitor.start_message_field("switchStatusXSWI");
        {
            const auto context2 = [context = context1](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatusxswi(); };
            visitor.start_message_field("logicalNodeForEventAndStatus");
            {
                const auto context3 = [context = context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); };
                visitor.start_message_field("logicalNode");
                {
                    const auto context4 = [context = context3](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnode(); };
                    visitor.handle(
                        "identifiedObject",
                        [context = context4](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }
                    );
                }
                visitor.end_message_field();
                visitor.handle(
                    "Beh",
                    [context = context3](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_beh(); }
                );
            }
            visitor.end_message_field();
            visitor.handle(
                "DynamicTest",
                [context = context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }
            );
            visitor.handle(
                "Pos",
                [context = context2](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_pos(); }
            );
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
}

} // end namespace adapter