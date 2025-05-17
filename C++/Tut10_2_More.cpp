#include <iostream>
using namespace std;
int main() {
    int arr[] = {23, 44, 454, 32, 4, 45}; // 
    int n = sizeof(arr) / sizeof(arr[0]); 
    // sizeof total number of bytes taken by particular  

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}