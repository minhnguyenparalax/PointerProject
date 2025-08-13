// Nhập một số nguyên dương n, in ra màn hình giá trị của
// S = 1^2 + 2^2 + 3^2 + .... + n^2
// Ví dụ:
// n = 4
// S = 30


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int S = 0;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S = 1^2 ";
    for(int i = 2; i <=n; i++)
    {
        cout << "+" << i << "^2";
        S += pow(i,2);
    }
    cout<< "\nTong  S la:" << S + 1;
    
}

