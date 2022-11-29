#include<iostream>
using namespace std;
    class A{
        public:
        void fun1(){
            cout<<"Hello!!!"<<endl;
        }
    };
    class B: virtual public A{
        public:
        void fun2(){
            cout<<"How"<<endl;
        }
    };
    class C:  public virtual A{
        public:
        void fun3(){
            cout<<"are"<<endl;
        }
    };
    class D: public B , public C{
        public:
        void fun4(){
            cout<<"you\n"<<endl;
        }
    };
int main(){
    D d;
    d.fun1();
    d.fun2();
    d.fun3();
    d.fun4();
    return 0;
}