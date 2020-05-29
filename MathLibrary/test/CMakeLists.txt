set (MY_NAME MathLibraryTests)

add_executable (
    ${MY_NAME}
    
    MathLibraryTest.cpp
)

target_link_libraries(${MY_NAME} PUBLIC
    gtest_main
    MathLibrary
)

add_test(
    NAME ${MY_NAME}
    COMMAND ${MY_NAME}
)