set(MY_NAME Application)

file (GLOB MY_SOURCES *.cpp)

add_executable (${MY_NAME} ${MY_SOURCES})

target_link_libraries (${MY_NAME} LINK_PUBLIC MathLibrary)