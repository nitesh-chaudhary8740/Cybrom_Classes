#include <iostream>
using namespace std;
int main (){
   
    int n;
    cout<<"enter lenght";
    cin>>n;
   int i=n;
   int k=i;
    while(i>0){ //3
      int j = 1;
      // cout<<i;
      while(j<=2*n-1){//2
         if(j<i){
            cout<<' ';
         }
         else if(j>=i && j<=k){
            cout<<"*";
         }
      
        j++;
      }
      i--;
      k++;
      cout<<endl;
    }
    i = 1;
    k = 2 * n - 1;
    while (i < n) {
        int j = 1;
        while (j <= 2 * n - 1) {
            if (j <=i) {
                cout << ' ';
            } else if (j >= i && j <k) {
                cout << "*";
            }
            j++;
        }
        i++;
        k--;
        cout << endl;
    }
    return 0;
}