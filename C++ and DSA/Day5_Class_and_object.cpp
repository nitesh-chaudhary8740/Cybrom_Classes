#include <iostream>
using namespace std;
class Operations
{
public:
    int n1;
    int n2; // by default private access specifier
    int add()
    {
        return this->n1 + this->n2;
    }
};

int main()
{
    Operations obj;
    obj.n1 = 34;
    obj.n2 = 54;
    cout << "addition is: " << obj.add();
    return 0;
}