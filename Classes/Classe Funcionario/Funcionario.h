#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "PessoaFisica.h"

class Funcionario: public PessoaFisica{
    friend ostream &operator<<(ostream &, const Funcionario &);

public:
    Funcionario(string , string, string, double, int, int);
    void setMatricula(string);
    void setSalarioBase(double);
    void setCHMensal(int);
    void setHorasTrabalhadas(int);
    string getMatricula() const;
    double getSalarioBase() const;
    int getCHMensal() const;
    int getHorasTrabalhadas() const;
    double calculaSalarioBruto();
    void imprimir() const;

private:
    string matricula;
    double salarioBase;
    int cargaHorariaMensal;
    int qtdeHorasTrabalhadas;

};

#endif