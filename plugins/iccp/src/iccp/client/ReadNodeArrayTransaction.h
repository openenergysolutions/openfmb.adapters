// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 3/15/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_READNODEARRAYTRANSACTION_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_READNODEARRAYTRANSACTION_H

#include "IPollHandler.h"
#include "ITransaction.h"

namespace adapter {
namespace iccp {
namespace client {

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

    void start(client_t session, const callback_t& callback) override
    {
        const auto read_handler = [self = this->shared_from_this(), callback](ClientMessage::ClientMMSErrorCode message_code) {
            if (ClientMessage::MMSErrorCode_Success == message_code) {
                callback(true);
            } else {
                self->logger.warn("Poll failed");
                callback(false);
            }
        };

        //session->send_request(request, read_handler);
    }

private:
    api::Logger logger;
    RequestT request;
    std::shared_ptr<IPollHandler> handler;
};

}
}
}


#endif //OPENFMB_ADAPTER_ICCP_CLIENT_READNODEARRAYTRANSACTION_H
