// Nhập 2 số nguyên. Tạo mảng chứa n hàng, m cột
// In ra các phần tử lớn nhất các hàng
// Ví dụ:
// n = 2
// m = 3
// Nhap mang: 
// 1 2 3
// 4 5 6
// Cac phan tu lon nhat la: 3 6

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

    int max = a[0][0];
    for(int i = 0; i<n; i++)
    {
        cout<<"\n";
        for(int j = 0; j<m; j++)
        {
            
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
            
        }
        cout<<"Phan tu lon nhat cua hang: "<<max<<"\n";
    }


}

// Kết quả:
// PS F:\C++\Array2D> .\a.exe
// Nhap so hang n = 2
// Nhap so cot m = 3
// Nhap mang:
// a[0][0] = 100
// a[0][1] = 3
// a[0][2] = 5
// a[1][0] = 1
// a[1][1] = 5
// a[1][2] = 500
// In ra mang vua nhap:

// 100 3 5
// 1 5 500

// Phan tu lon nhat cua hang: 100

// Phan tu lon nhat cua hang: 500