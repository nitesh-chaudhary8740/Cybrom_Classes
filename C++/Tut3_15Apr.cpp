#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<"enter the range:";
    cin>>num;
   
    for (int i = 2; i<num/2;i++){
        if(num<4){
            cout<<num<<" is prime";
                break;
        }
        else if (num%i==0)
        {
        cout<<num<<" is not prime!";
          break;
        }
        else if(i==(num/2-1)){
            cout<<num<<" is  prime!";
        }
        
    }
    return 0;
}