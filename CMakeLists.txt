cmake_minimum_required (VERSION 3.13)

project (Application CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory (3rdparty)
add_subdirectory (Application)
add_subdirectory (MathLibrary)
