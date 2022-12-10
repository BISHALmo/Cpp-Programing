//write a C++ program to find area of circle using pointer 
#include<iostream>
using namespace std;

int main(){
    int r, *p;
    float area;
    cout<<"Enter radious:";
    cin>>r;
    p=&r;
    area = 3.14*(*p)*(*p);
    cout<<"Area of circle:"<<area;
    return 0;
}