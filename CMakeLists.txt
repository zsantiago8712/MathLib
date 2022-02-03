cmake_minimum_required(VERSION 3.20)
project(MATH_LIB CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG_INIT} -std=c++17")
set(VECS vector/)


add_executable(${PROJECT_NAME} test/mainTest.cpp)

add_subdirectory(${VECS}/)
target_include_directories(${PROJECT_NAME} PUBLIC ${VECS})
target_link_directories(${PROJECT_NAME} PRIVATE ${VECS})
target_link_libraries(${PROJECT_NAME} vectors)

