
#ifndef OPENFMB_ADAPTER_SINGLEREGISTERENUMMAPPING_H
#define OPENFMB_ADAPTER_SINGLEREGISTERENUMMAPPING_H

#include <cstdint>
#include <map>

#include <google/protobuf/descriptor.h>

#include <yaml-cpp/yaml.h>

namespace adapter {
namespace modbus {
namespace master {

    class SingleRegisterEnumMapping {

        const google::protobuf::EnumDescriptor* descriptor;
        const uint16_t mask;
        const std::map<uint16_t, int> mapping;

    public:
        SingleRegisterEnumMapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor);

        bool get_mapping(uint16_t value, int& out) const;
    };

}
}
}

#endif //OPENFMB_ADAPTER_SINGLEREGISTERENUMMAPPING_H
