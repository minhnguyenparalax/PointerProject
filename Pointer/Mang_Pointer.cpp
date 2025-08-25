#include<iostream>
using namespace std;
int main()
{
    int a[3];

    int *b = new int[3];

    for(int i = 0; i<3; i++)
    {
        b[i] = 1;
    }

    for(int i = 0; i<3; i++)
    {
        cout<< b[i] <<" ";
    }
    cout<<endl;

    cout<<"Cac phan tu truoc khi them: "<<endl;

    for(int i = 0; i<3; i++)
    {
        cout<< b[i] << " ";
    }

    //Tao mang dong moi co so luong phan tu 4
    int *new_arr = new int[4];

    //Sao chep toan bo gia tri cu sang amng moi
    for(int i = 0; i< 3; i++)
    {
        new_arr[i] = b[i];
    }

    new_arr[3] = 2;

    //Xoa cac vung nho cu
    delete[] b;

    //Gan vung nho moi cho con tro b
    b = new_arr;

    cout<< "\nCac phan tu sau khi them: "<<endl;
    for(int i = 0; i<4; i++)
    {
        cout<< b[i] <<" ";
    }
    return 0;
}