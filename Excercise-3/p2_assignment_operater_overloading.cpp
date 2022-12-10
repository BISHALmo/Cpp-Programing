// write a C++ program to impliment to overloading assignment "=" operater
#include<iostream>
using namespace std;

class Number
{
    private:
    int x;
    public:
    Number(int p){
        x=p;
    }
    Number operator =(Number &n)
    {
        return Number(n.x);
    }
    void display(){
        cout<<"x="<<x;
    }
};
int main(){
    Number n1(10);
    Number n2=n1;
    n2.display();
    return 0;
}