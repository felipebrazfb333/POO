#include <iostream>
#include <string>
using namespace std;
#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(string nomeFantasia, string razaoSocial, string CNPJ) : Pessoa(nomeFantasia){
  this->razaoSocial = razaoSocial;
  this->CNPJ = CNPJ;
}
  void PessoaJuridica::setCNPJ(string CNPJ){
    this->CNPJ = CNPJ;
  }

  void PessoaJuridica::setRazao(string razao){
    razaoSocial = razao;
  }

  string PessoaJuridica::getCNPJ() const{
    return CNPJ;
  }

  string PessoaJuridica::getRazao() const{
    return razaoSocial;
  }

  string PessoaJuridica::getNomeFantasia() const{
    return nome;
  }