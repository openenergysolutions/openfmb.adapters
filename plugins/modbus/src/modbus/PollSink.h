
#ifndef OPENFMB_ADAPTER_POLLSINK_H
#define OPENFMB_ADAPTER_POLLSINK_H

#include "IPollSink.h"
#include "IProfileMapping.h"

#include "adapter-api/IPublisher.h"

#include <memory>

namespace adapter
{
    namespace modbus
    {

        template <class T>
        class PollSink final : public IPollSink
        {

        public:

            PollSink(const publisher_t<T>& publisher, std::unique_ptr<IProfileMapping<T>> mapping) :
                publisher(publisher),
                mapping(std::move(mapping))
            {}

            virtual void begin() override
            {
                profile.Clear();
                mapping->initialize();
            }

            virtual void apply(const ::modbus::ReadHoldingRegistersResponse& response) override
            {
                mapping->apply(response);
            }

            virtual void end() override
            {
                mapping->flush(profile);
                publisher->publish(profile);
            }

        private:
            size_t num_mapped_values() const override
            {
                return mapping->num_mapped_values();
            }

        private:

            T profile;

            const publisher_t<T> publisher;
            const std::unique_ptr<IProfileMapping<T>> mapping;
        };

    }
}

#endif
