#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"base"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"derived ";
    }
};
int main(){
    base b1,*ptr;
    derived d1;
    ptr =&b1;
    ptr->display();
    ptr =&d1;
    ptr->display();
    return 0;
}