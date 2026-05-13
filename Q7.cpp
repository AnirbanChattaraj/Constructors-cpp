//Car Class (Avoid Variable Confusion)
#include<iostream>
using namespace std;
class Car{
public:
    string brand;
    int price;
    Car(string brand, int price){
        this->brand = brand;
        this->price = price;
    }
    void display(){
        cout << brand << " " << price << endl;
    }
};
int main(){
    Car c1("BMW",5000000);
    Car c2("Audi",3500000);
    c1.display();
    c2.display();
}