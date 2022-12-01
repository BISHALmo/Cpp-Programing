#include<iostream>
using namespace std;

class base{
    public:
    int a;
    void display(){
        cout<<"a= "<<a<<endl;
    }
};
class derived:public base{
    public:
    int b;
    void display(){
        cout<<"b= "<<b;
    }
};
int main(){
    base b1,*ptr;
    derived d1;
    ptr =&d1;
    ptr->a=10;
    // ptr->b=20;
    ptr->display();
    return 0;
}