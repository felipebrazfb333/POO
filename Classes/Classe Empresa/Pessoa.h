#ifndef _PESSOA_H_
#define _PESSOA_H_
#include <string>
using namespace std;

class Pessoa{
public:
  Pessoa(string nome);      //construtor da Classe
  void setNome(string nome);//seta o nome
  string getNome() const;   //retorna o nome

protected:  //atributos protegidos
  string nome;
};

#endif