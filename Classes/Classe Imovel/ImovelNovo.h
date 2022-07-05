#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H
#include "Imovel.h"
#include <string>
using namespace std;

/* Classe ImovelNovo que herda de Imovel */
class ImovelNovo: public Imovel{
public:
    ImovelNovo(string, double, double); //construtor da Classe
    void setAdicional(double);          //seta o adicional no preço
    double getAdicional();              //retorna o valor adicional
    double getPreco();                  //retorna o preço

private:  //atributos private
    double adicional_p;
};
#endif