// Bai 4
// Cho một mảng 2 chiều
// Tính tổng phần tử biên của mảng

// Ví dụ:
// n = 3
// m = 3
// Nhap mang:
// 1 2 3
// 4 5 6
// 7 8 9
// Tong cac gia tri bien la: 40

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Nhap so hang n = ";
    cin>>n;
    cout<<"Nhap so cot m = ";
    cin>>m;
    int a[n][m];

    cout<<"Nhap mang:\n";
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"In ra mang vua nhap:\n";

    for(int i = 0; i<n; i++)
    {
        cout<<"\n";
        for(int j = 0; j<m; j++)
        {
            
            cout<<a[i][j]<<" ";
        }
    }
    cout<<"\n";

    int sum = 0;

    // 1 2 3
    // 4 5 6
    // 7 8 9


    for(int i=0; i<n; i++)
    {
        sum = sum + a[i][0]; //cột đầu
        sum = sum + a[i][m-1]; //cột cuối
    }
    for(int j = 1; j<m-1; j++)
    {
        sum = sum + a[0][j]; // hàng đầu
        sum = sum + a[n-1][j]; //hàng cuối
    }

    cout<<"tong cac phan tu bien la: "<<sum;

}

// Kết quả:
// PS F:\C++\Array2D> .\a.exe
// Nhap so hang n = 3
// Nhap so cot m = 4
// Nhap mang:
// a[0][0] = 1
// a[0][1] = 2
// a[0][2] = 3
// a[0][3] = 5
// a[1][0] = 2
// a[1][1] = 3
// a[1][2] = 4
// a[1][3] = 5
// a[2][0] = 6
// a[2][1] = 1
// a[2][2] = 2
// a[2][3] = 3
// In ra mang vua nhap:

// 1 2 3 5
// 2 3 4 5
// 6 1 2 3
// tong cac phan tu bien la: 30