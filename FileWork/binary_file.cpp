#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;

    ofs.open("test.bin", ios::binary);

    if(!ofs.is_open())
    {
        cout<< "File khong duoc mo";
    }

    int n = 122;

    ofs.write((char *)&n, sizeof(int));

    ofs.close();

    ifstream ifs;

    ifs.open("test.bin", ios::binary);
    int read_n;

    ifs.read((char*)&read_n, sizeof(int));
    cout<<read_n;
    return 0; 
}