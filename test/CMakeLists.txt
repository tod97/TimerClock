
add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp ClockTest.cpp ClockFixture.cpp ChronoTest.cpp ChronoFixture.cpp TimerTest.cpp TimerFixture.cpp )
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main core)

set(CURSES_NEED_NCURSES, TRUE)
find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries(runAllTests ${CURSES_LIBRARIES})