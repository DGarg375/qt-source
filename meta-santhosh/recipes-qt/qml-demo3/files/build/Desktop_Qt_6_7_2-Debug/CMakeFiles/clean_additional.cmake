# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appQtDigitalSpeedo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appQtDigitalSpeedo_autogen.dir/ParseCache.txt"
  "appQtDigitalSpeedo_autogen"
  )
endif()
