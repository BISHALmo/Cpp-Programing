#include<iostream>
using namespace std;

class shapes
{
    public:
    int l,b,h,r;
    virtual void get_Area()=0;
    };
    class circle:public shapes{
        public:
        void get_Area(){
        cout<<"Enter radious:";
        cin>>r;
        cout<<"The area of the circle is:"<<3.14*r*r<<endl;
    }
    };
    class rectangle:public shapes{
        public:
        void get_Area(){
        cout<<"Enter length and bredth:";
        cin>>l>>b;
        cout<<"The area of the rectangle is:"<<l*b<<endl;
    }
    };
    class tringle:public shapes{
        public:
        void get_Area(){
        cout<<"Enter height and base:";
        cin>>b>>h;
        cout<<"The area of the tringle is:"<<0.5*b*h<<endl;
    }
    };

    main(){
        shapes *ptr;
        circle c1;
        rectangle r1;
        tringle t1;
        ptr = &c1;
        ptr->get_Area();
        ptr = &r1;
        ptr->get_Area();
        ptr = &t1;
        ptr->get_Area();
    }
       
