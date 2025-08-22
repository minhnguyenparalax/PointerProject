// 27
// Bài 2
// Xóa khoảng trắng ở giữa
// Ví dụ: Minh          Nguyen
// Kết quả: Minh Nguyen

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);

    int i = 0; 
    while(i<str.length())
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            str.erase(i, 1);
        }
        else
        i++;
    }

    cout<<"Ket qua: "<<str;


}


// Kết quả:
// PS F:\C++\String> .\a.exe
// Nhap chuoi: Minh                                Nguyen
// Minh Nguyen