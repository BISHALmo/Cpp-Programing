// write a C++ program to print details of  students using class
#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int rollno;
    string branch;
    char section;
    public:
    void getdetails(){
        cout<<"Enter name, roll number, branch, section: ";
        cin>>name>>rollno>>branch>>section;
    }
    void displaydetails(){
        cout<<"name = "<<name<<endl;
        cout<<"rollno = "<<rollno<<endl;
        cout<<"branch = "<<branch<<endl;
        cout<<"section = "<<section<<endl;
    }
};

main(){
    student s1,s2,s3,s4;
    s1.getdetails();
    s1.displaydetails();
    s2.getdetails();
    s2.displaydetails();
    s3.getdetails();
    s3.displaydetails();
    s4.getdetails();
    s4.displaydetails();
    return 0;
}
