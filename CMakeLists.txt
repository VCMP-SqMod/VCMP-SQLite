cmake_minimum_required(VERSION 3.0.2)
project(VCMP_SQLite)

option(BUILTIN_RUNTIMES "Include the MinGW runtime into the binary itself." ON)
option(FORCE_32BIT_BIN "Create a 32-bit executable binary if the compiler defaults to 64-bit." OFF)

# default to c++11 standard
if(CMAKE_VERSION VERSION_LESS "3.1")
	if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
	endif()
else()
	set(CMAKE_CXX_STANDARD 11)
	set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()
# default to release mode
set(CMAKE_BUILD_TYPE "Release")
# include mingw runntime into the binary
if (GCC OR MINGW)
	if(BUILTIN_RUNTIMES)
		set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
	endif()
endif()
# enable position independent code
if (UNIX)
	set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(external/SQLite)
add_subdirectory(source)
