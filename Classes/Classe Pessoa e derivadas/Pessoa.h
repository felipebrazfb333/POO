#ifndef _PESSOA_H_
#define _PESSOA_H_
#include <string>
using namespace std;

class Pessoa{
    friend ostream &operator<<(ostream &, const Pessoa &); //sobrecarga do operador << para imprimir objetos Pessoa

public:
    Pessoa(string nome, int idade);  //construtor 
    void setNome(string nome); //seta o nome
    void setIdade(int idade);  //seta a idade
    string getNome() const;  //retorna o nome
    int getIdade() const;  //retorna a idade

protected:  //atributos protegidos
    string nome;
    int idade;
};

#endif