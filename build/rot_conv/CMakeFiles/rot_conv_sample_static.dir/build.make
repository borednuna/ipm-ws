# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /home/nuna/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/nuna/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nuna/ipm-ws/src/rot_conv_lib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nuna/ipm-ws/build/rot_conv

# Include any dependencies generated for this target.
include CMakeFiles/rot_conv_sample_static.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rot_conv_sample_static.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rot_conv_sample_static.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rot_conv_sample_static.dir/flags.make

CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o: CMakeFiles/rot_conv_sample_static.dir/flags.make
CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o: /home/nuna/ipm-ws/src/rot_conv_lib/test/rot_conv_sample.cpp
CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o: CMakeFiles/rot_conv_sample_static.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/nuna/ipm-ws/build/rot_conv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o -MF CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o.d -o CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o -c /home/nuna/ipm-ws/src/rot_conv_lib/test/rot_conv_sample.cpp

CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nuna/ipm-ws/src/rot_conv_lib/test/rot_conv_sample.cpp > CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.i

CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nuna/ipm-ws/src/rot_conv_lib/test/rot_conv_sample.cpp -o CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.s

# Object files for target rot_conv_sample_static
rot_conv_sample_static_OBJECTS = \
"CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o"

# External object files for target rot_conv_sample_static
rot_conv_sample_static_EXTERNAL_OBJECTS =

rot_conv_sample_static: CMakeFiles/rot_conv_sample_static.dir/test/rot_conv_sample.cpp.o
rot_conv_sample_static: CMakeFiles/rot_conv_sample_static.dir/build.make
rot_conv_sample_static: librotconvstatic.a
rot_conv_sample_static: CMakeFiles/rot_conv_sample_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/nuna/ipm-ws/build/rot_conv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rot_conv_sample_static"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rot_conv_sample_static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rot_conv_sample_static.dir/build: rot_conv_sample_static
.PHONY : CMakeFiles/rot_conv_sample_static.dir/build

CMakeFiles/rot_conv_sample_static.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rot_conv_sample_static.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rot_conv_sample_static.dir/clean

CMakeFiles/rot_conv_sample_static.dir/depend:
	cd /home/nuna/ipm-ws/build/rot_conv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nuna/ipm-ws/src/rot_conv_lib /home/nuna/ipm-ws/src/rot_conv_lib /home/nuna/ipm-ws/build/rot_conv /home/nuna/ipm-ws/build/rot_conv /home/nuna/ipm-ws/build/rot_conv/CMakeFiles/rot_conv_sample_static.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/rot_conv_sample_static.dir/depend

