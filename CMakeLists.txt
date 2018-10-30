cmake_minimum_required(VERSION 3.4)

project(AdvancedMath)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED 1)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

IF (NOT TARGET gtest)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    add_subdirectory(libs/googletest)
ENDIF()

add_library(${PROJECT_NAME} STATIC
	complex.h
	complex.cpp
        quadraticfunctions.h
        quadraticfunctions.cpp
    	)

set(TEST_NAME ${PROJECT_NAME}_UnitTest)

add_executable(${TEST_NAME}
	complex_unittest.cpp
        quadratic_unittest.cpp
        )

target_link_libraries(${TEST_NAME} gtest gtest_main ${PROJECT_NAME})
