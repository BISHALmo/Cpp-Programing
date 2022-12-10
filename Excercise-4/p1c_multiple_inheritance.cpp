// wrinte a C++ program multiple inheritance
#include<iostream>
using namespace std;

class A{
    protected:
    char name[10];
    int age;
};
class B{
    protected:
    float h;
    int w;
};

class C:public A,B{
    public:
    char g;
    void get_data(){
        cout<<"Enter the name & age: "<<endl;
        cin>>name>>age;
        cout<<"Enteer the Weight and height: ";
        cin>>w>>h;
        cout<<"Enter the gender: ";
        cin>>g;
    }
    void show(){
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
        cout<<"Weight: "<<w<<endl<<"Height: "<<h<<endl;
        cout<<"Gender: "<<g<<endl;
    }
};

int main(){
    C ob;
    ob.get_data();
    ob.show();
    return 0;
}
