#include <iostream>
using namespace std;
//A constructro is a special member function in class it is use to initialize a user defined data type

/*
Rules:
1. Constructor name and class name must be the same.
2. Constructor does not return any value even void
3. A constructor is automatically called when object is created
4. If we not write any constructor in our class then compiler add default constructor
5. There are 3 types of constructor avaible in c++
    a) Default Constructor b)Non Parameter constructor/Parameterized constructor c) copy constructor
6. constructor can be also overloading
7. constructor cannot be virtual(means it cannot be overwrite) and constructor cannot be static
*/
class Point{
int x;
int y;
public: 
    Point(){
        this->x = 10;//this(when cotians pointer of current object)
        this->y = 20;
        cout<<"default constructor: "<<this->x + this->y;
    }
    void showData(){
        cout<<this->x <<" + "<<this->y<<" = "<<this->x+this->y;
    }
};
int main(){
Point p1;

}