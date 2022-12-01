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
int main(){
    int n;
    cout<<"Enter n value";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        s[i].get_data();
    }
    return 0;
}