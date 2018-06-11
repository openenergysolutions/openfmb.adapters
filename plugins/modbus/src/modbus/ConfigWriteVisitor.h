#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H

#include <adapter-api/config/ProfileType.h>
#include <adapter-api/config/ConfigWriteVisitorBase.h>

#include "ConfigStrings.h"
#include "MappingType.h"
#include "Source.h"
#include "BinaryControlAction.h"

namespace adapter
{
    namespace modbus
    {

        template<class T>
        class ConfigWriteVisitor final : public ConfigWriteVisitorBase<T>
        {

        public:
            explicit ConfigWriteVisitor(YAML::Emitter& out) : ConfigWriteVisitorBase<T>(out) {}

        protected:

            void write_bcr_keys() override
            {
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("{none, uint16, sint16, uint32, sint32, uint32_with_modulus, sint32_with_modulus}");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
            }

            void write_analogue_keys() override
            {
                if(get_profile_type<T>() == ProfileType::control)
                {
                    this->out << YAML::Key << keys::enabled << YAML::Value <<  false << YAML::Comment("TODO: make this an enum, i.e. 'output type'");
                    this->out << YAML::Key << keys::index << YAML::Value << 0;
                    this->out << YAML::Key << keys::scale << YAML::Value << 1.0;
                    this->out << YAML::Key << keys::priority << YAML::Value << 0;
                }
                else
                {
                    this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("{none, uint16, sint16, uint32, sint32, uint32_with_modulus, sint32_with_modulus}");
                    this->out << YAML::Key << keys::lower_index << 0;
                    this->out << YAML::Key << keys::upper_index << 1;
                    this->out << YAML::Key << keys::scale << 1.0;
                }
            }

            void write_status_dps_keys() override
            {
                throw NotImplemented(LOCATION);
            }

            void write_check_conditions_interlockCheck_keys() override
            {
                this->write_true_false_binary_control_config();
            }

            void write_check_conditions_synchroCheck_keys() override
            {
                this->write_true_false_binary_control_config();
            }

            void write_schedule_csg_keys() override
            {
                this->write_analogue_keys();
            }

            void write_switch_csg_keys() override
            {
                throw NotImplemented(LOCATION);
            }

            void write_status_sps_keys() override
            {
                this->write_boolean_keys(::adapter::keys::stVal);
            }

            void write_control_dpc_keys() override
            {
                this->write_boolean_keys(::adapter::keys::ctlVal);
            }

            void write_float_value_keys() override
            {
                // float value is mapped just like an analogue value
                this->write_analogue_keys();
            }

            void write_enum_keys(const google::protobuf::EnumDescriptor& descriptor) override
            {
                if(get_profile_type<T>() == ProfileType::control)
                {
                    this->out << YAML::Value << keys::mapping;
                    this->out << YAML::BeginSeq;
                    for(auto i = 0; i < descriptor.value_count(); ++i)
                    {
                        const auto value = descriptor.value(i);
                        this->out << YAML::BeginMap;
                        this->out << YAML::Key << keys::name << YAML::Value << value->name();
                        this->write_binary_action();
                        this->out << YAML::EndMap;
                    }
                    this->out << YAML::EndSeq;
                }
                else
                {
                    this->out << YAML::Key << keys::source << SourceMeta::to_string(Source::none) << YAML::Comment("{none, holding_register}");
                    this->out << YAML::Key << keys::index << YAML::Value << 0;
                    this->out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0xFFFF << YAML::Comment("mask the register. map masked values to enum values");
                    this->out << YAML::Value << keys::mapping;

                    this->out << YAML::BeginSeq;

                    for(auto i = 0; i < descriptor.value_count(); ++i)
                    {
                        const auto value = descriptor.value(i);
                        this->out << YAML::BeginMap;
                        this->out << YAML::Key << keys::name << YAML::Value << value->name();
                        this->out << YAML::Key << keys::value << YAML::Value << value->number();
                        this->out << YAML::EndMap;
                    }
                    this->out << YAML::EndSeq;
                }

            }

        private:

            void write_true_false_binary_control_config()
            {
                this->write_binary_control_keys(keys::when_true);
                this->write_binary_control_keys(keys::when_false);
            }

            void write_binary_action()
            {
                this->out << YAML::Key << keys::action << YAML::Value << BinaryControlActionMeta::none << YAML::Comment("{none, clear_masked_bits, set_masked_bits}");
                this->out << YAML::Key << keys::index << YAML::Value << 0;
                this->out << YAML::Key << keys::mask << YAML::Value << YAML::Hex << 0x0001;
                this->out << YAML::Key << keys::priority << YAML::Value << 0;
            }

            void write_binary_control_keys(const char* name)
            {
                this->out << YAML::Key << name;

                this->out << YAML::BeginMap;
                this->write_binary_action();
                this->out << YAML::EndMap;
            }

            void write_boolean_keys(const char* name)
            {
                this->out << YAML::Value << name;
                this->out << YAML::BeginMap;

                if(get_profile_type<T>() == ProfileType::control)
                {
                    this->write_true_false_binary_control_config();
                }
                else
                {
                    this->out << YAML::Key << keys::source << SourceMeta::to_string(Source::none) << YAML::Comment("{none, holding_register}");
                    this->out << YAML::Key << keys::index << YAML::Value << 0;
                    this->out << YAML::Key << keys::mask << YAML::Value << "0x0001" << YAML::Comment("mask the register. true if masked value != 0");
                }

                this->out << YAML::EndMap;
            }
        };
    }
}

#endif
