#include<iostream>
using namespace std;

class base{
    int a,b;
    public:
    void get_display_data(){
        cout<<"Enter a,b values";
        cin>>a>>b;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
class derived{
    int c,d;
    public:
    void get_display_data2(){
        cout<<"Enter c,d values";
        cin>>c>>d;
        cout<<"c= "<<c<<endl;
        cout<<"d= "<<d<<endl;
    }
};
int main(){
    base b1,*ptr;
    derived d1,*ptr2;
    ptr = &b1;
    ptr->get_display_data();
    ptr2 = &d1;
    d1.get_display_data2();
    return 0;
}