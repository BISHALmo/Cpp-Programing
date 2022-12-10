// write a C++ program to determine dynamic memeoy allocation
#include<iostream>
using namespace std;

class A{
    private:
    int *p,*q;
    public:
    void display()
    {
        p=new int;
        q=new int;
        *p=5;
        *q=10;
        cout<<"Sum = "<<(*p+*q);
    }
};
int main(){
    A o1;
    o1.display();
    return 0;
}