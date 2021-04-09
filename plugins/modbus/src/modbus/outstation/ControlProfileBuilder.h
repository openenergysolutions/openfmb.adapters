// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_CONTROLPROFILEBUILDER_H
#define OPENFMB_ADAPTER_MODBUS_CONTROLPROFILEBUILDER_H

#include <adapter-api/IPublisher.h>

#include <functional>
#include <vector>

namespace adapter {
namespace modbus {
namespace outstation {

    template <class T>
    class ControlProfileBuilder
    {
    public:
        template <typename V>
        void set(const util::accessor_t<T, V>& accessor, V value)
        {
            accessor->set(this->profile, value);
        }

        void init()
        {
            profile.Clear();
            for (const auto& action : init_actions)
                action(profile);
        }

        void publish(api::IPublishOne<T>& publisher)
        {
            for (const auto& action : complete_actions)
                action(profile);

            publisher.publish(profile);

            init();
        }

        void add_init_action(const std::function<void(T&)>& action)
        {
            this->init_actions.push_back(action);
        }

        void add_complete_action(const std::function<void(T&)>& action)
        {
            this->complete_actions.push_back(action);
        }

    private:
        T profile;
        std::vector<std::function<void(T&)>> init_actions;
        std::vector<std::function<void(T&)>> complete_actions;
    };

}
}
}

#endif
