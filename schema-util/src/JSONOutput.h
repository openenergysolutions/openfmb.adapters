
#ifndef OPENFMB_ADAPTER_JSONOUTPUT_H
#define OPENFMB_ADAPTER_JSONOUTPUT_H

#include <ostream>

namespace adapter {
    namespace schema {
        template <class T>
        struct Quoted {
            const T& item;

            explicit Quoted(const T &item) : item(item) {}

            friend std::ostream &operator<<( std::ostream &output, const Quoted& value ) {
                output << "\"";
                output << value.item;
                output << "\"";
                return output;
            }
        };

        template <class T>
        Quoted<T> quoted(const T& item) {
            return Quoted<T>(item);
        }

        template <class T>
        struct BeginObject {
            const T& id;

            explicit BeginObject(const T &id) : id(id) {}

            friend std::ostream &operator<<( std::ostream &output, const BeginObject& value ) {
                output << quoted(value.id) << ": {";
                return output;
            }
        };

        template <class T>
        BeginObject<T> begin_object(const T& id) {
            return BeginObject<T>(id);
        }

        template <class T, class U>
        struct Property {
            const T& id;
            const U& value;

            explicit Property(const T& id, const U& value) : id(id), value(value) {}

            friend std::ostream &operator<<( std::ostream &output, const Property& prop) {
                output << quoted(prop.id) << ": " << quoted(prop.value) << ",";
                return output;
            }
        };

        template <class T, class U>
        Property<T, U> property(const T& id, const U& value) {
            return Property<T, U>(id, value);
        }
    }
}

#endif //OPENFMB_ADAPTER_JSONOUTPUT_H