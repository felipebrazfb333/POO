cmake_minimum_required(VERSION 3.22)
project(classe_Imovel)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(classe_Imovel
        Imovel.cpp
        Imovel.h
        ImovelNovo.cpp
        ImovelNovo.h
        ImovelVelho.cpp
        ImovelVelho.h
        main.cpp)
