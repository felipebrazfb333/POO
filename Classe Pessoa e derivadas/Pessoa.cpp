#include <iostream>
#include <string>
using namespace std;
#include "Pessoa.h"

ostream &operator<<(ostream &out, const Pessoa &pessoa){
    out << "Nome: " << pessoa.getNome() << endl;
    out << "Idade: " << pessoa.getIdade() << endl;
    out << endl;
    return out;
}

Pessoa::Pessoa(string nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

string Pessoa::getNome() const{
    return nome;
}

int Pessoa::getIdade() const{
    return idade;
}
