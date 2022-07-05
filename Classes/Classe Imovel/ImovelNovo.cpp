#include "ImovelNovo.h"
using std::string;

ImovelNovo::ImovelNovo(string endereco, double preco, double adicional): Imovel(endereco, preco){
    setAdicional(adicional);
}

void ImovelNovo::setAdicional(double valor){ adicional_p = valor; }

double ImovelNovo::getPreco(){ return preco + adicional_p; }

double ImovelNovo::getAdicional(){ return adicional_p; }