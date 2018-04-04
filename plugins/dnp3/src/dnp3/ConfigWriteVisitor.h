
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/ConfigWriteVisitorBase.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include "ConfigStrings.h"

namespace adapter
{

    namespace dnp3
    {

        template<class T>
        class ConfigWriteVisitor final : public ConfigWriteVisitorBase<T>
        {

        public:

            explicit ConfigWriteVisitor(YAML::Emitter& out) : ConfigWriteVisitorBase<T>(out) {}

        private:

            virtual void write_bcr_keys() override
            {

                this->out << YAML::Key << keys::index << -1;
                this->out << YAML::Key << keys::scale << 1.0;
                this->out << YAML::Key << keys::mapped_from << YAML::Value << keys::counter
                          << YAML::Comment("can be 'analog' or 'counter'");
                this->out << YAML::Key << commonmodule::UnitSymbolKind_descriptor()->name()
                          << commonmodule::UnitSymbolKind_Name(commonmodule::UnitSymbolKind::UnitSymbolKind_none);
            }

            virtual void write_analogue_keys() override
            {
                this->out << YAML::Key << keys::index << -1;
                this->out << YAML::Key << keys::scale << 1.0;
            }

            void write_status_dps_keys() override
            {
                // TODO
            }
        };
    }
}

#endif
