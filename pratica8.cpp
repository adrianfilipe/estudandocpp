#include <iostream>
#include <cstddef>

using namespace std;


int main(){

    int var1;
    int* point1;

    var1 = 5;
    point1 = &var1;

    cout << "Valor da variavel atraves do seu nome: " <<  var1 << endl;
    cout << "Endereco armazenado no ponteiro: " << point1 << endl;
    cout << "Valor da variavel atravez do ponteiro: " << *point1 << endl;

    int var2;
    //var2 = var1;
    var2 = *point1;

    //var1=30;
    //*point1 = 30;
    //cout << var1;

    var2 = 50;
    //point1 = &var2;
    //cout << *point1 << endl;
    //cout << var1;

    //int* point2;
    //point2 = NULL;
    //cout << *point2;

    int* point3 = new int;
    *point3 = 35;
    //cout << *point3;

    //*point3 = *point1;
    delete point3;
    point3 = point1;
    cout << *point3;



    return 0;
}