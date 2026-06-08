cmake_minimum_required(VERSION 3.20)
project(chip8 CXX)

# C++23, no compiler extensions
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Export compile_commands.json so clangd picks up the same flags
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# glfw3 has no CMake config installed here, so pull it in via pkg-config.
# PkgConfig::glfw3 carries the include dirs, lib path, and transitive deps.
find_package(PkgConfig REQUIRED)
pkg_check_modules(glfw3 REQUIRED IMPORTED_TARGET glfw3)

add_executable(chip8 main.cpp)
target_link_libraries(chip8 PRIVATE PkgConfig::glfw3)
