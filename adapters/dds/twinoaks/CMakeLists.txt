
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

add_library(twinoaks-dds-adapter STATIC ${SOURCES} ${PRIVATE_HEADERS})
target_include_directories(twinoaks-dds-adapter PRIVATE ${COREDX_INCLUDE})
