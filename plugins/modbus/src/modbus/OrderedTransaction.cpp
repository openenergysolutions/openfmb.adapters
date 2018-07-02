
#include "OrderedTransaction.h"

namespace adapter {
namespace modbus {
    void OrderedTransaction::start(session_t session, const callback_t& callback)
    {
        if (this->transactions.empty()) {
            session->start(std::chrono::seconds(0), [callback]() {
                callback(false);
            });
        } else {
            this->start_next(0, std::move(session), callback);
        }
    }

    void OrderedTransaction::start_next(size_t index, session_t session, const callback_t& callback)
    {
        const auto handler = [index, session, callback, self = shared_from_this()](bool success) {
            if (success) {
                const auto next = index + 1;
                if (next < self->transactions.size()) {
                    self->start_next(next, session, callback);
                } else {
                    callback(true); // done
                }
            } else {
                callback(false);
            }
        };

        this->transactions[index]->start(session, handler);
    }
}
}