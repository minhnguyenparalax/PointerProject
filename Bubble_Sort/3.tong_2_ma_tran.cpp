// //Bài 2
// //Nhập và in ra mảng a[][] và b[][] với hàng n, cột m
// //Tính tổng phẩn tử của mảng này với mảng kia
// //In Tổng
// //Ví dụ:
// Mảng a[n][m]:
// 1 2 3
// 1 2 3
// Mảng b[n][m]:
// 2 3 4
// 2 3 4
// Tổng:
// 3 5 7
// 3 5 7

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
    int b[n][m];

    cout<<"Nhap mang a[n][m]:\n";
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


    cout<<"Nhap mang b[n][m]:\n";
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<"b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }

    cout<<"In ra mang vua nhap:\n";

    for(int i = 0; i<n; i++)
    {
        cout<<"\n";
        for(int j = 0; j<m; j++)
        {
            
            cout<<b[i][j]<<" ";
        }
    }
    cout<<"\n";
    
    //cout<<"Tinh tong mang a[n][m] va b[n][m]: "<<endl;
    int c[n][m]; 
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"In ra tong mang a[][] va b[][]: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<"\n";
        for(int j = 0; j<m; j++)
        {
            cout<<c[i][j]<<" ";
        }
    }

}

// Kết quả:
// Nhap so hang n = 2
// Nhap so cot m = 3
// Nhap mang a[n][m]:
// a[0][0] = 1
// a[0][1] = 2
// a[0][2] = 3
// a[1][0] = 1
// a[1][1] = 2
// a[1][2] = 3
// In ra mang vua nhap:

// 1 2 3
// 1 2 3
// Nhap mang b[n][m]:
// b[0][0] = 2
// b[0][1] = 3
// b[0][2] = 4
// b[1][0] = 2
// b[1][1] = 3
// b[1][2] = 4
// In ra mang vua nhap:

// 2 3 4
// 2 3 4
// Tinh tong mang a[n][m] va b[n][m]:
// In ra tong mang a[][] va b[][]:

// 3 5 7
// 3 5 7