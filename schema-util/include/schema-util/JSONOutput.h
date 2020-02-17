
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

                explicit BeginIdent(const T &id, char delimiter) : id(id), delimiter(delimiter) {}

                friend std::ostream &operator<<(std::ostream &output, const BeginIdent &value) {
                    output << quoted(value.id) << ": " << value.delimiter;
                    return output;
                }
            };

            template<class T>
            BeginIdent<T> begin_object(const T &id) {
                return BeginIdent<T>(id, '{');
            }

            template<class T>
            BeginIdent<T> begin_array(const T &id) {
                return BeginIdent<T>(id, '[');
            }

            template <class T>
            bool is_type_quoted() {
                return std::is_same<T, std::string>::value | std::is_array<T>::value;
            }


            template<class T, class U>
            struct Property {
                const T &id;
                const U &value;

                explicit Property(const T &id, const U &value) : id(id), value(value) {}

                friend std::ostream &operator<<(std::ostream &output, const Property &prop) {
                    output << quoted(prop.id) << ": ";
                    if(is_type_quoted<U>()) {
                        output << quoted(prop.value);
                    } else {
                        output << prop.value;
                    }
                    return output;
                }
            };

            template<class T, class U>
            Property<T, U> property(const T &id, const U &value) {
                return Property<T, U>(id, value);
            }
        }
    }
}

#endif //OPENFMB_ADAPTER_JSONOUTPUT_H
