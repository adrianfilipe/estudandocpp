#include <iostream>

using namespace std;

int problema1(int);


int main(){

    problema1(9000);


    return 0;
}

int problema1(int n){

    if(n <= 2022){
        cout << 2023 - n << " D.C "<< endl;
    } else if (n > 2022){
        cout << n - 2022 << " A.C "<<endl;

    }

    return 0;
}

