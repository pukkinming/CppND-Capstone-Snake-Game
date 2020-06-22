# CPPND: Capstone Snake Game

This is the final Capstone project of the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

## Game Screens

<img src="starting_screen.png"/>
<br/>
<img src="snake_game.png"/>

## Game Features
1. There are boosters marked by 🚀 which will speed up the snake's speed.
2. New boosters will be randomly placed in the game after you eat any of them.
3. Beware of obstacles.
4. Parameters such as number of obstacles and boosters can be configured from [gameConfig/config.txt](./gameConfig/config.txt) file.
5. A starting screen has been added.
6. The game can be reset in the starting screen.
7. The game can be paused if you press `Esc`. 

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* SDL2 TTF >= 2.0
  * All installation instructions can be found [here](https://www.libsdl.org/projects/SDL_ttf/docs/SDL_ttf.html)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
    * sudo apt install libsdl2-ttf-dev
    * sudo apt-get install libsdl2-ttf-dev
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## Meets Rubric

### Compiling and Testing
- The submission must compile and run.

### Loops, Functions, I/O
- The project demonstrates an understanding of C++ functions and control structures.
  - The code starts from [main.cpp](./src/main.cpp) and uses functions along the way.
- The project reads data from a file and process the data, or the program writes data to a file.
  - It reads data from the config file ([header](./src/fileUtils.h), [cpp](./src/fileUtils.cpp)).
- The project accepts user input and processes the input.
  - It has a welcoming page and allows the player to choose to play, reset, or quit the game ([welcoming page](#game-screens)).
  
### Object Oriented Programming
- The project uses Object Oriented Programming techniques.
  - Please visit the `src` folder and take a look. The project code is built on objects such as controller, snake, obstacles, and renderer. 
- Classes use appropriate access specifiers for class members.
  - Please visit the `src` folder and take a look.
- Class constructors utilize member initialization lists.
  - Examples include [game.cpp](./src/game.cpp#L16) and [coordinate.h](./src/coordinate.h#L8).
- Classes encapsulate behavior.
  - Examples include boosters.h ([private variable](./src/boosters.h#L24), [getter](./src/boosters.h#L20)).
- 
