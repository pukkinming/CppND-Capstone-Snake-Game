// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_CONTROLLER_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_CONTROLLER_H_

#include "snake.h"

class Controller {
 public:
  void HandleInput(
      bool &running,
      Snake &snake,
      bool &showmenu) const;

 private:
    void ChangeDirection(
        Snake &snake,
        Snake::Direction input,
        Snake::Direction opposite) const;
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_CONTROLLER_H_
