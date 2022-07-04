#include <iostream>
#include "Cliente.h"

int main() {
  /*Instanciando os objetos A e B através do construtor da Classe*/
  Cliente A("Felipe Braz da Silva", "10263894467", "Alagoa Nova, sítio Bacuparí", "839816612xx" );
    
  Cliente B("Fernanda Braz da Silva", "10263894489", "Alagoa Nova, sítio Bacuparí", "839816612xx" );

  /*Imprimindo os objetos na tela por meio da sobrecarga do operador <<*/
  cout << A;
  cout << B;

  return 0;
}