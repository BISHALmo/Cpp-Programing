// Write a C++ program to perform arithmetic operation
#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,g;
    cout<<"Enter a,b values:";
    cin>>a>>b;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    cout<<"sum="<<c<<endl;
    cout<<"Difference="<<d<<endl;
    cout<<"prduct="<<e<<endl;
    cout<<"Quotient="<<f<<endl;
    cout<<"Reminder="<<g<<endl;
    return 0;
}