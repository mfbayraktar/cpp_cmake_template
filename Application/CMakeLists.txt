# Add executable called "Application" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
add_executable (Application program.cpp)

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# Application
target_link_libraries (Application LINK_PUBLIC MathLibrary)