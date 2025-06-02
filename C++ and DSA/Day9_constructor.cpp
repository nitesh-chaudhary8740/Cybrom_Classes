#include <iostream>
using namespace std;
class Student{
private:
string name;
string enroll;
char section;
public:
void getData(){
    cout<<"getdata"<<endl;
}
Student(){
    cout<<"default called!"<<endl;
    cout<<"enter name:";
    cin>>this->name;
    cout<<"enter enroll:";
    cin>>this->enroll;
    cout<<"enter section:";
    cin>>this->section;

}
Student(string name, string enroll,char section){
cout<<"parameterized called!"<<endl;
this->name = name;
this->enroll = enroll;
this->section = section;
}
~Student(){
    cout<<"destructor is called"<<endl;
}
};
int main(){
Student d1;
Student p1("nitesh","CS11",'n');
p1.getData();
return 0;
}