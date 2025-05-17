#include <iostream>
using namespace std;
int main (){
char start = 'A';
char end = 'R';
int start_index = int(start);//retrieving ascii value of char
int end_index = int(end);//final letter ascii value
int totalChar = (end_index-start_index); //toal characters
char letterArr[totalChar+1]; //all letters array
int total_vowels = 0;
int total_consonants = 0;

    for (int letter = 0 ; letter<=totalChar ; letter++){
        
        letterArr[letter] = char(start_index++);
    }
    cout<<endl;
    for (int i = 0 ; i<=totalChar ; i++){
        cout<<letterArr[i]<<" ";
    }
    cout<<"sorted"<<endl;
    for (int i = totalChar ; i>=0 ; i--){
        cout<<letterArr[i]<<" ";
    }


   return 0;
}