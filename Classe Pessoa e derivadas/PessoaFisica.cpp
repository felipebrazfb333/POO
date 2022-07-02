#include <iostream>
#include <string>
using namespace std;
#include "PessoaFisica.h"

ostream &operator<<(ostream &out, const PessoaFisica &pessoa){
    out << "Nome: " << pessoa.getNome() << endl;
    out << "Idade: " << pessoa.getIdade() << endl;
    out << "CPF: " << pessoa.getCpf() << endl;
    out << endl;
    return out;
}

PessoaFisica::PessoaFisica(string nome, int idade, string cpf) : Pessoa(nome, idade){
  this->cpf = cpf;
}

void PessoaFisica::setCpf(int cpf){
  this->cpf = cpf;
}

string PessoaFisica::getCpf() const{
  return cpf;
}
