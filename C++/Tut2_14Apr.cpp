#include <iostream>
using namespace std;
int main() {
    int var1, var2, i = 0, n3; // Initialize i to 0
    cout << "Enter nums: "; // Corrected output string
    cin >> var1;
    cout << "Enter nums: "; // Corrected output string
    cin >> var2;
    n3 = var1 + 1; // Assuming you want to start checking from var1 + 1

    while (i < var2) { // Loop until 'var2' palindromes are found
        int temp = n3, rev = 0;
        while (temp > 0) {
          
            int r = temp % 10;
;
            rev = rev * 10 + r;
           
            temp = temp / 10;
            
        }
      
        if (rev == n3) {
            cout << rev << endl; // Added endl for better output and semicolon
            i++; // Increment i when a palindrome is found
        }
        n3++; // Increment n3 in each iteration to check the next number
    }

    return 0;
}