#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/ConfigWriteVisitorBase.h"

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
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("can be 'bit32', 'bit16', or 'none' to disable");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
                this->out << YAML::Key << keys::modulus << 65536 << YAML::Comment("bit32 only: 65536 uses a 2-byte shift, other values (like 10,0000) use / and %");
            }

            virtual void write_analogue_keys() override
            {
                this->out << YAML::Key << keys::type << YAML::Value << MappingTypeMeta::none << YAML::Comment("can be 'bit32', 'bit16', or 'none' to disable");
                this->out << YAML::Key << keys::lower_index << 0;
                this->out << YAML::Key << keys::upper_index << 1;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::Key << keys::modulus << 65536 << YAML::Comment("bit32 only: 65536 uses a 2-byte shift, other values (like 10,0000) use / and %");
            }

            void write_status_dps_keys() override
            {
                // TODO
            }
        };
    }
}

#endif
