#include <iostream>
#include<string>
using namespace std;
class Student{
    string name;
    string enroll;
    // char s;
    int p;
    int c;
    int m;
    int h;
    int e;
    public:
    void getInfo(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Enroll: "<<this->enroll<<endl;
        cout<<"total marks: "<<getTotal()<<endl;
        cout<<"Percentage: "<<getPer()<<endl;
    }
    void setInfo(string name,string enroll,int m, int p,int c, int e, int h){
        this->name = name;
        this->enroll  = enroll;
        this->m = m;
        this->p = p;
        this->c = c;
        this->e = e;
        this->h = h;
    }
    int getTotal(){
        return this->p + this->c + this->e + this->m + this->h;
    }
    float getPer(){
        return getTotal()/5.0;
    }
};

int main()
{

    Student S;
    // S.setInfo("nitesh","CS011",34,43,54,54,65);
    S.getInfo();
    return 0;
}