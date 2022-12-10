// write a C++ program to access global variable
#include<iostream>
using namespace std;
int x=2;
int main(){
    int x=3;
    cout<<"local variable x = "<<x<<endl;
    cout<<"local variable x = "<<::x<<endl;
    return 0;
}