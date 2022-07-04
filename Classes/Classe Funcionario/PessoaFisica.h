#ifndef _PESSOAFISICA_H_
#define _PESSOAFISICA_H_
#include <string>
#include "Pessoa.h"
using namespace std;

class PessoaFisica:public Pessoa{
public:
  PessoaFisica(string nome, string cpf);
  void setCpf(string cpf);  
  string getCpf() const;  

private:
  string cpf;
};

#endif