// //Thuật toán Bubble sort
// Ý tưởng:
// -Sử dụng 2 vòng for lồng nhau sắp xếp
// Có một mảng:

//         j                i
// index:   0 | 1 | 2 | 3 | 4
// item:    6 | 9 | 3 | 2 | 5

// i: (n-1)->1
// j:0->(i-1)

// -Đưa phần tử lớn nhất về cuối dãy
// -Đưa phần tử lớn thứ 2 về cuối vị trí thứ 2
// -......

#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[20];

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

    for(int i = n-1; i>0; i--)
    {
        for(int j = 0; j<i; j++)
        {
            if(a[j]>a[j+1])
            {
                //a[j+1] = a[j];
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;

            }

        }
    }

    for(int i =0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }


}