set(MY_NAME Application)

add_executable (${MY_NAME} program.cpp)

target_link_libraries (${MY_NAME} LINK_PUBLIC MathLibrary)