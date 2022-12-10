// write a C++ program using paramaterized constructor
#include<iostream>
using namespace std;

class simpleinterest{
    private:
    double si;
    public:
    simpleinterest(int p,int t,int r){
        si =(p*t*r)/100;
    }
    void displayinterest(){
        cout<<"si = "<<si;
    }
};

int main(){
    simpleinterest s1(10,20,30);
    s1.displayinterest();
    return 0;
}