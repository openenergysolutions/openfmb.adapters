

#include "adapter-api/config/DescriptorPath.h"

namespace adapter {

bool DescriptorPath::has_parent(google::protobuf::Descriptor const* descriptor) const
{
    for (const auto& parent : this->descriptors) {
        if (descriptor == parent)
            return true;
    }

    return false;
}

bool DescriptorPath::has_immediate_parent(google::protobuf::Descriptor const* descriptor) const
{
    if (this->descriptors.empty())
        return false;

    return descriptor == this->descriptors.back();
}

void DescriptorPath::push(google::protobuf::Descriptor const* descriptor)
{
    this->descriptors.push_back(descriptor);
}

void DescriptorPath::pop()
{
    this->descriptors.pop_back();
}
}
