#ifndef _PESSOA_H_
#define _PESSOA_H_
#include <string>
using namespace std;

class Pessoa{
public:
  Pessoa(string nome);
  void setNome(string nome);
  string getNome() const;

protected:
  string nome;
};

#endif