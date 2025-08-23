//Nhập số n, kiểm tra xem n có ngto không

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void input_interger(string label, int &n);
bool is_prime(int n);

int main()
{
    int n;
    input_interger("n = ", n);

    if(is_prime(n) == true)
    {
        cout<< n <<"la so nguyen to";
    }
    else
    cout<< n <<"khong phai so nguyen to";
    return 0;
}

void input_interger(string label, int &n)
{
    cout<<label;
    cin>>n;
}

bool is_prime(int n)
{
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }

    return true;
}