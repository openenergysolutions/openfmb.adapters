#ifndef OPENFMB_PLUGIN_HISTORIAN_IARCHIVER_H
#define OPENFMB_PLUGIN_HISTORIAN_IARCHIVER_H

namespace adapter
{
namespace historian
{

class IArchiver
{
public:
    virtual ~IArchiver() = default;

    virtual void save(const char* value) = 0;
};

}
}

#endif
