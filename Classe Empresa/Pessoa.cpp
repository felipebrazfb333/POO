#include <iostream>
#include <string>
using namespace std;
#include "Pessoa.h"

Pessoa::Pessoa(string nome){
  this->nome = nome;
}

void Pessoa::setNome(string nome){
  this->nome = nome;
}

string Pessoa::getNome() const{
  return nome;
}
