# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "/Users/adi/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/adi/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/adi/Technion/matam/HW/ex4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/adi/Technion/matam/HW/ex4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex4.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex4.dir/flags.make

CMakeFiles/ex4.dir/Mtmchkin.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Mtmchkin.cpp.o: ../Mtmchkin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex4.dir/Mtmchkin.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Mtmchkin.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Mtmchkin.cpp

CMakeFiles/ex4.dir/Mtmchkin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Mtmchkin.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Mtmchkin.cpp > CMakeFiles/ex4.dir/Mtmchkin.cpp.i

CMakeFiles/ex4.dir/Mtmchkin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Mtmchkin.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Mtmchkin.cpp -o CMakeFiles/ex4.dir/Mtmchkin.cpp.s

CMakeFiles/ex4.dir/Cards/Barfight.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Barfight.cpp.o: ../Cards/Barfight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex4.dir/Cards/Barfight.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Barfight.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Barfight.cpp

CMakeFiles/ex4.dir/Cards/Barfight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Barfight.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Barfight.cpp > CMakeFiles/ex4.dir/Cards/Barfight.cpp.i

CMakeFiles/ex4.dir/Cards/Barfight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Barfight.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Barfight.cpp -o CMakeFiles/ex4.dir/Cards/Barfight.cpp.s

CMakeFiles/ex4.dir/Cards/Card.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Card.cpp.o: ../Cards/Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex4.dir/Cards/Card.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Card.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Card.cpp

CMakeFiles/ex4.dir/Cards/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Card.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Card.cpp > CMakeFiles/ex4.dir/Cards/Card.cpp.i

CMakeFiles/ex4.dir/Cards/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Card.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Card.cpp -o CMakeFiles/ex4.dir/Cards/Card.cpp.s

CMakeFiles/ex4.dir/Cards/Dragon.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Dragon.cpp.o: ../Cards/Dragon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex4.dir/Cards/Dragon.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Dragon.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Dragon.cpp

CMakeFiles/ex4.dir/Cards/Dragon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Dragon.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Dragon.cpp > CMakeFiles/ex4.dir/Cards/Dragon.cpp.i

CMakeFiles/ex4.dir/Cards/Dragon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Dragon.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Dragon.cpp -o CMakeFiles/ex4.dir/Cards/Dragon.cpp.s

CMakeFiles/ex4.dir/Cards/Fairy.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Fairy.cpp.o: ../Cards/Fairy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex4.dir/Cards/Fairy.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Fairy.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Fairy.cpp

CMakeFiles/ex4.dir/Cards/Fairy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Fairy.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Fairy.cpp > CMakeFiles/ex4.dir/Cards/Fairy.cpp.i

CMakeFiles/ex4.dir/Cards/Fairy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Fairy.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Fairy.cpp -o CMakeFiles/ex4.dir/Cards/Fairy.cpp.s

CMakeFiles/ex4.dir/Cards/Goblin.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Goblin.cpp.o: ../Cards/Goblin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex4.dir/Cards/Goblin.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Goblin.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Goblin.cpp

CMakeFiles/ex4.dir/Cards/Goblin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Goblin.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Goblin.cpp > CMakeFiles/ex4.dir/Cards/Goblin.cpp.i

CMakeFiles/ex4.dir/Cards/Goblin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Goblin.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Goblin.cpp -o CMakeFiles/ex4.dir/Cards/Goblin.cpp.s

CMakeFiles/ex4.dir/Cards/Merchant.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Merchant.cpp.o: ../Cards/Merchant.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex4.dir/Cards/Merchant.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Merchant.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Merchant.cpp

CMakeFiles/ex4.dir/Cards/Merchant.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Merchant.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Merchant.cpp > CMakeFiles/ex4.dir/Cards/Merchant.cpp.i

CMakeFiles/ex4.dir/Cards/Merchant.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Merchant.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Merchant.cpp -o CMakeFiles/ex4.dir/Cards/Merchant.cpp.s

CMakeFiles/ex4.dir/Cards/Pitfall.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Pitfall.cpp.o: ../Cards/Pitfall.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex4.dir/Cards/Pitfall.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Pitfall.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Pitfall.cpp

CMakeFiles/ex4.dir/Cards/Pitfall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Pitfall.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Pitfall.cpp > CMakeFiles/ex4.dir/Cards/Pitfall.cpp.i

CMakeFiles/ex4.dir/Cards/Pitfall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Pitfall.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Pitfall.cpp -o CMakeFiles/ex4.dir/Cards/Pitfall.cpp.s

CMakeFiles/ex4.dir/Cards/Treasure.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Treasure.cpp.o: ../Cards/Treasure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex4.dir/Cards/Treasure.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Treasure.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Treasure.cpp

CMakeFiles/ex4.dir/Cards/Treasure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Treasure.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Treasure.cpp > CMakeFiles/ex4.dir/Cards/Treasure.cpp.i

CMakeFiles/ex4.dir/Cards/Treasure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Treasure.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Treasure.cpp -o CMakeFiles/ex4.dir/Cards/Treasure.cpp.s

CMakeFiles/ex4.dir/Cards/Vampire.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Cards/Vampire.cpp.o: ../Cards/Vampire.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex4.dir/Cards/Vampire.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Cards/Vampire.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Cards/Vampire.cpp

CMakeFiles/ex4.dir/Cards/Vampire.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Vampire.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Cards/Vampire.cpp > CMakeFiles/ex4.dir/Cards/Vampire.cpp.i

CMakeFiles/ex4.dir/Cards/Vampire.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Vampire.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Cards/Vampire.cpp -o CMakeFiles/ex4.dir/Cards/Vampire.cpp.s

