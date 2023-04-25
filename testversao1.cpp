#include <iostream>
#include <cmath>


using namespace std;

void printPiramide(int);
int is_prime(int);

int main (){

    printPiramide(4);

    // cout << is_prime(7);




    return 0;
}


// questão 1 


void printPiramide(int n) {
    // Imprime a pirâmide
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i - 1; j++) {
            cout << "#";
        }
        cout << endl;
    }

    // //Imprime o losango invertido
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i - 1; j++) {
            cout << "#";
        }
        cout << endl;
    }
}
// questão 2

int is_prime(int n){

    if(n<=1){
        cout << '0'<<endl;
    }

    // Verificando se o número é divisível por qualquer número entre 2 e a raiz quadrada de n (inclusive)
    for(int i = 2; i * i <= n; ++i){
        if (n % i == 0){
            return 0; // Se o número for divisível por i, ele não é primo
        } 
    }

    return 1; // Se o loop terminar sem encontrar um divisor, o número é primo
}





// Questão 3










