#include <iostream>
//Title- Local variable, global variable and functions
using namespace std;
void myfunc ();
void closure();
int main () {
    myfunc();
    return 0;
}
void myfunc(){
    closure();
    cout<<"this is user defined function"<<endl;
}
void closure () {
    cout<<"this is closure"<<endl;
}
//user can defined a functions in four ways 
//no return && no args
//no return with args
//return without args
//return with args
//function can be called in 3 ways
//1. call by value
//2. call by address
//3. call by ref
//make a choice base curd operation in array