// Copyright 2020 Frank Puk

#include <vector>
#include <iostream>
#include "game.h"
#include "SDL.h"
#include "obstacles.h"
#include "coordinate.h"

Game::Game(
  std::size_t grid_width,
  std::size_t grid_height,
  int numberOfBoosters,
  int numberOfObstacles
)
  : snake(grid_width, grid_height),
    engine(dev()),
    random_w(0, static_cast<int>(grid_width)),
    random_h(0, static_cast<int>(grid_height)),
    _numberOfBoosters(numberOfBoosters),
    _numberOfObstacles(numberOfObstacles),
    _grid_width(grid_width),
    _grid_height(grid_height) {
  // Initialising shared pointers.
  _obstacles = std::shared_ptr<Obstacles>(new Obstacles());
  _boosters = std::shared_ptr<Boosters>(new Boosters());

  // Place the game objects
  PlaceFood();
  PlaceObstacles();
  PlaceBoosters();
}

void Game::Run(
  Controller const &controller,
  Renderer &renderer,
  std::size_t target_frame_duration) {
  Uint32 title_timestamp = SDL_GetTicks();
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;
  int frame_count = 0;
  bool running = true;

  int i = renderer.RenderMenu("Start");
  if (i == 2) {
    running = false;
  }

  while (running) {
    // Get start time
    frame_start = SDL_GetTicks();

    bool showmenu = false;

    // Input, Update, Render - the main game loop.
    controller.HandleInput(running, snake, showmenu);

    // show menu per user's wish
    if (showmenu) {
      showmenu = false;
      i = renderer.RenderMenu("Continue");
      if (i == 0) {
        running = true;
      } else if (i == 1) {
        running = true;
        Reset(snake);
      } else if (i == 2) {
        running = false;
      }
    }
    Update();

    /// Placing the static obstacles, snake and food blocks.
    renderer.Render(snake, food, _obstacles, _boosters);

    // Get end time
    frame_end = SDL_GetTicks();

    // Keep track of how long each loop through the input/update/render cycle
    // takes.
    frame_count++;
    frame_duration = frame_end - frame_start;

    // After every second, update the window title.
    if (frame_end - title_timestamp >= 1000) {
      renderer.UpdateWindowTitle(score, frame_count, snake.speed);
      frame_count = 0;
      title_timestamp = frame_end;
    }

    // If the time for this frame is too small (i.e. frame_duration is
    // smaller than the target ms_per_frame), delay the loop to
    // achieve the correct frame rate.
    if (frame_duration < target_frame_duration) {
      SDL_Delay(target_frame_duration - frame_duration);
    }
  }
}

void Game::PlaceFood() {
  int x, y;
  while (true) {
    x = random_w(engine);
    y = random_h(engine);
    // Check that the location is not occupied by a snake item before placing
    // food.
    if (!snake.SnakeCell(x, y)) {
      food.x = x;
      food.y = y;
      return;
    }
  }
}

void Game::Update() {
  if (!snake.alive)
    return;

  snake.Update();

  int new_x = static_cast<int>(snake.head_x);
  int new_y = static_cast<int>(snake.head_y);

  /// Is the new cell an obstacle.
  if ( _obstacles->Cell(Coordinate(new_x, new_y)) ) {
    snake.alive = false;
    return;
  }

  /// Is the new cell a booster cell.
  if (_boosters->Cell(Coordinate(new_x, new_y))) {
    snake.speed += 0.01;
    _boosters->deleteBoosterCellAt(Coordinate(new_x, new_y));
    return;
  }

  // Check if there's food over here
  if (food.x == new_x && food.y == new_y) {
    score++;
    PlaceFood();
    PlaceBoosters();

    // Grow snake and increase speed.
    snake.GrowBody();
    snake.speed += 0.02;
  }
}

int Game::GetScore() const { return score; }
int Game::GetSize() const { return snake.size; }

void Game::PlaceObstacles() {
  int x, y;
  while (true) {
    /// Return if we meet the size requirements.
    if (_numberOfObstacles == _obstacles->count()) {
      return;
    }

    /// Randomly generate the x and y coordinate.
    x = random_w(engine);
    y = random_h(engine);

    // Check that the location is not occupied by
    // a (snake item + food item) before placing
    // an obstacle.
    auto foodExistsAtThisCell = food.x == x && food.y == y;
    if ( !snake.SnakeCell(x, y) && !foodExistsAtThisCell ) {
      _obstacles->addCoordinate(Coordinate(x, y));
    }
  }
}

void Game::PlaceBoosters() {
  int x, y;
  while (true) {
    /// Return if we meet the size requiremens.
    if (_numberOfBoosters == _boosters->count()) {
      return;
    }

    /// Randomly generate the x and y coordinate.
    x = random_w(engine);
    y = random_h(engine);

    // Check that the location is not occupied by
    // a (snake + food + obstacle) before placing
    // an obstacle.
    auto foodExistsAtThisCell = food.x == x && food.y == y;

    auto boosterExistsAtThisCell =
      _boosters->Cell(Coordinate(x, y));
    if (!snake.SnakeCell(x, y)
      && !foodExistsAtThisCell && !boosterExistsAtThisCell) {
      _boosters->addCoordinate(Coordinate(x, y));
    }
  }
}

void Game::Reset(Snake &snake) {
  // Reset the snake
  snake.Reset();

  // Place the game objects
  PlaceFood();
  PlaceObstacles();
  PlaceBoosters();

  // Reset the game score
  score = 0;
}
