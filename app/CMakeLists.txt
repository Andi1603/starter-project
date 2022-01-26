
set(APP_HEADER_LIST)

add_executable(${PROJECT_NAME} main.cpp
        ${APP_HEADER_LIST})
target_link_libraries(${PROJECT_NAME} PRIVATE
        ${PROJECT_NAME}lib
        project_warnings
        spdlog::spdlog)