set (MY_NAME Application)

file (GLOB MY_SOURCES source/*.cpp)

include_directories(include)

add_executable (${MY_NAME} ${MY_SOURCES})

target_link_libraries (${MY_NAME} LINK_PUBLIC MathLibrary)