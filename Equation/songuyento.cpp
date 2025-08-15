// /Viết chương trình nhập vào một số n từ bàn phím.
// Kiểm Tra xem n có phải nguyên tố không.

// Gợi ý:
// -Số ngto chỉ chia het cho 1 và chính nó.

// Ví dụ:
// n = 3
// n la so nguyen to 

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    bool kt = true;
    
    cout<<"Nhap so nguyen to n: ";
    cin>>n;

    for(int i = 2; i<n; i++)
    {
        if(n%i == 0 ){
            kt = false; //không phải số nguyên tố
        break;
        }
        
    }
    if(kt == true)
    {
        cout<<"n la so nguyen to";
    }
    else
    cout<<"n khong la so nguyen to";

}