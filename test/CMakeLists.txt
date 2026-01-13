cmake_minimum_required(VERSION 3.25)
project(VulkanTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 查找 Vulkan 包
find_package(Vulkan REQUIRED)

# 查找 Qt6 包，不包括 QVulkan 模块
find_package(Qt6 REQUIRED COMPONENTS Core Gui)

# 创建可执行文件
add_executable(main main.cpp)

# 设置 Qt6 的头文件路径
target_include_directories(main PRIVATE
    ${Qt6Core_INCLUDE_DIRS}
    ${Qt6Gui_INCLUDE_DIRS}
)

# 连接 Vulkan 和 Qt6 的库
target_link_libraries(main PRIVATE 
    Vulkan::Vulkan
    Qt6::Core
    Qt6::Gui
)

# 启用 C++17 标准
target_compile_features(main PRIVATE cxx_std_17)

# 设置 Qt6 的编译选项，必要时可启用额外的选项
set_target_properties(main PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
