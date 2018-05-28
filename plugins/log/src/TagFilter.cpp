
#include "TagFilter.h"

namespace adapter
{
    namespace log
    {

        void TagFilter::add(const std::string& tag, const std::string& mRID)
        {
            const auto iter = this->tag_map.find(tag);
            if(iter == this->tag_map.end())
            {
                auto set = std::make_unique<mrid_set_t>();
                set->insert(mRID);
                this->tag_map[tag] = std::move(set);
            }
            else
            {
                iter->second->insert(mRID);
            }
        }

        bool TagFilter::matches(const std::string& tag, const std::string& mRID) const
        {
            const auto iter = this->tag_map.find(tag);
            if(iter == this->tag_map.end()) return false;

            return iter->second->find(mRID) != iter->second->end();
        }
    }
}


