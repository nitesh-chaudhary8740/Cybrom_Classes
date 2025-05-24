#include <iostream>
using namespace std;
// A function call itself called recursion
// Base condition: The condition under which the recursion stops
// Recursive condition: the condtion where the method calls itself
int func(int); // prototype
int fact(int); // prototype
int func(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else
    {
        return num + func(num - 1);
    }
}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
int main()
{
    int sum = func(10);
    int fact_res = fact(5);
    cout << sum<<endl;
    cout << fact_res<<endl;
    return 0;
}