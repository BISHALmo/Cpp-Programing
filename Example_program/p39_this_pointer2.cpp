#include<iostream>
using namespace std;

class this_pointer{
    private:
    int a,b;
    public:
    void print(int a,int b){
        cout<<"enter value for datatype member a,b";
        cin>>this->a>>this->b;
        cout<<"local variable a: "<<a<<endl;
        cout<<"local variable b: "<<b<<endl;
        cout<<"Data member a: "<<this->a<<endl;
        cout<<"Data member b: "<<this->b<<endl;
    }
};
int main(){
    this_pointer o1,o2,o3;
    o1.print(2,3);
    o2.print(10,20);
    o3.print(30,40);
    return 0;
}