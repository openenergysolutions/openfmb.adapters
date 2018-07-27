#ifndef OPENFMB_ADAPTER_GOOSE_GOOSEPATH_H
#define OPENFMB_ADAPTER_GOOSE_GOOSEPATH_H

#include <functional>
#include <string>
#include <vector>

namespace adapter {
namespace goose {

    class GoosePath {
    public:
        static GoosePath from_string(const std::string& path);

        GoosePath();
        ~GoosePath() = default;

        void push();
        void pop();
        void inc();
        void set(unsigned int idx);

        std::string to_string() const;

        bool operator==(const GoosePath& rhs) const;
        bool operator!=(const GoosePath& rhs) const;

    private:
        std::vector<unsigned int> m_stack;
    };

} // namespace goose
} // namespace adapter

namespace std {

template <>
struct hash<adapter::goose::GoosePath> {
    std::size_t operator()(const adapter::goose::GoosePath& k) const
    {
        return std::hash<std::string>{}(k.to_string());
    }
};
}

#endif //OPENFMB_ADAPTER_GOOSE_GOOSEPATH_H
