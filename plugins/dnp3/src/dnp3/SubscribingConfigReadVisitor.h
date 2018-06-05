
#ifndef OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H
#define OPENFMB_ADAPTER_DNP3_SUBSCRIBINGCONFIGREADVISITOR_H

#include <adapter-api/config/ConfigReadVisitorBase.h>

namespace adapter
{
    namespace dnp3
    {
        template <class T>
        class SubscribingConfigReadVisitor final : public ConfigReadVisitorBase<T>
        {

        public:

            SubscribingConfigReadVisitor(const YAML::Node& root) : ConfigReadVisitorBase<T>(root)
            {}


        };

    }
}

#endif
