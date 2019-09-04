#ifndef OPENFMB_ADAPTER_DDS_RTI_IDDSSUBSCRIBER_H
#define OPENFMB_ADAPTER_DDS_RTI_IDDSSUBSCRIBER_H

namespace adapter {
namespace dds {
namespace rti {

class IDDSSubscriber
{
public:
    virtual ~IDDSSubscriber() = default;
    virtual void start() = 0;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_IDDSSUBSCRIBER_H
