// strncpy():
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[10]="aditya";
    char str2[10]; 
    strncpy(str2,str1,5); 
    cout<<strncpy(str2,str1,5); 
    return 0;

}
