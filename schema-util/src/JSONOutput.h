
#ifndef OPENFMB_ADAPTER_JSONOUTPUT_H
#define OPENFMB_ADAPTER_JSONOUTPUT_H

#include <ostream>
#include <type_traits>

namespace adapter {
    namespace schema {
        namespace output {
            template<class T>
            struct Quoted {
                const T &item;

                explicit Quoted(const T &item) : item(item) {}

                friend std::ostream &operator<<(std::ostream &output, const Quoted &value) {
                    output << "\"";
                    output << value.item;
                    output << "\"";
                    return output;
                }
            };


            template<class T>
            Quoted<T> quoted(const T &item) {
                return Quoted<T>(item);
            }

            template<class T>
            struct BeginIdent {
                const T &id;
                const char delimiter;
                const bool pretty_print;

                explicit BeginIdent(const T &id, char delimiter, bool pretty_print) : id(id), delimiter(delimiter), pretty_print(pretty_print) {}

                friend std::ostream &operator<<(std::ostream &output, const BeginIdent &value) {
                    output << quoted(value.id) << ':';
                    if(value.pretty_print) {
                        output << ' ';
                    }
                    output << value.delimiter;
                    return output;
                }
            };

            template<class T>
            BeginIdent<T> begin_object(const T &id, bool pretty_print) {
                return BeginIdent<T>(id, '{', pretty_print);
            }

            template<class T>
            BeginIdent<T> begin_array(const T &id, bool pretty_print) {
                return BeginIdent<T>(id, '[', pretty_print);
            }

            template <class T>
            bool is_type_quoted() {
                return std::is_same<T, std::string>::value | std::is_array<T>::value;
            }


            template<class T, class U>
            struct Property {
                const T &id;
                const U &value;
                const bool pretty_print;

                Property(const T &id, const U &value, bool pretty_print) : id(id), value(value), pretty_print(pretty_print) {}

                friend std::ostream &operator<<(std::ostream &output, const Property &prop) {
                    output << quoted(prop.id) << ':';
                    if(prop.pretty_print) {
                        output << ' ';
                    }
                    if(is_type_quoted<U>()) {
                        output << quoted(prop.value);
                    } else {
                        output << prop.value;
                    }
                    return output;
                }
            };

            template<class T, class U>
            Property<T, U> property(const T &id, const U &value, bool pretty_print) {
                return Property<T, U>(id, value, pretty_print);
            }
        }
    }
}

#endif //OPENFMB_ADAPTER_JSONOUTPUT_H
