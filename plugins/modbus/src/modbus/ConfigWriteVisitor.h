#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H

#include "adapter-api/config/ConfigWriteVisitorBase.h"

#include "ConfigStrings.h"
#include "MappingType.h"
#include "Source.h"

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
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("{none, uint16, sint16, uint32, sint32, uint32_with_modulus, sint32_with_modulus}");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
                this->out << YAML::Key << keys::scale << 1.0;
            }

            void write_status_dps_keys() override
            {
                throw Exception("Not implemented");
            }

            void write_check_conditions_interlockCheck_keys() override
            {
                throw Exception("Not implemented");
            }

            void write_check_conditions_synchroCheck_keys() override
            {
                throw Exception("Not implemented");
            }

            void write_control_fscc_keys() override
            {
                throw Exception("Not implemented");
            }

            void write_switch_csg_keys() override
            {
                throw Exception("Not implemented");
            }

            void write_ess_csg_keys() override
            {
                throw Exception("Not implemented");
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

            void write_state_kind_keys() override
            {
                this->write_enum_keys(*commonmodule::StateKind_descriptor());
            }

        private:

            void write_enum_keys(const google::protobuf::EnumDescriptor& descriptor)
            {
                this->out << YAML::Key << keys::source << SourceMeta::to_string(Source::none) << YAML::Comment("{none, holding_register}");
                this->out << YAML::Key << keys::index << YAML::Value << 0;
                this->out << YAML::Key << keys::mask << YAML::Value << "0xFFFF" << YAML::Comment("mask the register. map masked values to enum values");
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

            void write_boolean_keys(const char* name)
            {

                this->out << YAML::Value << name;
                this->out << YAML::BeginMap;
                this->out << YAML::Key << keys::source << SourceMeta::to_string(Source::none) << YAML::Comment("{none, holding_register}");
                this->out << YAML::Key << keys::index << YAML::Value << 0;
                this->out << YAML::Key << keys::mask << YAML::Value << "0x0001" << YAML::Comment("mask the register. true if masked value != 0");
                this->out << YAML::EndMap;
            }
        };
    }
}

#endif
