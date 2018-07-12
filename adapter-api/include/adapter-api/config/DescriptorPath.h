
#ifndef OPENFMB_ADAPTER_DESCRIPTORPATH_H
#define OPENFMB_ADAPTER_DESCRIPTORPATH_H

#include "IDescriptorPath.h"

namespace adapter {
class DescriptorPath final : public IDescriptorPath {
    using descriptor_vec_t = std::vector<google::protobuf::Descriptor const*>;

    descriptor_vec_t descriptors;

public:
    bool has_parent(google::protobuf::Descriptor const* descriptor) const final;

    bool has_immediate_parent(google::protobuf::Descriptor const* descriptor) const final;

    void push(google::protobuf::Descriptor const* descriptor);

    void pop();
};
}

#endif //OPENFMB_ADAPTER_DESCRIPTORPATH_H
