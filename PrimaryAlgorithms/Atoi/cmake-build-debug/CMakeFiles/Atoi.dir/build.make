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
CMAKE_SOURCE_DIR = C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Atoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Atoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Atoi.dir/flags.make

CMakeFiles/Atoi.dir/main.cpp.obj: CMakeFiles/Atoi.dir/flags.make
CMakeFiles/Atoi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Atoi.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Atoi.dir\main.cpp.obj -c C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\main.cpp

CMakeFiles/Atoi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Atoi.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\main.cpp > CMakeFiles\Atoi.dir\main.cpp.i

CMakeFiles/Atoi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Atoi.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\main.cpp -o CMakeFiles\Atoi.dir\main.cpp.s

CMakeFiles/Atoi.dir/Solution.cpp.obj: CMakeFiles/Atoi.dir/flags.make
CMakeFiles/Atoi.dir/Solution.cpp.obj: ../Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Atoi.dir/Solution.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Atoi.dir\Solution.cpp.obj -c C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\Solution.cpp

CMakeFiles/Atoi.dir/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Atoi.dir/Solution.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\Solution.cpp > CMakeFiles\Atoi.dir\Solution.cpp.i

CMakeFiles/Atoi.dir/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Atoi.dir/Solution.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\Solution.cpp -o CMakeFiles\Atoi.dir\Solution.cpp.s

# Object files for target Atoi
Atoi_OBJECTS = \
"CMakeFiles/Atoi.dir/main.cpp.obj" \
"CMakeFiles/Atoi.dir/Solution.cpp.obj"

# External object files for target Atoi
Atoi_EXTERNAL_OBJECTS =

Atoi.exe: CMakeFiles/Atoi.dir/main.cpp.obj
Atoi.exe: CMakeFiles/Atoi.dir/Solution.cpp.obj
Atoi.exe: CMakeFiles/Atoi.dir/build.make
Atoi.exe: CMakeFiles/Atoi.dir/linklibs.rsp
Atoi.exe: CMakeFiles/Atoi.dir/objects1.rsp
Atoi.exe: CMakeFiles/Atoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Atoi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Atoi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Atoi.dir/build: Atoi.exe

.PHONY : CMakeFiles/Atoi.dir/build

CMakeFiles/Atoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Atoi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Atoi.dir/clean

CMakeFiles/Atoi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug C:\Users\Karl\Documents\LeetCode\PrimaryAlgorithms\Atoi\cmake-build-debug\CMakeFiles\Atoi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Atoi.dir/depend

