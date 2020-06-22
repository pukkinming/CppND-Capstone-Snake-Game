// Copyright 2020 Frank Puk

#include <fstream>
#include <string>
#include <sstream>
#include "fileUtils.h"

ConfigParameters FileUtils::getConfigFromFile() {
    std::ifstream filestream(FileUtils::configFilePath);
    /// Setting default value.
    int _numberOfBoosters = 5, _numberOfObstacles = 5;
    int _kFramesPerSecond = 60;
    int _kScreenWidth = 640, _kScreenHeight = 640;
    int _kGridWidth = 32, _kGridHeight = 32;

    if (filestream.is_open()) {
        std::string line;
        while (std::getline(filestream, line)) {
            std::istringstream linestream(line);
            std::string key, value;
            linestream >> key >> value;
            if (key == FileUtils::numberOfBoostersKey) {
                _numberOfBoosters = std::stoi(value);
            } else if (key == FileUtils::numberOfObstaclesKey) {
                _numberOfObstacles = std::stoi(value);
            } else if (key == FileUtils::kFramesPerSecondKey) {
                _kFramesPerSecond = std::stoi(value);
            } else if (key == FileUtils::kScreenWidthKey) {
                _kScreenWidth = std::stoi(value);
            } else if (key == FileUtils::kScreenHeightKey) {
                _kScreenHeight = std::stoi(value);
            } else if (key == FileUtils::kGridWidthKey) {
                _kGridWidth = std::stoi(value);
            } else if (key == FileUtils::kGridHeightKey) {
                _kGridHeight = std::stoi(value);
            }
        }
    }
    return ConfigParameters(
        _numberOfBoosters,
        _numberOfObstacles,
        _kFramesPerSecond,
        _kScreenWidth,
        _kScreenHeight,
        _kGridWidth,
        _kGridHeight);
}
