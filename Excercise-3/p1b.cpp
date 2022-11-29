#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(){}
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<"+i"<<imag;
    }
    friend Complex operator +(Complex &,Complex &);
};
    Complex operator+(Complex &c1, Complex &c2){
        Complex temp;
        temp.real = c1.real+c2.real;
        temp.real = c1.imag+c2.imag;
        return temp;
    }

int main(){
    Complex c1(3,4);
    Complex c2(4,6);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}