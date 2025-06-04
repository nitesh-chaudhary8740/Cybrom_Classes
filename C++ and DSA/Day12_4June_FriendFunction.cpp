#include<iostream>
using namespace std;
class Number{
   int number;
   public:  
   Number(){
    cout<<"Number default constructor is called";
   }
   ~Number(){
    cout<<"Number destructor is called";
   }
   friend void show(Number n){//voilation of encapsulation a fucntion is accessing the private props without memeber function
        cout<<"number is this"<<n.number;
   }
};

int main(){
    Number n;
    show(n);
   
  
}