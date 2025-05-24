#include <iostream>
using namespace std;
void A();
void B();
void C();
void D();
void A(){
    cout<<"A entered"<<endl;
     B();
    cout<<"A exit"<<endl;
}
void B(){
    cout<<"B entered"<<endl;
     C();
    cout<<"B exit"<<endl;
}
void C(){
    cout<<"C entered"<<endl;
     D();
    cout<<"C exit"<<endl;
}
void D(){
    cout<<"D entered"<<endl;
    cout<<"D exit"<<endl;
    
}
int main(){
    cout<<"main entered"<<endl;
    A();
    cout<<"main exit"<<endl;
    return 0;
}