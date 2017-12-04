
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
        if(node.Tag() == "Hz") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_hz()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PPV_phsAB") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_ppv()->mutable_phsab()->mutable_cval()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PPV_phsBC") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_ppv()->mutable_phsbc()->mutable_cval()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PPV_phsCA") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_ppv()->mutable_phsca()->mutable_cval()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PhV_phsA") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_phv()->mutable_phsa()->mutable_cval()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PhV_phsA_Angle") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_phv()->mutable_phsa()->mutable_cval()->mutable_ang()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PhV_phsB") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_phv()->mutable_phsb()->mutable_cval()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PhV_phsB_Angle") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_phv()->mutable_phsb()->mutable_cval()->mutable_ang()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PhV_phsC") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_phv()->mutable_phsc()->mutable_cval()->mutable_mag()->set_f(value);
                    }
            );

        } else if(node.Tag() == "PhV_phsC_Angle") {

            this->bind_mmxu_handler(
                    node,
                    [](ReadingMMXU& mmxu, float value) {
                        mmxu.mutable_phv()->mutable_phsc()->mutable_cval()->mutable_ang()->set_f(value);
                    }
            );
        }
        else {
            throw Exception("Unknown MMXU measurement: ", node.Tag());
        }


    }

    template <class T>
    void PointMap::bind_mmxu_handler(const YAML::Node& node, const T& action)
    {
        const auto index = node["index"].as<std::uint16_t>();
        const auto scale = node["scale"].as<double>();

        if(this->analog_map.find(index) != this->analog_map.end()) {
            throw Exception("DNP3 index already mapped: ", index);
        }

        this->analog_map[index] = [=](double value, ResourceReadingProfile& profile) {
            action(
                    *profile.mutable_resourcereadingvalue()->mutable_readingmmxu(),
                    static_cast<float>(scale*value)
            );
        };
    }

}

