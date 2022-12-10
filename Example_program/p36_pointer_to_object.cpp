#include<iostream>
using namespace std;
class  student{
    private:
    int number;
    string name;
    public:
    void get_data(){
        cout<<"Enter name & roll no";
        cin>>name>>number;
        cout<<"name = "<<name<<endl;
        cout<<"number = "<<number<<endl;
    }
};
main(){
    student *ptr;
    ptr =new student;
    ptr->get_data();
    return 0;
}