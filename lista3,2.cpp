#include <iostream>
#include <cstddef>

using namespace std;

void transf( int x, int *i, int *n){
    *i = x/60;
    *n= x%60;
}


int main(){

    int minutes, h, m;

    cin >> minutes;

    transf(minutes, &h, &m);

    cout << "Sao " << h << " horas e " << m << " Minutos " << endl;

    return 0;
}