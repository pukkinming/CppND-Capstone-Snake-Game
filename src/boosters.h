// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_BOOSTERS_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_BOOSTERS_H_

#include "gameObjects.h"

class Boosters : public GameObjects {
 public:
  void deleteBoosterCellAt(const Coordinate &&coordinate);
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_BOOSTERS_H_
