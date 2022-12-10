#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    virtual void display(){
        cout<<"a= "<<a<<endl;
    }
};
class derived: public base
{
    public:
    int b;
    virtual void display(){
        cout<<"b= "<<b<<endl;
    }
};

int main(){
    base b1,*ptr2;
    derived *ptr, d1;
    ptr2 = &b1;
    ptr2->a=10;
    ptr2->display();
    ptr = &d1;
    ptr->b=20;
    ptr->display();
    return 0;
}