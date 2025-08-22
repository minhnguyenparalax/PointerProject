//Nhập số n, kiểm tra xem n có ngto không

#include<iostream>
#include<cmath>
using namespace std;

void kiem_tra_so_ngto(int n)
{
    bool ktr = true; //la so nguyen to
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            ktr = false; //khong phai so nguyen to
            break;
        }
    }
    if(ktr == true)
    {
        cout<<n<<" la so nguyen to"<<endl;
    }
    else
    cout<<n<<" khong phai so nguyen to"<<endl;
}

int main()
{
    int so;
    cout<<"Nhap so: ";
    cin>>so;
    kiem_tra_so_ngto(so);
}