//Struct là kiểu dữ liệu do người dùng tự định nghĩa
#include<iostream>
#include<string>
using namespace std;

//Struct

struct Student
{
    string name; 
    int age;
};

int main()
{
    Student student_1;
    cout<<"Nhap ten: ";
    getline(cin, student_1.name);

    cout<<"Nhap tuoi: ";
    cin>> student_1.age;

    cout<<"Ten: "<<student_1.name << endl;
    cout<<"Tuoi: "<<student_1.age<<endl;
}