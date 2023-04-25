#include <iostream> // incluir biblioteca 
#include <cmath>

using namespace std;

// Lista de Exercicios de aula

int main(){
    //questão 1 

    // int hinicio;
    // int hfinal;

    // cout << "Digite a hora inicial\n";
    // cin >> hinicio;

    // cout << "Digite a Hora Final\n";
    // cin >> hfinal;

    // if(hinicio >=24 || hfinal >=24){
    //     cout << "Horario Invalido"<< endl;
    // }
    // else if(hfinal >= hinicio){
    //     int x = -hinicio + hfinal;
    //     cout << "O jogo durou " << x << " horas "<< endl;
    // } else {
    //     int x = 24 - (hinicio - hfinal);
    //     cout << "O jogo durou " << x << " horas "<< endl;
    // }



    // Questão 2 

    // float a  = 1;
    // float b = -1;
    // float c = 0;
    // float delta = pow(b,2) -4*a*c;


    // if (pow(b,2) - 4*a*c < 0 || a == 0){
    //     cout << "Impossivel calcular";
    // } else if (pow(b,2) - 4*a*c == 0){
    //     float x1 = (-b + sqrt(delta))/2*a ;
    //     cout << "So tem uma raiz que e :" << x1 <<endl;
    // } else{
    //     float x1 = (-b + sqrt(delta))/2*a;
    //     float x2 = (-b - sqrt(delta))/2*a;
    //     cout << "R1 = "<< x1<< endl;
    //     cout << "R2 = " << x2 << endl;
    // }

    // Questão 3 

    float a  = 1;
    float b = 1;
    float c = 1;
    float delta = pow(b,2) -4*a*c;
    float i;

    if (a==0){
        cout<<"Nao e uma equacao de grau 2";
    }
    else if (pow(b,2) - 4*a*c < 0){
        delta = (-1)*delta*i;
        float x1 = (-b + sqrt(delta))/2*a;
        float x2 = (-b - sqrt(delta))/2*a;
        cout << "R1 = "<< x1<< endl;
        cout << "R2 = " << x2 << endl;

    } else if (pow(b,2) - 4*a*c == 0){
        float x1 = (-b + sqrt(delta))/2*a ;
        cout << "So tem uma raiz que e :" << x1 <<endl;
    } else{
        float x1 = (-b + sqrt(delta))/2*a;
        float x2 = (-b - sqrt(delta))/2*a;
        cout << "R1 = "<< x1<< endl;
        cout << "R2 = " << x2 << endl;
    }


    return 0;
}