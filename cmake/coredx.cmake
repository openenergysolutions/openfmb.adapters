if(NOT DEFINED COREDX_TOP)	
	# require that the COREDX_TOP environment variable be set
	if(DEFINED ENV{COREDX_TOP})
		message("COREDX_TOP found via environment variable")
		set(COREDX_TOP $ENV{COREDX_TOP})
	else()   
		message(FATAL_ERROR "You must define COREDX_TOP when configuring or via environment")
	endif()
endif()

message("COREDX_TOP is ${COREDX_TOP}")

# setup the includes
set(COREDX_INCLUDE ${COREDX_TOP}/target/include)
if(NOT EXISTS ${COREDX_INCLUDE}/dds/dds.hh)
	message(FATAL_ERROR "Unable to find dds.hh in ${COREDX_INCLUDE}")
endif()

if(${CMAKE_CXX_COMPILER_ID} STREQUAL MSVC)
	set(COREDX_TARGET Windows_x86_vs2012)
else()
	message(FATAL_ERROR "This script doesn't support ${CMAKE_CXX_COMPILER_ID} yet")
endif()

set(COREDX_LIB_DIR ${CORE_DX_TOP}/target/${COREDX_TARGET}/lib)