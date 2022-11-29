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
    a1.b = 10;
    a1.h = 20;
    a1.getarea();
}