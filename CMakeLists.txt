cmake_minimum_required(VERSION 3.26)
project(Test_for_vector
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
include(CTest)
add_subdirectory(googletest)

if(BUILD_TESTING)
    add_executable(Test_for_vector main.cpp)
    target_link_libraries(Test_for_vector PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(Test_for_vector)
endif()