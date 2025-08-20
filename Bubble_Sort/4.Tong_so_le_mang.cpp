// Nhập vào 1 ma trận có hàng n, cột m
// In ra mản hình tổng các số lẻ
// Ví dụ:
// n = 2
// n = 3
// Nhap ma tran:
// 1 2 3
// 4 5 6
// Tong cac so le la: 9

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    int a[n][m];

    

    cout<<"Nhap mang: "<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"Ma tran: "<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<"\n";
        for(int j = 0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cout<<"\n";
        for(int j = 0; j<m; j++)
        {
            if((a[i][j]%2) != 0)
            {
                sum = sum + a[i][j];
            }
        }
    }

    cout<<"Tong ca so le la: "<<sum;

}

// Kết quả:
// PS F:\C++\Bubble_Sort> .\a.exe
// n = 2
// m = 3
// Nhap mang: 
// a[0][0] = 1
// a[0][1] = 2
// a[0][2] = 3
// a[1][0] = 4
// a[1][1] = 5
// a[1][2] = 6
// Ma tran: 

// 1 2 3
// 4 5 6

// Tong ca so le la: 9