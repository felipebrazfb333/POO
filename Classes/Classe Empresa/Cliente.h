#ifndef CLIENTE_H 
#define CLIENTE_H
#include "PessoaFisica.h" 

/*Classe Cliente que herda da Classe PessoaFisica */
class Cliente: public PessoaFisica{

friend ostream &operator<<(ostream &, const Cliente &);  //funcao friend que sobrecarrega o operador << 

public: //metodos publicos
    Cliente(string = "" , string = "", string = "", string = "");  //construtor da Classe
    void setTelefone(string);  //seta o telefone
    void setEndereco(string);  //seta o endereco
    string getTelefone() const;  //retorna o telefone
    string getEndereco() const;  //retorna o endereço

private: //atributos private
    string telefone;
    string endereco;
};

#endif