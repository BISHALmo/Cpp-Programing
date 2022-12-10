// write a C++ program to illustrate pointer to class
#include<iostream>
using namespace std;

class Value{
    private:
    int a,b;
    public:
    void input(){
        cout<<"Enter a,b,value";
        cin>>a>>b;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    Value v1,v2,v3;
    Value *ptr;
    ptr=&v1;
    ptr->input();
    ptr=&v2;
    ptr->input();
    ptr=&v3;
    ptr->input();
    return 0;
}