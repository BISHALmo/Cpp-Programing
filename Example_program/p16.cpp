#include<iostream>
using namespace std;

class shapes{
    public:
    void print(int b, int h){
        cout<<"Area of tringle = "<<0.5*b*h<<endl; 
    }
    void print(double b, int h){
        cout<<"Area of tringle = "<<0.5*b*h<<endl; 
    }
    void print(int r){
        cout<<"Area of tringle = "<<0.5*r*r<<endl; 
    }
};

int main(){
    shapes s1;
    s1.print(4,5);
    s1.print(2.0,1.0);
    s1.print(7);
    return 0;
}
