#include <iostream>

using namespace std;


int main(){

    //Variavel : referencia direta pra um valor 
    // Ponteiro: referencia indireta parra um valor 

    // //int* ptrInt = 0;
    // // int* ptrInt = NULL;
    // int* ptrInt = nullptr;
    // cout << "PTR:" << ptrInt << endl;
    // cout << "Endereço da PTR:" << &ptrInt << endl;

    // int iNumMagico = 42;
    // cout << "Endereço da iNumMagico:" << &iNumMagico << endl;

    // ptrInt = &iNumMagico;
    // cout << "PTR:" << ptrInt << endl;
    // cout << "Valor:" << *ptrInt<< endl;

    int iNum1 = 42;
    int iNum2 = 666;

    int* const ptrNum1 = &iNum1;
    *ptrNum1 = 7;
    // ptrNum1 = &iNum2;

    const int* ptrNum2 = &iNum2;
    ptrNum2 = &iNum2;

    cout << "PTR:" << ptrNum2 << endl;
    cout << "Valor:" << *ptrNum2<< endl;









    return 0;
}