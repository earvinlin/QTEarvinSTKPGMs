# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QTEarvinStocksPGMs_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QTEarvinStocksPGMs_autogen.dir/ParseCache.txt"
  "QTEarvinStocksPGMs_autogen"
  )
endif()
