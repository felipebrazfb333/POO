#include <iostream>
#include "Funcionario.h"

int main(){

    Funcionario A("Felipe Braz da Silva", "13452353535", "20211123", 2000, 40, 40);

    Funcionario B("Fernanda Braz da Silva", "12849264857", "20211124", 2000, 40, 42);
    
    cout << A << B; 

    cout << "Salario Bruto: " << A.calculaSalarioBruto() << endl;

    cout << "Salario Bruto: " << B.calculaSalarioBruto() << endl;

}