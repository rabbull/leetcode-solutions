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
CMAKE_COMMAND = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Karl\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/46.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/46.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/46.dir/flags.make

CMakeFiles/46.dir/main.cpp.obj: CMakeFiles/46.dir/flags.make
CMakeFiles/46.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/46.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\46.dir\main.cpp.obj -c "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\main.cpp"

CMakeFiles/46.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/46.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\main.cpp" > CMakeFiles\46.dir\main.cpp.i

CMakeFiles/46.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/46.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\main.cpp" -o CMakeFiles\46.dir\main.cpp.s

CMakeFiles/46.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/46.dir/main.cpp.obj.requires

CMakeFiles/46.dir/main.cpp.obj.provides: CMakeFiles/46.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\46.dir\build.make CMakeFiles/46.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/46.dir/main.cpp.obj.provides

CMakeFiles/46.dir/main.cpp.obj.provides.build: CMakeFiles/46.dir/main.cpp.obj


# Object files for target 46
46_OBJECTS = \
"CMakeFiles/46.dir/main.cpp.obj"

# External object files for target 46
46_EXTERNAL_OBJECTS =

46.exe: CMakeFiles/46.dir/main.cpp.obj
46.exe: CMakeFiles/46.dir/build.make
46.exe: CMakeFiles/46.dir/linklibs.rsp
46.exe: CMakeFiles/46.dir/objects1.rsp
46.exe: CMakeFiles/46.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 46.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\46.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/46.dir/build: 46.exe

.PHONY : CMakeFiles/46.dir/build

CMakeFiles/46.dir/requires: CMakeFiles/46.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/46.dir/requires

CMakeFiles/46.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\46.dir\cmake_clean.cmake
.PHONY : CMakeFiles/46.dir/clean

CMakeFiles/46.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\cmake-build-debug" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\cmake-build-debug" "C:\Users\Karl\Documents\LeetCode\Grade 1 Spring\46\cmake-build-debug\CMakeFiles\46.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/46.dir/depend

