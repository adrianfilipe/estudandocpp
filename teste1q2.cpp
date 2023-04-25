#include <iostream>

using namespace std;


int fatorial(int);


int main(){

    int n = 10;
    fatorial(n);
    for( int i = 1; i<=n; i++){
        cout << fatorial(i)<< " ";
    }


    return 0;
}


int fatorial(int x){
    if( x == 0){
        return 1;
    }

    return x*fatorial(x-1);
}


