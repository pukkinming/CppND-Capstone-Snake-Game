// Copyright 2020 Frank Puk

#include <memory>
#include "boosters.h"
#include "coordinate.h"

void Boosters::deleteBoosterCellAt(const Coordinate &&coordinate) {
    /// Early exit.
    if (_coordinates->size() == 0) {
        return;
    }
    for (auto it = _coordinates->begin(); it != _coordinates->end();) {
        if (*it == coordinate) {
            it = _coordinates->erase(it);
        } else {
            ++it;
        }
    }
}
