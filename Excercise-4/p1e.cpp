#include <iostream>
using namespace std;

class A
{
public:
    int l;
    void len()
    {
        cout << "Length: ";
        cin >> l;
    }
};
class B : public A
{
public:
    int b, c;
    void l_into_b()
    {
        len();
        cout << "Breadth: ";
        cin >> b;
        c = b * l;
    }
};
class C
{
public:
    int h;
    void height()
    {
        cout << "Height: ";
        cin >> h;
    }
};
class D : public B, public C
{
    public:
    int res;
    void volume()
    {
        l_into_b();
        height();
        res = h * c;
        cout << "Volume is: " << res << endl;
    }
    void area()
    {
        l_into_b();
        cout << "Area is: " << c << endl;
    }
};
int main()
{
    D d1;
    cout << "Enter dismenssion of object to get Area: \n";
    d1.area();
    cout << "Enter value of object to get volume: \n";
    d1.volume();
    return 0;
}