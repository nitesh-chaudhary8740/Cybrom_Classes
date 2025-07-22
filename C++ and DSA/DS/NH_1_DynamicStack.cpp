#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
class Stack{
    public:
    Node *top;
    Stack(){
        top = NULL;
    }
};
int main(){
 
    return 0;
}