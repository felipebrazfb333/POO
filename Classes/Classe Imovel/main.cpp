
#include <iostream>
#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"
using namespace std;
int main() {
  //criando objetos e imprimindo na tela
    Imovel casa("Rua Joao Pessoa n 125", 200000);
    cout << "Preço: " << casa.getPreco() << " Endereço: " << casa.getEndereco() << endl;
  
    ImovelNovo casa1("Rua Joao Pessoa n 126", 200000, 25000);
    cout << "Preço: " << casa1.getPreco() << " Endereço: " << casa1.getEndereco() << endl;

    ImovelVelho casa2("Rua Joao Pessoa n 127", 200000, 25000);
    cout << "Preço: " << casa2.getPreco() << " Endereço: " << casa2.getEndereco() << endl;

    return 0;
}