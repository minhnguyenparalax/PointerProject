#include<iostream>

using namespace std;

/*

*/

class Animal
{

public:
        float weight;
        void run()
        {
            cout<<"Animal is runing..."<<endl;
        }
};

class Cat : public Animal
//Lớp Cat là lớp con còn Aninal là lớp cha
{
public:
    string name;

    void eat()
    {
        cout<<this->weight<<"Cat is eating..."<<endl;
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
    Cat cat;

    cat.weight = 30;
    cat.name = "Meo";

    cout<<"Name: "<<cat.name<<endl;
    cout<<"Weight: "<<cat.weight<<endl;



    cat.eat();
}
