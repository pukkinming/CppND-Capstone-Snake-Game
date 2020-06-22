// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_COORDINATE_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_COORDINATE_H_

struct Coordinate{
 public:
    Coordinate(const int x, const int y)
        : xCoordinate(x), yCoordinate(y) {}

    // Getters
    int getXCoordinate() const { return xCoordinate; }
    int getYCoordinate() const { return yCoordinate; }

    // Compare operator
    bool operator==(const Coordinate &coordinate) const {
        return (xCoordinate == coordinate.xCoordinate
                && yCoordinate == coordinate.yCoordinate);
    }

 private:
    int xCoordinate;
    int yCoordinate;
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_COORDINATE_H_
