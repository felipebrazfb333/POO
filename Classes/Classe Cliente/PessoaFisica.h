#ifndef _PESSOAFISICA_H_
#define _PESSOAFISICA_H_
#include <string>
#include "Pessoa.h"
using namespace std;

/*Classe PessoaFisica que herda da Classe Pessoa */
class PessoaFisica:public Pessoa{

public:  //atributos publicos
  PessoaFisica(string nome, string cpf);  //construtor da Classe
  void setCpf(string cpf);  //seta o cpf
  string getCpf() const;  //retorna o cpf

private:  //atributos private
    string cpf;
};

#endif