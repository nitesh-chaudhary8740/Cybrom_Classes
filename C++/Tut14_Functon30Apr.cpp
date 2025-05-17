#include<iostream>
using namespace std;
//function overloading
int myfunc(){
    cout<<"this is func without param"<<endl;
}
int myfunc(int x){
    cout<<"this is func with param"<<endl;
}
int main(){
    myfunc(34);

    return 0;
}
