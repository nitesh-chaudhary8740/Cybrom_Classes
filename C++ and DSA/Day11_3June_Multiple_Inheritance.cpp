#include <iostream>
using namespace std;
class M{
    public:
    int m;
    M(){
        cout<<"\n M class Default constructor";
    }
    M(int x){
        this->m=x;
        cout<<"\n M class Default constructor";
    }
    ~M(){
        cout<<"\n M class Default desstructor";
    }
    void setM(int m){
        this->m = m;
    }
};
class N{
    public:
    int m;
    N(){
        cout<<"\n M class Default constructor";
    }
    N(int x){
        this->m=x;
        cout<<"\n M class Default constructor";
    }
    ~N(){
        cout<<"\n M class Default desstructor";
    }
    void setN(int m){
        this->m = m;
    }
};
class N{
    public:
    int m;
    N(){
        cout<<"\n M class Default constructor";
    }
    N(int x){
        this->m=x;
        cout<<"\n M class Default constructor";
    }
    ~N(){
        cout<<"\n M class Default desstructor";
    }
    void setN(int m){
        this->m = m;
    }
};



int main(){

    return 0;
}