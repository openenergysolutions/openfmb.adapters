#ifndef OPENFMB_ADAPTER_DDS_RTI_IDDSPUBLISHER_H
#define OPENFMB_ADAPTER_DDS_RTI_IDDSPUBLISHER_H

namespace adapter {
namespace dds {
namespace rti {

class IDDSPublisher
{
public:
    virtual void start() = 0;
};

}
}
}

#endif // OPENFMB_ADAPTER_DDS_RTI_IDDSPUBLISHER_H
