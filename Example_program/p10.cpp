#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,squareroot,cuberoot,power,x,y,m;
    cout<<"Enter the number: ";
    cin>>n;
    squareroot =sqrt(n);
    cout<<"The square root of: "<<n<<"is: "<<squareroot<<endl;
    cuberoot = cbrt(n);
    cout<<"The cube root of: "<<n<<"is: "<<cuberoot<<endl;
    cout<<"Enter the number: ";
    cin>>m;
    power = pow(n,m);
    cout<<"The power of: "<<n<<"is"<<power<<endl;
    cout<<"Enter the number: ";
    cin>>x;
    x=sin(x);
    cout<<"The trigonmetry of sin0: "<<x<<endl;
    cout<<"The trigonmetry of cos0: ";
    y=cos(x);
    cout<<y;
    return 0;
}