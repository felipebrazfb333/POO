#include <iostream>
#include "IntegerSet.h"
using std::cout;
using std::endl;

int main() {
    //demonstracao do funcionamento da classe
    int a[] = {1,2,3};
      
    IntegerSet conj(a,3);
    IntegerSet conj1;
    conj1.insertElement(1);
    conj1.insertElement(2);
    conj1.insertElement(4);
    
    cout << "conjunto: {1,2,3}   e   {1,2,4}" << endl;
    cout << endl;
    cout << "União entre conjuntos: " << endl;
    cout << endl;
    
    IntegerSet conj3 = unionOfSets(conj, conj1);
    conj3.print();
    
    cout << "Interseção entre conjuntos: " << endl;
    
    IntegerSet conj4 = intersectionOfSets(conj, conj1);
    conj4.print();
  
}