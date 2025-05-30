#include <iostream>
using namespace std;
int fib(int num){
    if(num<=1){
        return num;
    }
    else{
        return fib(num-2)+fib(num-1);
    }
}
int main()
{
    int num;
    int prev = 0;
    int next = 1;
    cout << "enter the number" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << prev << " ,";
        int sum = prev + next;
        prev = next;
        next = sum;
    }
    cout<<endl;
    for (int i = 0; i < num; i++)
    {
        cout << fib(i) << " ,";
   
    }

    return 0;
}