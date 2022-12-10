// write a C++ program to add two number using pointer
#include<iostream>
using namespace std;

int main(){
    int a,b,*p,*q;
    cout<<"Enter a,b value:";
    cin>>a>>b;
    p=&a;
    q=&b;
    cout<<"Sum is = "<<(*p+*q);
    return 0;
} 