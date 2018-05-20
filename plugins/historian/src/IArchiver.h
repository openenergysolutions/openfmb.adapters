#ifndef OPENFMB_PLUGIN_HISTORIAN_IARCHIVER_H
#define OPENFMB_PLUGIN_HISTORIAN_IARCHIVER_H

#include <string>

namespace adapter
{
namespace historian
{

class IArchiver
{
public:
    virtual ~IArchiver() = default;

    virtual void save(const std::string& message_uuid,
                      uint64_t seconds,
                      const std::string& device_uuid,
                      const std::string& tagname,
                      float value) = 0;
};

}
}

#endif