CMakeFiles/ex4.dir/test.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ex4.dir/test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/test.cpp.o -c /Users/adi/Technion/matam/HW/ex4/test.cpp

CMakeFiles/ex4.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/test.cpp > CMakeFiles/ex4.dir/test.cpp.i

CMakeFiles/ex4.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/test.cpp -o CMakeFiles/ex4.dir/test.cpp.s

CMakeFiles/ex4.dir/Players/Player.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Players/Player.cpp.o: ../Players/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ex4.dir/Players/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Players/Player.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Players/Player.cpp

CMakeFiles/ex4.dir/Players/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Players/Player.cpp > CMakeFiles/ex4.dir/Players/Player.cpp.i

CMakeFiles/ex4.dir/Players/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Players/Player.cpp -o CMakeFiles/ex4.dir/Players/Player.cpp.s

CMakeFiles/ex4.dir/Players/Wizard.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Players/Wizard.cpp.o: ../Players/Wizard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ex4.dir/Players/Wizard.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Players/Wizard.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Players/Wizard.cpp

CMakeFiles/ex4.dir/Players/Wizard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Wizard.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Players/Wizard.cpp > CMakeFiles/ex4.dir/Players/Wizard.cpp.i

CMakeFiles/ex4.dir/Players/Wizard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Wizard.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Players/Wizard.cpp -o CMakeFiles/ex4.dir/Players/Wizard.cpp.s

CMakeFiles/ex4.dir/Players/Fighter.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Players/Fighter.cpp.o: ../Players/Fighter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ex4.dir/Players/Fighter.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Players/Fighter.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Players/Fighter.cpp

CMakeFiles/ex4.dir/Players/Fighter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Fighter.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Players/Fighter.cpp > CMakeFiles/ex4.dir/Players/Fighter.cpp.i

CMakeFiles/ex4.dir/Players/Fighter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Fighter.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Players/Fighter.cpp -o CMakeFiles/ex4.dir/Players/Fighter.cpp.s

CMakeFiles/ex4.dir/Players/Rogue.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Players/Rogue.cpp.o: ../Players/Rogue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ex4.dir/Players/Rogue.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Players/Rogue.cpp.o -c /Users/adi/Technion/matam/HW/ex4/Players/Rogue.cpp

CMakeFiles/ex4.dir/Players/Rogue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Rogue.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/Players/Rogue.cpp > CMakeFiles/ex4.dir/Players/Rogue.cpp.i

CMakeFiles/ex4.dir/Players/Rogue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Rogue.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/Players/Rogue.cpp -o CMakeFiles/ex4.dir/Players/Rogue.cpp.s

CMakeFiles/ex4.dir/utilities.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/utilities.cpp.o: ../utilities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ex4.dir/utilities.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/utilities.cpp.o -c /Users/adi/Technion/matam/HW/ex4/utilities.cpp

CMakeFiles/ex4.dir/utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/utilities.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adi/Technion/matam/HW/ex4/utilities.cpp > CMakeFiles/ex4.dir/utilities.cpp.i

CMakeFiles/ex4.dir/utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/utilities.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adi/Technion/matam/HW/ex4/utilities.cpp -o CMakeFiles/ex4.dir/utilities.cpp.s

# Object files for target ex4
ex4_OBJECTS = \
"CMakeFiles/ex4.dir/Mtmchkin.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Barfight.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Card.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Dragon.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Fairy.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Goblin.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Merchant.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Pitfall.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Treasure.cpp.o" \
"CMakeFiles/ex4.dir/Cards/Vampire.cpp.o" \
"CMakeFiles/ex4.dir/test.cpp.o" \
"CMakeFiles/ex4.dir/Players/Player.cpp.o" \
"CMakeFiles/ex4.dir/Players/Wizard.cpp.o" \
"CMakeFiles/ex4.dir/Players/Fighter.cpp.o" \
"CMakeFiles/ex4.dir/Players/Rogue.cpp.o" \
"CMakeFiles/ex4.dir/utilities.cpp.o"

# External object files for target ex4
ex4_EXTERNAL_OBJECTS =

ex4: CMakeFiles/ex4.dir/Mtmchkin.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Barfight.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Card.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Dragon.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Fairy.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Goblin.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Merchant.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Pitfall.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Treasure.cpp.o
ex4: CMakeFiles/ex4.dir/Cards/Vampire.cpp.o
ex4: CMakeFiles/ex4.dir/test.cpp.o
ex4: CMakeFiles/ex4.dir/Players/Player.cpp.o
ex4: CMakeFiles/ex4.dir/Players/Wizard.cpp.o
ex4: CMakeFiles/ex4.dir/Players/Fighter.cpp.o
ex4: CMakeFiles/ex4.dir/Players/Rogue.cpp.o
ex4: CMakeFiles/ex4.dir/utilities.cpp.o
ex4: CMakeFiles/ex4.dir/build.make
ex4: CMakeFiles/ex4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable ex4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex4.dir/build: ex4
.PHONY : CMakeFiles/ex4.dir/build

CMakeFiles/ex4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex4.dir/clean

CMakeFiles/ex4.dir/depend:
	cd /Users/adi/Technion/matam/HW/ex4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/adi/Technion/matam/HW/ex4 /Users/adi/Technion/matam/HW/ex4 /Users/adi/Technion/matam/HW/ex4/cmake-build-debug /Users/adi/Technion/matam/HW/ex4/cmake-build-debug /Users/adi/Technion/matam/HW/ex4/cmake-build-debug/CMakeFiles/ex4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex4.dir/depend

