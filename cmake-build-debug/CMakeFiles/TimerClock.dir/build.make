# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/francescotodino/TimerClock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/francescotodino/TimerClock/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TimerClock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TimerClock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TimerClock.dir/flags.make

CMakeFiles/TimerClock.dir/main.cpp.o: CMakeFiles/TimerClock.dir/flags.make
CMakeFiles/TimerClock.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TimerClock.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimerClock.dir/main.cpp.o -c /Users/francescotodino/TimerClock/main.cpp

CMakeFiles/TimerClock.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimerClock.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescotodino/TimerClock/main.cpp > CMakeFiles/TimerClock.dir/main.cpp.i

CMakeFiles/TimerClock.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimerClock.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescotodino/TimerClock/main.cpp -o CMakeFiles/TimerClock.dir/main.cpp.s

CMakeFiles/TimerClock.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/TimerClock.dir/main.cpp.o.requires

CMakeFiles/TimerClock.dir/main.cpp.o.provides: CMakeFiles/TimerClock.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/TimerClock.dir/build.make CMakeFiles/TimerClock.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/TimerClock.dir/main.cpp.o.provides

CMakeFiles/TimerClock.dir/main.cpp.o.provides.build: CMakeFiles/TimerClock.dir/main.cpp.o


CMakeFiles/TimerClock.dir/Clock.cpp.o: CMakeFiles/TimerClock.dir/flags.make
CMakeFiles/TimerClock.dir/Clock.cpp.o: ../Clock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TimerClock.dir/Clock.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimerClock.dir/Clock.cpp.o -c /Users/francescotodino/TimerClock/Clock.cpp

CMakeFiles/TimerClock.dir/Clock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimerClock.dir/Clock.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescotodino/TimerClock/Clock.cpp > CMakeFiles/TimerClock.dir/Clock.cpp.i

CMakeFiles/TimerClock.dir/Clock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimerClock.dir/Clock.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescotodino/TimerClock/Clock.cpp -o CMakeFiles/TimerClock.dir/Clock.cpp.s

CMakeFiles/TimerClock.dir/Clock.cpp.o.requires:

.PHONY : CMakeFiles/TimerClock.dir/Clock.cpp.o.requires

CMakeFiles/TimerClock.dir/Clock.cpp.o.provides: CMakeFiles/TimerClock.dir/Clock.cpp.o.requires
	$(MAKE) -f CMakeFiles/TimerClock.dir/build.make CMakeFiles/TimerClock.dir/Clock.cpp.o.provides.build
.PHONY : CMakeFiles/TimerClock.dir/Clock.cpp.o.provides

CMakeFiles/TimerClock.dir/Clock.cpp.o.provides.build: CMakeFiles/TimerClock.dir/Clock.cpp.o


CMakeFiles/TimerClock.dir/Drawer.cpp.o: CMakeFiles/TimerClock.dir/flags.make
CMakeFiles/TimerClock.dir/Drawer.cpp.o: ../Drawer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TimerClock.dir/Drawer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimerClock.dir/Drawer.cpp.o -c /Users/francescotodino/TimerClock/Drawer.cpp

CMakeFiles/TimerClock.dir/Drawer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimerClock.dir/Drawer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescotodino/TimerClock/Drawer.cpp > CMakeFiles/TimerClock.dir/Drawer.cpp.i

CMakeFiles/TimerClock.dir/Drawer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimerClock.dir/Drawer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescotodino/TimerClock/Drawer.cpp -o CMakeFiles/TimerClock.dir/Drawer.cpp.s

CMakeFiles/TimerClock.dir/Drawer.cpp.o.requires:

.PHONY : CMakeFiles/TimerClock.dir/Drawer.cpp.o.requires

CMakeFiles/TimerClock.dir/Drawer.cpp.o.provides: CMakeFiles/TimerClock.dir/Drawer.cpp.o.requires
	$(MAKE) -f CMakeFiles/TimerClock.dir/build.make CMakeFiles/TimerClock.dir/Drawer.cpp.o.provides.build
.PHONY : CMakeFiles/TimerClock.dir/Drawer.cpp.o.provides

CMakeFiles/TimerClock.dir/Drawer.cpp.o.provides.build: CMakeFiles/TimerClock.dir/Drawer.cpp.o


CMakeFiles/TimerClock.dir/Timer.cpp.o: CMakeFiles/TimerClock.dir/flags.make
CMakeFiles/TimerClock.dir/Timer.cpp.o: ../Timer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TimerClock.dir/Timer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimerClock.dir/Timer.cpp.o -c /Users/francescotodino/TimerClock/Timer.cpp

CMakeFiles/TimerClock.dir/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimerClock.dir/Timer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescotodino/TimerClock/Timer.cpp > CMakeFiles/TimerClock.dir/Timer.cpp.i

