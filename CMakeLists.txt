cmake_minimum_required(VERSION 3.7)
project(Grafitos)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Verticito.cpp Verticito.h Grafoo.cpp Grafoo.h Aristita.cpp Aristita.h ListaArista.cpp ListaArista.h ListaVertice.cpp ListaVertice.h)
add_executable(Grafitos ${SOURCE_FILES})