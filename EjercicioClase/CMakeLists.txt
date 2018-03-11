cmake_minimum_required(VERSION 3.9)
project(EjercicioClase C)

set(CMAKE_C_STANDARD 90)

add_executable(EjercicioClase main.c)
add_executable(EjercicioClase2 EjerciciosTema2.c)
add_executable(EjercicioClase3 TLista.c TLista.h)
add_executable(EjercicioClase4 EjercicioClase4/TListaD.h EjercicioClase4/TListaD.c)