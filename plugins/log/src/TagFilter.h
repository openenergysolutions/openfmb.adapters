
#ifndef OPENFMB_ADAPTER_LOG_TAGFILTER_H
#define OPENFMB_ADAPTER_LOG_TAGFILTER_H

#include "ITagFilter.h"

#include <map>
#include <memory>
#include <set>

namespace adapter {
namespace log {
    class TagFilter : public ITagFilter {
        using mrid_set_t = std::set<std::string>;
        using tag_map_t = std::map<std::string, std::unique_ptr<mrid_set_t>>;

    public:
        static std::shared_ptr<TagFilter> create()
        {
            return std::make_shared<TagFilter>();
        }

        void add(const std::string& tag, const std::string& mRID);

        bool matches(const std::string& tag, const std::string& mRID) const override;

        bool is_empty() const override
        {
            return tag_map.empty();
        }

    private:
        tag_map_t tag_map;
    };
}
}

#endif
