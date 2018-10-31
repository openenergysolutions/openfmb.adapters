
#ifndef OPENFMB_ADAPTER_MULTIPLEREGISTERENUMMAPPING_H
#define OPENFMB_ADAPTER_MULTIPLEREGISTERENUMMAPPING_H

#include <cstdint>
#include <map>

#include <yaml-cpp/yaml.h>
#include <google/protobuf/descriptor.h>
#include <adapter-api/config/IAccessor.h>

#include "IConfigurationBuilder.h"

namespace adapter {
    namespace modbus {
        class MultipleRegisterEnumMapping {

            struct Bit {
                uint16_t index;
                uint8_t bit;    // [0,15]

                explicit Bit(const YAML::Node& node);
            };

            static std::vector<Bit> read_bits(const YAML::Node& node);
            static std::shared_ptr<const std::map<uint32_t, int>> read_mapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor);

            const google::protobuf::EnumDescriptor* descriptor;
            const std::vector<Bit> bits;
            const std::shared_ptr<const std::map<uint32_t, int>> mapping;

        public:

            struct SharedValue {
                uint32_t value = 0;
                const std::shared_ptr<const std::map<uint32_t, int>> mapping;
                explicit SharedValue(std::shared_ptr<const std::map<uint32_t, int>> mapping) : mapping(std::move(mapping)) {}
            };

            class RegisterAction final : public IRegister {

                const uint16_t mask;
                const std::shared_ptr<SharedValue> shared_value;

            public:
                RegisterAction(uint8_t bit, std::shared_ptr<SharedValue> shared_value) : mask(static_cast<uint16_t>(1) << bit), shared_value(std::move(shared_value)) {}

                void set(uint16_t value) override {
                    const auto is_bit_set = (value & mask) != 0;
                    if(is_bit_set)
                    {
                        this->shared_value->value |= mask;
                    }
                }
            };

            MultipleRegisterEnumMapping(const YAML::Node& node, google::protobuf::EnumDescriptor const* descriptor);

            template <class T>
            void build(IConfigurationBuilder& builder, const accessor_t<T, int>& accessor, std::shared_ptr<T> profile);

        };

        template <class T>
        void MultipleRegisterEnumMapping::build(IConfigurationBuilder& builder, const accessor_t<T, int>& accessor, std::shared_ptr<T> profile)
        {
            const auto shared_value = std::make_shared<SharedValue>(this->mapping);

            // when the poll sequence starts, clear the shared value
            builder.add_begin_action([shared_value](Logger&) { shared_value->value = 0; });

            // each declared bit maps to a register action, this is what writes the actual bits when polls are received
            for(const auto& bit : this->bits)
            {
                builder.add_holding_register(bit.index, std::make_shared<RegisterAction>(bit.bit, shared_value));
            }

            // at the end of the poll sequence, we try to look up the accumulated value against the mappings
            builder.add_end_action([shared_value, mapping = this->mapping, profile, descriptor = this->descriptor, accessor](Logger& logger) {
                const auto entry = mapping->find(shared_value->value);
                if(entry == mapping->end())
                {
                    logger.warn("No mapping to {} for value {}", descriptor->name(), shared_value->value);
                }
                else
                {
                    accessor->set(*profile, entry->second);
                }
            });
        }
    }
}

#endif //OPENFMB_ADAPTER_MULTIPLEREGISTERENUMMAPPING_H
