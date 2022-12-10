// wrinte a C++ program using single inheritance
#include<iostream>
using namespace std;

class A{
    protected:
    char name[10];
    int age;
};
class B:public A{
    public:
    float h;
    int w;
    void get_data(){
        cout<<"Enter the name & age: "<<endl;
        cin>>name>>age;
        cout<<"Enteer the Weight and height";
        cin>>w>>h;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Weight: "<<w<<endl;
        cout<<"Height: "<<h<<endl;
    }
};

int main(){
    B c;
    c.get_data();
    c.show();
    return 0;
}
