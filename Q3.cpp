//Mobile Class (Multiple Objects)
#include<iostream>
using namespace std;
class mobile{
    public:
    string brand;
    int ram;
    int price;
    mobile(string n, int a,int p){
        brand=n;
        ram=a;
        price=p;
    }
};
int main(){
    mobile samsung("Samsung",8,25000);
    mobile apple("Apple",8,65000);
    mobile OnePlus("OnePLus",8,35000);
    cout<<samsung.brand<<"|"<<samsung.price<<"|"<<samsung.ram<<endl;
    cout<<apple.brand<<"|"<<apple.price<<"|"<<apple.ram<<endl;
    cout<<OnePlus.brand<<"|"<<OnePlus.price<<"|"<<OnePlus.ram;
}