CMakeFiles/TimerClock.dir/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimerClock.dir/Timer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescotodino/TimerClock/Timer.cpp -o CMakeFiles/TimerClock.dir/Timer.cpp.s

CMakeFiles/TimerClock.dir/Timer.cpp.o.requires:

.PHONY : CMakeFiles/TimerClock.dir/Timer.cpp.o.requires

CMakeFiles/TimerClock.dir/Timer.cpp.o.provides: CMakeFiles/TimerClock.dir/Timer.cpp.o.requires
	$(MAKE) -f CMakeFiles/TimerClock.dir/build.make CMakeFiles/TimerClock.dir/Timer.cpp.o.provides.build
.PHONY : CMakeFiles/TimerClock.dir/Timer.cpp.o.provides

CMakeFiles/TimerClock.dir/Timer.cpp.o.provides.build: CMakeFiles/TimerClock.dir/Timer.cpp.o


CMakeFiles/TimerClock.dir/Crono.cpp.o: CMakeFiles/TimerClock.dir/flags.make
CMakeFiles/TimerClock.dir/Crono.cpp.o: ../Crono.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TimerClock.dir/Crono.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimerClock.dir/Crono.cpp.o -c /Users/francescotodino/TimerClock/Crono.cpp

CMakeFiles/TimerClock.dir/Crono.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimerClock.dir/Crono.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescotodino/TimerClock/Crono.cpp > CMakeFiles/TimerClock.dir/Crono.cpp.i

CMakeFiles/TimerClock.dir/Crono.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimerClock.dir/Crono.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescotodino/TimerClock/Crono.cpp -o CMakeFiles/TimerClock.dir/Crono.cpp.s

CMakeFiles/TimerClock.dir/Crono.cpp.o.requires:

.PHONY : CMakeFiles/TimerClock.dir/Crono.cpp.o.requires

CMakeFiles/TimerClock.dir/Crono.cpp.o.provides: CMakeFiles/TimerClock.dir/Crono.cpp.o.requires
	$(MAKE) -f CMakeFiles/TimerClock.dir/build.make CMakeFiles/TimerClock.dir/Crono.cpp.o.provides.build
.PHONY : CMakeFiles/TimerClock.dir/Crono.cpp.o.provides

CMakeFiles/TimerClock.dir/Crono.cpp.o.provides.build: CMakeFiles/TimerClock.dir/Crono.cpp.o


# Object files for target TimerClock
TimerClock_OBJECTS = \
"CMakeFiles/TimerClock.dir/main.cpp.o" \
"CMakeFiles/TimerClock.dir/Clock.cpp.o" \
"CMakeFiles/TimerClock.dir/Drawer.cpp.o" \
"CMakeFiles/TimerClock.dir/Timer.cpp.o" \
"CMakeFiles/TimerClock.dir/Crono.cpp.o"

# External object files for target TimerClock
TimerClock_EXTERNAL_OBJECTS =

TimerClock: CMakeFiles/TimerClock.dir/main.cpp.o
TimerClock: CMakeFiles/TimerClock.dir/Clock.cpp.o
TimerClock: CMakeFiles/TimerClock.dir/Drawer.cpp.o
TimerClock: CMakeFiles/TimerClock.dir/Timer.cpp.o
TimerClock: CMakeFiles/TimerClock.dir/Crono.cpp.o
TimerClock: CMakeFiles/TimerClock.dir/build.make
TimerClock: /usr/lib/libcurses.dylib
TimerClock: /usr/lib/libform.dylib
TimerClock: CMakeFiles/TimerClock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable TimerClock"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimerClock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TimerClock.dir/build: TimerClock

.PHONY : CMakeFiles/TimerClock.dir/build

CMakeFiles/TimerClock.dir/requires: CMakeFiles/TimerClock.dir/main.cpp.o.requires
CMakeFiles/TimerClock.dir/requires: CMakeFiles/TimerClock.dir/Clock.cpp.o.requires
CMakeFiles/TimerClock.dir/requires: CMakeFiles/TimerClock.dir/Drawer.cpp.o.requires
CMakeFiles/TimerClock.dir/requires: CMakeFiles/TimerClock.dir/Timer.cpp.o.requires
CMakeFiles/TimerClock.dir/requires: CMakeFiles/TimerClock.dir/Crono.cpp.o.requires

.PHONY : CMakeFiles/TimerClock.dir/requires

CMakeFiles/TimerClock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TimerClock.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TimerClock.dir/clean

CMakeFiles/TimerClock.dir/depend:
	cd /Users/francescotodino/TimerClock/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/francescotodino/TimerClock /Users/francescotodino/TimerClock /Users/francescotodino/TimerClock/cmake-build-debug /Users/francescotodino/TimerClock/cmake-build-debug /Users/francescotodino/TimerClock/cmake-build-debug/CMakeFiles/TimerClock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TimerClock.dir/depend

