#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout <<"Nhap n = ";
    cin >> n;
    cout << "Nhung so chia het cho 5 la: ";
    for(int i = 1; i<=n; i++)
    {
        if(i%5 == 0)
        {
            cout<<i<<" ";
        }
    }
}