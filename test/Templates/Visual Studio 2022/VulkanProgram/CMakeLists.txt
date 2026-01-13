cmake_minimum_required(VERSION 3.25)
project(VULKANPROJ)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE Vulkan::Vulkan)
