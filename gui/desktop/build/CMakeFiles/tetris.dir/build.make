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

# Include any dependencies generated for this target.
include CMakeFiles/tetris.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tetris.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tetris.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tetris.dir/flags.make

CMakeFiles/tetris.dir/codegen:
.PHONY : CMakeFiles/tetris.dir/codegen

CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o: tetris_autogen/mocs_compilation.cpp
CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o: CMakeFiles/tetris.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o -MF CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o -c "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/tetris_autogen/mocs_compilation.cpp"

CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/tetris_autogen/mocs_compilation.cpp" > CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.i

CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/tetris_autogen/mocs_compilation.cpp" -o CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.s

CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o: /Users/mockingb/Downloads/tetris_snake\ (extract.me)/brick_game/tetris/tetris_lib.c
CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o: CMakeFiles/tetris.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT "CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o" -MF "CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o.d" -o "CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o" -c "/Users/mockingb/Downloads/tetris_snake (extract.me)/brick_game/tetris/tetris_lib.c"

CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/mockingb/Downloads/tetris_snake (extract.me)/brick_game/tetris/tetris_lib.c" > "CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.i"

CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/mockingb/Downloads/tetris_snake (extract.me)/brick_game/tetris/tetris_lib.c" -o "CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.s"

# Object files for target tetris
tetris_OBJECTS = \
"CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o"

# External object files for target tetris
tetris_EXTERNAL_OBJECTS =

lib/libtetris.dylib: CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o
lib/libtetris.dylib: CMakeFiles/tetris.dir/Users/mockingb/Downloads/tetris_snake_(extract.me)/brick_game/tetris/tetris_lib.c.o
lib/libtetris.dylib: CMakeFiles/tetris.dir/build.make
lib/libtetris.dylib: CMakeFiles/tetris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library lib/libtetris.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tetris.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tetris.dir/build: lib/libtetris.dylib
.PHONY : CMakeFiles/tetris.dir/build

CMakeFiles/tetris.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tetris.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tetris.dir/clean

CMakeFiles/tetris.dir/depend:
	cd "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build" "/Users/mockingb/Downloads/tetris_snake (extract.me)/gui/desktop/build/CMakeFiles/tetris.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/tetris.dir/depend

