set (MY_NAME Application)

include_directories(include)

add_executable (
    ${MY_NAME}
    
    source/program.cpp
    source/user_input.cpp
)

target_link_libraries (${MY_NAME} LINK_PUBLIC MathLibrary)