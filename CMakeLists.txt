cmake_minimum_required(VERSION 3.29)
project(PROJET-INFO C)

set(CMAKE_C_STANDARD 23)

add_executable(PROJET-INFO
        "options.c"
        "options.h"
        "annuler son tour.c"
        "annuler son tour.h"
        "blocage d'un pion.c"
        "blocage d'un pion.h"
        "déplacement du pion.c"
        "déplacement du pion.h"
        "passer son tour.c"
        "passer son tour.h"
        "positionnement d'une barrièrec"
        "positionnement d'une barrière.h")