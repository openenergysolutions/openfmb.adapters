#include "MessageVisitors.h"

namespace adapter {

void visit(IProtoVisitor<resourcemodule::ResourceReadingProfile>& visitor)
{
    /*
    visitor.handle("readingMessageInfo", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::ReadingMessageInfo* {
        return profile.mutable_readingmessageinfo();
    });
    */
    visitor.start_message_field("resourceReading");
        visitor.start_message_field("phaseMMTN");
            visitor.start_message_field("phsA");
                visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_dmdvah();
                });
                visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_dmdvarh();
                });
                visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_dmdwh();
                });
                visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_supvah();
                });
                visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_supvarh();
                });
                visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_supwh();
                });
                visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_totvah();
                });
                visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_totvarh();
                });
                visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsa()->mutable_totwh();
                });
            visitor.end_message_field();
            visitor.start_message_field("phsAB");
                visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_dmdvah();
                });
                visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_dmdvarh();
                });
                visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_dmdwh();
                });
                visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_supvah();
                });
                visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_supvarh();
                });
                visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_supwh();
                });
                visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_totvah();
                });
                visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_totvarh();
                });
                visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsab()->mutable_totwh();
                });
            visitor.end_message_field();
            visitor.start_message_field("phsB");
                visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_dmdvah();
                });
                visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_dmdvarh();
                });
                visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_dmdwh();
                });
                visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_supvah();
                });
                visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_supvarh();
                });
                visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_supwh();
                });
                visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_totvah();
                });
                visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_totvarh();
                });
                visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsb()->mutable_totwh();
                });
            visitor.end_message_field();
            visitor.start_message_field("phsBC");
                visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_dmdvah();
                });
                visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_dmdvarh();
                });
                visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_dmdwh();
                });
                visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_supvah();
                });
                visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_supvarh();
                });
                visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_supwh();
                });
                visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_totvah();
                });
                visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_totvarh();
                });
                visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsbc()->mutable_totwh();
                });
            visitor.end_message_field();
            visitor.start_message_field("phsC");
                visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_dmdvah();
                });
                visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_dmdvarh();
                });
                visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_dmdwh();
                });
                visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_supvah();
                });
                visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_supvarh();
                });
                visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_supwh();
                });
                visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_totvah();
                });
                visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_totvarh();
                });
                visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsc()->mutable_totwh();
                });
            visitor.end_message_field();
            visitor.start_message_field("phsCA");
                visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_dmdvah();
                });
                visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_dmdvarh();
                });
                visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_dmdwh();
                });
                visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_supvah();
                });
                visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_supvarh();
                });
                visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_supwh();
                });
                visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_totvah();
                });
                visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_totvarh();
                });
                visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                    return profile.mutable_resourcereading()->mutable_phasemmtn()->mutable_phsca()->mutable_totwh();
                });
            visitor.end_message_field();
        visitor.end_message_field();
        visitor.start_message_field("readingMMTR");
            visitor.handle("DmdVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_dmdvah();
            });
            visitor.handle("DmdVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_dmdvarh();
            });
            visitor.handle("DmdWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_dmdwh();
            });
            visitor.handle("SupVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_supvah();
            });
            visitor.handle("SupVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_supvarh();
            });
            visitor.handle("SupWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_supwh();
            });
            visitor.handle("TotVAh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_totvah();
            });
            visitor.handle("TotVArh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_totvarh();
            });
            visitor.handle("TotWh", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::BCR* {
                return profile.mutable_resourcereading()->mutable_readingmmtr()->mutable_totwh();
            });
        visitor.end_message_field();
        visitor.start_message_field("readingMMXU");
            visitor.start_message_field("A");
                visitor.handle("net", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_net();
                });
                visitor.handle("neut", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_neut();
                });
                visitor.handle("phsA", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsa();
                });
                visitor.handle("phsB", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsb();
                });
                visitor.handle("phsC", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_a()->mutable_phsc();
                });
            visitor.end_message_field();
            visitor.handle("Hz", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::MV* {
                return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_hz();
            });
            visitor.start_message_field("PhV");
                visitor.handle("net", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_net();
                });
                visitor.handle("neut", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_neut();
                });
                visitor.handle("phsA", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsa();
                });
                visitor.handle("phsB", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsb();
                });
                visitor.handle("phsC", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_phv()->mutable_phsc();
                });
            visitor.end_message_field();
            visitor.start_message_field("PPV");
                visitor.handle("phsAB", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsab();
                });
                visitor.handle("phsBC", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsbc();
                });
                visitor.handle("phsCA", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_ppv()->mutable_phsca();
                });
            visitor.end_message_field();
            visitor.start_message_field("VA");
                visitor.handle("net", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_net();
                });
                visitor.handle("neut", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_neut();
                });
                visitor.handle("phsA", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsa();
                });
                visitor.handle("phsB", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsb();
                });
                visitor.handle("phsC", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_va()->mutable_phsc();
                });
            visitor.end_message_field();
            visitor.start_message_field("VAr");
                visitor.handle("net", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_net();
                });
                visitor.handle("neut", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_neut();
                });
                visitor.handle("phsA", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsa();
                });
                visitor.handle("phsB", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsb();
                });
                visitor.handle("phsC", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_var()->mutable_phsc();
                });
            visitor.end_message_field();
            visitor.start_message_field("W");
                visitor.handle("net", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_net();
                });
                visitor.handle("neut", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_neut();
                });
                visitor.handle("phsA", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsa();
                });
                visitor.handle("phsB", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsb();
                });
                visitor.handle("phsC", [](resourcemodule::ResourceReadingProfile& profile) -> commonmodule::CMV* {
                    return profile.mutable_resourcereading()->mutable_readingmmxu()->mutable_w()->mutable_phsc();
                });
            visitor.end_message_field();
        visitor.end_message_field();
    visitor.end_message_field();
}

} // end namespace adapter
