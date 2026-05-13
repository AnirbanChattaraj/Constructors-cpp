//Student Class (Basic Constructor)
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string n, int a){
        name=n;
        age=a;
    }
};
int main(){
    student s1("Anirban",25);
    student s2("Rick",24);
    cout<<s1.name<<" "<<s1.age<<endl;
    cout<<s2.name<<" "<<s2.age;
}