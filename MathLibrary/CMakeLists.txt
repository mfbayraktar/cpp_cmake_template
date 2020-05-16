set (MY_NAME MathLibrary)

add_library
(
    ${MY_NAME}
    
    source/arithmetic.cpp
)

target_include_directories (${MY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(test)