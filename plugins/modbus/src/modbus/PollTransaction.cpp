
#include <modbus/exceptions/IException.h>
#include "PollTransaction.h"

namespace adapter
{
    namespace modbus
    {

        PollTransaction::PollTransaction(
            Logger logger,
            const AutoPollConfig& config,
            std::chrono::steady_clock::duration period,
            std::shared_ptr<IPollHandler> handler
        ) :
            logger(std::move(logger)),
            period(period),
            handler(std::move(handler))
        {
            this->handler->configure(config, *this);
        }

        void PollTransaction::start(session_t session, const ITransaction::callback_t& callback)
        {
            if(polls.empty())
            {
                session->start(std::chrono::seconds(0), callback);
            }
            else
            {
                this->handler->begin(this->logger);
                this->start_next_request(0, std::move(session), callback);
            }
        }

        void PollTransaction::add(const ::modbus::ReadHoldingRegistersRequest& request)
        {
            this->polls.push_back(request);
        }

        void PollTransaction::start_next_request(size_t index, session_t session, const ITransaction::callback_t& callback)
        {
            const auto read_handler = [self = shared_from_this(), index, session, callback](const ::modbus::Expected<::modbus::ReadHoldingRegistersResponse>& response)
            {
                if(response.is_valid())
                {
                    self->handler->apply(response.get());
                    const auto next = index + 1;
                    if(next < self->polls.size())
                    {
                        // start the next poll
                        self->start_next_request(next, session, callback);
                    }
                    else
                    {
                        // we're done
                        self->handler->end(self->logger);
                        callback();
                    }
                }
                else
                {
                    self->logger.warn("Poll failed: {}", response.get_exception<::modbus::IException>().get_message());
                    callback();
                }
            };

            session->send_request(this->polls[index], read_handler);
        }
    }
}


