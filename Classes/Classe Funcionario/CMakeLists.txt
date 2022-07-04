cmake_minimum_required(VERSION 3.22)
project(Classe_Funcionario)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Classe_Funcionario
        Funcionario.cpp
        Funcionario.h
        main.cpp
        Pessoa.cpp
        Pessoa.h
        PessoaFisica.cpp
        PessoaFisica.h)
