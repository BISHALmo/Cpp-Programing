// write a C++ program to illustrate class inside class
#include<iostream>
using namespace std;

class outside{
    public:
    void  display(){
        cout<<"Outside class"<<endl;
    }
    class inside
    {
        public:
        void display2(){
            cout<<"Inside class";
        }
    };
};
int main(){
    outside o1;
    outside::inside o2;
    o1.display();
    o2.display2();
    return 0;
}