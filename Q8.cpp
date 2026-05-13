//Employee Class (this Pointer in Method)
#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    Employee(string name, int salary){
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<name<<" "<<salary<<endl;
    }
};
int main(){
    Employee s1("Anirban",25);
    Employee s2("Rick",24);
    s1.display();
    s2.display();
}