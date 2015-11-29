cmake_minimum_required (VERSION 2.8)

project (test01)

file (GLOB SRCS *.cpp)

if (EXISTS "/usr/local/include/hoge.h")
    option (HAVE_HOGE_H "HAVE_HOGE_H" ON)
else ()
    option (HAVE_HOGE_H "HAVE_HOGE_H" OFF)
endif ()

configure_file (${CMAKE_CURRENT_SOURCE_DIR}/Config.h.in  ${CMAKE_CURRENT_BINARY_DIR}/Config.h)

add_executable (a.out ${SRCS})

message (STATUS "option status...")
message (STATUS "    HAVE_HOGE_H=${HAVE_HOGE_H}")

