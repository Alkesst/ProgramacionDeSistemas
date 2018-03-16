cmake_minimum_required(VERSION 3.9)

project(Concurrencia C)

set(CMAKE_C_STANDARD 90)

add_executable(Sistemas Sistemas/Random/main.c)
add_executable(Sistemas2 Sistemas/Random/EjerciciosTema2.c)
add_executable(Sistemas3 Sistemas/Random/TLista.c Sistemas/Random/TLista.h)
add_executable(Sistemas4 Sistemas/EjercicioClase4/TListaD.h Sistemas/EjercicioClase4/TListaD.c)
add_executable(Abril17 Sistemas/Abril17/Jugador.c)
add_executable(Practica1 Sistemas/practica1/gestion_memoria.h Sistemas/practica1/practica1.c Sistemas/practica1/gestion_memoria.c)
add_executable(Practica2 Sistemas/practica2/decrypter.c)