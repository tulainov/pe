cmake_minimum_required(VERSION 3.27)
project(circle C)

set(CMAKE_C_STANDARD 23)

add_executable(circle main.c
        circle/circle.c
        circle/circle.h
        pe.h
        pixel/pixel.h
        pixel/pixel.c
        lines/lines.h
        lines/lines.c
        calculatePoints/points.h
        calculatePoints/points.c)
