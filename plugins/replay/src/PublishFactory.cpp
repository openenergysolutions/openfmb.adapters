
#include "PublishFactory.h"

#include <boost/numeric/conversion/cast.hpp>

#include <adapter-api/ProfileRegistry.h>

namespace adapter {
namespace replay {
    template <class T>
    class ProfileHandler {
    public:
        static void handle(factory_map_t& map)
        {
            map[T::descriptor()->name()] = &get;
        }

    private:
        static publish_fun_t get(const std::vector<uint8_t>& data)
        {
            return [profile = parse_data_as(data)](api::IPublishOne<T>& publisher) {
                publisher.publish(*profile);
            };
        }

        static std::shared_ptr<T> parse_data_as(const std::vector<uint8_t>& data)
        {
            const auto profile = std::make_shared<T>();

            if (!profile->ParseFromArray(data.data(), boost::numeric_cast<int>(data.size()))) {
                throw api::Exception("error parsing message of type: ", T::descriptor()->name());
            }

            return profile;
        }
    };

    PublishFactory::PublishFactory()
    {
        // register a handler for each profile by name
        api::ProfileRegistry::handle_all<ProfileHandler>(this->mapping);
    }

    publish_fun_t PublishFactory::get(const std::string& profile_name, const std::vector<uint8_t>& bytes) const
    {
        const auto handler = this->mapping.find(profile_name);
        if (handler == this->mapping.end()) {
            throw api::Exception("Unknown profile: ", profile_name);
        }
        return handler->second(bytes);
    }
}
}
