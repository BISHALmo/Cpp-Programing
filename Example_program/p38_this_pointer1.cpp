#include<iostream>
using namespace std;

class this_pointer{
    public:
    void get_adress(){
        cout<<this<<endl;
    }
};
int main(){
    this_pointer o1,o2,o3;
    o1.get_adress();  
    o2.get_adress();  
    o3.get_adress();  
    return 0;
}