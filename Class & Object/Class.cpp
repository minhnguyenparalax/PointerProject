#include<iostream>

using namespace std;

// class, object 
// 1 con nguoi, ten: Nguyen Van A, tuoi: 28, dia chi: Ha Noi

class Person
{
    
public:
    //Properties
        string name;
        int age;

    //Constructor phai nam o pham vi Public
    Person()
    {
        cout<<"Ham kho tao"<<endl;
    }

    Person(string _name, int _age, string _address)
    {
        name = _name;
        age = _age;
        address = _address;
    }
        
    
    // Methods
    void work()
    {
        cout<< name << " is working...."<<address <<endl;

        
    }

private: //Không thể truy cập ngoài phạm vi mà chỉ trong cùng phạm vi
    string address = "Ha Noi";
};


int main()
{
    Person person1;

    Person person2("Minh Nguye", 28, "Hai Phong");
    person1.name = "Nguyen Van A";
    person1.age = 28;
    

    cout<<"name: "<<person1.name<<endl;

    cout<<"Age: "<<person1.age<<endl;

    cout<<"Name 2: "<<person2.name<<endl;
    cout<<"Age 2: "<<person2.age<<endl;
    person1.work();

}
