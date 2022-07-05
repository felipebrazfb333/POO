#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
using namespace std;

class Imovel{
public:
    Imovel(string, double);      //construtor da Classe
    void setEndereco(string);    //seta o endereço
    void setPreco(double);       //seta o preço
    string getEndereco() const;  //retorna o endereço
    double getPreco() const;     //retorna o preço

protected:  //atributos protegidos
    string endereco;
    double preco;

};


#endif