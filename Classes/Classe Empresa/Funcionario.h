#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "PessoaFisica.h"

/* Classe Funcionario que herda da classe PessoaFisica */
class Funcionario: public PessoaFisica{
    friend ostream &operator<<(ostream &, const Funcionario &);  //funcao friend que sobrecarrega o operador <<

public:
    Funcionario(string = "" , string = "", string = "", double = 0, int = 0, int = 0);  //construtor da classe
    void setMatricula(string);         //seta a matrícula
    void setSalarioBase(double);       //seta o salario Base
    void setCHMensal(int);             //seta a carga horaria mensal
    void setHorasTrabalhadas(int);     //seta a qtde de horas trabalhadas
    string getMatricula() const;       //retorna a matricula
    double getSalarioBase() const;     //retorna o salario Base
    int getCHMensal() const;           //retorna a carga horaria mensal
    int getHorasTrabalhadas() const;   //retorna a qtde de horas trabalhadas
    double calculaSalarioBruto() const;//retorna o salario bruto
    void imprimir() const;             //imprime dados do funcionario

private:   //atributos private
    string matricula;
    double salarioBase;
    int cargaHorariaMensal;
    int qtdeHorasTrabalhadas;

};

#endif