// write a c++ program to retrive object addresss using this pointer
#include<iostream>
using namespace std;

class thispointer
{
    public:
    void show(){
        cout<<"Adress of object="<<this;
    }
};

int main(){
    thispointer obj;
    obj.show();
    return 0;
}