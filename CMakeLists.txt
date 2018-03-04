project(kauth_experiment)
cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 14)
 set(CMAKE_AUTOMOC ON)
find_package(Qt5 REQUIRED Core)

set(SOURCES
    main.cpp
    external.cpp
    )

set(HEADERS
    external.h
    )

add_executable(kauth_exp ${SOURCES} ${HEADERS})

target_link_libraries(kauth_exp Qt5::Core)
