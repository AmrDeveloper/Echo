# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\LowLevel\Echo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\LowLevel\Echo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Echo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Echo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Echo.dir/flags.make

CMakeFiles/Echo.dir/main.c.obj: CMakeFiles/Echo.dir/flags.make
CMakeFiles/Echo.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Echo.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Echo.dir\main.c.obj   -c D:\LowLevel\Echo\main.c

CMakeFiles/Echo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Echo.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\LowLevel\Echo\main.c > CMakeFiles\Echo.dir\main.c.i

CMakeFiles/Echo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Echo.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\LowLevel\Echo\main.c -o CMakeFiles\Echo.dir\main.c.s

CMakeFiles/Echo.dir/chunk.c.obj: CMakeFiles/Echo.dir/flags.make
CMakeFiles/Echo.dir/chunk.c.obj: ../chunk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Echo.dir/chunk.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Echo.dir\chunk.c.obj   -c D:\LowLevel\Echo\chunk.c

CMakeFiles/Echo.dir/chunk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Echo.dir/chunk.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\LowLevel\Echo\chunk.c > CMakeFiles\Echo.dir\chunk.c.i

CMakeFiles/Echo.dir/chunk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Echo.dir/chunk.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\LowLevel\Echo\chunk.c -o CMakeFiles\Echo.dir\chunk.c.s

CMakeFiles/Echo.dir/memory.c.obj: CMakeFiles/Echo.dir/flags.make
CMakeFiles/Echo.dir/memory.c.obj: ../memory.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Echo.dir/memory.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Echo.dir\memory.c.obj   -c D:\LowLevel\Echo\memory.c

CMakeFiles/Echo.dir/memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Echo.dir/memory.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\LowLevel\Echo\memory.c > CMakeFiles\Echo.dir\memory.c.i

CMakeFiles/Echo.dir/memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Echo.dir/memory.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\LowLevel\Echo\memory.c -o CMakeFiles\Echo.dir\memory.c.s

CMakeFiles/Echo.dir/debug.c.obj: CMakeFiles/Echo.dir/flags.make
CMakeFiles/Echo.dir/debug.c.obj: ../debug.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Echo.dir/debug.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Echo.dir\debug.c.obj   -c D:\LowLevel\Echo\debug.c

CMakeFiles/Echo.dir/debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Echo.dir/debug.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\LowLevel\Echo\debug.c > CMakeFiles\Echo.dir\debug.c.i

CMakeFiles/Echo.dir/debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Echo.dir/debug.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\LowLevel\Echo\debug.c -o CMakeFiles\Echo.dir\debug.c.s

CMakeFiles/Echo.dir/value.c.obj: CMakeFiles/Echo.dir/flags.make
CMakeFiles/Echo.dir/value.c.obj: ../value.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Echo.dir/value.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Echo.dir\value.c.obj   -c D:\LowLevel\Echo\value.c

CMakeFiles/Echo.dir/value.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Echo.dir/value.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\LowLevel\Echo\value.c > CMakeFiles\Echo.dir\value.c.i

CMakeFiles/Echo.dir/value.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Echo.dir/value.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\LowLevel\Echo\value.c -o CMakeFiles\Echo.dir\value.c.s

CMakeFiles/Echo.dir/echo-vm.c.obj: CMakeFiles/Echo.dir/flags.make
CMakeFiles/Echo.dir/echo-vm.c.obj: ../echo-vm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Echo.dir/echo-vm.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Echo.dir\echo-vm.c.obj   -c D:\LowLevel\Echo\echo-vm.c

CMakeFiles/Echo.dir/echo-vm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Echo.dir/echo-vm.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\LowLevel\Echo\echo-vm.c > CMakeFiles\Echo.dir\echo-vm.c.i

CMakeFiles/Echo.dir/echo-vm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Echo.dir/echo-vm.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\LowLevel\Echo\echo-vm.c -o CMakeFiles\Echo.dir\echo-vm.c.s

# Object files for target Echo
Echo_OBJECTS = \
"CMakeFiles/Echo.dir/main.c.obj" \
"CMakeFiles/Echo.dir/chunk.c.obj" \
"CMakeFiles/Echo.dir/memory.c.obj" \
"CMakeFiles/Echo.dir/debug.c.obj" \
"CMakeFiles/Echo.dir/value.c.obj" \
"CMakeFiles/Echo.dir/echo-vm.c.obj"

# External object files for target Echo
Echo_EXTERNAL_OBJECTS =

Echo.exe: CMakeFiles/Echo.dir/main.c.obj
Echo.exe: CMakeFiles/Echo.dir/chunk.c.obj
Echo.exe: CMakeFiles/Echo.dir/memory.c.obj
Echo.exe: CMakeFiles/Echo.dir/debug.c.obj
Echo.exe: CMakeFiles/Echo.dir/value.c.obj
Echo.exe: CMakeFiles/Echo.dir/echo-vm.c.obj
Echo.exe: CMakeFiles/Echo.dir/build.make
Echo.exe: CMakeFiles/Echo.dir/linklibs.rsp
Echo.exe: CMakeFiles/Echo.dir/objects1.rsp
Echo.exe: CMakeFiles/Echo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\LowLevel\Echo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable Echo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Echo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Echo.dir/build: Echo.exe

.PHONY : CMakeFiles/Echo.dir/build

CMakeFiles/Echo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Echo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Echo.dir/clean

CMakeFiles/Echo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\LowLevel\Echo D:\LowLevel\Echo D:\LowLevel\Echo\cmake-build-debug D:\LowLevel\Echo\cmake-build-debug D:\LowLevel\Echo\cmake-build-debug\CMakeFiles\Echo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Echo.dir/depend

