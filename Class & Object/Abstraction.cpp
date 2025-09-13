#include<iostream>

using namespace std;


class Animal //Lớp trừu tượng
{
public:
    virtual void make_sound() = 0;//Thuần ảo
    virtual void move() = 0;//Thuần ảo
};

class Cat : public Animal
{
public:
    void make_sound()
    {
        cout<<"Cat make sound" <<endl;
    }
    void move()
    {
        cout<<"Cat move"<<endl;
    }
};

class Dog : public Animal
{
public:
    void make_sound()
    {
        //Dog kế thừa phương thức ảo của Animal và tự sửa lại hàm nhưng có tính trừu tượng
        cout<<"Dog make sound" <<endl;
    }
    void move()
    {
        cout<<"Dog move"<<endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.make_sound();
    dog.move();

    cat.make_sound();
    cat.move();
}