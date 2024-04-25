cmake_minimum_required(VERSION 3.26.4)
project(circle C)

set(CMAKE_C_STANDARD 23)

add_executable(circle main.c
        drawCircle/drawCircle.h
        drawCircle/drawCircle.c
        pixel/pixel.c
        pixel/pixel.h
        main.c
        pe.h
        drawLine/drawLine.h
        drawLine/drawLine.c
        drawLine/calculatePoints.c
        drawTriangle/drawTriangle.h
        drawTriangle/drawTriangle.c

)
