#include<iostream>
using namespace std;

class A
{
    private:
    int x;
    public:
    A(int p){
        x=p;
    }
    friend void display(A&);
};

void display(A&obj){
    cout<<"x = "<<obj.x;
}

int main(){
    A obj(10);
    display(obj);
    return 0;
}