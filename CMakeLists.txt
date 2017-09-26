cmake_minimum_required(VERSION 3.8)
project(TimerClock)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES Clock.h Clock.cpp Drawer.h Drawer.cpp Timer.cpp Timer.h Crono.cpp Crono.h)
add_executable(TimerClock ${SOURCE_FILES} main.cpp )
add_library(core ${SOURCE_FILES})
target_link_libraries(TimerClock ${GTEST_BOTH_LIBRARIES} core)

set(CURSES_NEED_NCURSES, TRUE)
find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries(TimerClock ${CURSES_LIBRARIES})