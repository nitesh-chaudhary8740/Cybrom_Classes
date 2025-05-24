#include <iostream>
using namespace std;
void isPerfect()
{
    int number;
    int sum = 0;
    cout << "enter the number";
    cin >> number;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
            cout << i << endl;
        }
    }
    if (sum == number)
    {
        cout << number << " is perfect number";
    }
    else
    {
        cout << number << " is not perfect number";
    }
}
int main()
{
    isPerfect();
}