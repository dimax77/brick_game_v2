#ifndef SNAKE_MODEL_HPP
#define SNAKE_MODEL_HPP

#include <sys/time.h>

#include <cstdlib>
#include <ctime>
#include <vector>

#include "../library_specification.h"
#include "constants.h"

enum SnakeGameState { SNAKE_START, SNAKE_MOVING, SNAKE_PAUSE, SNAKE_GAMEOVER };

namespace s21 {
class SnakeModel {
 public:
  SnakeModel() {
    srand((unsigned)time(NULL));
    resetGame();
  }

  void userInput(UserAction_t action, bool hold);
  GameInfo_t updateCurrentState();

 private:
  int state_;
  int level_;
  int score_;
  int best_score_;
  bool pause_;
  long long current_time_;
  long long last_time_;

  Direction direction_;
  std::vector<Coordinate> snake_;
  Coordinate food_;

  void resetGame();
  void placeFood();
  bool moveSnake();
  long long current_time_millis();
  bool checkCollision();
  void growSnake();
  GameInfo_t convertToGameInfo();
  void startGame();
  void pauseGame();
  void unpauseGame();
  void endGame();
  int** snake_field_;
  int** snake_next_;
};
}  // namespace s21

#endif  // SNAKE_MODEL_HPP
