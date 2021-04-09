// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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

    void DefaultConfigWriter::on_property(const schema::ObjectRef& prop)
    {
        // Do nothing
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
        prop.array_items->visit(*this);
        this->is_array = false;

        out << YAML::EndSeq;
    }

    void DefaultConfigWriter::on_property(const NumericProperty<float>& prop)
    {
        out << YAML::Key << prop.get_name()
            << YAML::Value << prop.get_default_value()
            << YAML::Comment(prop.get_description());
    }

    void DefaultConfigWriter::on_property(const NumericProperty<double>& prop)
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
        write_oneofs(prop.object);

        // close the object
        out << YAML::EndMap;
    }

    void DefaultConfigWriter::write_oneofs(const schema::Object& obj)
    {
        // write the first oneOf variant
        if(!obj.one_of.variants.empty())
        {
            // Take the first default variant, or the first variant if there's no default
            auto variant = &obj.one_of.variants.front();
            for(const auto& var : obj.one_of.variants) {
                if(var.is_default == Default::yes) {
                    variant = &var;
                    break;
                }
            }

            // Write constant fields
            for(const auto& constant : variant->constant_values)
            {
                out << YAML::Key << constant.property_name
                    << YAML::Value << constant.value;
            }

            // Write properties
            for(const auto& field : variant->obj->properties)
            {
                field->visit(*this);
            }

            // Write oneofs
            write_oneofs(*variant->obj);
        }
    }

}
}
}
