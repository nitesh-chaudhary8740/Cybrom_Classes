#include <iostream>
using namespace std;
int main (){
  string  str1 = "str1";
  string  str2 = "str2";
  cout<<"1"<<str1<<endl;
  cout<<"2"<<str2<<endl;
  string temp = "";
  temp = str1;
  str1 = str2;
  str2 = temp;
  cout<<"afterswaping"<<endl;
  cout<<"1 "<<str1<<endl;
  cout<<"2 "<<str2<<endl;

    return 0;

}