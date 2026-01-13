#include <iostream>
#include <vector>
#include <vulkan/vulkan.hpp>

int main() {
  std::vector<const char *> layers;
  vk::ApplicationInfo appInfo =
      vk::ApplicationInfo()
          .setPApplicationName("Vulkan C++ Program Template")
          .setApplicationVersion(1)
          .setPEngineName("LunarG SDK")
          .setEngineVersion(1)
          .setApiVersion(VK_API_VERSION_1_0);

  vk::InstanceCreateInfo instInfo =
      vk::InstanceCreateInfo()
          .setFlags(vk::InstanceCreateFlags())
          .setPApplicationInfo(&appInfo)
          .setEnabledExtensionCount(0)
          .setPpEnabledExtensionNames(NULL)
          .setEnabledLayerCount(static_cast<uint32_t>(layers.size()))
          .setPpEnabledLayerNames(layers.data());

  vk::Instance instance;

  try {
    instance = vk::createInstance(instInfo);
  } catch (std::exception e) {
    std::cout << "Could not create a Vulkan instance: " << e.what()
              << std::endl;
    return 1;
  }

  instance.destroy();
  return 0;
}
