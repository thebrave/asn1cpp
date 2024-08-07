cmake_minimum_required(VERSION 3.10)
project(asn1cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(asn1cpp asn1cpp.cpp)

target_link_libraries(asn1cpp PUBLIC)
