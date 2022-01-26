cmake_minimum_required(VERSION 3.16)
project(starter-project
        VERSION 0.1
        LANGUAGES CXX)

# Set a default build type if none was specified. Conan requires this.
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'RelWithDebInfo' as none was specified.")
    set(CMAKE_BUILD_TYPE
            RelWithDebInfo
            CACHE STRING "Choose the type of build." FORCE)
    # Set the possible values of build type for cmake-gui, ccmake
    set_property(
            CACHE CMAKE_BUILD_TYPE
            PROPERTY STRINGS
            "Debug"
            "Release"
            "MinSizeRel"
            "RelWithDebInfo")
endif()

include(cmake/Conan.cmake)
run_conan()

# standard compiler warnings
include(cmake/CompilerWarnings.cmake)
add_library(project_warnings INTERFACE)
set_project_warnings(project_warnings)

find_package(spdlog REQUIRED)

add_subdirectory(src)
add_subdirectory(app)

add_subdirectory(tests)