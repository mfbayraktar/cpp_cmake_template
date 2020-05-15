set (MY_NAME MathLibrary)

file (GLOB MY_SOURCES source/*.cpp)

add_library (${MY_NAME} ${MY_SOURCES})

target_include_directories (${MY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(test)