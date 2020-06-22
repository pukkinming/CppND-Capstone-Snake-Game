// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_BOOSTERS_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_BOOSTERS_H_

#include <memory>
#include <vector>
#include "coordinate.h"

class Boosters {
 public:
    // Constructor
    Boosters();

    void addCoordinate(const Coordinate &&coordinate);
    bool BoosterCell(const Coordinate &&coordinate) const;
    void deleteBoosterCellAt(const Coordinate &&coordinate);

    // Getter
    const std::vector<Coordinate> &getCoordinates() const;
    int count() const;

 private:
    std::unique_ptr<std::vector<Coordinate>> _coordinates;
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_BOOSTERS_H_
