cmake_minimum_required(VERSION 3.29)
project(PROJET-INFO C)

set(CMAKE_C_STANDARD 23)

add_executable(PROJET-INFO
        "annuler son tour.c"
        "annuler son tour.h"
        "deplacement du pion.c"
        "deplacement du pion.h"
        "options.c"
        "options.h"
        "passer son tour.c"
        "passer son tour.h"
        "positionnement d'une barrière.c"
        "positionnement d'une barrière.h")