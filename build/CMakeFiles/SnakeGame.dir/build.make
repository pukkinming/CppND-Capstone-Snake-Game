# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /opt/cmake-3.16.6-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.16.6-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build

# Include any dependencies generated for this target.
include CMakeFiles/SnakeGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SnakeGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SnakeGame.dir/flags.make

CMakeFiles/SnakeGame.dir/src/main.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SnakeGame.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/main.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/main.cpp

CMakeFiles/SnakeGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/main.cpp > CMakeFiles/SnakeGame.dir/src/main.cpp.i

CMakeFiles/SnakeGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/main.cpp -o CMakeFiles/SnakeGame.dir/src/main.cpp.s

CMakeFiles/SnakeGame.dir/src/game.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/game.cpp.o: ../src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SnakeGame.dir/src/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/game.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/game.cpp

CMakeFiles/SnakeGame.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/game.cpp > CMakeFiles/SnakeGame.dir/src/game.cpp.i

CMakeFiles/SnakeGame.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/game.cpp -o CMakeFiles/SnakeGame.dir/src/game.cpp.s

CMakeFiles/SnakeGame.dir/src/controller.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/controller.cpp.o: ../src/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SnakeGame.dir/src/controller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/controller.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/controller.cpp

CMakeFiles/SnakeGame.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/controller.cpp > CMakeFiles/SnakeGame.dir/src/controller.cpp.i

CMakeFiles/SnakeGame.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/controller.cpp -o CMakeFiles/SnakeGame.dir/src/controller.cpp.s

CMakeFiles/SnakeGame.dir/src/renderer.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/renderer.cpp.o: ../src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SnakeGame.dir/src/renderer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/renderer.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/renderer.cpp

CMakeFiles/SnakeGame.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/renderer.cpp > CMakeFiles/SnakeGame.dir/src/renderer.cpp.i

CMakeFiles/SnakeGame.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/renderer.cpp -o CMakeFiles/SnakeGame.dir/src/renderer.cpp.s

CMakeFiles/SnakeGame.dir/src/snake.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/snake.cpp.o: ../src/snake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SnakeGame.dir/src/snake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/snake.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/snake.cpp

CMakeFiles/SnakeGame.dir/src/snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/snake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/snake.cpp > CMakeFiles/SnakeGame.dir/src/snake.cpp.i

CMakeFiles/SnakeGame.dir/src/snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/snake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/snake.cpp -o CMakeFiles/SnakeGame.dir/src/snake.cpp.s

CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.o: ../src/fileUtils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/fileUtils.cpp

CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/fileUtils.cpp > CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.i

CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/fileUtils.cpp -o CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.s

CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.o: ../src/gameObjects.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/gameObjects.cpp

CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/gameObjects.cpp > CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.i

CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/gameObjects.cpp -o CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.s

CMakeFiles/SnakeGame.dir/src/boosters.cpp.o: CMakeFiles/SnakeGame.dir/flags.make
CMakeFiles/SnakeGame.dir/src/boosters.cpp.o: ../src/boosters.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SnakeGame.dir/src/boosters.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SnakeGame.dir/src/boosters.cpp.o -c /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/boosters.cpp

CMakeFiles/SnakeGame.dir/src/boosters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SnakeGame.dir/src/boosters.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/boosters.cpp > CMakeFiles/SnakeGame.dir/src/boosters.cpp.i

CMakeFiles/SnakeGame.dir/src/boosters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SnakeGame.dir/src/boosters.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/src/boosters.cpp -o CMakeFiles/SnakeGame.dir/src/boosters.cpp.s

# Object files for target SnakeGame
SnakeGame_OBJECTS = \
"CMakeFiles/SnakeGame.dir/src/main.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/game.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/controller.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/renderer.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/snake.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.o" \
"CMakeFiles/SnakeGame.dir/src/boosters.cpp.o"

# External object files for target SnakeGame
SnakeGame_EXTERNAL_OBJECTS =

SnakeGame: CMakeFiles/SnakeGame.dir/src/main.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/game.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/controller.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/renderer.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/snake.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/fileUtils.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/gameObjects.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/src/boosters.cpp.o
SnakeGame: CMakeFiles/SnakeGame.dir/build.make
SnakeGame: /usr/local/lib/libSDL2_ttf.so
SnakeGame: /usr/local/lib/libSDL2_ttf.so
SnakeGame: CMakeFiles/SnakeGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable SnakeGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SnakeGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SnakeGame.dir/build: SnakeGame

.PHONY : CMakeFiles/SnakeGame.dir/build

CMakeFiles/SnakeGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SnakeGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SnakeGame.dir/clean

CMakeFiles/SnakeGame.dir/depend:
	cd /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build /home/frank/Dropbox/Project/udacity_cppnd/CppND-Capstone-Snake-Game/build/CMakeFiles/SnakeGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SnakeGame.dir/depend

