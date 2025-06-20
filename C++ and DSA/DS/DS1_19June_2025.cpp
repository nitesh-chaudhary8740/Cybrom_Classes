#include <iostream>
using namespace std;
const int l = 4;
int stack[l];
int indexPointer = 0;
void push(int data){
    if (indexPointer==l){
        cout<<"\n Overflow function"<<endl;
    }
    else{
        stack [indexPointer] = data;
        cout<<"pushed: "<<data<<endl;
        indexPointer++;
    }
}
int main(){
    push(10);
    push(1650);
    push(50);
    return 0;
}