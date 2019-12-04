
#ifndef OPENFMB_ADAPTER_MODBUS_POLLTRANSACTION_H
#define OPENFMB_ADAPTER_MODBUS_POLLTRANSACTION_H

#include "IPollHandler.h"
#include "IRequestBuilder.h"
#include "ITransaction.h"
#include "SinglePollTransaction.h"

namespace adapter {
namespace modbus {

class PollTransaction final : public ITransaction, public IRequestBuilder, public std::enable_shared_from_this<PollTransaction> {
public:
    PollTransaction(api::Logger logger,
                    const AutoPollConfig& config,
                    std::chrono::steady_clock::duration period,
                    std::shared_ptr<IPollHandler> handler);

    // ITransaction
    std::string get_description() const override
    {
        return "poll sequence";
    }

    void start(session_t session, const callback_t& callback) override;

    bool is_periodic() const override
    {
        return true;
    }

    std::chrono::steady_clock::duration get_period() const override
    {
        return this->period;
    }

    // IRequestBuilder
    void add(const ::modbus::ReadCoilsRequest& request) override
    {
        this->requests.push_back(std::make_shared<SinglePollTransaction<::modbus::ReadCoilsRequest, ::modbus::ReadCoilsResponse>>(logger, request, handler));
    }

    void add(const ::modbus::ReadDiscreteInputsRequest& request) override
    {
        this->requests.push_back(std::make_shared<SinglePollTransaction<::modbus::ReadDiscreteInputsRequest, ::modbus::ReadDiscreteInputsResponse>>(logger, request, handler));
    }

    void add(const ::modbus::ReadHoldingRegistersRequest& request) override
    {
        this->requests.push_back(std::make_shared<SinglePollTransaction<::modbus::ReadHoldingRegistersRequest, ::modbus::ReadHoldingRegistersResponse>>(logger, request, handler));
    }

    void add(const ::modbus::ReadInputRegistersRequest& request) override
    {
        this->requests.push_back(std::make_shared<SinglePollTransaction<::modbus::ReadInputRegistersRequest, ::modbus::ReadInputRegistersResponse>>(logger, request, handler));
    }

private:
    void start_next_request(size_t index, session_t session, const callback_t& callback);

    using poll_end_action_t = std::function<void(bool)>;
    using poll_start_action_t = std::function<void(session_t, api::Logger logger, std::shared_ptr<IPollHandler>, const poll_end_action_t&)>;

    api::Logger logger;
    const std::chrono::steady_clock::duration period;
    const std::shared_ptr<IPollHandler> handler;
    std::vector<std::shared_ptr<ITransaction>> requests;
};

}
}

#endif
