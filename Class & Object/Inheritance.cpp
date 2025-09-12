#include<iostream>
#include<string>
using namespace std;

/*

*/

class Animal
{
protected:

    float height = 300;
public:
        float weight;
        void run()
        {
            cout<<"Animal is runing..."<<endl;
        }

        float get_height()
        {
            return this->height;
        }


};

class Pet
{
};
class Cat : public Animal, public Pet
//Lớp Cat là lớp con còn Aninal là lớp cha
{
public:
    string name;

    void eat()
    {
        cout<<this->weight<<"Cat is eating..."<<endl;
    }

    void show_height()
        {
            cout<<"Height: "<<this->height<<endl;
        }

};

class Dog

{
public:
    string name;
    float weight;
};


int main()
{
    //
    Cat cat;

    cat.weight = 30;
    cat.name = "Meo";

    cout<<"Name: "<<cat.name<<endl;
    cout<<"Weight: "<<cat.weight<<endl;
    cat.eat();
    cat.show_height();
   

    //
    Animal animal;
    cout<<animal.get_height();
    
}
