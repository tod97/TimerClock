cmake_minimum_required(VERSION 3.7)
project(TimerClock)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Clock.h Clock.cpp Drawer.h Drawer.cpp Crono.cpp Crono.h)
add_executable(TimerClock ${SOURCE_FILES})

set(CURSES_NEED_NCURSES, TRUE)
find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries( TimerClock ${CURSES_LIBRARIES} )