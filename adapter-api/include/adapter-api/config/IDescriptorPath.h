
#ifndef OPENFMB_ADAPTER_IDESCRIPTORPATH_H
#define OPENFMB_ADAPTER_IDESCRIPTORPATH_H

#include <google/protobuf/descriptor.h>

namespace adapter {
class IDescriptorPath {
public:
    virtual ~IDescriptorPath() = default;

    virtual bool has_parent(google::protobuf::Descriptor const* descriptor) const = 0;

    virtual bool has_immediate_parent(google::protobuf::Descriptor const* descriptor) const = 0;
};
}

#endif //OPENFMB_ADAPTER_IDESCRIPTORPATH_H
