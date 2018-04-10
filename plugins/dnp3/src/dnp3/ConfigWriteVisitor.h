
#ifndef OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H
#define OPENFMB_ADAPTER_DNP3_CONFIGWRITEVISITOR_H

#include "adapter-api/helpers/ConfigWriteVisitorBase.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/Exception.h"

#include "ConfigStrings.h"
#include "InputType.h"

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

                this->out << YAML::Key << keys::input_type << YAML::Value << InputTypeMeta::disabled << YAML::Comment("{ disabled, analog, counter }");
                this->out << YAML::Key << keys::index << 0;
                // scaling is required for BCRs to change orders of magnitude, e.g. kWh to Wh (x1000)
                this->out << YAML::Key << keys::scale << 1.0;
            }

            virtual void write_analogue_keys() override
            {
                this->out << YAML::Key << keys::input_type << YAML::Value << InputTypeMeta::disabled << YAML::Comment("{ disabled, analog }");
                this->out << YAML::Key << keys::index << 0;
                this->out << YAML::Key << keys::scale << 1.0;
            }

            void write_status_dps_keys() override
            {
                this->out << YAML::Key << keys::input_type << YAML::Value << InputTypeMeta::disabled << YAML::Comment("{ disabled, binary }");
                this->out << YAML::Key << keys::index << 0;
                this->out << YAML::Key << keys::high << commonmodule::DbPosKind_descriptor()->FindValueByNumber(commonmodule::DbPosKind::DbPosKind_closed)->name();
                this->out << YAML::Key << keys::low << commonmodule::DbPosKind_descriptor()->FindValueByNumber(commonmodule::DbPosKind::DbPosKind_open)->name();
            }
        };
    }
}

#endif
