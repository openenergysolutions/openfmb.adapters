
#ifndef OPENFMB_ADAPTER_MODBUS_SINGLEPOLLTRANSACTION_H
#define OPENFMB_ADAPTER_MODBUS_SINGLEPOLLTRANSACTION_H

#include "IPollHandler.h"
#include "ITransaction.h"
#include <modbus/exceptions/IException.h>

namespace adapter {
namespace modbus {
namespace master {

template <typename RequestT, typename ResponseT>
class SinglePollTransaction final : public ITransaction, public std::enable_shared_from_this<SinglePollTransaction<RequestT, ResponseT>> {
public:
    SinglePollTransaction(api::Logger logger,
                          const RequestT& request,
                          std::shared_ptr<IPollHandler> handler)
        : logger{logger},
          request{request},
          handler{handler}
    {

    }

    std::string get_description() const override
    {
        return "single Modbus poll";
    }

    void start(session_t session, const callback_t& callback) override
    {
        const auto read_handler = [self = this->shared_from_this(), callback](const ::modbus::Expected<ResponseT>& response) {
            if (response.is_valid()) {
                self->handler->apply(response.get());
                callback(true);
            } else {
                self->logger.warn("Poll failed: {}", response.template get_exception<::modbus::IException>().get_message());
                callback(false);
            }
        };

        session->send_request(request, read_handler);
    }

private:
    api::Logger logger;
    RequestT request;
    std::shared_ptr<IPollHandler> handler;
};

}
}
}

#endif
