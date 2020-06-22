// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_GAMEOBJECTS_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_GAMEOBJECTS_H_

#include <memory>
#include <vector>
#include "coordinate.h"

class GameObjects {
 public:
  // Constructor
  GameObjects();

  void addCoordinate(const Coordinate &&coordinate);
  bool Cell(const Coordinate &&coordinate);

  // Getter
  const std::vector<Coordinate> &getCoordinates() const;
  int count() const;

  // Variables
  std::unique_ptr<std::vector<Coordinate>> _coordinates;
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_GAMEOBJECTS_H_
