#include <iostream>
using namespace std;

class Calculator {
public:
    int x;
    Calculator(){}

    Calculator(int x)
    {
        this -> x = x;
    }
    int add(int a, int b) {
        cout << "Integer" << endl;   // In loại dữ liệu
        return a + b;
    }

    float add(float a, float b) {
        cout << "Float" << endl;     // In loại dữ liệu
        return a + b;
    }
};

class Point
{
public:
    int x;
    int y;

    Point(){}

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    friend Point operator+(Point p1, Point p2)
    {
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;

        return p3;
    }
};


class Animal
{
public:
    void move()
    {
        cout<<"Animal Move"<<endl;
    }
};

class Dog : public Animal
{
public:
    void move()
    {
        cout<<"Dog move"<<endl;
    }

    void parent_move()
    {
        Animal::move();
    }
};

int main() {
    Calculator cal;

    int a = 1, b = 2;
    float c = 1.4, d = 1.5;

    int result = cal.add(a,b);
    cout << "a + b = " << result << endl;

    float result2 = cal.add(c,d);
    cout << "c + d = " << result2 << endl;
    //////////////////////////////////
    Point p1(1,2), p2(3,4);
    Point p3 = p1 + p2;

    cout<<"P3 = "<<p3.x<<","<<p3.y<<endl;
    /////////////////////////////////

    Animal animal;
    animal.move();

    Dog dog;
    dog.move();
    dog.parent_move(); //Truy xuất đến move() của Animal
    return 0;
}
