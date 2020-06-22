// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_OBSTACLES_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_OBSTACLES_H_

#include <memory>
#include <vector>
#include "coordinate.h"

class Obstacles {
 public:
    Obstacles();

    void addCoordinate(const Coordinate &&coordinate);
    bool ObstacleCell(const Coordinate &&coordinate);
    int count() const;

    const std::vector<Coordinate> &getCoordinates() const;

 private:
    std::unique_ptr<std::vector<Coordinate>> _coordinates;
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_OBSTACLES_H_
