//Bai 2
//Tạo mảng 1 chiều có n phần tử 
//In ra phần tử max
// Ví dụ:
// n = 3
// Nhap mang: 1 3 2
// Gia tri lon nhat la: 3

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[20];

    cout<<"Nhap so luong phan tu:";
    cin>>n;

    cout<<"Nhap mang:\n";
    for(int i = 0; i<n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }

    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    int max = a[0];

    
    for(int i = 1; i<n; i++)
    {
        if(a[i]>= max)
        {
            max = a[i];
        }
        
    }

    cout<<"So lon nhat cua mang la: "<<max;
}

// Kết quả:
// PS F:\C++\Array2D> .\a.exe
// Nhap so luong phan tu:3 200 145 4 98 587 87 20 40 6 
// Nhap mang:
// a[0] = a[1] = a[2] = 200 145 4