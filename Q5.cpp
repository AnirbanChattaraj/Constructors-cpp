//Book Class (Slightly Advanced)
#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int price;
    Book(string n,string a,int p){
        title=n;
        author=a;
        price=p;
    }
};
int main(){
    Book b1("Physics","ABC",250);
    Book b2("Chemistry","XYZ",650);
    Book b3("Biology","PQR",350);
    cout<<"Title:"<<b1.title<<"|Author:"<<b1.author<<"|Price:"<<b1.price<<endl;
    cout<<"Title:"<<b2.title<<"|Author:"<<b2.author<<"|Price:"<<b2.price<<endl;
    cout<<"Title:"<<b3.title<<"|Author:"<<b3.author<<"|Price:"<<b3.price;

}