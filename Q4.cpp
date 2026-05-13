//Employee Class (Constructor + Method)
#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    Employee(string n, int a){
        name=n;
        salary=a;
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