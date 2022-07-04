#include <iostream>
#include "Empresa.h"

Empresa::Empresa(string nome, string razaoSocial, string CNPJ): PessoaJuridica(nome, razaoSocial, CNPJ){
    posF = 0;
    posC = 0;
}

void Empresa::setFuncionario(Funcionario funcionario){
    funcionarios[posF++] = funcionario;
}

void Empresa::setClientes(Cliente cliente){
    clientes[posC++] = cliente;
}

void Empresa::imprimirFuncionarios() const{
    cout << "Funcionários da Empresa" << endl;
    cout << endl;
    for(int i = 0; i < posF; i++){
        cout << "Nome: " << funcionarios[i].getNome() << endl;
        cout << "Cpf: " << funcionarios[i].getCpf() << endl;
        cout << "Matrícula: " << funcionarios[i].getMatricula() << endl;
        cout << "Salário Base: "  << funcionarios[i].getSalarioBase() << endl;
        cout << "CH Mensal: "  << funcionarios[i].getCHMensal() << endl;
        cout << "Horas trabalhadas: "  << funcionarios[i].getHorasTrabalhadas() << endl; 
        cout << endl;
    }
}

void Empresa::imprimirClientes() const{
    cout << "Clientes da Empresa" << endl;
        cout << endl;
    for( int i = 0; i <= posF; i++ ){
        cout << "Nome: " << clientes[i].getNome() << endl;
        cout << "Cpf: " << clientes[i].getCpf() << endl;
        cout << "Endereço: " << clientes[i].getEndereco() << endl;
        cout << "Telefone: " << clientes[i].getTelefone() << endl;
        cout << endl;
    }
}

double Empresa::CalculaFolhaPagamento() const{
    double valorTotal = 0;
    for( int i = 0; i < posF; i++ ){
        valorTotal += funcionarios[i].calculaSalarioBruto();
    }
    return valorTotal;
}
