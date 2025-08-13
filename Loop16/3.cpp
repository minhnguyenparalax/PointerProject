// Nhập một số nguyên dương n, in ra màn hình giá trị của
// n! = 1.2.3....n
// Ví dụ:
// n = 3
// n! = 6


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int gt = 1;
    cout << "Nhap n: ";
    cin >> n;
    cout << " n! = ";
    for(int i = 1; i <=n; i++)
    {
        if (i>1)
        {
            cout<< ".";
        }
        cout<<i;
        gt = gt*i;
    }
    cout<< "\nGiai thua cua n la:" << gt;
    
}

