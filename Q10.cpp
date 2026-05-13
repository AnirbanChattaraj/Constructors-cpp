//BankAccount Class (Constructor Overloading + this Pointer)
#include<iostream>
using namespace std;
class BankAccount{
public:
    string name;
    int balance;
    BankAccount(){
        name = "Unknown";
        balance = 0;
    }
    BankAccount(string name){
        this->name = name;
        balance = 0;
    }
    BankAccount(string name, int balance){
        this->name = name;
        this->balance = balance;
    }
    void display(){
        cout << name << " | " << balance << endl;
    }
};

int main(){

    BankAccount a1;
    BankAccount a2("Anirban");
    BankAccount a3("Rick",50000);

    a1.display();
    a2.display();
    a3.display();
}