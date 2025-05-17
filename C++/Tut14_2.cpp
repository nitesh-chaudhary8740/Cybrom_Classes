#include<iostream>
using namespace std;
//write a program to find the sum of first n natural numbers using recursion

int fib (int n){
 if (n==0){
    return 0;
 }
return fib(n-1) + fib(n-2);
}
int main(){
    
cout<<fib(5);
    return 0;
}
