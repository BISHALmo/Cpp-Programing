// write a C++ program to read and display of an array using pointer
#include<iostream>
using namespace std;

int main(){
    float number[3], *ptr;
    int i;
    cout<<"Enter element: ";
    for(i=0;i<3;i++){
        cin>>number[i];
    }
    ptr=number;
    for(i=0;i<3;i++){
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}