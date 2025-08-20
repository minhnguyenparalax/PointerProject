// // //24
// // //Bài 2
// // //Nhập mảng n số nguyên và nhập nguyên k
// // Kiểm tra trong mảng có xuất hiện 2 phần tử có tổng bằng k 
// // In ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu)
// Ví dụ:
// n = 4
// Nhap mang: 1 2 3 4
// k = 3
// Ket qua: 0 1

#include<iostream>
using namespace std;
int main()
{
    int n, k;
    int a[20];

    cout<<"Nhap so k = ";
    cin>>k;
    cout<<endl;

    cout<<"Nhap so luong phan tu n = ";
    cin>>n;
    cout<<"\n";

    cout<<"Nhap mang: "<<endl; 
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Mang vua nhap la: "<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if((a[i]+a[j])== k)
            {
                
                cout<<"Index: "<<i<<" "<<j<<endl;
                cout<<"Item: "<<a[i]<<" "<<a[j]<<endl;
                i = n;
                break;
            }
            
        }
        
        
    }

}
