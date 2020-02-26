
#ifndef OPENFMB_ADAPTER_DEFAULTCONFIGWRITER_H
#define OPENFMB_ADAPTER_DEFAULTCONFIGWRITER_H

#include <schema-util/Types.h>

#include <yaml-cpp/yaml.h>

namespace adapter {
namespace util {
namespace yaml {

    class DefaultConfigWriter final : public schema::IVisitor {
    public:
        DefaultConfigWriter(YAML::Emitter& out);

    protected:

        void begin(const schema::ObjectProperty& prop) override;

        void on_property(const schema::BoolProperty& prop) override;
        void on_property(const schema::StringProperty& prop) override;
        void on_property(const schema::EnumProperty& prop) override;
        void on_property(const schema::ArrayProperty& prop) override;
        void on_property(const schema::NumericProperty<float>& prop) override;
        void on_property(const schema::NumericProperty<int64_t>& prop) override;
        void on_property(const schema::NumericProperty<uint16_t>& prop) override;

        void end(const schema::ObjectProperty& prop) override;

    private:
        YAML::Emitter& out;
        bool is_array;
    };

}
}
}

#endif //OPENFMB_ADAPTER_DEFAULTCONFIGWRITER_H
