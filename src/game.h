// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_GAME_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_GAME_H_

#include <random>
#include <vector>
#include <memory>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "snake.h"
#include "obstacles.h"
#include "boosters.h"

class Game {
 public:
  Game(
    std::size_t grid_width,
    std::size_t grid_height,
    int numberOfBoosters,
    int numberOfObstacles);
  void Run(
    Controller const &controller,
    Renderer &renderer,
    std::size_t target_frame_duration);
  int GetScore() const;
  int GetSize() const;

 private:
  Snake snake;
  SDL_Point food;

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  // If snake gets in touch with these obstacles,
  // then the snake loses its life.
  std::shared_ptr<Obstacles> _obstacles;
  void PlaceObstacles();

  // If snake gets in touch with these boosters,
  // then snake's speeds increases.
  std::shared_ptr<Boosters> _boosters;
  void PlaceBoosters();

  int score{0};
  int _numberOfBoosters;
  int _numberOfObstacles;
  std::size_t _grid_width;
  std::size_t _grid_height;

  void PlaceFood();
  void Update();
  void Reset(Snake &snake);
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_GAME_H_
