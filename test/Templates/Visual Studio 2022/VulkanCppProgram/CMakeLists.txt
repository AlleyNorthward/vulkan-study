cmake_minimum_required(VERSION 3.25)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(VulkanTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE Vulkan::Vulkan)

get_target_property(MAIN_INCLUDE_DIRS main INCLUDE_DIRECTORIES)
message(STATUS "Main target include directories: ${MAIN_INCLUDE_DIRS}")
