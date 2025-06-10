#include <iostream>
using namespace std;
class Point{
//static and default argument
    public:
    static int count;
    Point(){
        cout<<"Constructor is called and a new object is created"<<endl;
        count++;
    }
    int getCount(){
        return count;
    }
    void add(int a = 0,int b = 0, int c = 0){//default args
        cout<<"add: "<<a+b+c<<endl;
    }
};
int Point::count = 0;
int main(){
Point p1;
Point p2;
cout<<"count: "<<Point::count<<endl;
cout<<"count: "<<p1.getCount()<<endl;
p1.add();
p1.add(1);
p1.add(1,2);
p1.add(1,2,3);
return 0;
}