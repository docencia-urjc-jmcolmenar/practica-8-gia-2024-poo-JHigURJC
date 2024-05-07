cmake_minimum_required(VERSION 3.27)
project(ClasesAbstractas)

set(CMAKE_CXX_STANDARD 17)

add_executable(ClasesAbstractas main.cpp
        Recurso.cpp
        Recurso.h
        Libro.cpp
        Libro.h
        Pelicula.cpp
        Pelicula.h)
