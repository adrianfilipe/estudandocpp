#include <iostream>

using namespace std;

unsigned int factorial(int);
unsigned int somaNatural(int);
unsigned int Fib(int);
// Uma função para calculo do fatorial de um número utilizando o laço for

int main(){

    cout << factorial(7) << endl;
    cout << somaNatural(5) << endl;

    cout << "Fibonacci 0: " << Fib(0) << endl;
    cout << "Fibonacci 1: " << Fib(1) << endl;
    int iResultadoFib = Fib(7);
    cout << "Fibonacci 7: " << Fib(7) << endl;

    return 0;
}

// o que é unsigned ???

// // Forma interativa Fatorial
// unsigned int factorial(int iNum){

//     unsigned int uiResultado = 1;

//     for(int i = 1; i<= iNum ; i++) uiResultado*=i;

//     return uiResultado;
// }


// Forma recursiva de calcular fatorial

unsigned int factorial(int iNum){

    if (iNum == 1) return 1;

    return factorial(iNum-1)*iNum;
}



// Forma Recursiva da soma dos n naturais

unsigned int somaNatural(int iNum){

    if (iNum == 1) return 1;

    return somaNatural(iNum-1) + iNum; 
}

// Forma interativa Fibonig
// unsigned int Fib(int iNum){
//     int iTermo1 = 0;
//     int iTermo2 = 1;
//     unsigned int iResultado = 0;

//     if (iNum == 0) return 0;
//     if (iNum == 1) return 1;

//     for ( int i = 2; i<= iNum ; i++){

//         cout << "Interacao [" << i << "] - iRestultado(antes): " << iResultado << endl;
//         cout << "Interacao [" << i << "] - iTermo1(antes): " << iTermo1 << endl;
//         cout << "Interacao [" << i << "] - iTermo2(antes): " << iTermo2 << endl;

//         iResultado = iTermo1 + iTermo2;
//         iTermo1 = iTermo2;
//         iTermo2 = iResultado;

//         cout << "Interacao [" << i << "] - iRestultado(depois): " << iResultado << endl;
//         cout << "Interacao [" << i << "] - iTermo1(depois): " << iTermo1 << endl;
//         cout << "Interacao [" << i << "] - iTermo2(depois): " << iTermo2 << endl;

//     }

//     return -1;
// }

// Forma recursiva Fibonacci

unsigned int Fib(int iNum){
    if (iNum == 0) return 0;
    if (iNum == 1) return 1;

    return Fib(iNum - 1) + Fib(iNum - 2 );
}
