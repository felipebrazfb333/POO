#ifndef _PESSOAFISICA_H_
#define _PESSOAFISICA_H_
#include <string>
#include "Pessoa.h"
using namespace std;

/* Classe PessoaFisica que herda da Classe Pessoa */
class PessoaFisica : public Pessoa{ 
friend ostream &operator<<(ostream &, const PessoaFisica &); //sobrecarga do operador << para imprimir objetos PessoaFisica

public:
    PessoaFisica(string nome,int idade, string cpf); //construtor
    void setCpf(int cpf);  //seta o cpf
    string getCpf() const;  //retorna o cpf

private: //atributos private
    string cpf;
};

#endif