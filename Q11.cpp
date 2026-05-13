//copy Constructor
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string name, int age){
        this->name=name;
        this->age=age;
    }
    student (student &obj){
        name=obj.name;
        age=obj.age;
    }
    void display(){
        cout<<name<<" |"<<age<<endl;
    }
};
int main(){
    student s1("Anirban",25);
    student s2(s1);
    s1.display();
    s2.display();

}