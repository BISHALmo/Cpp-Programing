#include<iostream>
using namespace std;

int area(){
    int l,b;
    cout<<"Enter length & width: ";
    cin>>l>>b;
    return l*b;
}
int main(){
    cout<<"Area is: "<<area();
    return 0;
}