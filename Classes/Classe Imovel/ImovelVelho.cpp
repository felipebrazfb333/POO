#include "ImovelVelho.h"
using std::string;

ImovelVelho::ImovelVelho(string endereco, double preco, double desconto):Imovel(endereco, preco){
    setDesconto(desconto);
}
    
void ImovelVelho::setDesconto(double desconto){ this->desconto = desconto; }

double ImovelVelho::getDesconto(){  return desconto; }

double ImovelVelho::getPreco(){ return preco - desconto; }