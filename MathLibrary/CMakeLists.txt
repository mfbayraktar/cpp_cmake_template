add_library (MathLibrary source/arithmetic.cpp)

target_include_directories (MathLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(test)