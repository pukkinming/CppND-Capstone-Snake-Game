// Copyright 2020 Frank Puk

#include <string>
#include "renderer.h"
#include <iostream>
#include "SDL.h"
#include "boosters.h"
#include "obstacles.h"

Renderer::Renderer(
  const std::size_t screen_width,
  const std::size_t screen_height,
  const std::size_t grid_width,
  const std::size_t grid_height)\
  : screen_width(screen_width),
    screen_height(screen_height),
    grid_width(grid_width),
    grid_height(grid_height) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cerr << "SDL could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create Window
  sdl_window = SDL_CreateWindow("Snake Game", SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);

  if (nullptr == sdl_window) {
    std::cerr << "Window could not be created.\n";
    std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create renderer
  sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
  if (nullptr == sdl_renderer) {
    std::cerr << "Renderer could not be created.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Initialize font
  if (TTF_Init() < 0) {
    std::cerr << "SDL Font could not initialize.\n";
    std::cerr << "TTF_Error: " << TTF_GetError() << "\n";
  }

  // Load font
  sdl_font =
    TTF_OpenFont("/usr/share/fonts/truetype/freefont/FreeSans.ttf", 50);
  if (nullptr == sdl_font) {
    std::cerr << "SDL Font could not loaded.\n";
    std::cerr << "TTF_Error: " << TTF_GetError() << "\n";
  }

  // Creating Obstacle Texture
  obstacleSurface = SDL_LoadBMP("../assets/unlit-bomb.bmp");
  obstacleTexture = SDL_CreateTextureFromSurface(sdl_renderer, obstacleSurface);

  boosterSurface = SDL_LoadBMP("../assets/rocket.bmp");
  boosterTexture = SDL_CreateTextureFromSurface(sdl_renderer, boosterSurface);
}

Renderer::~Renderer() {
  TTF_CloseFont(sdl_font);
  TTF_Quit();

  SDL_DestroyRenderer(sdl_renderer);
  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
}

void Renderer::Render(
  Snake const snake,
  SDL_Point const &food,
  const std::shared_ptr<Obstacles> obstacles,
  const std::shared_ptr<Boosters> boosters) {
  SDL_Rect block;
  block.w = screen_width / grid_width;
  block.h = screen_height / grid_height;

  // Clear screen
  SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
  SDL_RenderClear(sdl_renderer);

  // Render food
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xCC, 0x00, 0xFF);
  block.x = food.x * block.w;
  block.y = food.y * block.h;
  SDL_RenderFillRect(sdl_renderer, &block);

  // Render snake's body
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  for (SDL_Point const &point : snake.body) {
    block.x = point.x * block.w;
    block.y = point.y * block.h;
    SDL_RenderFillRect(sdl_renderer, &block);
  }

  // Render snake's head
  block.x = static_cast<int>(snake.head_x) * block.w;
  block.y = static_cast<int>(snake.head_y) * block.h;
  if (snake.alive) {
    SDL_SetRenderDrawColor(sdl_renderer, 0x00, 0x7A, 0xCC, 0xFF);
  } else {
    SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0x00, 0x00, 0xFF);
  }
  SDL_RenderFillRect(sdl_renderer, &block);

  // Place obstacles
  placeObstacles(obstacles);

  // Place boosters
  placeBoosters(boosters);

  // Update Screen
  SDL_RenderPresent(sdl_renderer);
}

