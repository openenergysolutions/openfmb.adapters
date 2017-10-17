
set(SOURCES
	src/OpenFMB.cc
	src/OpenFMBDataReader.cc
	src/OpenFMBDataWriter.cc
	src/OpenFMBTypeSupport.cc
)

set(PUBLIC_HEADERS
	src/OpenFMB.hh
	src/OpenFMBDataReader.hh
	src/OpenFMBDataWriter.hh
	src/OpenFMBTypeSupport.hh
)

add_library(dds_types STATIC ${SOURCES} ${PUBLIC_HEADERS})
target_include_directories(dds_types PRIVATE ${COREDX_INCLUDE})