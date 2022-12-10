#include<iostream>
using namespace std;
class mart{
    public:
    int a,b,c;
    virtual void price()=0;
};

class home: public mart{
    public:
    void price(){
        cout<<"Enter  the average price of home accesories";
        cin>>a;
        cout<<"The average price  of home accesories is"<<a<<endl;
    }
};
class grossry: public mart{
    public:
    void price(){
        cout<<"Enter  the average price of grossry";
        cin>>a;
        cout<<"The average price  of grossry is"<<a<<endl;
    }
};
class medicine: public mart{
    public:
    void price(){
        cout<<"Enter  the average price of medicine";
        cin>>a;
        cout<<"The average price  of medicine is"<<a<<endl;
    }
};
int main(){
    mart *ptr;
    home h;
    grossry g;
    medicine m;
    ptr = &h;
    ptr->price();
    ptr = &g;
    ptr->price();
    ptr = &m;
    ptr->price();

    return 0;
}