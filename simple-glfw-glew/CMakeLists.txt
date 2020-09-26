cmake_minimum_required(VERSION 3.10)

find_package(glfw3 3.2 REQUIRED)
find_package(GLEW REQUIRED)

include_directories("/usr/local/include")

# set the project name
project(simple)

# add the executable
add_executable(simple rectangle.cpp)

target_link_libraries(simple GLEW::GLEW glfw)
