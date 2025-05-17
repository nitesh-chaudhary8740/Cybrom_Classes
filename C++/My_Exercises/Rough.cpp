#include<iostream>
using namespace std;
void fullPyramid(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (j < rows - i - 1) {


                
                cout << " ";
            } else {
                cout << "* ";
            }
        
        }
        cout<<endl;
    }
}
void fullPyramidRev(int rows) {
    for (int i = rows-1; i >= 0; i--) {
        for (int j = 0; j < rows; j++) {
            if (j < rows - (i + 1)) {



                cout <<" ";
            } else {
                cout << "* ";
            }
        
        }
        cout<<endl;
    }
}
int main(){

    fullPyramid(7);
    cout<<endl;
    fullPyramidRev(7);
    return 0;
}