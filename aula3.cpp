#include <iostream> // incluir biblioteca 
#include <cmath>

using namespace std;

int main(){

    // int arryExemplo1[100];
    // int arryExemplo2[4];

    // arryExemplo2[0] = 8 ;
    // arryExemplo2[1] = 64 ;
    // arryExemplo2[2] = 256 ;
    // //arryExemplo2[3] = 512 ;


    // cout << "Valor:\n" << arryExemplo2[0] << endl << "Endereco:\n" << &arryExemplo2[0] << endl;
    // cout << "Valor:\n" << arryExemplo2[1] << endl << "Endereco:\n" << &arryExemplo2[1] << endl;
    // cout << "Valor:\n" << arryExemplo2[2] << endl << "Endereco:\n" << &arryExemplo2[2] << endl;
    // cout << "Valor:\n" << arryExemplo2[3] << endl << "Endereco:\n" << &arryExemplo2[3] << endl;
    // cout << "Valor:\n" << arryExemplo2[4] << endl << "Endereco:\n" << &arryExemplo2[4] << endl;

    // if(&arryExemplo2[0] == arryExemplo2){
    //     cout << "Emap" << endl;
    // }

    int arrx[2][3] =  {7,1,4,71,0,92};
    int arry[2][3] = {(7,1,4), (71,0,92)};

    for (int i= 0;i<2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "(" << i << "," << j << "):" << arrx[i][j] << "\t Endereco:" << &arry[i][j] << endl;
        }
    }




    return 0;
}