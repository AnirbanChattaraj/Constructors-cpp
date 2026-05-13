//Laptop Class (Constructor Overloading)
#include<iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    int price;
    Laptop(){
        brand="Unkown";
        price=00000;
    }
    Laptop(string brand){
        this->brand=brand;
        price=00000;
    }
    Laptop(string brand, int price){
        this->brand=brand;
        this->price=price;
    }
    void display(){
        cout<<brand<<" |"<<price<<endl;
    }
};
int main(){
    Laptop s1;
    Laptop s2("Asus");
    Laptop s3("Apple",70000);
    s1.display();
    s2.display();
    s3.display();

}