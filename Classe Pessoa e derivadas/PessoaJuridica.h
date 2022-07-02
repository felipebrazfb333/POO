#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <string>
#include "Pessoa.h"
using namespace std;

/* Classe PessoaJuridica que herda da Classe Pessoa */
class PessoaJuridica : public Pessoa{
    friend ostream &operator<<(ostream &, const PessoaJuridica &); //sobrecarga do operador << para imprimir objetos PessoaJurídica
public: 
    PessoaJuridica(string, string, string, int); //construtor
    void setCNPJ(string);     //seta o CNPJ
    void setRazao(string);    //seta a Razao Social
    void setNomeFantasia(string); //seta o nome Fantasia
    string getCNPJ() const;   //retorna o CNPJ
    string getRazao() const;  //retorna a Razao Social
    string getNomeFantasia() const; //retorna o Nome Fantasia
  
private:  //atributos privados
    string CNPJ;
    string razaoSocial;
  
};

#endif