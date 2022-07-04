cmake_minimum_required(VERSION 3.22)
project(Classe_Cliente1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Classe_Cliente1
        Cliente.cpp
        Cliente.h
        main.cpp
        Pessoa.cpp
        Pessoa.h
        PessoaFisica.cpp
        PessoaFisica.h)
