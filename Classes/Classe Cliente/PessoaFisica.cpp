#include <iostream>
#include <string>
using namespace std;
#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome){
  this->cpf = cpf;
}

void PessoaFisica::setCpf(string cpf){ this->cpf = cpf; }

string PessoaFisica::getCpf() const{ return cpf; }
