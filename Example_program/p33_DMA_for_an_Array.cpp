// determine dinamic memory allocation for pointer to an array
#include<iostream>
using namespace std;

int main(){
    int *ptr,i,n;
    cout<<"Enter n value";
    cin>>n;
    ptr=new int(n);
    for(int i = 0;i<n;i++){
        cin>>*(ptr+i);
    }
    for(int i=0;i<n;i++){
        cout<<*(ptr+i);
    }
    delete []ptr;
    return 0;
}