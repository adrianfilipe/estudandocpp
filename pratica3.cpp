#include <iostream> // incluir biblioteca 
#include <math.h>

using namespace std;

int main() { 

    int a = 5, b = 2 ; 
    int soma = a+b;
    cout << "SOMA:" << soma << endl;
    // cout << "soma:" << a + b << endl;

    int sub = a-b;
    cout << "Subtracao:" << sub << endl;

    int mult = a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocientediv = a/b ;
    cout << "Quociente da Divisao:" << quocientediv << endl;

    int restodiv = a%b;
    cout << "Resto da divisao:" << restodiv << endl;

    float div = (float)a / (float)b ;
    cout << "Divisao:" << div << endl;

    float pot = pow(a,b);
    cout << "Potencia:" << pot << endl;


    // Incremento e Decremento 

    //a = a +1; 
    //a+=1;
    //a++;
    //a+=3; // já esse adiciona 3 

    // decremento 

    //a = a-1;
    // a -=1;
    // a --;
    // a -= 4;

    a*=3;

    cout << "a novo:"<< a << endl;










    return 0;
}