int Renderer::RenderMenu(std::string str) {
  Uint32 time;
  int x, y;
  const int NUMMENU = 3;
  const char *labels[NUMMENU];
  labels[0] = str.c_str();
  labels[1] = "Restart";
  labels[2] = "Quit";
  SDL_Surface *s_menus[NUMMENU];
  SDL_Texture *t_menus[NUMMENU];
  bool selected[NUMMENU] = {0, 0, 0};
  SDL_Color White = {255, 255, 255, 0};
  SDL_Color Red = {255, 0, 0, 0};
  SDL_Surface *screen = SDL_GetWindowSurface(sdl_window);

  s_menus[0] = TTF_RenderText_Solid(sdl_font, labels[0], White);
  s_menus[1] = TTF_RenderText_Solid(sdl_font, labels[1], White);
  s_menus[2] = TTF_RenderText_Solid(sdl_font, labels[2], White);

  t_menus[0] = SDL_CreateTextureFromSurface(sdl_renderer, s_menus[0]);
  t_menus[1] = SDL_CreateTextureFromSurface(sdl_renderer, s_menus[1]);
  t_menus[2] = SDL_CreateTextureFromSurface(sdl_renderer, s_menus[2]);

  SDL_Rect pos[NUMMENU];
  pos[0].x = screen->w/3 - s_menus[0]->w/3;
  pos[0].y = screen->h/3 - s_menus[0]->h;
  pos[0].w = s_menus[0]->w;
  pos[0].h = s_menus[0]->h;
  pos[1].x = screen->w/3 - s_menus[0]->w/3;
  pos[1].y = screen->h/3 + s_menus[0]->h;
  pos[1].w = s_menus[1]->w;
  pos[1].h = s_menus[1]->h;
  pos[2].x = screen->w/3 - s_menus[0]->w/3;
  pos[2].y = screen->h/3 + 3*s_menus[0]->h;
  pos[2].w = s_menus[2]->w;
  pos[2].h = s_menus[2]->h;

  SDL_Event event;
  while (1) {
    time = SDL_GetTicks();
    while (SDL_PollEvent(&event)) {
      switch (event.type) {
        case SDL_QUIT:
          for (int i = 0; i < NUMMENU; i++) {
            SDL_FreeSurface(s_menus[i]);
            SDL_DestroyTexture(t_menus[i]);
          }
          return 1;

        case SDL_MOUSEMOTION:
          x = event.motion.x;
          y = event.motion.y;
          for (int i = 0; i < NUMMENU; i += 1) {
            if (x >= pos[i].x && x <= pos[i].x+pos[i].w
              && y >= pos[i].y && y <= pos[i].y+pos[i].h) {
              if (!selected[i]) {
                selected[i] = 1;
                SDL_FreeSurface(s_menus[i]);
                SDL_DestroyTexture(t_menus[i]);
                s_menus[i] = TTF_RenderText_Solid(sdl_font, labels[i], Red);
                t_menus[i] =
                   SDL_CreateTextureFromSurface(sdl_renderer, s_menus[i]);
              }
            } else {
              if (selected[i]) {
                selected[i] = 0;
                SDL_FreeSurface(s_menus[i]);
                SDL_DestroyTexture(t_menus[i]);
                s_menus[i] = TTF_RenderText_Solid(sdl_font, labels[i], White);
                t_menus[i] =
                  SDL_CreateTextureFromSurface(sdl_renderer, s_menus[i]);
              }
            }
          }
          break;

        case SDL_MOUSEBUTTONDOWN:
          x = event.button.x;
          y = event.button.y;
          for (int i = 0; i < NUMMENU; i += 1) {
            if (x >= pos[i].x && x <= pos[i].x+pos[i].w
              && y >= pos[i].y && y <= pos[i].y+pos[i].h) {
              for (int i = 0; i < NUMMENU; i++) {
                SDL_FreeSurface(s_menus[i]);
                SDL_DestroyTexture(t_menus[i]);
              }
              return i;
            }
          }
          break;

        case SDL_KEYDOWN:
          if (event.key.keysym.sym == SDLK_ESCAPE) {
            for (int i = 0; i < NUMMENU; i++) {
              SDL_FreeSurface(s_menus[i]);
              SDL_DestroyTexture(t_menus[i]);
            }
            return 0;
          }
      }
    }

    // Clear screen
    SDL_SetRenderDrawColor(sdl_renderer, 0, 0, 0, 0);
    SDL_RenderClear(sdl_renderer);

    // Render menu items
    for (int i = 0; i < NUMMENU; i++) {
      SDL_RenderCopy(sdl_renderer, t_menus[i], NULL, &pos[i]);
    }

    // Update Screen
    SDL_RenderPresent(sdl_renderer);

    if (1000/30 > (SDL_GetTicks()-time))
      SDL_Delay(1000/30 - (SDL_GetTicks()-time));
  }
}

void Renderer::UpdateWindowTitle(int score, int fps, float speed) {
  std::string title{
    "Snake Score: " + std::to_string(score)
    + " FPS: " + std::to_string(fps)
    + " Speed: " + std::to_string(speed)
  };
  SDL_SetWindowTitle(sdl_window, title.c_str());
}

void Renderer::placeObstacles(
  const std::shared_ptr<Obstacles> obstacles) const {
  for (const Coordinate &coordinate : obstacles->getCoordinates()) {
    // Rect which will be hosting the obstacle.
    SDL_Rect obstacleRect;
    obstacleRect.w = screen_width / grid_width;
    obstacleRect.h = screen_height / grid_height;
    obstacleRect.x = coordinate.getXCoordinate() * obstacleRect.w;
    obstacleRect.y = coordinate.getYCoordinate() * obstacleRect.h;

    // Render the obstacles
    SDL_RenderCopy(sdl_renderer, obstacleTexture, NULL, &obstacleRect);
  }
}

void Renderer::placeBoosters(const std::shared_ptr<Boosters> boosters) const {
  for (const Coordinate &coordinate : boosters->getCoordinates()) {
    // Rect which will be hosting the booster
    SDL_Rect obstacleRect;
    obstacleRect.w = screen_width / grid_width;
    obstacleRect.h = screen_height / grid_height;
    obstacleRect.x = coordinate.getXCoordinate() * obstacleRect.w;
    obstacleRect.y = coordinate.getYCoordinate() * obstacleRect.h;

    // Render the obstacles
    SDL_RenderCopy(sdl_renderer, boosterTexture, NULL, &obstacleRect);
  }
}
