
#ifndef OPENFMB_ADAPTER_PUBLISHFACTORY_H
#define OPENFMB_ADAPTER_PUBLISHFACTORY_H

#include <adapter-api/IPublisher.h>

#include <functional>

namespace adapter {
namespace replay {
    using publish_fun_t = std::function<void(api::IPublisher&)>;
    using publish_factory_t = publish_fun_t (*)(const std::vector<uint8_t>& bytes);
    using factory_map_t = std::map<std::string, publish_factory_t>;

    class PublishFactory {
    public:
        PublishFactory();

        publish_fun_t get(const std::string& profile_name, const std::vector<uint8_t>& bytes) const;

    private:
        factory_map_t mapping;
    };
}
}

#endif
