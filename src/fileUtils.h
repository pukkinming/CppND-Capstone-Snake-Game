// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_FILEUTILS_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_FILEUTILS_H_

struct ConfigParameters {
 public:
    // Constructor
    ConfigParameters(
        const int numberOfBoosters,
        const int numberOfObstacles,
        const int kFramesPerSecond,
        const int kScreenWidth,
        const int kScreenHeight,
        const int kGridWidth,
        const int kGridHeight)
        : _numberOfBoosters(numberOfBoosters),
          _numberOfObstacles(numberOfObstacles),
          _kFramesPerSecond(kFramesPerSecond),
          _kScreenWidth(kScreenWidth),
          _kScreenHeight(kScreenHeight),
          _kGridWidth(kGridWidth),
          _kGridHeight(kGridHeight) {}

    // getters
    int getNumberOfBoosters() const { return _numberOfBoosters; }
    int getNumberOfObstacles() const { return _numberOfObstacles; }
    int getKFramesPerSecond() const { return _kFramesPerSecond; }
    int getKScreenWidth() const { return _kScreenWidth; }
    int getKScreenHeight() const { return _kScreenHeight; }
    int getKGridWidth() const { return _kGridWidth; }
    int getKGridHeight() const { return _kGridHeight; }

 private:
    int _numberOfBoosters;
    int _numberOfObstacles;
    int _kFramesPerSecond;
    int _kScreenWidth;
    int _kScreenHeight;
    int _kGridWidth;
    int _kGridHeight;
};  // struct ConfigParameters

namespace FileUtils {
    // Path
    constexpr char configFilePath[] = "../gameConfig/config.txt";

    // File Keys
    constexpr char numberOfBoostersKey[] = "numberOfBoosters";
    constexpr char numberOfObstaclesKey[] = "numberOfObstacles";
    constexpr char kFramesPerSecondKey[] = "kFramesPerSecond";
    constexpr char kScreenWidthKey[] = "kScreenWidth";
    constexpr char kScreenHeightKey[] = "kScreenHeight";
    constexpr char kGridWidthKey[] = "kGridWidth";
    constexpr char kGridHeightKey[] = "kGridHeight";

    // Config Parameters
    ConfigParameters getConfigFromFile();
}  // namespace FileUtils

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_FILEUTILS_H_
