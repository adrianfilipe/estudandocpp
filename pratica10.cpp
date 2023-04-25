#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


int main (){

    Node* head = new Node{1, nullptr};
    head -> next = new Node{2,nullptr};



    return 0; 
}