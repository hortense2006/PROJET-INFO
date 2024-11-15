cmake_minimum_required(VERSION 3.29)
project(PROJET-INFO C)

set(CMAKE_C_STANDARD 23)

add_executable(PROJET-INFO main.c
        "accueil.c"
        "accueil.h"
        "aide.c"
        "aide.h"
        "fonctions.h"
        "login.c"
        "login.h"
        "main.c"
        "main.h"
        "menu.c"
        "menu.h"
        "nouvelle partie.c"
        "nouvelle partie.h"
        "reprendre une partie.c"
        "reprendre une partie.h"
        "signin.c"
        "signin.h"
        "visuel du menu.c"
        "visuel de menu.h")