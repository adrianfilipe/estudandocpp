#include <iostream> 

using namespace std;


int encontraruns(int);
int josephus1(int);
int josephus2(int, int);


int main(){
    cout << encontraruns(9901) << endl;

    int survivor1 = josephus1(40);
    cout << "O soldado sobrevivente is: " << survivor1 << endl;

    int survivor2 = josephus2(5,2);
    cout << "O soldado sobrevivente is: " << survivor2 << endl;


    return 0;
}


// Questão 1 
// Dado algum inteiro n (1 ≤ 𝑛 ≤ 10000) que não é divisível por 2 ou 5, existe
// algum múltiplo de 𝑛 formado apenas por 1’s (por exemplo, 3 divide 111, 7 divide 111111 e 9901
// divide 111111111111). Sua tarefa é encontrar esse número, retornando apenas a quantidade de
// 1’s. Vide os exemplos de entrada e saída:

int encontraruns(int n){
    int count = 1;
    int remainder = 1 % n;

    
    if (n < 1 || n > 10000 || n % 2 == 0 || n % 5 == 0) {
        cout << "Valor inválido de n." << endl;
        return 1;
    } else {
        while (remainder != 0) {
        remainder = (remainder * 10 + 1) % n;
        count++;
    }
    }

    return count;
}


// questão 2
// O problema de Josefo é conhecido pela lenda de Flávio Josefo, um historiador
// judeu que viveu no século I. No problema temos 40 soldados que, para não se entregarem,
// decidem se matar formando uma roda, onde cada um mata o soldado da esquerda na ordem
// (exemplo, com 5 soldados o 1 mata o 2, o 3 mata o 4, o 5 mata o 1 e o 3 mata o 5, sobrando o
// 3). Sua tarefa é, dado um número de soldados, determinar quem sobreviveu implementando a
// função de maneira recursiva

int josephus1(int n) {

    if (n == 1) {
        return 1;
    }
    return (josephus1(n - 1) + 1) % n + 1;
}




// Questão 3
// : No problema anterior o soldado sempre mata o próximo (k = 2), mas no
// problema original ele mata a cada 3, ou seja, o 1 mata o 3, o 4 mata o 6, o 7 mata o 9, etc.
// Implemente recursivamente a solução desse problema, recebendo o número n de soldados e o
// k do intervalo entre as mortes, retornando o sobrevivente

int josephus2(int n, int k) {

    if (n == 1) {
        return 1;
    }
    return (josephus2(n - 1, k) + k - 1) % n + 1;
}



