cmake_minimum_required(VERSION 3.22)

project(linux/gpio LANGUAGES C)

add_executable(MySecond MySecond.c)
target_link_libraries(MySecond linux/gpio)
