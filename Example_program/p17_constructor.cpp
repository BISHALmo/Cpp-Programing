// write a C++ program using constructor
#include<iostream>
using namespace std;

class book{
    private:
    string name,author;
    int no_of_pages;
    double price;
    private:
    public:
    book(string n1, string a1, int n2, double p1){
        name = n1;
        author = a1;
        no_of_pages = n2;
        price = p1;
        cout<<"name = "<<name<<endl;
        cout<<"author = "<<author<<endl;
        cout<<"no_of_pages = "<<no_of_pages<<endl;
        cout<<"price = "<<price<<endl;
    }
};

int main(){
    book b1("C++ Programing", "Rema threaja",50,200.5);
    return 0;
}