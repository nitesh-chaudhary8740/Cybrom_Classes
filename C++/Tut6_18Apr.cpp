#include<iostream>
using namespace std;
int main (){
    auto count = 5;
    for (auto i = 0; i < count; i++)
    {
        for (auto j=0; j<count; j++)
        {
            if((i<(count/2) && j==0)||(i==(count/2) && j<count)||(j==count-1)){
                cout<<"4";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}