
#include "NatsOptions.h"

#include <adapter-api/Exception.h>

namespace adapter {
namespace nats {

    natsOptions* create_options()
    {
        natsOptions* options = nullptr;
        const auto err = natsOptions_Create(&options);
        if (err) {
            throw api::Exception("Unable to create natsOptions: ", nats_GetLastError(nullptr));
        }

        return options;
    }

    NatsOptions::NatsOptions()
        : impl(create_options())
    {
    }

    NatsOptions::~NatsOptions()
    {
        natsOptions_Destroy(this->impl);
    }
}
}
