#include "catch.hpp"

#include <adapter-api/config/FieldInfo.h>
#include <adapter-api/ProfileRegistry.h>
#include <adapter-api/config/generated/ModelVisitors.h>
#include <adapter-api/config/DescriptorPath.h>
#include <adapter-api/util/Exception.h>

class TestModelVisitor : public adapter::IModelVisitor {

    ::adapter::DescriptorPath path;

public:
    bool start_message_field(const std::string &field_name, google::protobuf::Descriptor const *descriptor) override {
        path.push(field_name, descriptor);
        return true;
    }

    void end_message_field() override {
        path.pop();
    }

    int start_repeated_message_field(const std::string &field_name,
                                     google::protobuf::Descriptor const *descriptor) override {

        const auto type = adapter::fields::get_repetition_type(descriptor);

        path.push(field_name, descriptor);
        return 1;
    }

    void end_repeated_message_field() override {
        path.pop();
    }

    void start_iteration(int i) override {

    }

    void end_iteration() override {

    }

    void handle_bool(const std::string &field_name) override {
        adapter::fields::get_bool_type(field_name, path);
    }

    void handle_int32(const std::string &field_name) override {
        adapter::fields::get_int32_type(field_name, path);
    }

    void handle_int64(const std::string &field_name) override {
        adapter::fields::get_int64_type(field_name, path);
    }

    void handle_float(const std::string &field_name) override {
        adapter::fields::get_float_type(field_name, path);
    }

    void handle_string(const std::string &field_name) override {
        adapter::fields::get_string_type(field_name, path);
    }

    void handle_enum(const std::string &field_name, google::protobuf::EnumDescriptor const *descriptor) override {
        adapter::fields::get_enum_type(descriptor);
    }

    void handle_commonmodule_Quality(const std::string &field_name) override {

    }

    void handle_commonmodule_Timestamp(const std::string &field_name) override {
        adapter::fields::get_timestamp_type(field_name, path);
    }

    void handle_commonmodule_ControlTimestamp(const std::string &field_name) override {

    }
};

template <class P>
struct Handler {

    static void handle(adapter::IModelVisitor& visitor)
    {
        adapter::visit<P>(visitor);
    }

};

TEST_CASE( "field handlers are exhaustive (don't throw exceptions)" )
{
    TestModelVisitor visitor;
    // foreach profile, loop over its members testing if all the fields are mapped
    adapter::ProfileRegistry::handle_all<Handler>(visitor);
}

