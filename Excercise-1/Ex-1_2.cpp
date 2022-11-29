//Aim:- Write
#include<iostream>
using namespace std;

class Distance
{
    private:
    int feet,inches;
    public:
    Distance(){
        
    }
    Distance(int f1, int in1){
        feet = f1;
        inches = in1;
    }

    void get_distance(){
        cout<<"Feet= "<<feet<<endl;
        cout<<"Inches= "<<inches<<endl;
    }
    ~Distance(){
        cout<<"Object destroyed"<<endl;
    }

    void add(Distance d1,Distance d2){
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if(inches>=12){
            feet = feet+1;
            inches = inches-12;
        }
    }
};

int main(){
    Distance d1(2,3);
    Distance d2(4,5);
    Distance d3;
    d3.add(d1,d2);
    d3.get_distance();
    return 0;
}