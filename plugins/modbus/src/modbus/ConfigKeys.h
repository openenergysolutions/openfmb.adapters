#ifndef OPENFMB_ADAPTER_CONFIGKEYS_H
#define OPENFMB_ADAPTER_CONFIGKEYS_H

namespace adapter
{
    namespace keys
    {
        // top level
        static const char* const name = "name";
        static const char* const thread_pool_size = "thread-pool-size";

        // channel
        static const char* const channel = "channel";
        static const char* const port = "port";

        // session
        static const char* const unit_identifier = "unit-identifier";
    }
}

#endif //OPENFMB_ADAPTER_CONFIGKEYS_H
