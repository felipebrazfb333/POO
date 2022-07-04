cmake_minimum_required(VERSION 3.22)
project(POO)

set(CMAKE_CXX_STANDARD 14)

include_directories("Classe Pessoa e derivadas")

add_executable(POO
        "Classe Pessoa e derivadas/main.cpp"
        "Classe Pessoa e derivadas/Pessoa.cpp"
        "Classe Pessoa e derivadas/Pessoa.h"
        "Classe Pessoa e derivadas/PessoaFisica.cpp"
        "Classe Pessoa e derivadas/PessoaFisica.h"
        "Classe Pessoa e derivadas/PessoaJuridica.cpp"
        "Classe Pessoa e derivadas/PessoaJuridica.h")
