// write a C++ program for finding area of a rectangle without return vlaue
#include<iostream>
using namespace std;

void area(){
    int l,b;
    cout<<"Enter length & width: ";
    cin>>l>>b;
    cout<<"Area is: "<<(l*b);
}
int main(){
    area();
    return 0;
}