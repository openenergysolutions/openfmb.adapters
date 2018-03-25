
#ifndef OPENFMB_ADAPTER_POLLSINK_H
#define OPENFMB_ADAPTER_POLLSINK_H

#include "IPollSink.h"
#include "IProfileMapping.h"

#include "adapter-api

#include <memory>

namespace adapter {
    namespace modbus {

        template <class T>
        class PollSink final : public IPollSink {

        public:

            virtual void begin() override {

            }

            virtual void apply(const ::modbus::ReadHoldingRegistersResponse &response) override {

            }

            virtual void end() override {

            }

        private:

            std::unique_ptr<IProfileMapping> mapping;

            T profile;
        };

    }
}

#endif
