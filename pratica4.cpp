#include <iostream> // incluir biblioteca 

using namespace std;

#define pi = 3.14 ; // se torna uma cosntante, não pode ser mudada no main, int etc

#define mama cout<<"me mama vagabundoooo \n" ; // aqui está definindo algo q pode ajudar a não repetir 

// void é uma função do tipo q não tem saída, depois chamamos ela no main
void inscrever(){

    cout << "me mama vagabundo\n";


}

// vamos ver uma função que tem entrada 

int somar(int &x, int &y){ // esse & é pra fixar as variaveis , o q acontecer com o a e b vai acontecer com x e y

    int soma;
    soma = x + y;
    return soma;
}


int main(){

    inscrever();

    int a =5, b=4;
    int s; 
    s = somar(a,b);
    cout << s << endl;

    mama;


    return 0;
}