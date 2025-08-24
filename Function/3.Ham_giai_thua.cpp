// //Nhập số nguyên dương n 
// //Tính và in ra màn hình n!
// Ví dụ:
// n = 3
// 3! = 6

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void input_interger(string request, int &n)
{
    cout<<request;
    cin>>n;
}
long long result_factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n*result_factorial(n-1);
}

int main()
{
    int n;
    input_interger("nhap n = ", n);
    cout<<"Giai thua n! la: "<<result_factorial(n);
}

// Kết quả:
// nhap n = 5
// Giai thua n! la: 120