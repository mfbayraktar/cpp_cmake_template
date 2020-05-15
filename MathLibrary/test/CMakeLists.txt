set(This MathLibraryTests)

set(Sources
    MathLibraryTest.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    MathLibrary
)

add_test(
    NAME ${This}
    COMMAND ${This}
)