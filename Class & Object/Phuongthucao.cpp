#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void move() //Tao ham ao
    {
        cout<<"Animal move";
    }
};

class Dog : public Animal 
{
public:

    void move()
    {
        cout<<"Dog move";
    }
};

int main()
{
    Animal *animal = new Dog();

    animal->move();//Vì tạo hàm ảo nên sẽ trỏ đến đối tượng thật
}