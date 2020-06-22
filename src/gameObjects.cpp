// Copyright 2020 Frank Puk

#include <memory>
#include "gameObjects.h"
#include "coordinate.h"

GameObjects::GameObjects() {
    // Initialising unique pointer
    _coordinates =
        std::unique_ptr<std::vector<Coordinate>>(new std::vector<Coordinate>);
}

void GameObjects::addCoordinate(const Coordinate &&coordinate) {
    _coordinates->emplace_back(coordinate);
}

bool GameObjects::Cell(const Coordinate &&coordinate) {
    for (const Coordinate &_coordinate : *_coordinates) {
        if (_coordinate == coordinate) {
            return true;
        }
    }
    return false;
}

int GameObjects::count() const {
    return _coordinates->size();
}

const std::vector<Coordinate> &GameObjects::getCoordinates() const {
    // Copy will not be made due to RVO
    return *_coordinates;
}
