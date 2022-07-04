#ifndef EMPRESA_H
#define EMPRESA_H
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"
#include <iostream>
using namespace std;

/* Classe Empresa que herda da classe PessoaJuridica*/
class Empresa: public PessoaJuridica{

public:
    Empresa(string, string, string);  //contrutor da Classe
    void setFuncionario(Funcionario);  //seta um funcionario
    void setClientes(Cliente);  //seta um cliente
    void imprimirFuncionarios() const;  //imprime os funcionarios
    void imprimirClientes() const;  //imprime os clientes
    double CalculaFolhaPagamento() const;  //retorna o valor total da folha de pagamento

private:
    Funcionario funcionarios[5];  //array para armazenar os funcionarios 
    int posF;  //atributo que controla tamanho do array
    Cliente clientes[30];  //array para armazenar os clientes
    int posC;  //atributo que controla tamanho do array
};

#endif