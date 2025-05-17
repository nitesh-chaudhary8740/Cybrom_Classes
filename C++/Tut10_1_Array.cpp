//when we want to represent group of multiple entities of same data type in single entity,
// where insertatin operation is preserved array is use 
// array occupies contigious memory allocations
#include<iostream>
using namespace std;
int main(){
    // int arr = {1};
    int arr[4] = {1,2,3};//this willl return address;
    cout<<arr[0];
    cout<<*arr;
    cout<<"value: arr+1 "<<arr+1<<endl;
    cout<<"de-ref arr+1 "<<*(arr+1)<<endl;
    cout<<"value arr+2 "<<arr+2<<endl;;
    cout<<"value arr+2 "<<*(arr+2)<<endl;;
   
    return 0;
}