#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H
#include "Imovel.h"
#include <string>
using namespace std;

/* Classe ImovelVelho que herda de Imovel */
class ImovelVelho: public Imovel{

public:
    ImovelVelho(string, double, double); //construtor da Classe
    void setDesconto(double);            //seta o desconto
    double getDesconto();                //retorna o valor do desconto
    double getPreco();                   //retorna o preço

private: //atributos private
    double desconto;
};

#endif