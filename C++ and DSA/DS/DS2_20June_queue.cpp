#include <iostream>
using namespace std;
class Node{
    private:
    int value;
    int *nextElement;
    public:
    Node (int data){
    this->value = data; 
    this->nextElement =NULL; 
    }

    void assignNext(Node *currentElement, int *next_element_pointer){
        // currentElement->nextElement = *next_element_pointer;

    }

};
int main()
{    
Node *first = new Node(10);
Node *second = new Node(20);
// first->assignNext(*first, *second)

return 0;
}
