#include<iostream>
using namespace std;
//base conditon & recursive condition
int printHello(int n){ 
    if(n==0){ //base condition
        return 0;
    }
  return n + printHello(n-1);
}
int main(){
 
cout<<printHello(6);
    return 0;
}
