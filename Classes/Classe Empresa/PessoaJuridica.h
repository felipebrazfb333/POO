#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <string>
#include "Pessoa.h"
using namespace std;

class PessoaJuridica : public Pessoa{
public: 
  PessoaJuridica(string, string, string);
  void setCNPJ(string);
  void setRazao(string);
  string getCNPJ() const;
  string getRazao() const;
  string getNomeFantasia() const;
  
private:
  string CNPJ;
  string razaoSocial;
  
};


#endif