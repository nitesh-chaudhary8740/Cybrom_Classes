#include<iostream>
using namespace std;
int main(){

cout<<"this is a class of pointer"<<endl;
 int *ptr;
 int **ptr1;
 int x = 10;
 ptr=&x;
 ptr1=&ptr;

 cout<<"value of x = "<<x<<endl;
 cout<<"value of ptr = "<<ptr<<endl;
 cout<<"value of ptr1 = "<<ptr1<<endl;
 cout<<"address of x = "<<&x<<endl;
 cout<<"address of ptr = "<<&ptr<<endl;
 cout<<"address of ptr1 = "<<&ptr1<<endl;
 cout<<"De-ref of ptr = "<<*ptr<<endl;
 cout<<"De-ref of ptr1 1 time = "<<*ptr1<<endl;
 cout<<"De-ref of ptr1 2 time = "<<**ptr1<<endl;
    return 0;

}
//Types of pointer
//1. Void pointer
//2. wild pointer
//3. null pointer
//4. Dangling pointer
//5. wild character pointer