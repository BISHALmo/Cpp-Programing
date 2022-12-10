// write a C++ program to defining the member function outside the class
#include<iostream>
using namespace std;

int x=2;
class A
{
    public:
    void display();
};

void A::display(){
    cout<<"C++ Programing";
}
int main(){
    A o1;
    o1.display();
    return 0;
}