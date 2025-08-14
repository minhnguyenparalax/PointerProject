// Viết ctr giải phương trình bậc nhất một ẩn ax + b = 0,
// Trong đó a và b nhập từ bàn phím

// Gợi ý：
// -Nếu a = 0 và b = 0 thì phương trình có VSN
// -Nếu a = 0 và b != 0 thì phương trình vô nghiệm
// -Nếu a != 0 thì phương trình có nghiệm duy nhất x = -b/a


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b;
    cout<< "a = ";
    cin>>a;
    cout<< "b = ";
    cin>>b;

    cout<<"Giai phuong trinh mot an ax+b=0"<<"\n";
    cout<<"Nghiem cua phuong trinh la: ";

    if(a==0 && b==0)
    {
        cout<<"VSN";
    }
    else if(a==0 && b!=0)
    {
        cout<<"No";
    }
    else if(a!=0)
    {
        cout<<-b/a;
    }


}

// Kết quả:
// a = 0
// b = 2
// Giai phuong trinh mot an ax+b=0
// Nghiem cua phuong trinh la: No