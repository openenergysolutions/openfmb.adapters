
#ifndef OPENFMB_ADAPTER_DESCRIPTORPATHIMPL_H
#define OPENFMB_ADAPTER_DESCRIPTORPATHIMPL_H

#include "../../include/adapter-api/config/IConfigModelVisitor.h"

#include "adapter-api/util/Exception.h"

#include <stack>

namespace adapter {
class DescriptorPathImpl final : public IDescriptorPath {
public:
    const google::protobuf::Descriptor* top() override
    {
        if (descriptors.empty())
            throw Exception("Path is empty");
        return descriptors.top();
    }

    void push(google::protobuf::Descriptor const* descriptor)
    {
        this->descriptors.push(descriptor);
    }

    void pop()
    {
        if (descriptors.empty())
            throw Exception("Path is empty");
        this->descriptors.pop();
    }

private:
    std::stack<google::protobuf::Descriptor const*> descriptors;
};
}

#endif //OPENFMB_ADAPTER_DESCRIPTORPATHIMPL_H
