if(NOT DEFINED COREDX_TOP)	
	# try to find via COREDX_TOP environment variable instead
	if(DEFINED ENV{COREDX_TOP})
		message("COREDX_TOP found via environment variable")
		set(COREDX_TOP $ENV{COREDX_TOP})
	else()   
		message(FATAL_ERROR "You must define COREDX_TOP when configuring cmake or via environment")
	endif()
endif()

message("COREDX_TOP is ${COREDX_TOP}")

# setup the includes
set(COREDX_INCLUDE ${COREDX_TOP}/target/include)
if(NOT EXISTS ${COREDX_INCLUDE}/dds/dds.hh)
	message(FATAL_ERROR "Unable to find dds.hh in ${COREDX_INCLUDE}")
endif()

if(NOT DEFINED COREDX_TARGET)
  	# try to find via COREDX_TARGET environment variable instead
	if(DEFINED ENV{COREDX_TARGET})
		message("COREDX_TARGET found via environment variable")
		set(COREDX_TARGET $ENV{COREDX_TARGET})
	else()   
		message(FATAL_ERROR "You must define COREDX_TARGET when configuring cmake or via environment. This is required to locate the libraries")
	endif()
endif()

message("COREDX_TARGET is ${COREDX_TARGET}")

set(COREDX_LIB_DIR "${COREDX_TOP}/target/${COREDX_TARGET}/lib")
if(NOT EXISTS ${COREDX_LIB_DIR})
	message(FATAL_ERROR "Target lib dir doesn't exist: ${COREDX_LIB_DIR}")
endif()

if(NOT DEFINED COREDX_HOST)
	# try to find via COREDX_TARGET environment variable instead
	if(DEFINED ENV{COREDX_HOST})
		message("COREDX_HOST found via environment variable")
		set(COREDX_HOST $ENV{COREDX_HOST})
	else()
		message(FATAL_ERROR "You must define COREDX_HOST when configuring cmake or via environment. This is required to locate the proper DDS compiler")
	endif()
endif()

message("COREDX_HOST is ${COREDX_HOST}")

set(COREDX_COMPILER "${COREDX_TOP}/host/${COREDX_HOST}/bin/coredx_ddl")
if(NOT EXISTS ${COREDX_COMPILER})
	message(FATAL_ERROR "COREDX compiler doesn't exist: ${COREDX_COMPILER}")
endif()
