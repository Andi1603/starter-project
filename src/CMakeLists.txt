
set(LIB_HEADER_LIST
        "${CMAKE_SOURCE_DIR}/include/starter_project/mylib.h")

add_library(${PROJECT_NAME}lib
        ${LIB_HEADER_LIST}
        mylib.cpp)
target_include_directories(${PROJECT_NAME}lib PUBLIC ../include)
target_compile_features(${PROJECT_NAME}lib PUBLIC cxx_std_17)

target_link_libraries(${PROJECT_NAME}lib PRIVATE
        project_warnings
        spdlog::spdlog)