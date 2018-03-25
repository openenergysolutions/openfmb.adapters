

#include "PollManager.h"

namespace adapter
{

    namespace modbus
    {
        template <class R, class T>
        void PollManager::add_poll(const T& request)
        {
            auto poll = [request](const std::shared_ptr<PollManager>& manager)
            {

                auto handler = [manager](const ::modbus::Expected<R>& result)
                {

                    if(result.is_valid())
                    {
                        manager->sink->apply(result.get());
                        manager->on_poll_success();
                    }
                    else
                    {
                        manager->on_poll_failure();
                    }
                };

                manager->session->send_request(request, handler);
            };

            this->polls.push_back(poll);
        }


        PollManager::PollManager(const Logger& logger,
                                 std::unique_ptr<IPollSink> sink,
                                 const std::chrono::steady_clock::duration& period,
                                 const session_t& session) :
            logger(logger),
            sink(std::move(sink)),
            period(period),
            session(session),
            timer(nullptr) // TODO - correct?
        {}

        void PollManager::add(const ::modbus::ReadHoldingRegistersRequest& request)
        {
            this->add_poll<::modbus::ReadHoldingRegistersResponse>(request);
        }

        void PollManager::start()
        {
            if(!this->polls.empty())
            {
                this->poll_sequence.clear();
                for(auto& poll : this->polls) this->poll_sequence.push_back(poll);
                this->poll_sequence_start = std::chrono::steady_clock::now();
                this->sink->begin();
                this->on_poll_success();
            }
        }

        void PollManager::on_poll_success()
        {
            if(this->poll_sequence.empty())
            {
                this->sink->end();
                this->timer = this->session->start(period, [self = this->shared_from_this()]()
                {
                    self->start();
                });
            }
        }

        void PollManager::on_poll_failure()
        {
            this->logger.warn("Poll sequence failed");
            this->poll_sequence.clear();
            // TODO - should we have a try parameter that's distinct from the period?
            this->timer = this->session->start(period, [self = this->shared_from_this()]()
            {
                self->start();
            });
        }

    }
}


