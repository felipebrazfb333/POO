cmake_minimum_required(VERSION 3.22)
project(Classe_Empresa)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Classe_Empresa
        Cliente.cpp
        Cliente.h
        Empresa.cpp
        Empresa.h
        Funcionario.cpp
        Funcionario.h
        main.cpp
        Pessoa.cpp
        Pessoa.h
        PessoaFisica.cpp
        PessoaFisica.h
        PessoaJuridica.cpp
        PessoaJuridica.h)
