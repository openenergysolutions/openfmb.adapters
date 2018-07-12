

#include "adapter-api/config/DescriptorPath.h"

namespace adapter {

bool DescriptorPath::has_parents(const std::initializer_list<descriptor_ptr_t> parents) const
{
    auto iter = this->fields.rbegin();

    for (const auto& parent : parents) {
        if (iter == this->fields.rend())
            return false;
        if ((iter->descriptor != parent))
            return false;
        ++iter;
    }

    return true;
}

bool DescriptorPath::has_parents(const std::initializer_list<Field>& parents) const
{
    auto iter = this->fields.rbegin();

    for (const auto& parent : parents) {
        if (iter == this->fields.rend())
            return false;
        if ((iter->descriptor != parent.descriptor) || (iter->name != parent.name))
            return false;
        ++iter;
    }

    return true;
}

void DescriptorPath::push(const std::string& field_name, google::protobuf::Descriptor const* descriptor)
{
    this->fields.emplace_back(Field{ field_name, descriptor });
}

void DescriptorPath::pop()
{
    this->fields.pop_back();
}
}
