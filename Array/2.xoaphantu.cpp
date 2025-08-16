// Tạo mảng số nguyên dương có n phần tử (tối đa 10)
// Nhập vào 1 số nguyên dương x (0 <= x <= 9)
// Và xóa phần tử ở vị trí x

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numbers[20];
    int n, x;

    cout<<"n = ";
    cin>>n;

    cout<<"Nhap mang: ";
    for(int i = 0; i<n; i++)
    {
        cin>>numbers[i];
    }
    cout<<"x = ";
    cin>>x;

    for(int i = x; i< n; i++)
    {
        numbers[i]=numbers[i+1];
    }

    cout<<"Mang moi sau khi xoa phan tu x: ";
    
    for(int i = 0; i<n-1; i++)
    {
        cout<<numbers[i]<<" ";
    }

}


// PS F:\C++\Array> .\a.exe
// n = 10
// Nhap mang: 1 2 3 4 5 6 7 8 9 10
// x = 3
// Mang moi sau khi xoa phan tu x: 1 2 3 5 6 7 8 9 10