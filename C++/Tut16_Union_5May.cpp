#include<iostream>
using namespace std;
//union is a user defined data type where we can store or grouping the data member and member funtion 
union myun{
    int x=10;
void display(){
    cout<<"x value is "<<x;
}

};
int main(){

myun obj;
myun obj1;
cout<<obj.x<<endl;
obj1.x= 347;
obj.display();

return 0;
}



