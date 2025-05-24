//taking nothing return something 
#include <iostream>
using namespace std;
int add(int,int);
int add(int a, int b){ 
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter 1st : ";
    cin>>a;
    cout<<"enter 2nd : ";
    cin>>b;
    int result = add(a,b);
    cout<<"result is : "<<result;
    return 0;
}