//write a C++ program to demonstrate pointer
#include<iostream>
using namespace std;

int main(){
    int a,b,*p,*q;
    cout<<"Enteer a,b value";
    cin>>a>>b;
    p=&a;
    q=&b;
    cout<<"a value = "<<a<<endl;
    cout<<"Adress of a value = "<<&a<<endl;
    cout<<"b value = "<<b<<endl;
    cout<<"Adress of b value = "<<&b<<endl;
    cout<<"p value = "<<p<<endl;
    cout<<"Adress of p value = "<<&p<<endl;
    cout<<"Value at adress p is = "<<*p<<endl;
    cout<<"q value = "<<q<<endl;
    cout<<"Adress of q value = "<<&q<<endl;
    cout<<"Value at adress q is = "<<*q<<endl;

    return 0;
}