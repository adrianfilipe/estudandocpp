#include <iostream>

using namespace std;

void operarArrays(int a[5][5],int b[5][5],char c);


int main(){

    int a[5][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    int b[5][5] ={{1,0,0,0,0},{0,2,0,0,0},{0,0,3,0,0},{0,0,0,4,0},{0,0,0,0,5}};


    operarArrays (a, b, '+');


    for (int i = 0; i < 5; i++) {

            for (int j = 0; j < 5; j++) {
                    cout << a[i][j] << " ";

            }
            cout << endl;
            }



    operarArrays (a, b, '-');



    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";


    }
    cout << endl;
    }



    return 0;
}


void operarArrays(int a[5][5],int b[5][5],char c){
    if(c == '+'){
        for(int i = 0; i< 5; i++){
                for(int j = 0; j < 5 ; j++){
                    a[i][j] = a[i][j] + b[i][j];
                }
            }
    }
    
}
