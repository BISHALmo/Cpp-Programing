// write a C++ program for finding area of a rectangle with argument without return vlaue
#include<iostream>
using namespace std;

void area(int l, int b){
    cout<<"Area is: "<<(l*b);
}
int main(){
    int l,b;
    cout<<"Enter the value of l & b: ";
    cin>>l>>b;
    area(l,b);
    return 0;
}