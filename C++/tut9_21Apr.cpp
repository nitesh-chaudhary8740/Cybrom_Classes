//pointer is defined data type, which can hold address of a variable
#include <iostream>
using namespace std;
int main(){
    int x = 12;
    int *xptr ;
    cout<<"address of x: "<<&x<<endl;
    xptr =&x;
    cout<<"value of xptr (address of x variable stored in xptr):"<<xptr<<endl;
    cout<<"deferencing the xptr value using *"<<*xptr<<endl;
    cout<<"address of xptr itself *"<<&xptr<<endl;
    int y = 10;
    int *yptr = &y;
    int **multiPtr = &yptr;
    cout<<"value of y:"<<y<<endl;
    cout<<"value of yptr:"<<yptr<<endl;
    cout<<"value of multiPtr:"<<multiPtr<<endl<<endl;
    cout<<"address of y:"<<&y<<endl;
    cout<<"address of yptr:"<<&yptr<<endl;
    cout<<"address of multiPtr:"<<multiPtr<<endl<<endl;
    cout<<"single de-referencing of yptr:"<<*yptr<<endl;
    cout<<"single de-referencing of multiPtr:"<<*multiPtr<<endl<<endl;
    cout<<"multiple de-referencing of multiPtr:"<<**multiPtr<<endl<<endl;

    return 0;
}