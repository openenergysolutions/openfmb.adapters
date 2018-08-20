#include "GoosePath.h"

#include "adapter-api/util/Exception.h"
#include <sstream>

namespace adapter {
namespace goose {

    GoosePath GoosePath::from_string(const std::string& path)
    {
        GoosePath result;

        try {
            const std::string delim{ "." };
            std::string copy{ path };
            size_t pos;
            while (pos = copy.find(delim) != std::string::npos) {
                auto count = pos + delim.length();
                auto num_str = copy.substr(0, count);
                auto num = std::stoul(num_str);
                result.set(num);
                result.push();

                copy.erase(0, count);
            }

            auto num = std::stoul(copy);
            result.set(num);
            return result;
        } catch (std::exception&) {
            throw Exception{ "Invalid GOOSE path." };
        }
    }

    GoosePath::GoosePath()
    {
        push();
    }

    void GoosePath::push()
    {
        m_stack.push_back(0);
    }

    void GoosePath::pop()
    {
        m_stack.pop_back();
    }

    void GoosePath::inc()
    {
        m_stack.back() = m_stack.back() + 1;
    }

    void GoosePath::set(unsigned int idx)
    {
        m_stack.back() = idx;
    }

    size_t GoosePath::get_level() const
    {
        return m_stack.size();
    }

    std::string GoosePath::to_string() const
    {
        std::ostringstream oss{};

        for (auto it = m_stack.begin(); it != m_stack.end(); ++it) {
            oss << std::to_string(*it);
            if (std::next(it) != m_stack.end()) {
                oss << '.';
            }
        }

        return oss.str();
    }

    bool GoosePath::operator==(const GoosePath& rhs) const
    {
        return m_stack == rhs.m_stack;
    }

    bool GoosePath::operator!=(const GoosePath& rhs) const
    {
        return m_stack != rhs.m_stack;
    }

    bool GoosePath::operator<(const GoosePath& rhs) const
    {
        return m_stack < rhs.m_stack;
    }

} // namespace goose
} // namespace adapter