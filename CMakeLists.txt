cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(worder LANGUAGES C)
add_executable(worder "src/main.c")
target_compile_options(worder
  PRIVATE "-std=c90"
  PRIVATE "-pedantic-errors"
  PRIVATE "-Wall"
  PRIVATE "-Wconversion"
  )
