#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;
    fs.open("test.txt");

    if(fs.is_open())
    {
        cout<<"mo file thanh công";
    }

    else
    {
        cout<<"mo file khong thanh cong";
    }
}