add_library(SQLiteMod MODULE main.cpp Functions.cpp)

if(FORCE_32BIT_BIN)
	set_target_properties(SQLiteMod PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
endif()

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	target_compile_definitions(SQLiteMod PRIVATE _SQ64)
endif()

set_target_properties(SQLiteMod PROPERTIES PREFIX "")

if(WIN32)
	if(CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT FORCE_32BIT_BIN)
		set_target_properties(SQLiteMod PROPERTIES OUTPUT_NAME "sqlite-win64")
	else()
		set_target_properties(SQLiteMod PROPERTIES OUTPUT_NAME "sqlite-win32")
	endif()
else()
	if(CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT FORCE_32BIT_BIN)
		set_target_properties(SQLiteMod PROPERTIES OUTPUT_NAME "sqlite-linux64")
	else()
		set_target_properties(SQLiteMod PROPERTIES OUTPUT_NAME "sqlite-linux32")
	endif()
endif(WIN32)

target_include_directories(SQLiteMod PRIVATE ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(SQLiteMod SQLite)
