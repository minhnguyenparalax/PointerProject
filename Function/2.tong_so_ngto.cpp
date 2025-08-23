// //Chương trình nhập vào số nguyên dương n (n>1)
// Tính và in ra màn hình tổng các số nguyên tố từ 2->n

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void input_interger(string request, int &n);
bool is_prime(int n);
void list_prime(string request, int n);
int sum_primes(int n);
void cout_primes(string request, int n);

int main()
{
    int n;
    input_interger("n = ", n);
    list_prime("Danh sach cac so nguyen to la: ", n);
    cout<<"Tong cac so nguyen to la: "<<sum_primes(n)<<endl;
    cout_primes("So luong so nguyen to tu 2->n: ", n);
    return 0;
}
void input_interger(string request, int &n)
{
    cout<<request;
    cin>>n;
}

bool is_prime(int n)
{
    if(n<2)
        return false;
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void list_prime(string request, int n)
{
    cout<<request;
    for(int i = 2; i<=n; i++)
    {
        if(is_prime(i) == true)
        {
            cout<<i<<" ";
        }
    }
    cout<< endl;
}

int sum_primes( int n)
{
    //cout<<request;
    int sum = 0;
    // for(int i = 2; i<n; i++)
    // {
    //     if(is_prime(i) == true)
    //     {
    //         sum = sum + i;
    //     }
    // }
    if(n == 2)
    {
        return 2;
    }
    if(is_prime(n) == true)
    {
        return n+sum_primes(n-1);
    }
        return sum_primes(n-1);

}

void cout_primes(string request, int n)
{
    cout<<request;
    int count = 0; 
    for(int i = 2; i<=n; i++)
    {
        if(is_prime(i) == true)
        count++;
    }
    cout<<count;
}
// Kết quả:
// PS F:\C++\Function> .\a.exe
// n = 10
// Danh sach cac so nguyen to la: 2 3 5 7
// Tong cac so nguyen to la: 17
// So luong so nguyen to tu 2->n: 4