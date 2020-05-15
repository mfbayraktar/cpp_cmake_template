set (MY_NAME MathLibraryTests)

file (GLOB MY_SOURCES *.cpp)

add_executable(${MY_NAME} ${MY_SOURCES})

target_link_libraries(${MY_NAME} PUBLIC
    gtest_main
    MathLibrary
)

add_test(
    NAME ${MY_NAME}
    COMMAND ${MY_NAME}
)