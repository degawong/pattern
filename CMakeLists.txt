
PROJECT(ci-test)

set(CMAKE_CXX_STANDARD 17)

cmake_minimum_required(VERSION 3.0)

enable_testing()

set(
	gtest_force_shared_crt ON CACHE BOOL "always use mdd" FORCE
)

add_subdirectory(
	googletest
)

file(
	GLOB_RECURSE
	src_file
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.cc
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
)

add_executable(
	${PROJECT_NAME}
	function.h
	ci-test.cpp
)

target_include_directories(
	${PROJECT_NAME}
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
	PUBLIC
	gtest_main
)
