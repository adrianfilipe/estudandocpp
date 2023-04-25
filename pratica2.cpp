#include <iostream> // incluir biblioteca 

using namespace std;

int main(){

    int inteiro;
    inteiro = 5.2; 
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real2;
    real2 = 5.2e39;
    cout << real2 << endl;

    bool boleano;
    boleano = true;
    cout << boleano << endl;

    char letra; // char é aspas simples e string é aspas dupla
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;



    int idade; 
    cout << "qual a sua idade piranha ?" << endl;
    cin >> idade;
    cout << idade << endl;

    return 0; 
}