# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/852.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/852.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/852.dir/flags.make

CMakeFiles/852.dir/main.cpp.o: CMakeFiles/852.dir/flags.make
CMakeFiles/852.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/852.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/852.dir/main.cpp.o -c "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/main.cpp"

CMakeFiles/852.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/852.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/main.cpp" > CMakeFiles/852.dir/main.cpp.i

CMakeFiles/852.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/852.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/main.cpp" -o CMakeFiles/852.dir/main.cpp.s

CMakeFiles/852.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/852.dir/main.cpp.o.requires

CMakeFiles/852.dir/main.cpp.o.provides: CMakeFiles/852.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/852.dir/build.make CMakeFiles/852.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/852.dir/main.cpp.o.provides

CMakeFiles/852.dir/main.cpp.o.provides.build: CMakeFiles/852.dir/main.cpp.o


CMakeFiles/852.dir/Solution.cpp.o: CMakeFiles/852.dir/flags.make
CMakeFiles/852.dir/Solution.cpp.o: ../Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/852.dir/Solution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/852.dir/Solution.cpp.o -c "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/Solution.cpp"

CMakeFiles/852.dir/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/852.dir/Solution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/Solution.cpp" > CMakeFiles/852.dir/Solution.cpp.i

CMakeFiles/852.dir/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/852.dir/Solution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/Solution.cpp" -o CMakeFiles/852.dir/Solution.cpp.s

CMakeFiles/852.dir/Solution.cpp.o.requires:

.PHONY : CMakeFiles/852.dir/Solution.cpp.o.requires

CMakeFiles/852.dir/Solution.cpp.o.provides: CMakeFiles/852.dir/Solution.cpp.o.requires
	$(MAKE) -f CMakeFiles/852.dir/build.make CMakeFiles/852.dir/Solution.cpp.o.provides.build
.PHONY : CMakeFiles/852.dir/Solution.cpp.o.provides

CMakeFiles/852.dir/Solution.cpp.o.provides.build: CMakeFiles/852.dir/Solution.cpp.o


# Object files for target 852
852_OBJECTS = \
"CMakeFiles/852.dir/main.cpp.o" \
"CMakeFiles/852.dir/Solution.cpp.o"

# External object files for target 852
852_EXTERNAL_OBJECTS =

852: CMakeFiles/852.dir/main.cpp.o
852: CMakeFiles/852.dir/Solution.cpp.o
852: CMakeFiles/852.dir/build.make
852: CMakeFiles/852.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 852"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/852.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/852.dir/build: 852

.PHONY : CMakeFiles/852.dir/build

CMakeFiles/852.dir/requires: CMakeFiles/852.dir/main.cpp.o.requires
CMakeFiles/852.dir/requires: CMakeFiles/852.dir/Solution.cpp.o.requires

.PHONY : CMakeFiles/852.dir/requires

CMakeFiles/852.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/852.dir/cmake_clean.cmake
.PHONY : CMakeFiles/852.dir/clean

CMakeFiles/852.dir/depend:
	cd "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852" "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852" "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug" "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug" "/media/karl/OS/Users/Karl/Documents/LeetCode/Grade 1 Spring/852/cmake-build-debug/CMakeFiles/852.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/852.dir/depend

