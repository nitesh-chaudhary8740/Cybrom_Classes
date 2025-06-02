#include <iostream>
using namespace std;
// Single Inheritance:
class RGPV
{
public:
    string uname;
    int ucode;
    RGPV()
    {
        cout << "RGPV default constructor is called"<<endl;
    }
    ~RGPV(){
        cout<<"RGPV default deconstructor is called"<<endl;
    }
    void setUniversityData(string uname,int ucode){
            this->uname = uname;
            this->ucode = ucode;
    }
};
class College:public RGPV{
string cname;
int ccode;
public:
  College()
    {
        cout << "College default constructor is called"<<endl;
    }
    ~College(){
        cout<<"College default deconstructor is called"<<endl;
    }
   void setCollegeData(string uname, string cname, int ucode, int ccode){
    this->setUniversityData(uname,ucode);
    this->cname = cname;
    this->ccode  = ccode;
   }
};
int main()
{
    return 0;
}