# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\datastructure\printnote1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\datastructure\printnote1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/printnote1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printnote1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printnote1.dir/flags.make

CMakeFiles/printnote1.dir/main.cpp.obj: CMakeFiles/printnote1.dir/flags.make
CMakeFiles/printnote1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\datastructure\printnote1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/printnote1.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\printnote1.dir\main.cpp.obj -c D:\datastructure\printnote1\main.cpp

CMakeFiles/printnote1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printnote1.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\datastructure\printnote1\main.cpp > CMakeFiles\printnote1.dir\main.cpp.i

CMakeFiles/printnote1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printnote1.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\datastructure\printnote1\main.cpp -o CMakeFiles\printnote1.dir\main.cpp.s

CMakeFiles/printnote1.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/printnote1.dir/main.cpp.obj.requires

CMakeFiles/printnote1.dir/main.cpp.obj.provides: CMakeFiles/printnote1.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\printnote1.dir\build.make CMakeFiles/printnote1.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/printnote1.dir/main.cpp.obj.provides

CMakeFiles/printnote1.dir/main.cpp.obj.provides.build: CMakeFiles/printnote1.dir/main.cpp.obj


# Object files for target printnote1
printnote1_OBJECTS = \
"CMakeFiles/printnote1.dir/main.cpp.obj"

# External object files for target printnote1
printnote1_EXTERNAL_OBJECTS =

printnote1.exe: CMakeFiles/printnote1.dir/main.cpp.obj
printnote1.exe: CMakeFiles/printnote1.dir/build.make
printnote1.exe: CMakeFiles/printnote1.dir/linklibs.rsp
printnote1.exe: CMakeFiles/printnote1.dir/objects1.rsp
printnote1.exe: CMakeFiles/printnote1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\datastructure\printnote1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable printnote1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\printnote1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printnote1.dir/build: printnote1.exe

.PHONY : CMakeFiles/printnote1.dir/build

CMakeFiles/printnote1.dir/requires: CMakeFiles/printnote1.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/printnote1.dir/requires

CMakeFiles/printnote1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\printnote1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/printnote1.dir/clean

CMakeFiles/printnote1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\datastructure\printnote1 D:\datastructure\printnote1 D:\datastructure\printnote1\cmake-build-debug D:\datastructure\printnote1\cmake-build-debug D:\datastructure\printnote1\cmake-build-debug\CMakeFiles\printnote1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printnote1.dir/depend

