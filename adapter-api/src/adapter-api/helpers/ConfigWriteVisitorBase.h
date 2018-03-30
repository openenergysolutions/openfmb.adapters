

#ifndef OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
#define OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H

#include "IProtoVisitor.h"

#include <yaml-cpp/yaml.h>

namespace adapter {

    template<class T>
    class ConfigWriteVisitorBase : public IProtoVisitor<T>
    {

    protected:

        YAML::Emitter& out;

    public:

        ConfigWriteVisitorBase(YAML::Emitter& out) : out(out) {}

        void start_message_field(const std::string& field_name) final
        {
            out << YAML::Key << field_name;
            out << YAML::BeginMap;
        }

        void end_message_field() final
        {
            out << YAML::EndMap;
        }

        virtual size_t start_repeated_message_field(const std::string& field_name) final
        {
            out << YAML::Key << field_name;
            out << YAML::BeginSeq;
            return 1;
        }

        virtual void start_iteration(size_t i) final
        {
            out << YAML::BeginMap;
        }

        virtual void end_iteration() final
        {
            out << YAML::EndMap;
        }

        virtual void end_repeated_message_field() final
        {
            out << YAML::EndSeq;
        }



    };

}

#endif //OPENFMB_ADAPTER_CONFIGWRITEVISITORBASE_H
