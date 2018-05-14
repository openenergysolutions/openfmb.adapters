#ifndef OPENFMB_ADAPTER_YAMLOVERRIDE_H
#define OPENFMB_ADAPTER_YAMLOVERRIDE_H


#include <string>

namespace adapter
{
    namespace yaml
    {

        class IOverrideCallbacks
        {
        public:

            static void process(const std::string& override_spec, IOverrideCallbacks& callbacks);

            virtual void on_map_key(const std::string& key) = 0;

            virtual void on_sequence_index(size_t index) = 0;
        };



    }
}

#endif

