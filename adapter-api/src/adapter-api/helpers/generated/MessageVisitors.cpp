#include "MessageVisitors.h"

namespace adapter {

void visit(IProtoVisitor<resourcemodule::ResourceReadingProfile>& visitor)
{
    const auto context0 = [](resourcemodule::ResourceReadingProfile& profile) { return &profile; };
    visitor.handle(
        "readingMessageInfo",
        [context = context0](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); }
    );
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
        visitor.start_message_field("conductingEquipment");
        {
            const auto context2 = [context = context1](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); };
            visitor.handle(
                "identifiedObject",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }
            );
        }
        visitor.end_message_field();
    }
    visitor.end_message_field();
    const auto max_count0 = visitor.start_repeated_message_field("resourceReading");
    for(uint32_t count0 = 0; count0 < max_count0; ++count0)
    {
        visitor.start_iteration(count0);
        const auto context1 = [context = context0, i = count0, max = max_count0](resourcemodule::ResourceReadingProfile& profile) {
            const auto repeated = context(profile)->mutable_resourcereading();
            if(repeated->size() < max) {
                repeated->Reserve(max);
                for(size_t j = 0; j < max; ++j) {
                    repeated->Add();
                }
            }
            return repeated->Mutable(i);
        };
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
                visitor.handle(
                    "logicalNode",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
                );
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
                visitor.handle(
                    "logicalNode",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
                );
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
                visitor.handle(
                    "logicalNode",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
                );
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
                visitor.handle(
                    "logicalNode",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
                );
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
                visitor.handle(
                    "logicalNode",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
                );
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
                visitor.handle(
                    "logicalNode",
                    [context = context3](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
                );
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
            visitor.handle(
                "logicalNode",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
            );
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
            visitor.handle(
                "logicalNode",
                [context = context2](resourcemodule::ResourceReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }
            );
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
        visitor.end_iteration();
    }
    visitor.end_repeated_message_field();
}

} // end namespace adapter
