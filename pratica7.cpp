#include <iostream> 

using namespace std;


int pares(int);
int fatorial(int);

int main(){

    // int x;
    // cout << "digite" << endl;
    // cin >> x;
    // pares(x);

    // int y;
    // cout << "Digite" << endl;
    // cin >> y;
    // int k = fatorial(y);
    // cout << "Fatorial de " << y << " is " << k << endl;



    // // // Peça ao usuário o tamanho de um array e depois os elementos desse array.
    // // //  Após isso, print o maior elemento desse array

    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    // Criando o array com o tamanho especificado pelo usuário
    int array[tamanho];

    // Preenchendo o array com os elementos digitados pelo usuário
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i+1 << " do array: ";
        cin >> array[i];
    }

    // Encontrando o maior elemento do array
    int maior = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    // Imprimindo o maior elemento do array
    cout << "O maior elemento do array é: " << maior << endl;
    
    int n;
    n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1;j <= n - i; j++){
            cout << " ";
        }

        for (int j = 1; j <= 2*i; j++ ){
            cout << "#";
        }
        cout << endl;

    }



    return 0;
}

// Escreva um programa que solicite ao usuário um número inteiro e, 
// em seguida, imprima todos os números pares de 0 até esse número.

int pares(int x){

    for(int i = 0; i <=x; i++){
        if ( i % 2 == 0){ cout << i <<',';}
       
    }

    return 0;
}

//


int fatorial(int y){
    if(y == 0){
        return 1;
    }

    return y*fatorial(y-1);
}


//

