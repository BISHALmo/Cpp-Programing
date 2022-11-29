#include<iostream>
using namespace std;

class A{
    public:
    int x;
    A()
    {
        x=20;
        cout<<"\n In a Constructor";
    }
};
class B{
    public:
    int y=30;
    A a;
    B(){
        cout<<"\n In B constructor";
    }
void show(){
    cout<<"\n x= "<<a.x<<"\t y= "<<y;
}
};

int main(){
    B b;
    b.show();
    return 0;
}