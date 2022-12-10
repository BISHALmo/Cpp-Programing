// wrinte a C++ program hibrid inheritance
#include<iostream>
using namespace std;

class A{
    protected:
    char name[10];
    int age;
};

class B:public A{
    public:
    int w;
    float h;
    void get_data1(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter weight and height:";
        cin>>w>>h;
    }
    void show(){
        cout<<"This class B is inherited from class A\n";
        cout<<"Name: "<<name;
        cout<<"Weight: "<<w<<endl;
        cout<<"Height: "<<h<<endl;    }
};
class C:public A{
    public:
    char gender;
    void get_data2(){
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter gender:";
        cin>>gender;
    }
    void show(){
        cout<<"This class C is inherited from class A\n";
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
    }
};


int main(){
    B ob;
    C ob1;
    ob.get_data1();
    ob1.get_data2();
    ob.show();
    ob1.show();
    return 0;
}