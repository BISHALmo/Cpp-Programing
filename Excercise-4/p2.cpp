#include<iostream>
using namespace std;

    class parent{
        public:
        parent()
        {
            cout<<"Parent class constructor\n";
        }
        ~parent(){
            cout<<"Parent class Destructor\n";            
        }
    };
    class child: public parent{
        public:
        child(){
            cout<<"Child class Consructor\n";
        }
        ~child(){
            cout<<"Child class Destructer\n";
        }
    };
int main(){
    child C;
    return 0;
}