#include <iostream>
using namespace std;
int main(){
    // string str1;
    // cout<<"enter the str1";
    // cin>>str1;
    // cout<<str1<<endl;
    // string str2;
    // cout<<"enter the str2";
    // getline(cin,str2);
    // cout<<str2;
    string str = "This is string";
    cout<<"size"<<str.size()<<endl;
    cout<<"length"<<str.length()<<endl;
    cout<<"first index"<<str[0]<<endl;
    for (auto i = 0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<"for of"<<endl;
    for(char c: str){
        cout<<c<<" ";
    }
    cout<<endl;
    //string comparision
    string mystr1 = "hello";
    string mystr2 = "hell3";
    cout<<(mystr1==mystr2)<<endl;
    cout<<mystr1.compare(mystr2)<<endl;
    string reverse = "welcome";
    char temp ;
    for(int i = 0; i<=reverse.size()/2; i++){
       
        temp = reverse [i];
       reverse[i]= reverse[(reverse.size()-1)-i];
       reverse[(reverse.size()-1)-i] = temp;
    }

cout<<reverse;

    return 0;
}
//vowel consonant space chars,
//nrm?
//write a program to reverse the string welcome bhopal in such a way welcome can be reverse and hello can be reverse, and bhopal comes first welcome comes last
//print all the asci value from a given string a-z and A-Z