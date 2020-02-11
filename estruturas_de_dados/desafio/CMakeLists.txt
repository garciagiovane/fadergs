# cmake_minimum_required(VERSION <specify CMake version here>)
project(desafio C)

set(CMAKE_C_STANDARD 99)

add_executable(desafio main.c modelo.h incluir_dados.h ordenar_lista.h)