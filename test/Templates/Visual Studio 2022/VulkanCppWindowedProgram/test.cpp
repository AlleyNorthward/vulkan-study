#define VK_USE_PLATFORM_WIN32_KHR
#define SDL_MAIN_HANDLED

#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>
#include <SDL2/SDL_vulkan.h>
#include <glm/glm.hpp>
#include <vulkan/vulkan.hpp>

#include <iostream>
#include <vector>

int main() {
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    std::cout << "Could not initialize SDL." << std::endl;
    return 1;
  }

  SDL_Window *window =
      SDL_CreateWindow("Vulkan Window", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_VULKAN);

  if(window == NULL){
    std::cout << "Could not create SDL window." << std::endl;
    return 1;
  }
  
}
