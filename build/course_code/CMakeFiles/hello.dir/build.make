# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hectorjoker/Documents/workspace/2023/05/thread_pool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build

# Include any dependencies generated for this target.
include course_code/CMakeFiles/hello.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include course_code/CMakeFiles/hello.dir/compiler_depend.make

# Include the progress variables for this target.
include course_code/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include course_code/CMakeFiles/hello.dir/flags.make

course_code/CMakeFiles/hello.dir/C/02/logical.cpp.o: course_code/CMakeFiles/hello.dir/flags.make
course_code/CMakeFiles/hello.dir/C/02/logical.cpp.o: /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/course_code/C/02/logical.cpp
course_code/CMakeFiles/hello.dir/C/02/logical.cpp.o: course_code/CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object course_code/CMakeFiles/hello.dir/C/02/logical.cpp.o"
	cd /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT course_code/CMakeFiles/hello.dir/C/02/logical.cpp.o -MF CMakeFiles/hello.dir/C/02/logical.cpp.o.d -o CMakeFiles/hello.dir/C/02/logical.cpp.o -c /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/course_code/C/02/logical.cpp

course_code/CMakeFiles/hello.dir/C/02/logical.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/C/02/logical.cpp.i"
	cd /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/course_code/C/02/logical.cpp > CMakeFiles/hello.dir/C/02/logical.cpp.i

course_code/CMakeFiles/hello.dir/C/02/logical.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/C/02/logical.cpp.s"
	cd /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/course_code/C/02/logical.cpp -o CMakeFiles/hello.dir/C/02/logical.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/C/02/logical.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello: course_code/CMakeFiles/hello.dir/C/02/logical.cpp.o
hello: course_code/CMakeFiles/hello.dir/build.make
hello: course_code/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../hello"
	cd /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
course_code/CMakeFiles/hello.dir/build: hello
.PHONY : course_code/CMakeFiles/hello.dir/build

course_code/CMakeFiles/hello.dir/clean:
	cd /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code && $(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : course_code/CMakeFiles/hello.dir/clean

course_code/CMakeFiles/hello.dir/depend:
	cd /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hectorjoker/Documents/workspace/2023/05/thread_pool /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/course_code /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code /Users/hectorjoker/Documents/workspace/2023/05/thread_pool/build/course_code/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : course_code/CMakeFiles/hello.dir/depend

