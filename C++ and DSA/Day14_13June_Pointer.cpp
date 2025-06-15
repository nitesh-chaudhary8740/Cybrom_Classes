#include <iostream>
using namespace std;
//Pointers: Pointers are variables that can hold address of another variables
//pointer size is based on its data type
int main(){
 int x = 123;
 int *xptr = &x;
 cout<<"address of x: "<<&x<<endl;
 cout<<"address of xptr: "<<&xptr<<endl;
 cout<<"value of xptr: "<<xptr<<endl;
 cout<<"Derefercing the value of xptr: "<<*xptr<<endl;
 //Dynamic memory allocation
 int *ptr = new int(5);
 for (int i = 0; i<5;i++){
    cout<<"*ptr value"<<*ptr<<endl;
    cout<<"ptr value"<<ptr<<endl;
    // cout<<ptr;
    // cout<<"Element at: "<<i<<endl;
    // int value;
    // cin>>value;
    // *ptr=value;
   
 }
//  cout<<"Elements are: "<<endl;
//  for (int i = 0;i<5;i++){
//     cout<<(ptr+i)<<" : "<<*(ptr+i)<<endl;
//  }
 delete(ptr);
return 0;
}