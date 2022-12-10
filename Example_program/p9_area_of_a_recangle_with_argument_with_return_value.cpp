// write a C++ program for finding area of a rectangle with argument with return vlaue
#include<iostream>
using namespace std;

int area(int l, int b){
    return l*b;
}
int main(){
    int l,b;
    cout<<"Enter the value of l & b: ";
    cin>>l>>b;
    cout<<"Area is: "<<area(l,b);
    return 0;
}