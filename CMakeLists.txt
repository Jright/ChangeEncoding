cmake_minimum_required(VERSION 3.12)
project(ChangeEncoding C)

set(CMAKE_C_STANDARD 99)

add_executable(ChangeEncoding main.c changeLEtoBE.c changeLEtoBE.h changeLEtoBEWithCheck.c changeLEtoBEWithCheck.h)