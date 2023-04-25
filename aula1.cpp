#include <iostream> // incluir biblioteca 

// using namespace std; não usaremos agora, mas aparentemente engloba tudo 

using std::cout;
using std::endl;


int main(){ 

   cout << "Oie galelinha"<< endl;

//    int iNum = 42;
//    cout << "Valor:" << iNum << endl;
//    cout << "Endereco:" << &iNum << endl; // & na frente mostra o endereço da memoria ram(memória principal) do coisa 

//    iNum = 7;
//    cout << "Valor:" << iNum << endl;
//    cout << "Endereco:" << &iNum << endl; // & na frente mostra o endereço da memoria ram(memória principal) do coisa


// int armazena 4 bytes 
// -2,147,483,648 a 2,147,483,647
   int iNum1 = 42, iNum2 , iNum3 = 7;
   cout << "iNum1:"<< iNum1 << "\n Tamanho iNum1:" << sizeof(iNum1)<< endl;
   cout << "iNum1:"<< iNum2 << "\n Tamanho iNum1:" << sizeof(iNum2)<< endl;
   cout << "iNum1:"<< iNum3 << "\n Tamanho iNum1:" << sizeof(iNum3)<< endl;

// short armazena 2 bytes 
//
   short sNum = 42;
   cout << "iNum1:"<< sNum << "\n Tamanho iNum1:" << sizeof(sNum)<< endl;


// long armazena 8 bytes
//
   long lNum = 42;
   cout << "iNum1:"<< lNum << "\n Tamanho iNum1:" << sizeof(lNum)<< endl;

// long long armazena 8 bytes 
   long long llNum = 42;
   cout << "iNum1:"<< llNum << "\n Tamanho iNum1:" << sizeof(llNum)<< endl;


// Char armazena 1 byte 
//
   char cValue = 'E';
   cout << "cValue:" << cValue << "\n Tamanho cVAlue:" << sizeof(cValue) << endl;
   cout << "(int) cValue" << int(cValue)<< endl;
   









  







    return 0;
}