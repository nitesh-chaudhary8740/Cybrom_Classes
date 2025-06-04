#include <iostream>
using namespace std;
class Student{
    protected:
        string name;
        string enroll;
    public:
    Student(){
        cout<<"Student class Default constructor!"<<endl;
    }
    ~Student(){
        cout<<"Student class Default desstructor"<<endl;
    }
    void setData(string name, string enroll){
        this->name = name;
        this->enroll = enroll;
    }
};
class Subject:public Student{
    protected:
        int subject1;
        int subject2;
    public:
    Subject(){
        cout<<"Subject class Default constructor"<<endl;;
    }
  
    ~Subject(){
        cout<<"Subject class Default desstructor"<<endl;
    }
    void setSubjectMarks(int subject1,int subject2){
        this->subject1 = subject1;
        this->subject2 = subject2;
    }
};
class Result:public Subject{
    public:
    int m;
    Result(){
        cout<<"\n M class Default constructor";
    }
    ~Result(){
        cout<<"\n M class Default desstructor";
    }
    void setN(int m){
        this->m = m;
    }
};



int main(){

    return 0;
}