cmake_minimum_required(VERSION 3.16)
project(fortnite-fps-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(fortnitefpstool
    src/main.cpp
    src/tuner.cpp
    src/lagfix.cpp
    src/profiles.cpp
)

target_include_directories(fortnitefpstool PRIVATE include)

if(WIN32)
    target_link_libraries(fortnitefpstool PRIVATE userenv)
endif()
