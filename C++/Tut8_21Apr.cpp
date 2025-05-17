#include <iostream>
#include <string>
using namespace std;
int main (){
  string   str1 = "str1";
  string   str2 = "strring2";
  cout<<"appended; "<<str1.append(" "+str2)<<endl;
  str1.clear();
  cout<<"clearedstr:"<<str1<<endl;
  cout<<str2.at(1)<<endl;
  cout<<str2.front()<<endl;//0 th index
  cout<<str2.back()<<endl;//last index
  cout<<str2.substr(1,2)<<endl;//substring
  cout<<str2.insert(2,"2")<<endl;//insert()
  cout<<str2.erase(2,1)<<endl;//erase

  str2.pop_back(); // Remove the last character
  cout << "After pop_back(): " << str2 << endl;

  str2.push_back('L'); // Append 'L'
  cout << "After push_back('L'): " << str2 << endl;

  str2.resize(2); // Resize to length 2
  cout << "After resize(2): " << str2 << endl;

  return 0;
}