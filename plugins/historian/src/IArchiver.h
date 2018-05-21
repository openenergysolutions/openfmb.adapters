#ifndef OPENFMB_PLUGIN_HISTORIAN_IARCHIVER_H
#define OPENFMB_PLUGIN_HISTORIAN_IARCHIVER_H

#include <memory>
#include "Message.h"

namespace adapter
{
namespace historian
{

class IArchiver
{
public:
    virtual ~IArchiver() = default;

    virtual void save(std::unique_ptr<Message> message) = 0;
};

}
}

#endif
