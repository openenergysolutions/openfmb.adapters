
#ifndef OPENFMB_ADAPTER_PROFILEPMAPPINGREADER_H
#define OPENFMB_ADAPTER_PROFILEPMAPPINGREADER_H

#include "ProfileMapping.h"

namespace adapter
{
    template <class T>
    using visit_fun_t = void (*)(IProtoVisitor<T>&);


    template <class T>
    std::unique_ptr<IProfileMapping<T>> read_mapping(const YAML::Node& node, visit_fun_t<T> visitor)
    {
        throw Exception("not implemented");
    }
}

#endif //OPENFMB_ADAPTER_PROFILEPMAPPINGREADER_H
