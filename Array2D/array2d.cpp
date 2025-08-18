//Nhập mảng 2 chiều
#include <iostream>
using namespace std;
int main()
{
    const int so_hang = 2;
    const int so_cot = 3;

    int a[so_hang][so_cot];

    cout<<"Nhap mang 2 chieu:\n ";
    for(int i=0; i<so_hang; i++){
        for(int j = 0; j<so_cot; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }

    for(int i=0; i<so_hang; i++){

        cout<<" "<<"\n";
        for(int j = 0; j<so_cot; j++)
        {
            
            cout<<a[i][j]<<" ";
        }
    }
}