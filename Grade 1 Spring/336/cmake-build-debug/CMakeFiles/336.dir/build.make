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
CMAKE_COMMAND = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.3341.14\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.3341.14\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/336.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/336.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/336.dir/flags.make

CMakeFiles/336.dir/main.cpp.obj: CMakeFiles/336.dir/flags.make
CMakeFiles/336.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/336.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\336.dir\main.cpp.obj -c "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\main.cpp"

CMakeFiles/336.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/336.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\main.cpp" > CMakeFiles\336.dir\main.cpp.i

CMakeFiles/336.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/336.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\main.cpp" -o CMakeFiles\336.dir\main.cpp.s

CMakeFiles/336.dir/Solution.cpp.obj: CMakeFiles/336.dir/flags.make
CMakeFiles/336.dir/Solution.cpp.obj: ../Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/336.dir/Solution.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\336.dir\Solution.cpp.obj -c "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\Solution.cpp"

CMakeFiles/336.dir/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/336.dir/Solution.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\Solution.cpp" > CMakeFiles\336.dir\Solution.cpp.i

CMakeFiles/336.dir/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/336.dir/Solution.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\Solution.cpp" -o CMakeFiles\336.dir\Solution.cpp.s

# Object files for target 336
336_OBJECTS = \
"CMakeFiles/336.dir/main.cpp.obj" \
"CMakeFiles/336.dir/Solution.cpp.obj"

# External object files for target 336
336_EXTERNAL_OBJECTS =

336.exe: CMakeFiles/336.dir/main.cpp.obj
336.exe: CMakeFiles/336.dir/Solution.cpp.obj
336.exe: CMakeFiles/336.dir/build.make
336.exe: CMakeFiles/336.dir/linklibs.rsp
336.exe: CMakeFiles/336.dir/objects1.rsp
336.exe: CMakeFiles/336.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 336.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\336.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/336.dir/build: 336.exe

.PHONY : CMakeFiles/336.dir/build

CMakeFiles/336.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\336.dir\cmake_clean.cmake
.PHONY : CMakeFiles/336.dir/clean

CMakeFiles/336.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\336\cmake-build-debug\CMakeFiles\336.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/336.dir/depend

