# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/debian/BBBW_RELAYCAPE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/BBBW_RELAYCAPE/build

# Include any dependencies generated for this target.
include CMakeFiles/MySecond.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MySecond.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MySecond.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MySecond.dir/flags.make

CMakeFiles/MySecond.dir/MySecond.c.o: CMakeFiles/MySecond.dir/flags.make
CMakeFiles/MySecond.dir/MySecond.c.o: ../MySecond.c
CMakeFiles/MySecond.dir/MySecond.c.o: CMakeFiles/MySecond.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debian/BBBW_RELAYCAPE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MySecond.dir/MySecond.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MySecond.dir/MySecond.c.o -MF CMakeFiles/MySecond.dir/MySecond.c.o.d -o CMakeFiles/MySecond.dir/MySecond.c.o -c /home/debian/BBBW_RELAYCAPE/MySecond.c

CMakeFiles/MySecond.dir/MySecond.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MySecond.dir/MySecond.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/debian/BBBW_RELAYCAPE/MySecond.c > CMakeFiles/MySecond.dir/MySecond.c.i

CMakeFiles/MySecond.dir/MySecond.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MySecond.dir/MySecond.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/debian/BBBW_RELAYCAPE/MySecond.c -o CMakeFiles/MySecond.dir/MySecond.c.s

# Object files for target MySecond
MySecond_OBJECTS = \
"CMakeFiles/MySecond.dir/MySecond.c.o"

# External object files for target MySecond
MySecond_EXTERNAL_OBJECTS =

MySecond: CMakeFiles/MySecond.dir/MySecond.c.o
MySecond: CMakeFiles/MySecond.dir/build.make
MySecond: CMakeFiles/MySecond.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debian/BBBW_RELAYCAPE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MySecond"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MySecond.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MySecond.dir/build: MySecond
.PHONY : CMakeFiles/MySecond.dir/build

CMakeFiles/MySecond.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MySecond.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MySecond.dir/clean

CMakeFiles/MySecond.dir/depend:
	cd /home/debian/BBBW_RELAYCAPE/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/BBBW_RELAYCAPE /home/debian/BBBW_RELAYCAPE /home/debian/BBBW_RELAYCAPE/build /home/debian/BBBW_RELAYCAPE/build /home/debian/BBBW_RELAYCAPE/build/CMakeFiles/MySecond.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MySecond.dir/depend

