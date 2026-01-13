cmake_minimum_required(VERSION 3.25)
project(VulkanTest)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(GLM_INCLUDE_DIR "F:/Vulkan/VulkanSDK/1.4.335.0/Include")
list(APPEND CMAKE_MODULE_PATH "F:/Vulkan/VulkanSDK/1.4.335.0/cmake")

find_package(Vulkan REQUIRED)
find_package(SDL2 REQUIRED)
add_executable(main main.cpp)

target_include_directories(main PRIVATE ${GLM_INCLUDE_DIR})
target_link_libraries(main PRIVATE Vulkan::Vulkan SDL2::SDL2)
