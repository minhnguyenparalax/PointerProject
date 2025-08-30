// Tạo một mảng số nguyên dương có n phần tử (10 phan tu)
// Nhập vào 1 số nguyên dương x 
// Thêm x vào cuối mảng vừa tạo

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numbers[20];
    int n, x; //n luu phan so luong phan tu mang
    cout<<"Nhap n: ";
    cin>>n;

    cout<<"Nhap mang: ";
    for(int i = 0; i<n; i++)
    {
        cin>>numbers[i];
    }

    cout<<"x=";
    cin>>x;
    numbers[n] = x;
    n++;

    cout<<"Mang moi sau khi them x: ";
    for(int i = 0; i<n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    



}