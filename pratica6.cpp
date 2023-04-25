#include <iostream> // incluir biblioteca 

using namespace std;


int main(){

    int n;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> n;

    int soma = 0;
    int cont = 1; 

    // while(cont<= n){
    //     soma += cont;
    //     cont ++ ;

    // }

    // do{
    //     soma +=cont;
    //     cont ++;
    // } while( cont <= n);

    for ( int j = 1; j <= n; j+=1){
        soma+=j;
    }




    cout << "Soma dos numeros de 0 ate" << n << "=" << soma << endl;




    return 0;
}
