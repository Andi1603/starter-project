
find_package(Catch2 REQUIRED)

add_executable(libtest libtest.cpp)
target_compile_features(libtest PRIVATE cxx_std_17)
target_link_libraries(libtest PRIVATE
        ${PROJECT_NAME}lib
        Catch2::Catch2)

include(CTest)
include(Catch)

catch_discover_tests(libtest)