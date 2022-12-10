// write a C++ program to add two number using pointers
#include<iostream>
using namespace std;

int main(){
    int a,b,sum;
    cout<<"Enter the value of a&b: ";
    cin>>a>>b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    cout<<"The sum of two number is: "<<sum;
    return 0;
}