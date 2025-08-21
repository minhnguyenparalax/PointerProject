//27
//Bài 1
//Viết chương trình nhập 1 chuỗi gồm các ký tự a->z
//Có thể chứa khoảng trắng. Loại bỏ khoảng trắng
// Ví dụ:
// Nhap chuoi:    Minh Nguyen
// Ket qua: Minh Nguyen

#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str;

    cout<<"Nhap chuoi: ";
    getline(cin, str);
    //Xóa khoảng trắng ở đầu chuỗi
    while(str[0] == ' ')
    {
        str.erase(0, 1); //Xóa ở vị trí 0, 1 phần tử
    }

    //Xóa khoảng trắng ở cuối chuỗi
    while(str[str.length()-1] == ' ')
    {
        str.erase(str.length()-1, 1);
    }

    cout<<"Ket qua: "<<str;
}