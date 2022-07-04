#include <iostream>
#include <string>
using namespace std;
#include "PessoaJuridica.h"

ostream &operator<<(ostream &out, const PessoaJuridica &pessoa){
    out << "Nome: " << pessoa.getNome() << endl;
    out << "CNPJ: " << pessoa.getCNPJ() << endl;
    out << "Razao Social: " << pessoa.getRazao() << endl;
    out << endl;
    return out;
}

PessoaJuridica::PessoaJuridica(string nomeFantasia, string razaoSocial, string CNPJ, int idade = 0) : Pessoa(nomeFantasia,idade){
    this->razaoSocial = razaoSocial;
    this->CNPJ = CNPJ;
}

void PessoaJuridica::setCNPJ(string CNPJ){
    this->CNPJ = CNPJ;
}

void PessoaJuridica::setRazao(string razao){
    razaoSocial = razao;
}

void PessoaJuridica::setNomeFantasia(string nome){
    setNome(nome);
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