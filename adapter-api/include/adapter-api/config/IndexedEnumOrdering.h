
#ifndef OPENFMB_ADAPTER_INDEXEDENUMORDERING_H
#define OPENFMB_ADAPTER_INDEXEDENUMORDERING_H

#include "../ConfigStrings.h"

#include "../util/YAMLUtil.h"
#include "YAMLGetters.h"

namespace adapter {

template <class E>
struct IndexedEnumOrdering {

    uint16_t index;
    typename E::Value type;

    IndexedEnumOrdering(uint16_t index, typename E::Value type);

    // natural ordering to be usable in a map or set
    bool operator<(const IndexedEnumOrdering& rhs) const;

    static IndexedEnumOrdering read(const YAML::Node& node);
    static std::vector<IndexedEnumOrdering> read_sequence(const YAML::Node& node);

    static void write(const IndexedEnumOrdering& ordering, YAML::Emitter& out);
    static void write_sequence(const std::initializer_list<IndexedEnumOrdering>& orderings, YAML::Emitter& out);
};

template <class E>
IndexedEnumOrdering<E>::IndexedEnumOrdering(uint16_t index, typename E::Value type)
    : index(index)
    , type(type)
{
}

template <class E>
bool IndexedEnumOrdering<E>::operator<(const IndexedEnumOrdering& rhs) const
{
    if (this->index < rhs.index) {
        return true;
    } else if (rhs.index < this->index) {
        return false;
    } else {
        // if the indices are equal, break the tie based on enum
        return this->type < rhs.type;
    }
}

template <class E>
IndexedEnumOrdering<E> IndexedEnumOrdering<E>::read(const YAML::Node& node)
{
    return IndexedEnumOrdering<E>{
        yaml::get::index(node),
        yaml::require_enum<E>(node)
    };
}

template <class E>
std::vector<IndexedEnumOrdering<E>> IndexedEnumOrdering<E>::read_sequence(const YAML::Node& node)
{
    std::vector<IndexedEnumOrdering<E>> list;

    yaml::foreach (
        node,
        [&list](const YAML::Node& node) { list.push_back(read(node)); });

    return std::move(list);
}

template <class E>
void IndexedEnumOrdering<E>::write(const IndexedEnumOrdering& ordering, YAML::Emitter& out)
{
    out << YAML::Key << ::adapter::keys::index << YAML::Value << ordering.index;
    out << YAML::Key << E::label << YAML::Value << E::to_string(ordering.type);
}

template <class E>
void IndexedEnumOrdering<E>::write_sequence(const std::initializer_list<IndexedEnumOrdering>& orderings, YAML::Emitter& out)
{
    out << YAML::BeginSeq;

    for (const auto& ordering : orderings) {
        out << YAML::BeginMap;
        write(ordering, out);
        out << YAML::EndMap;
    }

    out << YAML::EndSeq;
}
}

#endif
