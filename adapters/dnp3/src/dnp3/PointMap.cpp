
#include "PointMap.h"

#include "adapter-api/util/Exception.h"

namespace openfmb {


    PointMap::PointMap(const YAML::Node &node) {
        const auto& mmxu = node["ReadingMMXU"];
    }

    bool PointMap::apply(uint16_t index, double value, ResourceReadingProfile &profile) const {
        const auto iter = this->analog_map.find(index);
        if (iter == this->analog_map.end()) return false;
        iter->second(value, profile);
        return true;
    }

    void PointMap::load_mmxu_mapping(const YAML::Node& node)
    {
        const auto index = node["index"].as<std::uint16_t>();
        const auto scale = node["scale"].as<double>();
        const auto& id = node.Tag();

        if(this->analog_map.find(index) != this->analog_map.end()) {
            throw Exception("DNP3 index already mapped: ", index);
        }

        if(id == "Hz") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_hz()->mutable_mag();
                    }
            );

        } else if(id == "PPV_phsAB") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "PPV_phsBC") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "PPV_phsCA") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "PhV_phsA") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu)  -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_phsa()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "PhV_phsA_Angle") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_phsa()->mutable_cval()->mutable_ang();
                    }
            );

        } else if(id == "PhV_phsB") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_phsb()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "PhV_phsB_Angle") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_phsb()->mutable_cval()->mutable_ang();
                    }
            );

        } else if(id == "PhV_phsC") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_phsc()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "PhV_phsC_Angle") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_phsc()->mutable_cval()->mutable_ang();
                    }
            );

        } else if(id == "PhV_neut") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_neut()->mutable_cval()->mutable_mag();
                    }
            );
        } else if(id == "PhV_net") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_net()->mutable_cval()->mutable_mag();
                    }
            );
        } else if(id == "PhV_net") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_phv()->mutable_net()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "A_phsA") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_a()->mutable_phsa()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "A_phsB") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_a()->mutable_phsb()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "A_phsC") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_a()->mutable_phsc()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "A_neut") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_a()->mutable_neut()->mutable_cval()->mutable_mag();
                    }
            );

        } else if(id == "A_net") {

            this->bind_mmxu_handler(
                    index, scale,
                    [](ReadingMMXU& mmxu) -> AnalogueValue* {
                        mmxu.mutable_a()->mutable_net()->mutable_cval()->mutable_mag();
                    }
            );

        }
        else {
            throw Exception("Unknown MMXU measurement: ", node.Tag());
        }
    }

    template <class T>
    void PointMap::bind_mmxu_handler(uint16_t index, double scale, const T& get_analogue)
    {
        this->analog_map[index] = [=](double value, ResourceReadingProfile& profile) {

            AnalogueValue* const analogue = get_analogue(
                    *profile.mutable_resourcereadingvalue()->mutable_readingmmxu()
            );

            analogue->set_f(static_cast<float>(scale*value));
        };
    }

}

