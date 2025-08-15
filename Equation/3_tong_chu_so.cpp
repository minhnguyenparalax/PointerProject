// Viết chương trình nhập và một số nguyên dương n 
// Tính tổng các chữ số tạo nên số đó
// Ví dụ:

// n = 2023
// Kết quả là 7

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int tong = 0;
    cout<<"Nhap n: ";
    cin>>n;

    do
    {

        tong += n%10;
        n = n/10;
    }while(n>0);

    cout<<tong;
}