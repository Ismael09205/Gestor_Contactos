# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\InterfazQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\InterfazQT_autogen.dir\\ParseCache.txt"
  "InterfazQT_autogen"
  )
endif()
