#include "catch.hpp"

#include <adapter-api/config/FieldInfo.h>
#include <adapter-api/ProfileRegistry.h>
#include <adapter-api/config/generated/ModelVisitors.h>

class TestModelVisitor : public adapter::IModelVisitor {

public:
    bool start_message_field(const std::string &field_name, google::protobuf::Descriptor const *descriptor) override {
        return true;
    }

    void end_message_field() override {

    }

    int start_repeated_message_field(const std::string &field_name,
                                     google::protobuf::Descriptor const *descriptor) override {
        return 1;
    }

    void end_repeated_message_field() override {

    }

    void start_iteration(int i) override {

    }

    void end_iteration() override {

    }

    void handle_bool(const std::string &field_name) override {

    }

    void handle_int32(const std::string &field_name) override {

    }

    void handle_uint32(const std::string &field_name) override {

    }

    void handle_int64(const std::string &field_name) override {

    }

    void handle_uint64(const std::string &field_name) override {

    }

    void handle_float(const std::string &field_name) override {

    }

    void handle_string(const std::string &field_name) override {

    }

    void handle_enum(const std::string &field_name, google::protobuf::EnumDescriptor const *descriptor) override {
        // this throws if the enum is mapped to an EnumType
        adapter::fields::get_enum_type(descriptor);
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

