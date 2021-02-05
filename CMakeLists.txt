cmake_minimum_required(VERSION 3.17)
project(CodingInterviewUniversity C)

set(CMAKE_C_STANDARD 99)

add_executable(CodingInterviewUniversity main.c Structures/Vector.h types.h types.c Structures/Vector.c)