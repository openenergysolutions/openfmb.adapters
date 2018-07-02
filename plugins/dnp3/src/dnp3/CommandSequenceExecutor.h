
#ifndef OPENFMB_ADAPTER_COMMANDSEQUENCEEXECUTOR_H
#define OPENFMB_ADAPTER_COMMANDSEQUENCEEXECUTOR_H

#include "ICommandSequenceExecutor.h"

#include <adapter-api/Logger.h>

#include <adapter-api/util/Exception.h>
#include <mutex>
#include <queue>

namespace adapter {
namespace dnp3 {
    class CommandSequenceExecutor final : public ICommandSequenceExecutor, public std::enable_shared_from_this<CommandSequenceExecutor> {
    public:
        CommandSequenceExecutor(const Logger& logger)
            : logger(logger)
        {
        }

        void add(std::unique_ptr<ICommandSequence> sequence) override
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            logger.info("queuing control sequence: {}", sequence->get_name());

            this->pending.push(std::move(sequence));
            this->check_start();
        }

        void start(std::shared_ptr<opendnp3::ICommandProcessor> processor)
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            if (this->processor)
                throw Exception("executing already started");
            this->processor = std::move(processor);
            this->check_start();
        }

    private:
        void on_complete(const opendnp3::ICommandTaskResult& result)
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            this->executing = false;

            if (result.summary != opendnp3::TaskCompletion::SUCCESS) {
                logger.warn("command sequence failed: {}", pending.front()->get_name());
                pending.pop();
            }

            this->check_start();
        }

        void check_start()
        {
            if (processor && !executing && !pending.empty()) {
                const auto callback = [self = this->shared_from_this()](const opendnp3::ICommandTaskResult& result) {
                    self->on_complete(result);
                };

                if (pending.front()->begin_execute(*this->processor, callback)) {
                    this->executing = true;
                } else {
                    logger.info("completed control sequence: {}", pending.front()->get_name());
                    pending.pop();
                    this->check_start();
                }
            }
        }

        std::mutex mutex;

        Logger logger;
        std::shared_ptr<opendnp3::ICommandProcessor> processor;

        bool executing = false;
        std::queue<std::unique_ptr<ICommandSequence>> pending;
    };
}
}

#endif
