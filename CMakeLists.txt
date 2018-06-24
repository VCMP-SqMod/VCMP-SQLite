cmake_minimum_required(VERSION 3.0.2)
project(VCMP_SQLite)

option(BUILTIN_RUNTIMES "Include the MinGW runtime into the binary itself." ON)
option(FORCE_32BIT_BIN "Create a 32-bit executable binary if the compiler defaults to 64-bit." OFF)

# default to c++11 standard
set(CMAKE_CXX_STANDARD 11)
# default to release mode
set(CMAKE_BUILD_TYPE "Release")
# include mingw runntime into the binary
if (GCC OR MINGW)
	if(BUILTIN_RUNTIMES)
		set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
	endif()
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(external/SQLite)
add_subdirectory(source)
