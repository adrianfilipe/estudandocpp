#include <iostream> // incluir biblioteca 

// using namespace std; não usaremos agora, mas aparentemente engloba tudo 

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

    string strValue1 = "eu adoro";
    string strvalue2 = "minha cama";

    cout << "StrValue1:"<< strValue1 << "\n Tamanho strvalue1:" << sizeof(strValue1)<< endl;
    cout << "StrValue2:"<< strvalue2 << "\n Tamanho strvalue2:" << sizeof(strvalue2)<< endl;


    unsigned short usNum = 125;
    cout << "usNum:" << usNum << "\nTamanho:" << sizeof(usNum)<<endl;

    unsigned char usValor = 125;
    cout << "usValor:" << usValor << "\nTamanho:" << sizeof(usValor)<<endl;


    char ucValor = 125;
    cout << "ucValor:" << int(ucValor) << endl;

    ucValor = 1;
    cout << "ucValor:" << int(ucValor) << endl;

    ucValor = 1;
    cout << "ucValor:" << int(ucValor) << endl;

    ucValor = 1;
    cout << "ucValor:" << int(ucValor) << endl;



    string nome;
    int idade = 0;
    float altura = 0.0;
    float peso = 0.0;
    float IMC = 0.0;

    cin >> nome >> idade >> peso >> altura;

    cout << "Nome:" << nome << endl;
    cout << "idade:" << idade << endl;
    cout << "peso" << peso << endl;
    

    IMC = peso/(altura*altura);

    if(IMC<= 18.5){
        cout << "abaixo do peso normal" << endl;
    }
    else if (IMC <= 24,9){
        cout  << "Peso Normal" << endl;
    }
    else if (IMC <=29,9){
        cout  << "Excesso de peso" << endl;
    }
    else if ( IMC <= 34,9){
        cout  << "Obesidade nv 1" << endl;
    }
    else if( IMC <= 39,9){
        cout  << " Obesidade nv 2" << endl;
    }
    else{
        cout  << "obesidade nv 3" << endl;
    }






    return 0 ;
}