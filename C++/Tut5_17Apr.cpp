#include <iostream>
using namespace std;
int main (){
    auto count = 7 ;
    for (auto i = 0; i < count; i++)
    {
        for (auto j  = 0; j < count; j++)
        {
            if((i == 0 || i == count-1) || (j == 0 || j == count-1)){
                cout<<" X";
            }
      
            else if(j == (count-1)-i)
            {
            // else if()
                cout<<" R";
            }
            else if(i==j){
                cout<<" C";              
               
            }
            else {
                cout<<" L";
            }
     
        }
        
        cout<<endl;
    }
    
    return 0;
}