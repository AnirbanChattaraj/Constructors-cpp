//Car Class (Default Constructor)
#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int price;
    car(){
        brand="Audi";
        price=3500000;
    }
};
int main(){
    car c1;
    cout<<c1.brand<<" "<<c1.price;
}