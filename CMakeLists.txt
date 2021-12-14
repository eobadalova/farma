cmake_minimum_required(VERSION 3.5)

project(Farma LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Farma main.cpp ianimal.cpp ianimal.h
    dog.cpp dog.h
    cat.cpp cat.h
    farmtemplate.cpp farmtemplate.h)
