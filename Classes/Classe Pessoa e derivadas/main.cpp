#include <iostream>
#include <string>
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
using namespace std;

int main() {
    //testando se as classes estão funcionando corretamente
    Pessoa n1("Adriano ", 40);
    cout << n1;

    PessoaFisica n2("Felipe", 19, "142673894xx");
    cout << n2;

    PessoaJuridica n3("Fernanda", "associação", "xxxxxxxxxxx", 0);
    cout << n3;

    return 0;
}