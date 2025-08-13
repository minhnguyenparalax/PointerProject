// Nhập một số nguyên dương n, in ra màn hình giá trị của
// S = 1 + 2 + 3 + .... + n 
// Ví dụ:
// n = 4
// S = 10


#include <iostream>
using namespace std;

int main()
{
    int n;
    int S = 0;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S = 1";
    for(int i = 2; i <=n; i++)
    {
        cout << "+" << i;
        S += i;
    }
    cout<< "\nTong cua S:" << S+1;
    
}

