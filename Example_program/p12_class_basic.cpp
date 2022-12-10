// write  a C++ program to print integer,decimal and character value using class
#include<iostream>
using namespace std;

class ready_display{
    private:
    int a;
    float b;
    char c;
    public:
    void input(){
        cout<<"Enter integer decimal character values: ";
        cin>>a>>b>>c;
    }
    void output(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
        cout<<"c= "<<c<<endl;
    }
};

int main(){
    ready_display o1;
    o1.input();
    o1.output();
    return 0;
}