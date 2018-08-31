#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

#include <google/protobuf/stubs/common.h>

int main( int argc, char* argv[] ) {

    int result = Catch::Session().run( argc, argv );

    // removes the false positives for valgrind memory leaks from global protobuf objects
    google::protobuf::ShutdownProtobufLibrary();

    return result;
}