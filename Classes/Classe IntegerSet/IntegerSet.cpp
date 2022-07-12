#include <iostream>
#include "IntegerSet.h"
using std::cout;
using std::endl;

IntegerSet::IntegerSet(){
    for( int i = 0; i < tam ; i++ ){
        arr[i] = 0;
    }
}

IntegerSet::IntegerSet(int array[], int tam){
    for( int i = 0; i < this->tam ; i++ ){
        arr[i] = 0;
    }
    for( int a = 0; a<tam ; a++ ){
        insertElement(array[a]);
    }
}


void IntegerSet::insertElement(int e){ arr[e] = 1; }

void IntegerSet::deleteElement(int e){ arr[e] = 0; }

void IntegerSet::print() const {
    cout << "{ ";
    for( int i = 0; i< tam; i++ ){
        if (arr[i] == 1) { cout << i << " "; }
    }
    cout << "}" << endl;
}

IntegerSet unionOfSets(const IntegerSet &conj1, const IntegerSet &conj2){
    IntegerSet conj;
    for( int a = 0; a < conj.tam; a++ ){
        if (conj1.arr[a] == 1 || conj2.arr[a] == 1 ){
            conj.insertElement(a);
        }
    }
    return conj;
}

IntegerSet intersectionOfSets(const IntegerSet &conj1, const IntegerSet&conj2){
    IntegerSet conj0;
    for(int a = 0; a< conj0.tam;a++){
        if (conj1.arr[a] == 1 && conj2.arr[a] == 1 ){
            conj0.insertElement(a);}
    }
    return conj0;
}
