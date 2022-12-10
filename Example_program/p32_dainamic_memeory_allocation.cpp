// write a C++ program to determine dynamic memeory allocation
#include<iostream>
using namespace std;

int main(){
    int *ptr1;
    float *ptr2;
    char *ptr3;
    ptr1 = new int;
    ptr2 = new float;
    *ptr1=5;
    *ptr2=2.5;
    cout<<"Integer value = "<<*ptr1;
    cout<<"Decimal value = "<<*ptr2;
    delete ptr1;
    delete ptr2;
    return 0;
}