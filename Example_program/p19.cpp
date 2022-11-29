#include<iostream>
using namespace std;

class simpleinterest{
    private:
    int p,t,r;
    double si;
    public:
    simpleinterest(){
        cout<<"Enter p,t,r values: ";
        cin>>p>>t>>r;
        si =(p*t*r)/100;
    }
    void displayinterest(){
        cout<<"si = "<<si;
    }
};

int main(){
    simpleinterest si;
    si.displayinterest();
    return 0;
}