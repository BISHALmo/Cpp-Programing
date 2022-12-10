// write a C++ program to access the static variable
#include<iostream>
using namespace std;

class Static_variable
{
    private:
    static int x;
    static int y;
    public:
    void display(int x){
        cout<<" local x value:"<<x<<endl;
        cout<<" static x value:"<<Static_variable::x<<endl;
        cout<<" static y value:"<<Static_variable::y<<endl;

    }
};

int Static_variable :: x=4;
int Static_variable :: y=7;
int main(){
    Static_variable s1;
    s1.display(5);
    return 0;
}