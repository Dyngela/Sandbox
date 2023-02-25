cmake_minimum_required(VERSION 3.23)
set(CMAKE_CXX_COMPILER ${CPP_COMPILER})
project(Sandbox)

set(CMAKE_CXX_STANDARD 23)

#todo fix cette merde. Pourquoi je dois inclure le monde entier?
add_executable(${PROJECT_NAME} src/main.cpp src/logger/log.h src/logger/log.cpp src/parser/parser.cpp)

include_directories(vendor/spdlog/include)
target_link_libraries(${PROJECT_NAME} PRIVATE ${SPDLOG_LIBRARIES})
