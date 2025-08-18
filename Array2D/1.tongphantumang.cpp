// //Bài 1
// //Nhập vào 2 số ngduong n va m. Tạo mảng có n hàng, m cột
// //Tính và in ra tổng các phần tử trong mảng

// //Ví dụ:
// n = 2
// m = 3
// Nhap mang:
// 1 2 3
// 4 5 6
// Tong cac phan tu trong mang la: 21
#include <iostream>
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

    int tong = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            
            tong = tong + a[i][j];
        }
    }

    cout<<"Tong cac phan tu trong mang la: "<<tong;

}

// Kết quả:
// PS F:\C++\Array2D> .\a.exe
// Nhap so hang n = 3
// Nhap so cot m = 4
// Nhap mang:
// a[0][0] = 1 
// a[0][1] = 2
// a[0][2] = 5
// a[0][3] = 4
// a[1][0] = 4
// a[1][1] = 3
// a[1][2] = 1
// a[1][3] = 2
// a[2][0] = 3
// a[2][1] = 1
// a[2][2] = 2
// a[2][3] = 3
// In ra mang vua nhap:

// 1 2 5 4
// 4 3 1 2
// 3 1 2 3
// Tong cac phan tu trong mang la: 31