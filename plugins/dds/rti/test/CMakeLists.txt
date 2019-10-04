
set(rti_dds_plugin_test_srcs
    ./ProtoConversionsTest.cpp

    ./main.cpp 
)

add_executable(rti-dds-plugin-test ${rti_dds_plugin_test_srcs})
target_include_directories(rti-dds-plugin-test PRIVATE ../src ${dds_gen_path})
target_link_libraries(rti-dds-plugin-test PRIVATE rti-dds-plugin RTIConnextDDS::cpp2_api adapter-util catch)
clang_format(rti-dds-plugin-test)
add_test(NAME rti-dds-plugin-test COMMAND rti-dds-plugin-test)
