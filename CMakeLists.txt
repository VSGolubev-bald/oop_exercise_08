cmake_minimum_required(VERSION 3.15)
project(lab8)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab8 main.cpp pentagon.cpp trapeze.cpp trapeze.h pentagon.cpp pentagon.h rhombus.cpp rhombus.h factory.cpp factory.h processor.cpp processor.h figure.h point.cpp point.h subscriber.cpp subscriber.h)