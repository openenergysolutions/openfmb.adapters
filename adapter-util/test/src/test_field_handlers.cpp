#include "catch.hpp"

#include <adapter-util/config/FieldInfo.h>
#include <adapter-util/config/generated/ModelVisitors.h>
#include <adapter-util/config/DescriptorPath.h>

#include <adapter-api/ProfileRegistry.h>
#include <adapter-api/Exception.h>

using namespace adapter::api;
using namespace adapter::util;

class TestModelVisitor final : public IModelVisitor {

    DescriptorPath path;

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
        fields::get_bool_type(field_name, path);
    }

    void handle_int32(const std::string &field_name) override {
        fields::get_int32_type(field_name, path);
    }

    void handle_int64(const std::string &field_name) override {
        fields::get_int64_type(field_name, path);
    }

    void handle_float(const std::string &field_name) override {
        fields::get_float_type(field_name, path);
    }

    void handle_string(const std::string &field_name) override {
        fields::get_string_type(field_name, path);
    }

    void handle_enum(const std::string &field_name, google::protobuf::EnumDescriptor const *descriptor) override {
        fields::get_enum_type(descriptor);
    }

    void handle_commonmodule_Quality(const std::string &field_name) override {

    }

    void handle_commonmodule_Timestamp(const std::string &field_name) override {
        fields::get_timestamp_type(field_name, path);
    }

    void handle_commonmodule_ControlTimestamp(const std::string &field_name) override {

    }

    void handle_repeated_schedule_parameter(const std::string &field_name) override {

    }
};

template <class P>
struct Handler {

    static void handle(IModelVisitor& visitor)
    {
        visit<P>(visitor);
    }

};

TEST_CASE( "field handlers are exhaustive (don't throw exceptions)" )
{
    TestModelVisitor visitor;
    // foreach profile, loop over its members testing if all the fields are mapped
    ProfileRegistry::handle_all<Handler>(visitor);
}

