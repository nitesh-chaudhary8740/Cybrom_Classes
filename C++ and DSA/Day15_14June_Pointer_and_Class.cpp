#include <iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"This is Parent class show method"<<endl;
    }
};
class Derrived1: public Base{
    public:
    void show(){
        cout<<"This is Derived1 class show method"<<endl;
    }
};
class Derrived2: public Base{
    public:
   void show(){
        cout<<"This is Derrived2 class show method"<<endl;
    }
};
int main(){
    Base *basePtr;
    Base baseObjcet;
    basePtr = &baseObjcet;
    basePtr->show();
    Derrived1 derrived1Object;
    basePtr->show();
    basePtr = &derrived1Object;
    basePtr->show();
    Derrived2 derrived2Object;
    basePtr->show();
    basePtr = &derrived2Object;
    basePtr->show();

    return 0;
}