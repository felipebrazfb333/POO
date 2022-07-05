#include "Imovel.h"
using std::string;

Imovel::Imovel(string end, double p) : endereco(end),preco(p) {
}

void Imovel::setEndereco(string end){
  endereco = end;
}

void Imovel::setPreco(double preco){
  if (preco < 0){ this->preco = 0; }
  else { this->preco = preco; }
}

string Imovel::getEndereco() const{
  return endereco;
}

double Imovel::getPreco() const{
  return preco;
}