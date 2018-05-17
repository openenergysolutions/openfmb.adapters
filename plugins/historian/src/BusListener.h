#ifndef OPENFMB_PLUGIN_HISTORIAN_BUS_LISTENER_H
#define OPENFMB_PLUGIN_HISTORIAN_BUS_LISTENER_H

#include "adapter-api/ISubscriber.h"
#include "IArchiver.h"

namespace adapter
{
namespace historian
{

template<typename Proto>
class BusListener : public ISubscriber<Proto>
{
public:
    BusListener(const Logger& logger, std::shared_ptr<IArchiver> archiver)
        : m_logger{logger},
          m_archiver{archiver}
    {

    }

    void receive(const Proto& message) override
    {
        m_logger.info("Received {} message", Proto::descriptor()->name());
        m_archiver->save("test");
    }

private:
    Logger m_logger;
    std::shared_ptr<IArchiver> m_archiver;
};

}
}

#endif
