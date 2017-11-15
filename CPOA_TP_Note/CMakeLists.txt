cmake_minimum_required(VERSION 2.8)

project(tp_note LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file ( GLOB HEADERS *.h *.hpp)
file ( GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
