#include <iostream>
using namespace std;


void printArray(int[],int);
void operarArrays(int[],int[],char,int);

int main(){

    int a[] = { 1, 1, 2, 3, 5, 8, 13};
    int b = 7;
    printArray(a, b);


    int c[] = {2, 4, 1, 2, 3};
    int d[] = {1,2,3,4,5};
    operarArrays(c, d,'-', 5);



    return 0;
}


//1
void printArray(int c[], int d){
    cout << "{";
    for(int i = 0; i <= (d-1); i++){
        cout << c[i] << ",";
    }
    cout << "}" << endl;

}

//2
void operarArrays(int a[],int b[], char c, int d){
    cout << "{";
    for(int i = 0 ; i <= (d - 1) ; i++){
        if (c == '+'){cout << a[i] + b[i] << ",";
        } else if( c == '-' && a[i]>=b[i]){ cout << a[i] - b[i] << ',';
        } else if (c == '-'&& a[i] < b[i]){
            cout << b[i] - a[i] << ',';
        }else{ cout << "Operacao inexistente";}
    }
    cout << "}" << endl;
}

//3



