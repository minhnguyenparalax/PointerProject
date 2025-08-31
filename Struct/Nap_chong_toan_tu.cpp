//Nap chong toan tu - operator overloading

#include<iostream>
#include<string>

using namespace std;

struct Circle
{
    float r;

    Circle(float _r)
    {
        r = _r;
    }

    friend bool operator>(Circle c1, Circle c2)
    {
        return c1.r > c2.r;
    }
};

struct Point
{
    int x;
    int y;

    friend istream& operator>>(istream &is, Point &p)
    {
        cout<<" x = ";
        is>>p.x;
        cout<<" y = ";
        is>>p.y;

        return is;
    }

    friend ostream& operator<<(ostream &os, Point p)
    {
        os << p.x << " " << p.y;
        return os;
    }

    friend Point operator+(Point p1, Point p2)
    {
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;

        return p3;
    }
};

int main()
{
    Point p1, p2;
    cout<<" Nhap p1"<<endl;

    cin>>p1;

    cout<<"Nhap p2: "<<endl;
    cin>>p2;
    
    Point p3 = p1 + p2;
    cout<<p3;

 
    cout<<endl;
    Circle c1(2), c2(3);
    cout<<" So sanh c1 va c2: ";
    cout<<(c1 > c2);
    return 0;
}