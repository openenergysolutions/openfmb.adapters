

#include "PointMap.h"

#include "adapter-api/util/Exception.h"

#include <yaml-cpp/node/detail/iterator.h>
#include <yaml-cpp/node/detail/node.h>

namespace openfmb {


    PointMap::PointMap(const YAML::Node &node) {
        this->load_mmxu_mapping(node["mmxu"]);
    }

    bool PointMap::apply(uint16_t index, double value, ResourceReadingProfile &profile) const {
        const auto iter = this->analog_map.find(index);
        if (iter == this->analog_map.end()) return false;
        const auto calc_value = static_cast<float>(value*iter->second.scale);
        iter->second.select(profile)->set_f(calc_value);
        return true;
    }

    void PointMap::load_mmxu_mapping(const YAML::Node& node)
    {

        this->add_analogue_handler(
            node["hz.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_hz()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["ppv.phsab.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["ppv.phsbc.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["ppv.phsca.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_mag();
            }
        );


        this->add_analogue_handler(
            node["phv.phsa.cval.mag"],
            [](ResourceReadingProfile& p)  -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["phv.phsa.cval.ang"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_ang();
            }
        );

        this->add_analogue_handler(
            node["phv.phsb.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_phsb()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["phv.phsb.cval.ang"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_phsb()->mutable_cval()->mutable_ang();
            }
        );

        this->add_analogue_handler(
            node["phv.phsc.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_phsc()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["phv.phsc.cval.ang"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_phsc()->mutable_cval()->mutable_ang();
            }
        );

        this->add_analogue_handler(
            node["phv.neut.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_neut()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["phv.net.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_phv()->mutable_net()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["a.phsa.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_a()->mutable_phsa()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["a.phsb.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_a()->mutable_phsb()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["a.phsc.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_a()->mutable_phsc()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["a.neut.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_a()->mutable_neut()->mutable_cval()->mutable_mag();
            }
        );

        this->add_analogue_handler(
            node["a.net.cval.mag"],
            [](ResourceReadingProfile& p) -> AnalogueValue* {
                mmxu(p)->mutable_a()->mutable_net()->mutable_cval()->mutable_mag();
            }
        );

    }

    void PointMap::add_analogue_handler(const YAML::Node& node, select_fun_t select)
    {
        const auto index = node["index"].as<std::uint16_t>();
        const auto scale = node["scale"].as<double>();

        if(this->analog_map.find(index) != this->analog_map.end()) {
            throw Exception("DNP3 index already mapped: ", index);
        }

        this->analog_map[index] = AnalogRecord(select, scale);
    }

}

