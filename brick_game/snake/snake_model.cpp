#include "snake_model.hpp"

#include <sys/time.h>

#include <algorithm>
#include <cstdio>

namespace s21 {
void SnakeModel::resetGame() {
  if (snake_field_) {
    for (int i = 0; i < 20; i++) free(snake_field_[i]);
    free(snake_field_);
    snake_field_ = nullptr;
  }

  if (snake_next_) {
    for (int i = 0; i < 4; i++) free(snake_next_[i]);
    free(snake_next_);
    snake_next_ = nullptr;
  }

  state_ = SNAKE_START;
  level_ = 1;
  score_ = 0;
  pause_ = false;
  best_score_ = 0;
  current_time_ = current_time_millis();
  last_time_ = current_time_;

  snake_.clear();
  snake_.push_back(Coordinate(WIDTH / 2, HEIGHT / 2));
  snake_.push_back(Coordinate(WIDTH / 2 - 1, HEIGHT / 2));
  snake_.push_back(Coordinate(WIDTH / 2 - 2, HEIGHT / 2));

  direction_ = Direction::RIGHT;

  placeFood();
  snake_field_ = (int **)calloc(20, sizeof(int *));
  for (int i = 0; i < 20; i++) {
    snake_field_[i] = (int *)calloc(10, sizeof(int));
  }

  snake_next_ = (int **)calloc(4, sizeof(int *));
  for (int i = 0; i < 4; i++) {
    snake_next_[i] = (int *)calloc(4, sizeof(int));
  }
  printf("Snake created");
}

void SnakeModel::placeFood() {
  while (true) {
    int fx = rand() % WIDTH;
    int fy = rand() % HEIGHT;
    bool collision = false;
    for (auto &seg : snake_) {
      if (seg.x == fx && seg.y == fy) {
        collision = true;
        break;
      }
    }
    if (!collision) {
      food_ = Coordinate(fx, fy);
      break;
    }
  }
}

long long SnakeModel::current_time_millis() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return (long long)tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

void SnakeModel::userInput(UserAction_t action, bool hold) {
  printf("userInput: action=%d hold=%d state=%d\n", action, hold, state_);

  if (state_ == SNAKE_START) {
    if (action == Start) {
      startGame();
    } else if (action == Terminate) {
      endGame();
    }
  } else if (state_ == SNAKE_MOVING) {
    switch (action) {
      case Left:
        if (direction_ != Direction::RIGHT) direction_ = Direction::LEFT;
        break;
      case Right:
        if (direction_ != Direction::LEFT) direction_ = Direction::RIGHT;
        break;
      case Up:
        if (direction_ != Direction::DOWN) direction_ = Direction::UP;
        break;
      case Down:
        if (direction_ != Direction::UP) direction_ = Direction::DOWN;
        break;
      case Pause:
        pauseGame();
        break;
      case Terminate:
        endGame();
        break;
      case Action:
        break;
      default:
        break;
    }
  } else if (state_ == SNAKE_PAUSE) {
    if (action == Start) {
      unpauseGame();
    } else if (action == Terminate) {
      endGame();
    }
  } else if (state_ == SNAKE_GAMEOVER) {
    if (action == Start) {
      resetGame();  // Начать заново
    } else if (action == Terminate) {
      endGame();
    }
  }
}

GameInfo_t SnakeModel::updateCurrentState() {
  current_time_ = current_time_millis();
  int interval = GameConstans::kMsIntervals[level_ - 1];

  if (state_ == SNAKE_MOVING && (current_time_ - last_time_) > interval) {
    if (!moveSnake()) {
      state_ = SNAKE_GAMEOVER;
    }
    last_time_ = current_time_;
  }

  return convertToGameInfo();
}

bool SnakeModel::moveSnake() {
  Coordinate head = snake_.front();
  Coordinate new_head = head;
  switch (direction_) {
    case Direction::UP:
      new_head.y -= 1;
      break;
    case Direction::DOWN:
      new_head.y += 1;
      break;
    case Direction::LEFT:
      new_head.x -= 1;
      break;
    case Direction::RIGHT:
      new_head.x += 1;
      break;
  }

  if (new_head.x < 0 || new_head.x >= WIDTH || new_head.y < 0 ||
      new_head.y >= HEIGHT) {
    return false;
  }

  for (auto &seg : snake_) {
    if (seg.x == new_head.x && seg.y == new_head.y) {
      return false;
    }
  }

  snake_.insert(snake_.begin(), new_head);

  if (new_head.x == food_.x && new_head.y == food_.y) {
    score_ += 100;
    placeFood();
  } else {
    snake_.pop_back();
  }

  if (level_ < 10 && score_ >= 600 * level_) {
    level_ = 1 + score_ / 600;
  }

  if (score_ > best_score_) best_score_ = score_;
  return true;
}

GameInfo_t SnakeModel::convertToGameInfo() {
  GameInfo_t info;
  info.field = snake_field_;
  info.next = snake_next_;

  if (state_ == SNAKE_START) {
    info.level = -1;
  } else if (state_ == SNAKE_GAMEOVER) {
    info.level = -2;
  } else {
    info.level = level_;
  }

  if (state_ == SNAKE_PAUSE) {
    info.pause = 1;
  } else {
    info.pause = 0;
  }

  info.score = score_;
  info.high_score = best_score_;
  info.speed = level_;

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 10; j++) {
      info.field[i][j] = 0;
    }
  }

  if (state_ == SNAKE_MOVING || state_ == SNAKE_PAUSE ||
      state_ == SNAKE_GAMEOVER) {
    for (auto &seg : snake_) {
      if (seg.y >= 0 && seg.y < 20 && seg.x >= 0 && seg.x < 10) {
        info.field[seg.y][seg.x] = 1;
      }
    }
    if (food_.y >= 0 && food_.y < 20 && food_.x >= 0 && food_.x < 10) {
      info.field[food_.y][food_.x] = 2;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      info.next[i][j] = 0;
    }
  }

  return info;
}

void SnakeModel::startGame() { state_ = SNAKE_MOVING; }

void SnakeModel::pauseGame() {
  if (state_ == SNAKE_MOVING) state_ = SNAKE_PAUSE;
}

void SnakeModel::unpauseGame() {
  if (state_ == SNAKE_PAUSE) state_ = SNAKE_MOVING;
}

void SnakeModel::endGame() {
  state_ = SNAKE_GAMEOVER;
  if (snake_field_) {
    for (int i = 0; i < 20; i++) {
      free(snake_field_[i]);
    }
    free(snake_field_);
    snake_field_ = nullptr;
  }

  if (snake_next_) {
    for (int i = 0; i < 4; i++) {
      free(snake_next_[i]);
    }
    free(snake_next_);
    snake_next_ = nullptr;
  }
}
}  // namespace s21
