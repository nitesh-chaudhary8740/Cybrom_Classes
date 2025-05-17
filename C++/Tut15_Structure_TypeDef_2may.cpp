#include<iostream>
using namespace std;
struct myStuct
{   private:
    int x = 12;
    char c = 'a';
    float f = 43.45f;
    public:
    void display (){
        cout<<"This is functon"<<this->c<<endl;
    }
};

int main(){
    myStuct st;
    // cout<<st.c<<endl;
    st.display();
    typedef int myCustomInt_dataType;
    myCustomInt_dataType number = 10;
    cout<<number;

}
