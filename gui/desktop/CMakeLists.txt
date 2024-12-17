cmake_minimum_required(VERSION 3.22)
project(CPP3_BrickGame_v2_0_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


if(DEFINED ENV{QTDIR})
    set(CMAKE_PREFIX_PATH "$ENV{QTDIR}")
endif()

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

include_directories(../../brick_game/snake)
include_directories(../../brick_game/tetris)

include_directories(.)

add_library(snake SHARED
        ../../brick_game/snake/snake_controller.hpp
        ../../brick_game/snake/snake_lib.cpp
        ../../brick_game/snake/snake_model.cpp
        ../../brick_game/snake/snake_model.hpp
        ../../brick_game/snake/snake_objects.hpp
)
add_library(tetris SHARED
        ../../brick_game/tetris/tetris_lib.c
        ../../brick_game/tetris/tetris_lib.h
        ../../brick_game/tetris/tetris_objects.h
)
message(STATUS "Tetris source files: ../../brick_game/tetris/tetris_lib.c")

add_executable(brick_game_desktop
        main.cpp
        
        menu_desktop_view.cpp
        menu_desktop_view.hpp
        menu_desktop_view.ui

        game_desktop_view.hpp
        game_desktop_view.cpp
        game_desktop_view.ui
    )

target_link_libraries(brick_game_desktop
        Qt::Core
        Qt::Gui
        Qt::Widgets
        dl
)
set_target_properties(snake tetris PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")
message(STATUS "LIBRARY_OUTPUT_DIRECTORY: ${CMAKE_BINARY_DIR}/lib")
