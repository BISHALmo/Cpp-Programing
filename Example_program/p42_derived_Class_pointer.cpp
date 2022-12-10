#include<iostream>
using namespace std;

class base{
    public:
    int a;
    void display1(){
        cout<<"a= "<<a<<endl;
    }
};
class derived:public base{
    public:
    int b;
    void display2(){
        cout<<"b= "<<b;
    }
};
int main(){
    derived d1,*ptr;
    ptr =&d1;
    ptr->a=10;
    ptr->b=20;
    ptr->display1();
    ptr->display2();
    return 0;
}