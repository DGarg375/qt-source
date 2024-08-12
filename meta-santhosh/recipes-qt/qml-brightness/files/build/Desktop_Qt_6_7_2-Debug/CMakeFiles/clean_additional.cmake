# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appbrightness_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appbrightness_autogen.dir/ParseCache.txt"
  "appbrightness_autogen"
  )
endif()
