#include <stdbool.h>

// Размеры поля Тетриса
#define FIELD_HEIGHT 20
#define FIELD_WIDTH 10

// Определение типов фигур
typedef enum {
  EMPTY = 0,  // Пустая клетка
  O_SHAPE,
  I_SHAPE,
  S_SHAPE,
  Z_SHAPE,
  T_SHAPE,
  L_SHAPE,
  J_SHAPE
} ShapeFigure;

// Координаты блока (x, y)
typedef struct {
  int x;
  int y;
} Coordinate;

// Структура для фигуры Тетриса
typedef struct {
  Coordinate coords[4];  // Координаты 4 блоков фигуры
  ShapeFigure shape;     // Тип фигуры
} Tetromino;

// Структура для клетки поля
typedef struct {
  bool is_fill;       // Заполнена ли клетка
  ShapeFigure shape;  // Тип фигуры, если клетка заполнена
} Cell;

// Структура данных игры
typedef struct {
  int level;       // Текущий уровень
  int score;       // Текущий счёт
  int best_score;  // Лучший результат
  int state;       // Текущее состояние игры (START, MOVING, PAUSE, GAMEOVER)

  long long current_moving_time;  // Текущее время для обновления движения
  long long last_moving_time;     // Последнее время движения фигуры

  Cell field[FIELD_HEIGHT][FIELD_WIDTH];  // Игровое поле 20x10

  Tetromino cur_figure;             // Текущая движущаяся фигура
  Tetromino next_figure;            // Следующая фигура
  Tetromino projection_cur_figure;  // Проекция текущей фигуры на дно поля
} TetrisData;

typedef enum { START, MOVING, PAUSE, GAMEOVER } GameState;

typedef enum {
  DOWN,   // движение вниз
  RIGHT,  // движение вправо
  LEFT    // движение влево
} Direction;
