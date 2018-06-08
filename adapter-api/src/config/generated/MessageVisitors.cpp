#include "adapter-api/config/generated/MessageVisitors.h"

namespace adapter {

void visit(const resourcemodule::ResourceReadingProfile& message, IMessageVisitor& visitor)
{
    const auto& level0 = message;
    if(level0.has_resourcereading())
    {
        const auto& level1 = level0.resourcereading();
        visitor.start_message_field("resourceReading");
        if(level1.has_phasemmtn())
        {
            const auto& level2 = level1.phasemmtn();
            visitor.start_message_field("phaseMMTN");
            if(level2.has_phsa())
            {
                const auto& level3 = level2.phsa();
                visitor.start_message_field("phsA");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsab())
            {
                const auto& level3 = level2.phsab();
                visitor.start_message_field("phsAB");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsb())
            {
                const auto& level3 = level2.phsb();
                visitor.start_message_field("phsB");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsbc())
            {
                const auto& level3 = level2.phsbc();
                visitor.start_message_field("phsBC");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsc())
            {
                const auto& level3 = level2.phsc();
                visitor.start_message_field("phsC");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsca())
            {
                const auto& level3 = level2.phsca();
                visitor.start_message_field("phsCA");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        if(level1.has_readingmmtr())
        {
            const auto& level2 = level1.readingmmtr();
            visitor.start_message_field("readingMMTR");
            if(level2.has_dmdvah())
            {
                visitor.handle("DmdVAh", level2.dmdvah());
            }
            if(level2.has_dmdvarh())
            {
                visitor.handle("DmdVArh", level2.dmdvarh());
            }
            if(level2.has_dmdwh())
            {
                visitor.handle("DmdWh", level2.dmdwh());
            }
            if(level2.has_supvah())
            {
                visitor.handle("SupVAh", level2.supvah());
            }
            if(level2.has_supvarh())
            {
                visitor.handle("SupVArh", level2.supvarh());
            }
            if(level2.has_supwh())
            {
                visitor.handle("SupWh", level2.supwh());
            }
            if(level2.has_totvah())
            {
                visitor.handle("TotVAh", level2.totvah());
            }
            if(level2.has_totvarh())
            {
                visitor.handle("TotVArh", level2.totvarh());
            }
            if(level2.has_totwh())
            {
                visitor.handle("TotWh", level2.totwh());
            }
            visitor.end_message_field();
        }
        if(level1.has_readingmmxu())
        {
            const auto& level2 = level1.readingmmxu();
            visitor.start_message_field("readingMMXU");
            if(level2.has_a())
            {
                const auto& level3 = level2.a();
                visitor.start_message_field("A");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_hz())
            {
                visitor.handle("Hz", level2.hz());
            }
            if(level2.has_pf())
            {
                const auto& level3 = level2.pf();
                visitor.start_message_field("PF");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_phv())
            {
                const auto& level3 = level2.phv();
                visitor.start_message_field("PhV");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_ppv())
            {
                const auto& level3 = level2.ppv();
                visitor.start_message_field("PPV");
                if(level3.has_phsab())
                {
                    visitor.handle("phsAB", level3.phsab());
                }
                if(level3.has_phsbc())
                {
                    visitor.handle("phsBC", level3.phsbc());
                }
                if(level3.has_phsca())
                {
                    visitor.handle("phsCA", level3.phsca());
                }
                visitor.end_message_field();
            }
            if(level2.has_va())
            {
                const auto& level3 = level2.va();
                visitor.start_message_field("VA");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_var())
            {
                const auto& level3 = level2.var();
                visitor.start_message_field("VAr");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_w())
            {
                const auto& level3 = level2.w();
                visitor.start_message_field("W");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchReadingProfile& message, IMessageVisitor& visitor)
{
    const auto& level0 = message;
    visitor.start_message_field("switchreading");
    for(decltype(level0.switchreading_size()) i = 0; i < level0.switchreading_size(); ++i)
    {
        visitor.start_iteration(i);
        const auto& level1 = level0.switchreading(i);
        if(level1.has_diffreadingmmxu())
        {
            const auto& level2 = level1.diffreadingmmxu();
            visitor.start_message_field("diffReadingMMXU");
            if(level2.has_a())
            {
                const auto& level3 = level2.a();
                visitor.start_message_field("A");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_hz())
            {
                visitor.handle("Hz", level2.hz());
            }
            if(level2.has_pf())
            {
                const auto& level3 = level2.pf();
                visitor.start_message_field("PF");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_phv())
            {
                const auto& level3 = level2.phv();
                visitor.start_message_field("PhV");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_ppv())
            {
                const auto& level3 = level2.ppv();
                visitor.start_message_field("PPV");
                if(level3.has_phsab())
                {
                    visitor.handle("phsAB", level3.phsab());
                }
                if(level3.has_phsbc())
                {
                    visitor.handle("phsBC", level3.phsbc());
                }
                if(level3.has_phsca())
                {
                    visitor.handle("phsCA", level3.phsca());
                }
                visitor.end_message_field();
            }
            if(level2.has_va())
            {
                const auto& level3 = level2.va();
                visitor.start_message_field("VA");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_var())
            {
                const auto& level3 = level2.var();
                visitor.start_message_field("VAr");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_w())
            {
                const auto& level3 = level2.w();
                visitor.start_message_field("W");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        if(level1.has_phasemmtn())
        {
            const auto& level2 = level1.phasemmtn();
            visitor.start_message_field("phaseMMTN");
            if(level2.has_phsa())
            {
                const auto& level3 = level2.phsa();
                visitor.start_message_field("phsA");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsab())
            {
                const auto& level3 = level2.phsab();
                visitor.start_message_field("phsAB");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsb())
            {
                const auto& level3 = level2.phsb();
                visitor.start_message_field("phsB");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsbc())
            {
                const auto& level3 = level2.phsbc();
                visitor.start_message_field("phsBC");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsc())
            {
                const auto& level3 = level2.phsc();
                visitor.start_message_field("phsC");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsca())
            {
                const auto& level3 = level2.phsca();
                visitor.start_message_field("phsCA");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        if(level1.has_readingmmtr())
        {
            const auto& level2 = level1.readingmmtr();
            visitor.start_message_field("readingMMTR");
            if(level2.has_dmdvah())
            {
                visitor.handle("DmdVAh", level2.dmdvah());
            }
            if(level2.has_dmdvarh())
            {
                visitor.handle("DmdVArh", level2.dmdvarh());
            }
            if(level2.has_dmdwh())
            {
                visitor.handle("DmdWh", level2.dmdwh());
            }
            if(level2.has_supvah())
            {
                visitor.handle("SupVAh", level2.supvah());
            }
            if(level2.has_supvarh())
            {
                visitor.handle("SupVArh", level2.supvarh());
            }
            if(level2.has_supwh())
            {
                visitor.handle("SupWh", level2.supwh());
            }
            if(level2.has_totvah())
            {
                visitor.handle("TotVAh", level2.totvah());
            }
            if(level2.has_totvarh())
            {
                visitor.handle("TotVArh", level2.totvarh());
            }
            if(level2.has_totwh())
            {
                visitor.handle("TotWh", level2.totwh());
            }
            visitor.end_message_field();
        }
        if(level1.has_readingmmxu())
        {
            const auto& level2 = level1.readingmmxu();
            visitor.start_message_field("readingMMXU");
            if(level2.has_a())
            {
                const auto& level3 = level2.a();
                visitor.start_message_field("A");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_hz())
            {
                visitor.handle("Hz", level2.hz());
            }
            if(level2.has_pf())
            {
                const auto& level3 = level2.pf();
                visitor.start_message_field("PF");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_phv())
            {
                const auto& level3 = level2.phv();
                visitor.start_message_field("PhV");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_ppv())
            {
                const auto& level3 = level2.ppv();
                visitor.start_message_field("PPV");
                if(level3.has_phsab())
                {
                    visitor.handle("phsAB", level3.phsab());
                }
                if(level3.has_phsbc())
                {
                    visitor.handle("phsBC", level3.phsbc());
                }
                if(level3.has_phsca())
                {
                    visitor.handle("phsCA", level3.phsca());
                }
                visitor.end_message_field();
            }
            if(level2.has_va())
            {
                const auto& level3 = level2.va();
                visitor.start_message_field("VA");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_var())
            {
                const auto& level3 = level2.var();
                visitor.start_message_field("VAr");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_w())
            {
                const auto& level3 = level2.w();
                visitor.start_message_field("W");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        visitor.end_iteration();
    }
    visitor.end_message_field();
}

void visit(const switchmodule::SwitchStatusProfile& message, IMessageVisitor& visitor)
{
    const auto& level0 = message;
    if(level0.has_switchstatus())
    {
        const auto& level1 = level0.switchstatus();
        visitor.start_message_field("switchStatus");
        if(level1.has_switchstatusxswi())
        {
            const auto& level2 = level1.switchstatusxswi();
            visitor.start_message_field("switchStatusXSWI");
            if(level2.has_pos())
            {
                visitor.handle("Pos", level2.pos());
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
}

void visit(const switchmodule::SwitchControlProfile& message, IMessageVisitor& visitor)
{
    const auto& level0 = message;
}

void visit(const essmodule::ESSReadingProfile& message, IMessageVisitor& visitor)
{
    const auto& level0 = message;
    if(level0.has_essreading())
    {
        const auto& level1 = level0.essreading();
        visitor.start_message_field("essReading");
        if(level1.has_phasemmtn())
        {
            const auto& level2 = level1.phasemmtn();
            visitor.start_message_field("phaseMMTN");
            if(level2.has_phsa())
            {
                const auto& level3 = level2.phsa();
                visitor.start_message_field("phsA");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsab())
            {
                const auto& level3 = level2.phsab();
                visitor.start_message_field("phsAB");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsb())
            {
                const auto& level3 = level2.phsb();
                visitor.start_message_field("phsB");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsbc())
            {
                const auto& level3 = level2.phsbc();
                visitor.start_message_field("phsBC");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsc())
            {
                const auto& level3 = level2.phsc();
                visitor.start_message_field("phsC");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            if(level2.has_phsca())
            {
                const auto& level3 = level2.phsca();
                visitor.start_message_field("phsCA");
                if(level3.has_dmdvah())
                {
                    visitor.handle("DmdVAh", level3.dmdvah());
                }
                if(level3.has_dmdvarh())
                {
                    visitor.handle("DmdVArh", level3.dmdvarh());
                }
                if(level3.has_dmdwh())
                {
                    visitor.handle("DmdWh", level3.dmdwh());
                }
                if(level3.has_supvah())
                {
                    visitor.handle("SupVAh", level3.supvah());
                }
                if(level3.has_supvarh())
                {
                    visitor.handle("SupVArh", level3.supvarh());
                }
                if(level3.has_supwh())
                {
                    visitor.handle("SupWh", level3.supwh());
                }
                if(level3.has_totvah())
                {
                    visitor.handle("TotVAh", level3.totvah());
                }
                if(level3.has_totvarh())
                {
                    visitor.handle("TotVArh", level3.totvarh());
                }
                if(level3.has_totwh())
                {
                    visitor.handle("TotWh", level3.totwh());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        if(level1.has_readingmmtr())
        {
            const auto& level2 = level1.readingmmtr();
            visitor.start_message_field("readingMMTR");
            if(level2.has_dmdvah())
            {
                visitor.handle("DmdVAh", level2.dmdvah());
            }
            if(level2.has_dmdvarh())
            {
                visitor.handle("DmdVArh", level2.dmdvarh());
            }
            if(level2.has_dmdwh())
            {
                visitor.handle("DmdWh", level2.dmdwh());
            }
            if(level2.has_supvah())
            {
                visitor.handle("SupVAh", level2.supvah());
            }
            if(level2.has_supvarh())
            {
                visitor.handle("SupVArh", level2.supvarh());
            }
            if(level2.has_supwh())
            {
                visitor.handle("SupWh", level2.supwh());
            }
            if(level2.has_totvah())
            {
                visitor.handle("TotVAh", level2.totvah());
            }
            if(level2.has_totvarh())
            {
                visitor.handle("TotVArh", level2.totvarh());
            }
            if(level2.has_totwh())
            {
                visitor.handle("TotWh", level2.totwh());
            }
            visitor.end_message_field();
        }
        if(level1.has_readingmmxu())
        {
            const auto& level2 = level1.readingmmxu();
            visitor.start_message_field("readingMMXU");
            if(level2.has_a())
            {
                const auto& level3 = level2.a();
                visitor.start_message_field("A");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_hz())
            {
                visitor.handle("Hz", level2.hz());
            }
            if(level2.has_pf())
            {
                const auto& level3 = level2.pf();
                visitor.start_message_field("PF");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_phv())
            {
                const auto& level3 = level2.phv();
                visitor.start_message_field("PhV");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_ppv())
            {
                const auto& level3 = level2.ppv();
                visitor.start_message_field("PPV");
                if(level3.has_phsab())
                {
                    visitor.handle("phsAB", level3.phsab());
                }
                if(level3.has_phsbc())
                {
                    visitor.handle("phsBC", level3.phsbc());
                }
                if(level3.has_phsca())
                {
                    visitor.handle("phsCA", level3.phsca());
                }
                visitor.end_message_field();
            }
            if(level2.has_va())
            {
                const auto& level3 = level2.va();
                visitor.start_message_field("VA");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_var())
            {
                const auto& level3 = level2.var();
                visitor.start_message_field("VAr");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            if(level2.has_w())
            {
                const auto& level3 = level2.w();
                visitor.start_message_field("W");
                if(level3.has_net())
                {
                    visitor.handle("net", level3.net());
                }
                if(level3.has_neut())
                {
                    visitor.handle("neut", level3.neut());
                }
                if(level3.has_phsa())
                {
                    visitor.handle("phsA", level3.phsa());
                }
                if(level3.has_phsb())
                {
                    visitor.handle("phsB", level3.phsb());
                }
                if(level3.has_phsc())
                {
                    visitor.handle("phsC", level3.phsc());
                }
                visitor.end_message_field();
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
}

void visit(const essmodule::ESSStatusProfile& message, IMessageVisitor& visitor)
{
    const auto& level0 = message;
    if(level0.has_essstatus())
    {
        const auto& level1 = level0.essstatus();
        visitor.start_message_field("essStatus");
        if(level1.has_essstatuszbat())
        {
            const auto& level2 = level1.essstatuszbat();
            visitor.start_message_field("essStatusZBAT");
            if(level2.has_soc())
            {
                visitor.handle("Soc", level2.soc());
            }
            visitor.end_message_field();
        }
        visitor.end_message_field();
    }
}

} // end namespace adapter
