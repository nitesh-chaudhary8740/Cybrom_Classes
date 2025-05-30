#include <iostream>
#include <string>
#include <format>
using namespace std;
class Product{
    string name;
    float costPrice;
    float sellingPrice;
    public:
    void setCostPrice(float costP){
        this->costPrice = costP;
    }
    float getCostPrice(){
        return this->costPrice;
    }
    void setSellingPrice(float sellP){
            this->sellingPrice = sellP;
    }
    float getSellingPrice(){
        return this->sellingPrice;
    }
   string getProfitOrLoss();

};
//defining member function
string Product :: getProfitOrLoss(){
    if(this->sellingPrice - costPrice > 0){
        return std::format("profit: {}",sellingPrice - costPrice);
    }
    else{
        return std::format("loss: {}",costPrice - sellingPrice);
    }
};
int main(){
Product p1;
p1.setCostPrice(9999);
p1.setSellingPrice(129999);
p1.getProfitOrLoss();
return 0;

};