#ifndef INTEGERSET_H
#define INTEGERSET_H
  

class IntegerSet{
friend IntegerSet unionOfSets(const IntegerSet &, const IntegerSet &);  //funcao friend que retorna o conjunto uniao
friend IntegerSet intersectionOfSets(const IntegerSet &, const IntegerSet&);//funcao friend que retorna o conjunto intersecao
public:  //atributos publicos
    IntegerSet();            //construtor default
    IntegerSet(int[],int);   //construtor da classe
    void insertElement(int); //insere um elemento 
    void deleteElement(int); //deleta um elemento
    void print() const ;     //imprime o objeto

private:  //atributos privados
    int tam = 100;
    int arr[100];

};

#endif