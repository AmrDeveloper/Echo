cmake_minimum_required(VERSION 3.14)
project(Echo C)

set(CMAKE_C_STANDARD 99)

add_executable(Echo main.c vm/echo-vm.h include/common.h include/chunk.h chunk.c include/memory.h memory.c include/debug.h debug.c include/value.h value.c echo-vm.c include/compiler.h compiler.c include/scanner.h scanner.c)