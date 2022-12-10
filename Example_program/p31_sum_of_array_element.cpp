// write a C++ program to calculate sum of array of element using pointer
#include<iostream>
using namespace std;

int main(){
    int sum=0,*ptr,n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ptr =a;
    for(int i=0;i<n;i++){
        sum=sum+*(ptr+i);
    }
    cout<<"Sum of the element is: "<<sum;
    return 0;
}