
#ifndef OPENFMB_ADAPTER_SESSIONWRAPPER_H
#define OPENFMB_ADAPTER_SESSIONWRAPPER_H

#include "modbus/client/IClientSession.h"

namespace adapter {
namespace modbus {
namespace master {

    class SessionWrapper final : public ::modbus::IClientSession {
        const std::shared_ptr<::modbus::IClientSession> session;

    public:
        SessionWrapper(const std::shared_ptr<::modbus::IClientSession>& session)
            : session(session)
        {
        }

        void shutdown() override
        {
            session->shutdown();
        }

        void send_request(const ::modbus::ReadCoilsRequest& request, ::modbus::ResponseHandler<::modbus::ReadCoilsResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::ReadCoilsRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::ReadCoilsResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        void send_request(const ::modbus::ReadDiscreteInputsRequest& request, ::modbus::ResponseHandler<::modbus::ReadDiscreteInputsResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::ReadDiscreteInputsRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::ReadDiscreteInputsResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        void send_request(const ::modbus::ReadHoldingRegistersRequest& request, ::modbus::ResponseHandler<::modbus::ReadHoldingRegistersResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::ReadHoldingRegistersRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::ReadHoldingRegistersResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        void send_request(const ::modbus::ReadInputRegistersRequest& request, ::modbus::ResponseHandler<::modbus::ReadInputRegistersResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::ReadInputRegistersRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::ReadInputRegistersResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        void send_request(const ::modbus::WriteSingleCoilRequest& request, ::modbus::ResponseHandler<::modbus::WriteSingleCoilResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::WriteSingleCoilRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::WriteSingleCoilResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        void send_request(const ::modbus::WriteSingleRegisterRequest& request, ::modbus::ResponseHandler<::modbus::WriteSingleRegisterResponse> handler) override
        {
            const auto multiple_handler = [handler, value = request.value](const ::modbus::Expected<::modbus::WriteMultipleRegistersResponse>& response) {
                if (response.is_valid()) {
                    handler(::modbus::Expected<::modbus::WriteSingleRegisterResponse>(::modbus::WriteSingleRegisterResponse{ value }));
                } else {
                    handler(::modbus::Expected<::modbus::WriteSingleRegisterResponse>::from_exception(response.get_exception()));
                }
            };

            const ::modbus::WriteMultipleRegistersRequest multiple_request{
                request.value.address, { request.value.value }
            };

            this->session->send_request(multiple_request, multiple_handler);
        }

        void send_request(const ::modbus::WriteSingleRegisterRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::WriteSingleRegisterResponse> handler) override
        {
            const auto multiple_handler = [handler, value = request.value](const ::modbus::Expected<::modbus::WriteMultipleRegistersResponse>& response) {
                if (response.is_valid()) {
                    handler(::modbus::Expected<::modbus::WriteSingleRegisterResponse>(::modbus::WriteSingleRegisterResponse{ value }));
                } else {
                    handler(::modbus::Expected<::modbus::WriteSingleRegisterResponse>::from_exception(response.get_exception()));
                }
            };

            const ::modbus::WriteMultipleRegistersRequest multiple_request{
                request.value.address, { request.value.value }
            };

            this->session->send_request(multiple_request, timeout, multiple_handler);
        }

        void send_request(const ::modbus::WriteMultipleCoilsRequest& request, ::modbus::ResponseHandler<::modbus::WriteMultipleCoilsResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::WriteMultipleCoilsRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::WriteMultipleCoilsResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        void send_request(const ::modbus::WriteMultipleRegistersRequest& request, ::modbus::ResponseHandler<::modbus::WriteMultipleRegistersResponse> handler) override
        {
            this->session->send_request(request, std::move(handler));
        }

        void send_request(const ::modbus::WriteMultipleRegistersRequest& request, const ::modbus::duration_t& timeout, ::modbus::ResponseHandler<::modbus::WriteMultipleRegistersResponse> handler) override
        {
            this->session->send_request(request, timeout, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadCoilsRequest& request, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadCoilsResponse> handler) override
        {
            return this->session->schedule_request(request, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadCoilsRequest& request, const ::modbus::duration_t& timeout, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadCoilsResponse> handler) override
        {
            return this->session->schedule_request(request, timeout, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadDiscreteInputsRequest& request, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadDiscreteInputsResponse> handler) override
        {
            return this->session->schedule_request(request, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadDiscreteInputsRequest& request, const ::modbus::duration_t& timeout, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadDiscreteInputsResponse> handler) override
        {
            return this->session->schedule_request(request, timeout, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadHoldingRegistersRequest& request, const ::modbus::duration_t& timeout, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadHoldingRegistersResponse> handler) override
        {
            return this->session->schedule_request(request, timeout, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadHoldingRegistersRequest& request, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadHoldingRegistersResponse> handler) override
        {
            return this->session->schedule_request(request, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadInputRegistersRequest& request, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadInputRegistersResponse> handler) override
        {
            return this->session->schedule_request(request, frequency, std::move(handler));
        }

        std::shared_ptr<::modbus::IScheduledRequest> schedule_request(const ::modbus::ReadInputRegistersRequest& request, const ::modbus::duration_t& timeout, const ::modbus::duration_t& frequency, ::modbus::ResponseHandler<::modbus::ReadInputRegistersResponse> handler) override
        {
            return this->session->schedule_request(request, timeout, frequency, std::move(handler));
        }

        std::unique_ptr<::modbus::ITimer> start(const ::modbus::duration_t& duration, const ::modbus::action_t& action) override
        {
            return this->session->start(duration, action);
        }

        std::unique_ptr<::modbus::ITimer> start(const ::modbus::steady_time_t& expiration, const ::modbus::action_t& action) override
        {
            return this->session->start(expiration, action);
        }
    };

}
}
}

#endif //OPENFMB_ADAPTER_SESSIONWRAPPER_H
