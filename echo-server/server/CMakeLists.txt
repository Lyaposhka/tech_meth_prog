cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(server LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Network)

add_executable(server main.cpp mytcpserver.cpp)

target_compile_features(server PRIVATE cxx_std_17)
target_link_libraries(server PRIVATE Qt6::Core PRIVATE Qt6::Network)
