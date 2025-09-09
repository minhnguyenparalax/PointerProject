#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;
    fs.open("F:/C++/FileWork/Hello/test.txt");

    if(!fs.is_open())
    {
        return 1;
    }

    //Ghi file
    
    //fs<< "Hello Word"; //Ghi trực tiếp vào file txt

    //Đọc file
    string str;
    getline(fs,str);
    cout<<str;
}