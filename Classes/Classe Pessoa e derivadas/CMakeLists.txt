cmake_minimum_required(VERSION 3.22)
project(POO)

set(CMAKE_CXX_STANDARD 14)

include_directories("Classe Pessoa e derivadas")

add_executable(POO
        "Classe Empresa/main.cpp"
        "Classe Empresa/Pessoa.cpp"
        "Classe Empresa/Pessoa.h"
        "Classe Empresa/PessoaFisica.cpp"
        "Classe Empresa/PessoaFisica.h"
        "Classe Empresa/PessoaJuridica.cpp"
        "Classe Empresa/PessoaJuridica.h")


