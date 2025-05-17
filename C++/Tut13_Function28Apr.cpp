#include<iostream>
using namespace std;
int x = 10;
void func(int param1,int def=45,int param2){
    cout<<"param1: "<<param1<<endl;
    cout<<"default: "<<def<<endl;
    cout<<"param2: "<<param2<<endl;
}; 
int func1(){};//implicilty returns 1; if there's no return value is passed
int main (){

func(2,,4);//how call with skiping def value
int x =20;
cout<<"local: "<<x<<endl;
cout<<"scope resolution operator: "<<::x<<endl;
    return 0;
}
//write a program to swap two params functions having no return type;
//write a program to find the number of zeros, in 7!
//write a program to convert all the program which can do earlier using all four types of user defined functions;