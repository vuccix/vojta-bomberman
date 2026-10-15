cmake_minimum_required(VERSION 3.20)
project(CleanBomberman CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(ProjectWarnings.cmake)

if(WIN32) # todo: remove this
    add_library(Curses::Curses STATIC IMPORTED)
    set_target_properties(Curses::Curses PROPERTIES
        IMPORTED_LOCATION "C:/pdcurses/lib/pdcurses.lib"
        INTERFACE_INCLUDE_DIRECTORIES "C:/pdcurses/include"
    )
else()
    set(CURSES_NEED_NCURSES TRUE)
    set(CURSES_NEED_WIDE TRUE)
    find_package(Curses REQUIRED)
endif()

add_subdirectory(external)
add_subdirectory(src)

if(WIN32)
    target_compile_definitions(presentation PUBLIC PDC_WIDE)
endif()

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/maps" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/leaderboards" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
