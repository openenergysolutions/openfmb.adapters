#include "adapter-util/config/DefaultConfigWriter.h"

using namespace adapter::schema;

namespace adapter {
namespace util {
namespace yaml {

    DefaultConfigWriter::DefaultConfigWriter(YAML::Emitter& out)
        : out{out},
          is_array{false}
    {
    }

    void DefaultConfigWriter::begin(const ObjectProperty& prop)
    {
        if(is_array)
        {
            is_array = false;
        }
        else
        {
            out << YAML::Key << prop.get_name();
        }

        out << YAML::Value
            << YAML::BeginMap;
    }

    void DefaultConfigWriter::on_property(const BoolProperty& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::on_property(const StringProperty& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << YAML::DoubleQuoted << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::on_property(const EnumProperty& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::on_property(const ArrayProperty& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value
            << YAML::BeginSeq;

        this->is_array = true;
        ObjectProperty object(PropertyMetadata(Required::yes, "items", ""), prop.array_type);
        object.visit(*this);
        this->is_array = false;

        out << YAML::EndSeq;
    }

    void DefaultConfigWriter::on_property(const NumericProperty<float>& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::on_property(const NumericProperty<int64_t>& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::on_property(const NumericProperty<uint16_t>& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::end(const ObjectProperty& prop)
    {
        // write the first oneOf variant
        if(!prop.object.one_of.variants.empty())
        {
            const auto& variant = prop.object.one_of.variants.front();

            // Write constant fields
            for(const auto& constant : variant.constant_values)
            {
                out << YAML::Key << constant.property_name
                    << YAML::Value << constant.value;
            }

            // Write required fields
            for(const auto& field : variant.required_values)
            {
                field->visit(*this);
            }
        }

        // close the object
        out << YAML::EndMap;
    }

}
}
}
