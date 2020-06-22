// Copyright 2020 Frank Puk

#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "fileUtils.h"

int main() {
  auto config = FileUtils::getConfigFromFile();
  int numberOfBoosters = config.getNumberOfBoosters();
  int numberOfObstacles = config.getNumberOfObstacles();
  std::size_t kFramesPerSecond = config.getKFramesPerSecond();
  std::size_t kMsPerFrame = 1000 / kFramesPerSecond;
  std::size_t kScreenWidth = config.getKScreenWidth();
  std::size_t kScreenHeight = config.getKScreenHeight();
  std::size_t kGridWidth = config.getKGridWidth();
  std::size_t kGridHeight = config.getKGridHeight();

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight, numberOfBoosters, numberOfObstacles);
  game.Run(controller, renderer, kMsPerFrame);

  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}
