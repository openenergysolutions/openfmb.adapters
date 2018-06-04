#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H

#include "adapter-api/config/ConfigWriteVisitorBase.h"

#include "ConfigStrings.h"
#include "MappingType.h"

namespace adapter
{
    namespace modbus
    {

        template<class T>
        class ConfigWriteVisitor final : public ConfigWriteVisitorBase<T>
        {

        public:
            ConfigWriteVisitor(YAML::Emitter& out) : ConfigWriteVisitorBase<T>(out) {}

        protected:

            virtual void write_bcr_keys() override
            {
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("{none, uint16, sint16, uint32, sint32, uint32_with_modulus, sint32_with_modulus}");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
            }

            virtual void write_analogue_keys() override
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

            void write_check_conditions_keys() override
            {
                throw Exception("Not implemented");
            }

            void write_switch_csg_keys() override
            {
                throw Exception("Not implemented");
            }
        };
    }
}

#endif
