
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