// Aim:- Write a main function to create objects of distance class input two inputs two distances and output the sum
#include<iostream>
using namespace std;

class Distance
{
    private:
    int feet,inches;
    public:
    void input(){
        cout<<"Enter feet and inches: ";
        cin>>feet>>inches;
    }

    void output(){
        cout<<"Feet= "<<feet<<endl;
        cout<<"Inches= "<<inches<<endl;
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
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3.add(d1,d2);
    d3.output();
    return 0;
}