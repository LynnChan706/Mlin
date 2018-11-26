cmake_minimum_required(VERSION 2.8.12)

project(l_mat)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

#configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/l_mat.hpp")

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_LIST_DIR}/include)


add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} Qt5::Core)
