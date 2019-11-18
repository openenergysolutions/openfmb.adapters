include(FetchContent)

FetchContent_Declare(
    spdlog
    URL                 https://github.com/gabime/spdlog/archive/v1.4.2.zip
    URL_HASH            SHA1=4B10E9AA17F7D568E24F464B48358AB46CB6F39C
)

FetchContent_GetProperties(spdlog)
if(NOT spdlog_POPULATED)
    FetchContent_Populate(spdlog)

    find_package(Threads)

    add_library(spdlog INTERFACE)
    target_include_directories(spdlog INTERFACE ${spdlog_SOURCE_DIR}/include)
    target_compile_features(spdlog INTERFACE cxx_std_11)
    target_link_libraries(spdlog INTERFACE Threads::Threads)
endif()
