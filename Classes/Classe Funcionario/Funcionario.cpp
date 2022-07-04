#include <iostream>
#include "Funcionario.h"

Funcionario::Funcionario(string nome, string CPF, string matricula, double salarioBase , int cargaHorariaMensal, int qtdeHorasTrabalhadas): PessoaFisica(nome, CPF){
    this->matricula = matricula;
    this->salarioBase = salarioBase;
    this->cargaHorariaMensal = cargaHorariaMensal;
    this->qtdeHorasTrabalhadas = qtdeHorasTrabalhadas;
}

ostream &operator<<(ostream &out, const Funcionario & pessoa){
    out << "Nome: " << pessoa.getNome() << endl;
    out << "CPF: " << pessoa.getCpf() << endl;
    out << "Matrícula: " << pessoa.matricula << endl;
    out << "Salário Base: "  << pessoa.salarioBase << endl;
    out << "CH Mensal: "  << pessoa.cargaHorariaMensal << endl;
    out << "Horas trabalhadas: "  << pessoa.qtdeHorasTrabalhadas <<endl;
    out << endl;
    return out;
}

void Funcionario::setMatricula(string matricula){
    this->matricula = matricula;
}

void Funcionario::setSalarioBase(double salario){
    salarioBase = salario;
}

void Funcionario::setCHMensal(int h){
    cargaHorariaMensal = h;
}

void Funcionario::setHorasTrabalhadas(int ht){
    qtdeHorasTrabalhadas = ht;
}

string Funcionario::getMatricula() const{
    return matricula;
}

double Funcionario::getSalarioBase() const{
    return salarioBase;
}

int Funcionario::getCHMensal() const{
    return cargaHorariaMensal;
}
  
int Funcionario::getHorasTrabalhadas() const{
    return qtdeHorasTrabalhadas;
}
    
double Funcionario::calculaSalarioBruto(){
    return salarioBase * qtdeHorasTrabalhadas/cargaHorariaMensal;
}

void Funcionario::imprimir() const{
    cout << nome << endl;
    cout << getCpf() << endl;
    cout << matricula << endl;
    cout << salarioBase << endl;
    cout << cargaHorariaMensal << endl;
    cout << qtdeHorasTrabalhadas << endl;
  }