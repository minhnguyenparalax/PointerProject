#include <iostream>
using namespace std;
int main()
{
    const so_cot;
    const so_hang;

    int a[so_hang][so_cot];

    cout<<"Nhap mang 2 chieu: ";
    for(int i=0; i<so_hang; i++){
        for(int j = 0; j<so_cot; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }

    for(int i=0; i<so_hang; i++){
        for(int j = 0; j<so_cot; j++)
        {
            
            cout<<a[i][j];
        }
    }
}