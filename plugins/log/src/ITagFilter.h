#ifndef OPENFMB_ADAPTER_LOG_ITAGFILTER_H
#define OPENFMB_ADAPTER_LOG_ITAGFILTER_H

#include <string>

namespace adapter
{
    namespace log
    {
        class ITagFilter
        {
        public:

            virtual ~ITagFilter() = default;

            virtual bool matches(const std::string& tag, const std::string& mRID) const = 0;

            virtual bool is_empty() const = 0;
        };
    }
}

#endif
