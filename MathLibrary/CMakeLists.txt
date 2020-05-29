set (MY_NAME MathLibrary)

add_library (
    ${MY_NAME}
    
    source/arithmetic.cpp
)

find_package (Threads)
target_link_libraries (${MY_NAME} ${CMAKE_THREAD_LIBS_INIT})

find_package(Boost COMPONENTS system REQUIRED)
target_link_libraries(${MY_NAME} 
  ${Boost_SYSTEM_LIBRARY}
)

target_include_directories (${MY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(test)