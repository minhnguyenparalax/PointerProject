// Tạo mảng sô nguyên dương có n phần tử (tối đa 10 phần tử)
// Nhập vào số nguyên dương x và số nguyên y
// Thêm y vào vị trí x của mang

#include<iostream>
using namespace std;

int main()
{
    int x, y,n;
    int numbers[20];

    cout<<"Nhap so luong phan tu n: ";
    cin>>n;

    cout<<"Nhap mang:\n";
    for(int i=0; i<n; i++)
    {
        cin>>numbers[i];
    }

    cout<<"Nhap vi tri x: ";
    cin>>x;
    cout<<"\nNhap so y can chen: ";
    cin>>y;

    for(int i=n; i>=x; i--)
    {
        numbers[i]= numbers[i-1];
    }

    numbers[x]=y;

    cout<<"Mang moi sau khi chen y\n";
    for(int i = 0; i<=n; i++)
    {
        cout<<numbers[i]<<" ";
    }
}