# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build"

# Utility rule file for brick_game_desktop_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/brick_game_desktop_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/brick_game_desktop_autogen.dir/progress.make

CMakeFiles/brick_game_desktop_autogen: brick_game_desktop_autogen/timestamp

brick_game_desktop_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
brick_game_desktop_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
brick_game_desktop_autogen/timestamp: CMakeFiles/brick_game_desktop_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target brick_game_desktop"
	/usr/local/bin/cmake -E cmake_autogen "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles/brick_game_desktop_autogen.dir/AutogenInfo.json" Release
	/usr/local/bin/cmake -E touch "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/brick_game_desktop_autogen/timestamp"

CMakeFiles/brick_game_desktop_autogen.dir/codegen:
.PHONY : CMakeFiles/brick_game_desktop_autogen.dir/codegen

brick_game_desktop_autogen: CMakeFiles/brick_game_desktop_autogen
brick_game_desktop_autogen: brick_game_desktop_autogen/timestamp
brick_game_desktop_autogen: CMakeFiles/brick_game_desktop_autogen.dir/build.make
.PHONY : brick_game_desktop_autogen

# Rule to build all files generated by this target.
CMakeFiles/brick_game_desktop_autogen.dir/build: brick_game_desktop_autogen
.PHONY : CMakeFiles/brick_game_desktop_autogen.dir/build

CMakeFiles/brick_game_desktop_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/brick_game_desktop_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/brick_game_desktop_autogen.dir/clean

CMakeFiles/brick_game_desktop_autogen.dir/depend:
	cd "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles/brick_game_desktop_autogen.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/brick_game_desktop_autogen.dir/depend

