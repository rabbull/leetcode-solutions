# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.2757.13\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.2757.13\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Karl\Documents\LeetCode\117

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/117.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/117.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/117.dir/flags.make

CMakeFiles/117.dir/main.cpp.obj: CMakeFiles/117.dir/flags.make
CMakeFiles/117.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/117.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\117.dir\main.cpp.obj -c C:\Users\Karl\Documents\LeetCode\117\main.cpp

CMakeFiles/117.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/117.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Karl\Documents\LeetCode\117\main.cpp > CMakeFiles\117.dir\main.cpp.i

CMakeFiles/117.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/117.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Karl\Documents\LeetCode\117\main.cpp -o CMakeFiles\117.dir\main.cpp.s

CMakeFiles/117.dir/Solution.cpp.obj: CMakeFiles/117.dir/flags.make
CMakeFiles/117.dir/Solution.cpp.obj: ../Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/117.dir/Solution.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\117.dir\Solution.cpp.obj -c C:\Users\Karl\Documents\LeetCode\117\Solution.cpp

CMakeFiles/117.dir/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/117.dir/Solution.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Karl\Documents\LeetCode\117\Solution.cpp > CMakeFiles\117.dir\Solution.cpp.i

CMakeFiles/117.dir/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/117.dir/Solution.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Karl\Documents\LeetCode\117\Solution.cpp -o CMakeFiles\117.dir\Solution.cpp.s

# Object files for target 117
117_OBJECTS = \
"CMakeFiles/117.dir/main.cpp.obj" \
"CMakeFiles/117.dir/Solution.cpp.obj"

# External object files for target 117
117_EXTERNAL_OBJECTS =

117.exe: CMakeFiles/117.dir/main.cpp.obj
117.exe: CMakeFiles/117.dir/Solution.cpp.obj
117.exe: CMakeFiles/117.dir/build.make
117.exe: CMakeFiles/117.dir/linklibs.rsp
117.exe: CMakeFiles/117.dir/objects1.rsp
117.exe: CMakeFiles/117.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 117.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\117.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/117.dir/build: 117.exe

.PHONY : CMakeFiles/117.dir/build

CMakeFiles/117.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\117.dir\cmake_clean.cmake
.PHONY : CMakeFiles/117.dir/clean

CMakeFiles/117.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Karl\Documents\LeetCode\117 C:\Users\Karl\Documents\LeetCode\117 C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug C:\Users\Karl\Documents\LeetCode\117\cmake-build-debug\CMakeFiles\117.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/117.dir/depend
