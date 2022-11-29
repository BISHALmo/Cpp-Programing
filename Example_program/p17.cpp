#include<iostream>
using namespace std;

class arith_operation{
    public:
    arith_operation(){
        int a,b,c;
        cout<<"Enter a,b values: ";
        cin>>a>>b;
        c=a+b;
        cout<<"Adition = "<<c<<endl;
    }
    arith_operation( int a,int b){
        int c;
        c=a-b;
        cout<<"substraction = "<<c<<endl;
    }
    arith_operation(int a , float b){
        int c;
        c=a*b;
        cout<<"Multiplication = "<<c<<endl;
    }
};

int main(){
    arith_operation A1;
    arith_operation A2(2,4);
    return 0;
}