// Write a C++ program to distinguish the data memebers from local variables when both are decleared with the same name
#include<iostream>
using namespace std;

class thispointer
{
    private:
    int a,b;//data member
    public:
    void get_input(int a,int b)//local variable
    {
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
};

int main(){
    thispointer obj;
    obj.get_input(10,20);
    obj.display();
    return 0;
}