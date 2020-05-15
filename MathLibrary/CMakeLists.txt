# Create a library called "Library" which includes the source file "math.cpp".
# The extension is already found. Any number of sources could be listed here.
add_library (Library source/math.cpp)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Library
target_include_directories (Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(library)
add_subdirectory(test)