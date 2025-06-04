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
   void setNum(int number){
        this->number = number;
   }
   int getNum(){
    return this->number;
   }
};
class Square: public Number{
    public:
    Square(){
    cout<<"Square default constructor is called";
   }
   ~Square(){
    cout<<"Square destructor is called";
   }
   int getSquare (){
    int number = this->getNum();
    return  number*number;
   }
};
class Cube: public Number{
    public:
    Cube(){
    cout<<"Cube default constructor is called";
   }
   ~Cube(){
    cout<<"Cube destructor is called";
   }
    int getCube (){
    int number = this->getNum();
    return  number*number*number;
   }
   
};
int main(){
    Number n;
    Square s;
    Cube c;
    n.setNum(4);
    cout<<"square: "<<  s.getSquare()<<endl;
    cout<<"square: "<<c.getCube()<<endl;;
}