# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/brick_game_desktop_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/brick_game_desktop_autogen.dir/ParseCache.txt"
  "CMakeFiles/snake_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/snake_autogen.dir/ParseCache.txt"
  "CMakeFiles/tetris_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/tetris_autogen.dir/ParseCache.txt"
  "brick_game_desktop_autogen"
  "snake_autogen"
  "tetris_autogen"
  )
endif()
