cmake_minimum_required(VERSION 3.18)

project(gpiod LANGUAGES C)

add_executable(MySecond MySecond.c)
target_link_libraries(MySecond gpiod)
