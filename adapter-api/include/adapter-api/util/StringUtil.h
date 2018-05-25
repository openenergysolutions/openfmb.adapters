#ifndef OPENFMB_ADAPTER_STRINGUTIL_H
#define OPENFMB_ADAPTER_STRINGUTIL_H

#include <sstream>

namespace adapter
{
    namespace strings
    {

        inline void add_to_stream(std::ostream& stream) {}

        inline void join_to_stream(std::ostream& stream, bool add_separator, char separator) {}

        template <class T, class... Args>
        void add_to_stream(std::ostream& stream, const T& t, Args... args)
        {
            stream << t;
            add_to_stream(stream, args...);
        }

        template <class T, class... Args>
        void join_to_stream(std::ostream& stream, bool add_separator, char separator, const T& t, Args... args)
        {
            if(add_separator) stream << separator;
            stream << t;
            join_to_stream(stream, true, separator, args...);
        }

        template <class T, class... Args>
        std::string join(const T& t, Args... args)
        {
            std::ostringstream oss;
            add_to_stream(oss, t, args...);
            return oss.str();
        }

        template <class T, class... Args>
        std::string join_with_discriminator(char separator, const T& t, Args... args)
        {
            std::ostringstream oss;
            join_to_stream(oss, false, separator, t, args...);
            return oss.str();
        }
    }
}

#endif

