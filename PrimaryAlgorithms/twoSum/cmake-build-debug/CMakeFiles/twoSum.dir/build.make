# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.84\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.84\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/twoSum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/twoSum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/twoSum.dir/flags.make

CMakeFiles/twoSum.dir/main.cpp.obj: CMakeFiles/twoSum.dir/flags.make
CMakeFiles/twoSum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/twoSum.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\twoSum.dir\main.cpp.obj -c C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\main.cpp

CMakeFiles/twoSum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twoSum.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\main.cpp > CMakeFiles\twoSum.dir\main.cpp.i

CMakeFiles/twoSum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twoSum.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\main.cpp -o CMakeFiles\twoSum.dir\main.cpp.s

CMakeFiles/twoSum.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/twoSum.dir/main.cpp.obj.requires

CMakeFiles/twoSum.dir/main.cpp.obj.provides: CMakeFiles/twoSum.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\twoSum.dir\build.make CMakeFiles/twoSum.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/twoSum.dir/main.cpp.obj.provides

CMakeFiles/twoSum.dir/main.cpp.obj.provides.build: CMakeFiles/twoSum.dir/main.cpp.obj


# Object files for target twoSum
twoSum_OBJECTS = \
"CMakeFiles/twoSum.dir/main.cpp.obj"

# External object files for target twoSum
twoSum_EXTERNAL_OBJECTS =

twoSum.exe: CMakeFiles/twoSum.dir/main.cpp.obj
twoSum.exe: CMakeFiles/twoSum.dir/build.make
twoSum.exe: CMakeFiles/twoSum.dir/linklibs.rsp
twoSum.exe: CMakeFiles/twoSum.dir/objects1.rsp
twoSum.exe: CMakeFiles/twoSum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable twoSum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\twoSum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/twoSum.dir/build: twoSum.exe

.PHONY : CMakeFiles/twoSum.dir/build

CMakeFiles/twoSum.dir/requires: CMakeFiles/twoSum.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/twoSum.dir/requires

CMakeFiles/twoSum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\twoSum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/twoSum.dir/clean

CMakeFiles/twoSum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\cmake-build-debug C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\cmake-build-debug C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\twoSum\cmake-build-debug\CMakeFiles\twoSum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/twoSum.dir/depend

