#include<iostream>

using namespace std;
class Cat
{
    private:
    string name;
    int age;

    public:
    Cat(){}

    // Cat(string _name, int _age)
    // {   
    //     name = _name;
    //     age = _age;
    // }

    Cat(string name, int age)
    {   
        this->name = name;
        this->age = age;
    }

    string get_name()
    {
        return this->name;
    }

    int get_age()
    {
        return this->age;
    }



};

int main()
{
    //Cat cat("Meo", 2);


    Cat *cat = new Cat("Meo", 2);


    cout<<"Name: "<< cat->get_name()<<endl;
    cout<<"Age: "<<(*cat).get_age()<<endl; //(*cat) chính là đối tượng

}