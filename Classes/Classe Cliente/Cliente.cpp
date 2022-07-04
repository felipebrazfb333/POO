#include <iostream>
#include "Cliente.h"

Cliente::Cliente(string nome, string CPF, string endereco, string telefone): PessoaFisica(nome, CPF){
    this->endereco = endereco;
    this->telefone = telefone;
  }

ostream &operator<<(ostream &out, const Cliente & pessoa){
    out << "Nome: " << pessoa.nome << endl;
    out << "CPF: " << pessoa.getCpf() << endl;
    out << "Endereço: " << pessoa.endereco << endl;
    out << "Telefone: " << pessoa.telefone << endl;
    out << endl;
    return out;
}

void Cliente::setTelefone(string numero){ telefone = numero; }

void Cliente::setEndereco(string end){ endereco = end; }

string Cliente::getTelefone() const {return telefone; }

string Cliente::getEndereco() const { return endereco; }