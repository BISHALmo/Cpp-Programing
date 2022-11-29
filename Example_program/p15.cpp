#include<iostream>
using namespace std;

class areatringle{
    public:
    int b,h;
    float area;
    void getarea(){
        area = 0.5*b*h;
        cout<<"area = "<<area;
    }
};
int main(){
    areatringle a1;
    cout<<"Enter the base and hight: ";
    cin>>a1.b>>a1.h;
    a1.getarea();
}