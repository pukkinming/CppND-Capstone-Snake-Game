// Copyright 2020 Frank Puk

#ifndef CPPND_CAPSTONE_SNAKE_GAME_SRC_RENDERER_H_
#define CPPND_CAPSTONE_SNAKE_GAME_SRC_RENDERER_H_

#include <vector>
#include <memory>
#include <string>
#include "SDL.h"
#include "SDL_ttf.h"
#include "snake.h"
#include "obstacles.h"
#include "boosters.h"

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  /// Rendering initial static obstacles
  void Render(Snake const snake,
              SDL_Point const &food,
              const std::shared_ptr<Obstacles> obstacles,
              const std::shared_ptr<Boosters> boosters);
  int RenderMenu(std::string str);
  void UpdateWindowTitle(int score, int fps, float speed);

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;
  TTF_Font *sdl_font;

  // Obstacle surface
  SDL_Surface *obstacleSurface;
  // Obstacle Texture
  SDL_Texture *obstacleTexture;
  // Booster surface
  SDL_Surface *boosterSurface;
  // Booster Texture
  SDL_Texture *boosterTexture;

  void placeObstacles(const std::shared_ptr<Obstacles> obstacles) const;
  void placeBoosters(const std::shared_ptr<Boosters> _boosters) const;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif  // CPPND_CAPSTONE_SNAKE_GAME_SRC_RENDERER_H_
