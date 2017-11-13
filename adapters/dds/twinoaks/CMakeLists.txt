
include("coredx.cmake")

set(SOURCES
	src/OpenFMB.cc
	src/OpenFMBDataReader.cc
	src/OpenFMBDataWriter.cc
	src/OpenFMBTypeSupport.cc
)

set(PRIVATE_HEADERS
	src/OpenFMB.hh
	src/OpenFMBDataReader.hh
	src/OpenFMBDataWriter.hh
	src/OpenFMBTypeSupport.hh
)

add_library(openfmb_to_dds STATIC ${SOURCES} ${PRIVATE_HEADERS})
target_include_directories(openfmb_to_dds PRIVATE ${COREDX_INCLUDE})
