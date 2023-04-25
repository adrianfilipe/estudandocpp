#include <iostream> // incluir biblioteca 

using namespace std;


int main (){

    float nota1, nota2;

    cout << "informe a nota 1:\n";
    cin >>nota1;  // cin >> é para fazer uma entrada, >> do humano pro pc, << do pc pro humano
    cout << "informe a nota2:\n";
    cin >> nota2; 

    float media = (nota1 +nota2)/2;

    // comparações: Igual: ==, diferente: !=, 

    //if (media >= 5){

    //    cout << "Vc passou, merda"<<endl;
    //}

    // if(media>= 5){
    //     cout<< "aprovou\n"; 
    // } else {
    //     cout << "reprovou putinha\n";
    // }

    // return 0;

    if (media < 2.5){
        cout << "Conceito: D\n";
    } else if ( media < 5){
        cout << "Conceito: C\n";
    } else if ( media < 7.5){
        cout << "Conceito: B\n";
    } else{
        cout<< "Conceito: A\n";
    }

    // Operadores Lógicos: E : &&, OU: ||, Não : !

    float freq;
    cout << "Qual a frequencia do aluno"<< endl;
    cin >> freq;

    // if (media >= 5 && freq >= 75){
    //     cout << "Aluno Aprovado" << endl;
    // } 
    // else{
    //     cout<< "Aluno reprovado" << endl;
    // }

    if ( media < 5 || freq < 75){
        cout<<"Reprovou amore\n";
    } else {
        cout << "Aprovou vida\n";
    }

    // operador tenário 
    // (media >=5) ? cout << "aprovado\n" : cout << "reprovado\n";


    return 0;
}